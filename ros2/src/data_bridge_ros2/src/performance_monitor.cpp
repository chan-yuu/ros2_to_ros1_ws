#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <std_msgs/msg/string.hpp>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <cstring>
#include <chrono>
#include <memory>
#include <fstream>
#include <thread>
#include <atomic>
#include <queue>
#include <mutex>
#include <sys/resource.h>
#include <sys/sysinfo.h>

struct PerformanceMetrics {
    double avg_latency_ms = 0.0;
    double max_latency_ms = 0.0;
    double min_latency_ms = 999999.0;
    uint64_t total_messages = 0;
    uint64_t total_bytes = 0;
    double message_rate_hz = 0.0;
    double data_rate_mbps = 0.0;
    uint64_t dropped_messages = 0;
    double cpu_usage_percent = 0.0;
    double memory_usage_mb = 0.0;
    uint64_t shm_read_time_us = 0;
    uint64_t shm_write_time_us = 0;
};

struct SharedMemoryHeader {
    uint64_t data_size;
    uint64_t timestamp_ns;
    uint64_t sequence;
    uint32_t height;
    uint32_t width;
    uint32_t point_step;
    uint32_t row_step;
    uint32_t fields_count;
    uint32_t is_dense;
    uint32_t frame_id_len;
    char reserved[20];
};

class PerformanceMonitor : public rclcpp::Node {
public:
    PerformanceMonitor() : Node("performance_monitor"), 
                          running_(true),
                          start_time_(std::chrono::steady_clock::now()) {
        
        // 参数配置
        this->declare_parameter("monitor_pointcloud", true);
        this->declare_parameter("monitor_imu", true);
        this->declare_parameter("report_interval_sec", 5.0);
        this->declare_parameter("log_to_file", true);
        this->declare_parameter("log_file_path", "/tmp/performance_log.csv");
        
        monitor_pointcloud_ = this->get_parameter("monitor_pointcloud").as_bool();
        monitor_imu_ = this->get_parameter("monitor_imu").as_bool();
        report_interval_ = this->get_parameter("report_interval_sec").as_double();
        log_to_file_ = this->get_parameter("log_to_file").as_bool();
        log_file_path_ = this->get_parameter("log_file_path").as_string();
        
        // 初始化共享内存监控
        if (monitor_pointcloud_) {
            init_pointcloud_monitoring();
        }
        
        if (monitor_imu_) {
            init_imu_monitoring();
        }
        
        // 创建性能报告发布者
        performance_pub_ = this->create_publisher<std_msgs::msg::String>(
            "/performance_metrics", 10);
        
        // 启动监控线程
        monitor_thread_ = std::thread(&PerformanceMonitor::monitor_loop, this);
        report_thread_ = std::thread(&PerformanceMonitor::report_loop, this);
        
        // 初始化日志文件
        if (log_to_file_) {
            init_log_file();
        }
        
        RCLCPP_INFO(this->get_logger(), "Performance Monitor started");
        RCLCPP_INFO(this->get_logger(), "Monitoring - PointCloud: %s, IMU: %s", 
                   monitor_pointcloud_ ? "ON" : "OFF",
                   monitor_imu_ ? "ON" : "OFF");
    }
    
    ~PerformanceMonitor() {
        running_ = false;
        if (monitor_thread_.joinable()) {
            monitor_thread_.join();
        }
        if (report_thread_.joinable()) {
            report_thread_.join();
        }
        cleanup();
    }

private:
    void init_pointcloud_monitoring() {
        // 打开点云共享内存
        pc_shm_name_ = "/tmp/pointcloud_shm";
        pc_shm_fd_ = open(pc_shm_name_.c_str(), O_RDONLY);
        if (pc_shm_fd_ != -1) {
            struct stat sb;
            if (fstat(pc_shm_fd_, &sb) == 0) {
                pc_shm_size_ = sb.st_size;
                pc_shm_ptr_ = mmap(nullptr, pc_shm_size_, PROT_READ, MAP_SHARED, pc_shm_fd_, 0);
                if (pc_shm_ptr_ != MAP_FAILED) {
                    pc_sem_ = sem_open("/pointcloud_sem", O_RDONLY);
                    RCLCPP_INFO(this->get_logger(), "PointCloud shared memory monitoring initialized");
                } else {
                    RCLCPP_WARN(this->get_logger(), "Failed to map pointcloud shared memory");
                }
            }
        } else {
            RCLCPP_WARN(this->get_logger(), "PointCloud shared memory not found, will retry...");
        }
    }
    
    void init_imu_monitoring() {
        // 打开IMU共享内存
        imu_shm_name_ = "/tmp/imu_shm";
        imu_shm_fd_ = open(imu_shm_name_.c_str(), O_RDONLY);
        if (imu_shm_fd_ != -1) {
            struct stat sb;
            if (fstat(imu_shm_fd_, &sb) == 0) {
                imu_shm_size_ = sb.st_size;
                imu_shm_ptr_ = mmap(nullptr, imu_shm_size_, PROT_READ, MAP_SHARED, imu_shm_fd_, 0);
                if (imu_shm_ptr_ != MAP_FAILED) {
                    imu_sem_ = sem_open("/imu_sem", O_RDONLY);
                    RCLCPP_INFO(this->get_logger(), "IMU shared memory monitoring initialized");
                } else {
                    RCLCPP_WARN(this->get_logger(), "Failed to map IMU shared memory");
                }
            }
        } else {
            RCLCPP_WARN(this->get_logger(), "IMU shared memory not found, will retry...");
        }
    }
    
    void init_log_file() {
        log_file_.open(log_file_path_, std::ios::out | std::ios::app);
        if (log_file_.is_open()) {
            // 写入CSV头部
            log_file_ << "timestamp,avg_latency_ms,max_latency_ms,min_latency_ms,"
                     << "message_rate_hz,data_rate_mbps,total_messages,total_bytes,"
                     << "dropped_messages,cpu_usage_percent,memory_usage_mb,"
                     << "shm_read_time_us,shm_write_time_us\n";
            log_file_.flush();
            RCLCPP_INFO(this->get_logger(), "Performance log file initialized: %s", log_file_path_.c_str());
        } else {
            RCLCPP_WARN(this->get_logger(), "Failed to open log file: %s", log_file_path_.c_str());
        }
    }
    
    void monitor_loop() {
        while (running_) {
            auto start_monitor = std::chrono::high_resolution_clock::now();
            
            // 监控点云数据
            if (monitor_pointcloud_ && pc_shm_ptr_ && pc_shm_ptr_ != MAP_FAILED) {
                monitor_pointcloud_data();
            }
            
            // 监控IMU数据
            if (monitor_imu_ && imu_shm_ptr_ && imu_shm_ptr_ != MAP_FAILED) {
                monitor_imu_data();
            }
            
            // 监控系统资源
            monitor_system_resources();
            
            auto end_monitor = std::chrono::high_resolution_clock::now();
            auto monitor_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_monitor - start_monitor);
            
            // 控制监控频率 (100Hz)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
    
    void monitor_pointcloud_data() {
        if (pc_sem_ == SEM_FAILED) return;
        
        auto start_read = std::chrono::high_resolution_clock::now();
        
        // 尝试获取信号量（非阻塞）
        if (sem_trywait(pc_sem_) == 0) {
            try {
                SharedMemoryHeader* header = static_cast<SharedMemoryHeader*>(pc_shm_ptr_);
                
                if (header->sequence > last_pc_sequence_) {
                    // 计算延迟
                    auto current_time = std::chrono::steady_clock::now();
                    auto msg_time = std::chrono::nanoseconds(header->timestamp_ns);
                    auto system_start = std::chrono::time_point<std::chrono::steady_clock>(
                        std::chrono::duration_cast<std::chrono::steady_clock::duration>(msg_time));
                    
                    double latency_ms = std::chrono::duration<double, std::milli>(current_time - system_start).count();
                    
                    // 更新统计信息
                    std::lock_guard<std::mutex> lock(metrics_mutex_);
                    update_latency_stats(latency_ms);
                    
                    pc_metrics_.total_messages++;
                    pc_metrics_.total_bytes += header->data_size;
                    
                    // 检测丢包
                    if (last_pc_sequence_ > 0 && header->sequence > last_pc_sequence_ + 1) {
                        pc_metrics_.dropped_messages += (header->sequence - last_pc_sequence_ - 1);
                    }
                    
                    last_pc_sequence_ = header->sequence;
                }
            } catch (const std::exception& e) {
                RCLCPP_WARN(this->get_logger(), "Error monitoring pointcloud: %s", e.what());
            }
            
            sem_post(pc_sem_);
        }
        
        auto end_read = std::chrono::high_resolution_clock::now();
        pc_metrics_.shm_read_time_us = std::chrono::duration_cast<std::chrono::microseconds>(end_read - start_read).count();
    }
    
    void monitor_imu_data() {
        // IMU监控逻辑类似点云
        if (imu_sem_ == SEM_FAILED) return;
        
        auto start_read = std::chrono::high_resolution_clock::now();
        
        if (sem_trywait(imu_sem_) == 0) {
            // IMU数据监控实现
            sem_post(imu_sem_);
        }
        
        auto end_read = std::chrono::high_resolution_clock::now();
        imu_metrics_.shm_read_time_us = std::chrono::duration_cast<std::chrono::microseconds>(end_read - start_read).count();
    }
    
    void monitor_system_resources() {
        // CPU使用率监控
        static long last_total_time = 0;
        static long last_idle_time = 0;
        
        std::ifstream stat_file("/proc/stat");
        if (stat_file.is_open()) {
            std::string line;
            std::getline(stat_file, line);
            
            long user, nice, system, idle, iowait, irq, softirq, steal;
            sscanf(line.c_str(), "cpu %ld %ld %ld %ld %ld %ld %ld %ld",
                   &user, &nice, &system, &idle, &iowait, &irq, &softirq, &steal);
            
            long total_time = user + nice + system + idle + iowait + irq + softirq + steal;
            long idle_time = idle + iowait;
            
            if (last_total_time > 0) {
                long total_diff = total_time - last_total_time;
                long idle_diff = idle_time - last_idle_time;
                
                if (total_diff > 0) {
                    std::lock_guard<std::mutex> lock(metrics_mutex_);
                    pc_metrics_.cpu_usage_percent = 100.0 * (total_diff - idle_diff) / total_diff;
                }
            }
            
            last_total_time = total_time;
            last_idle_time = idle_time;
        }
        
        // 内存使用监控
        struct rusage usage;
        if (getrusage(RUSAGE_SELF, &usage) == 0) {
            std::lock_guard<std::mutex> lock(metrics_mutex_);
            pc_metrics_.memory_usage_mb = usage.ru_maxrss / 1024.0; // KB to MB
        }
    }
    
    void update_latency_stats(double latency_ms) {
        if (latency_ms > pc_metrics_.max_latency_ms) {
            pc_metrics_.max_latency_ms = latency_ms;
        }
        if (latency_ms < pc_metrics_.min_latency_ms) {
            pc_metrics_.min_latency_ms = latency_ms;
        }
        
        // 计算移动平均
        static std::queue<double> latency_window;
        static const size_t window_size = 100;
        
        latency_window.push(latency_ms);
        if (latency_window.size() > window_size) {
            latency_window.pop();
        }
        
        double sum = 0.0;
        std::queue<double> temp = latency_window;
        while (!temp.empty()) {
            sum += temp.front();
            temp.pop();
        }
        pc_metrics_.avg_latency_ms = sum / latency_window.size();
    }
    
    void report_loop() {
        while (running_) {
            std::this_thread::sleep_for(std::chrono::duration<double>(report_interval_));
            
            auto current_time = std::chrono::steady_clock::now();
            auto elapsed = std::chrono::duration<double>(current_time - start_time_).count();
            
            std::lock_guard<std::mutex> lock(metrics_mutex_);
            
            // 计算速率
            if (elapsed > 0) {
                pc_metrics_.message_rate_hz = pc_metrics_.total_messages / elapsed;
                pc_metrics_.data_rate_mbps = (pc_metrics_.total_bytes / elapsed) / (1024.0 * 1024.0);
            }
            
            // 发布性能报告
            publish_performance_report();
            
            // 记录到文件
            if (log_to_file_ && log_file_.is_open()) {
                log_performance_data();
            }
            
            // 打印到控制台
            print_performance_summary();
        }
    }
    
    void publish_performance_report() {
        std_msgs::msg::String msg;
        
        std::ostringstream oss;
        oss << "Performance Metrics:\n";
        oss << "  Latency - Avg: " << pc_metrics_.avg_latency_ms << "ms, "
            << "Max: " << pc_metrics_.max_latency_ms << "ms, "
            << "Min: " << pc_metrics_.min_latency_ms << "ms\n";
        oss << "  Throughput - Messages: " << pc_metrics_.message_rate_hz << "Hz, "
            << "Data: " << pc_metrics_.data_rate_mbps << "MB/s\n";
        oss << "  Total - Messages: " << pc_metrics_.total_messages << ", "
            << "Bytes: " << pc_metrics_.total_bytes << ", "
            << "Dropped: " << pc_metrics_.dropped_messages << "\n";
        oss << "  System - CPU: " << pc_metrics_.cpu_usage_percent << "%, "
            << "Memory: " << pc_metrics_.memory_usage_mb << "MB\n";
        oss << "  SharedMem - Read: " << pc_metrics_.shm_read_time_us << "μs";
        
        msg.data = oss.str();
        performance_pub_->publish(msg);
    }
    
    void log_performance_data() {
        auto now = std::chrono::system_clock::now();
        auto time_t = std::chrono::system_clock::to_time_t(now);
        
        log_file_ << time_t << ","
                 << pc_metrics_.avg_latency_ms << ","
                 << pc_metrics_.max_latency_ms << ","
                 << pc_metrics_.min_latency_ms << ","
                 << pc_metrics_.message_rate_hz << ","
                 << pc_metrics_.data_rate_mbps << ","
                 << pc_metrics_.total_messages << ","
                 << pc_metrics_.total_bytes << ","
                 << pc_metrics_.dropped_messages << ","
                 << pc_metrics_.cpu_usage_percent << ","
                 << pc_metrics_.memory_usage_mb << ","
                 << pc_metrics_.shm_read_time_us << ","
                 << pc_metrics_.shm_write_time_us << "\n";
        log_file_.flush();
    }
    
    void print_performance_summary() {
        RCLCPP_INFO(this->get_logger(), 
                   "=== Performance Summary ===");
        RCLCPP_INFO(this->get_logger(), 
                   "Latency: Avg=%.2fms, Max=%.2fms, Min=%.2fms",
                   pc_metrics_.avg_latency_ms, pc_metrics_.max_latency_ms, pc_metrics_.min_latency_ms);
        RCLCPP_INFO(this->get_logger(), 
                   "Throughput: %.2fHz, %.2fMB/s",
                   pc_metrics_.message_rate_hz, pc_metrics_.data_rate_mbps);
        RCLCPP_INFO(this->get_logger(), 
                   "Messages: %lu total, %lu dropped",
                   pc_metrics_.total_messages, pc_metrics_.dropped_messages);
        RCLCPP_INFO(this->get_logger(), 
                   "System: CPU=%.1f%%, Memory=%.1fMB",
                   pc_metrics_.cpu_usage_percent, pc_metrics_.memory_usage_mb);
        RCLCPP_INFO(this->get_logger(), 
                   "SharedMem Read Time: %luμs",
                   pc_metrics_.shm_read_time_us);
    }
    
    void cleanup() {
        if (pc_shm_ptr_ && pc_shm_ptr_ != MAP_FAILED) {
            munmap(pc_shm_ptr_, pc_shm_size_);
        }
        if (pc_shm_fd_ != -1) {
            close(pc_shm_fd_);
        }
        if (pc_sem_ != SEM_FAILED) {
            sem_close(pc_sem_);
        }
        
        if (imu_shm_ptr_ && imu_shm_ptr_ != MAP_FAILED) {
            munmap(imu_shm_ptr_, imu_shm_size_);
        }
        if (imu_shm_fd_ != -1) {
            close(imu_shm_fd_);
        }
        if (imu_sem_ != SEM_FAILED) {
            sem_close(imu_sem_);
        }
        
        if (log_file_.is_open()) {
            log_file_.close();
        }
    }
    
    // 成员变量
    std::atomic<bool> running_;
    std::thread monitor_thread_;
    std::thread report_thread_;
    std::mutex metrics_mutex_;
    
    // 配置参数
    bool monitor_pointcloud_;
    bool monitor_imu_;
    double report_interval_;
    bool log_to_file_;
    std::string log_file_path_;
    
    // 点云共享内存
    std::string pc_shm_name_;
    int pc_shm_fd_ = -1;
    void* pc_shm_ptr_ = nullptr;
    size_t pc_shm_size_ = 0;
    sem_t* pc_sem_ = SEM_FAILED;
    uint64_t last_pc_sequence_ = 0;
    
    // IMU共享内存
    std::string imu_shm_name_;
    int imu_shm_fd_ = -1;
    void* imu_shm_ptr_ = nullptr;
    size_t imu_shm_size_ = 0;
    sem_t* imu_sem_ = SEM_FAILED;
    uint64_t last_imu_sequence_ = 0;
    
    // 性能指标
    PerformanceMetrics pc_metrics_;
    PerformanceMetrics imu_metrics_;
    
    // ROS2组件
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr performance_pub_;
    
    // 日志文件
    std::ofstream log_file_;
    
    std::chrono::steady_clock::time_point start_time_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PerformanceMonitor>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}