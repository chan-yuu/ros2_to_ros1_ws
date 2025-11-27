#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/Imu.h>
#include <std_msgs/String.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <cstring>
#include <chrono>
#include <memory>
#include <thread>
#include <atomic>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <sys/resource.h>

struct SharedMemoryHeader {
    uint64_t timestamp_ns;
    uint32_t data_size;
    uint32_t sequence;
    char data_type[16];
    bool data_ready;
    uint8_t padding[7];
};

// IMU共享内存数据结构（System V方式）
struct IMUSharedData {
    double linear_acceleration[3];  // x, y, z
    double angular_velocity[3];     // x, y, z
    double orientation[4];          // x, y, z, w (quaternion)
    uint64_t timestamp_sec;
    uint32_t timestamp_nanosec;
    bool data_ready;
};

struct PerformanceMetrics {
    double avg_latency_ms = 0.0;
    double max_latency_ms = 0.0;
    double min_latency_ms = 1000.0;
    uint64_t total_messages = 0;
    uint64_t total_bytes = 0;
    double throughput_mbps = 0.0;
    double message_rate_hz = 0.0;
    uint32_t dropped_messages = 0;
    double cpu_usage_percent = 0.0;
    double memory_usage_mb = 0.0;
    std::chrono::steady_clock::time_point start_time;
    std::chrono::steady_clock::time_point last_update;
};

class PerformanceMonitorROS1 {
public:
    PerformanceMonitorROS1() : running_(false) {
        // 初始化ROS节点句柄
        nh_ = std::make_shared<ros::NodeHandle>("~");
        
        // 获取参数
        nh_->param("monitor_pointcloud", monitor_pointcloud_, true);
        nh_->param("monitor_imu", monitor_imu_, true);
        nh_->param("report_interval", report_interval_, 5.0);
        nh_->param("save_results", save_results_, true);
        nh_->param("results_file", results_file_, std::string("/tmp/ros1_performance_results.csv"));
        
        // 创建发布者
        performance_pub_ = nh_->advertise<std_msgs::String>("/performance_report_ros1", 10);
        
        // 初始化共享内存
        if (!init_shared_memory()) {
            ROS_WARN("Failed to initialize shared memory, performance monitoring may be limited");
        }
        
        // 初始化性能指标
        pointcloud_metrics_.start_time = std::chrono::steady_clock::now();
        pointcloud_metrics_.last_update = pointcloud_metrics_.start_time;
        imu_metrics_.start_time = std::chrono::steady_clock::now();
        imu_metrics_.last_update = imu_metrics_.start_time;
        
        ROS_INFO("ROS1 Performance Monitor initialized");
        ROS_INFO("Monitoring - PointCloud: %s, IMU: %s", 
                monitor_pointcloud_ ? "ON" : "OFF",
                monitor_imu_ ? "ON" : "OFF");
    }
    
    ~PerformanceMonitorROS1() {
        stop_monitoring();
        cleanup_shared_memory();
    }
    
    void start_monitoring() {
        if (running_) {
            ROS_WARN("Performance monitoring already running!");
            return;
        }
        
        ROS_INFO("Starting ROS1 performance monitoring...");
        running_ = true;
        
        // 启动监控线程
        if (monitor_pointcloud_) {
            pointcloud_thread_ = std::thread(&PerformanceMonitorROS1::monitor_pointcloud, this);
        }
        
        if (monitor_imu_) {
            imu_thread_ = std::thread(&PerformanceMonitorROS1::monitor_imu, this);
        }
        
        // 启动报告线程
        report_thread_ = std::thread(&PerformanceMonitorROS1::report_loop, this);
        
        // 启动资源监控线程
        resource_thread_ = std::thread(&PerformanceMonitorROS1::monitor_resources, this);
    }
    
    void stop_monitoring() {
        if (!running_) {
            return;
        }
        
        ROS_INFO("Stopping ROS1 performance monitoring...");
        running_ = false;
        
        // 等待线程结束
        if (pointcloud_thread_.joinable()) {
            pointcloud_thread_.join();
        }
        if (imu_thread_.joinable()) {
            imu_thread_.join();
        }
        if (report_thread_.joinable()) {
            report_thread_.join();
        }
        if (resource_thread_.joinable()) {
            resource_thread_.join();
        }
        
        // 生成最终报告
        generate_final_report();
    }
    
private:
    bool init_shared_memory() {
        // 打开点云共享内存 - 使用文件映射方式匹配writer节点
        pointcloud_shm_fd_ = open("/tmp/pointcloud_shm", O_RDONLY);
        if (pointcloud_shm_fd_ == -1) {
            ROS_WARN("Failed to open shared memory /tmp/pointcloud_shm: %s", strerror(errno));
        } else {
            pointcloud_shm_ptr_ = mmap(nullptr, 50 * 1024 * 1024, PROT_READ, MAP_SHARED, pointcloud_shm_fd_, 0);
            if (pointcloud_shm_ptr_ == MAP_FAILED) {
                ROS_WARN("Failed to map pointcloud shared memory: %s", strerror(errno));
                close(pointcloud_shm_fd_);
                pointcloud_shm_fd_ = -1;
                pointcloud_shm_ptr_ = nullptr;
            } else {
                ROS_INFO("Successfully opened pointcloud shared memory");
            }
        }
        
        // 打开IMU共享内存 - 使用System V共享内存匹配writer节点
         key_t imu_shm_key = ftok("/tmp", 'I');
         if (imu_shm_key != -1) {
             imu_shm_id_ = shmget(imu_shm_key, sizeof(IMUSharedData), 0666);
             if (imu_shm_id_ == -1) {
                 ROS_WARN("Failed to get IMU shared memory: %s", strerror(errno));
             } else {
                 imu_shm_ptr_ = (IMUSharedData*)shmat(imu_shm_id_, nullptr, SHM_RDONLY);
                 if (imu_shm_ptr_ == (IMUSharedData*)-1) {
                     ROS_WARN("Failed to attach IMU shared memory: %s", strerror(errno));
                     imu_shm_ptr_ = nullptr;
                 } else {
                     ROS_INFO("Successfully opened IMU shared memory");
                 }
             }
         } else {
             ROS_WARN("Failed to create IMU shared memory key: %s", strerror(errno));
         }
        
        // 打开信号量
        pointcloud_sem_ = sem_open("/pointcloud_sem", 0);
        if (pointcloud_sem_ == SEM_FAILED) {
            ROS_WARN("Failed to open pointcloud semaphore: %s", strerror(errno));
        }
        
        // 获取IMU信号量
        key_t imu_sem_key = ftok("/tmp", 'i');
        if (imu_sem_key != -1) {
            imu_sem_id_ = semget(imu_sem_key, 1, 0666);
            if (imu_sem_id_ == -1) {
                ROS_WARN("Failed to get IMU semaphore: %s", strerror(errno));
            }
        }
        
        return (pointcloud_shm_ptr_ != nullptr || imu_shm_ptr_ != nullptr);
    }
    
    void monitor_pointcloud() {
        if (!pointcloud_shm_ptr_ || !pointcloud_sem_) {
            ROS_WARN("PointCloud shared memory not available for monitoring");
            return;
        }
        
        uint32_t last_sequence = 0;
        bool first_message = true;
        
        while (running_ && ros::ok()) {
            // 等待数据可用
            struct timespec timeout;
            clock_gettime(CLOCK_REALTIME, &timeout);
            timeout.tv_sec += 1; // 1秒超时
            
            if (sem_timedwait(pointcloud_sem_, &timeout) == 0) {
                auto receive_time = std::chrono::steady_clock::now();
                
                SharedMemoryHeader* header = static_cast<SharedMemoryHeader*>(pointcloud_shm_ptr_);
                
                if (header->data_ready && strcmp(header->data_type, "pointcloud") == 0) {
                    // 计算延迟
                    auto send_time = std::chrono::time_point<std::chrono::steady_clock>(
                        std::chrono::nanoseconds(header->timestamp_ns));
                    auto latency = std::chrono::duration<double, std::milli>(receive_time - send_time).count();
                    
                    // 检测丢包
                    if (!first_message && header->sequence != last_sequence + 1) {
                        uint32_t dropped = header->sequence - last_sequence - 1;
                        pointcloud_metrics_.dropped_messages += dropped;
                        ROS_WARN("PointCloud: Detected %u dropped messages (seq: %u -> %u)", 
                                dropped, last_sequence, header->sequence);
                    }
                    
                    // 更新统计
                    update_metrics(pointcloud_metrics_, latency, header->data_size);
                    
                    last_sequence = header->sequence;
                    first_message = false;
                    
                    // 释放信号量
                    sem_post(pointcloud_sem_);
                }
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
    
    void monitor_imu() {
        if (!imu_shm_ptr_) {
            ROS_WARN("IMU shared memory not available for monitoring");
            return;
        }
        
        uint32_t last_sequence = 0;
        bool first_message = true;
        
        while (running_ && ros::ok()) {
            // 对于System V信号量，使用sembuf结构体进行操作
            struct sembuf sem_op;
            sem_op.sem_num = 0;  // 信号量编号
            sem_op.sem_op = -1;  // P操作（等待）
            sem_op.sem_flg = IPC_NOWAIT;  // 非阻塞
            
            if (semop(imu_sem_id_, &sem_op, 1) == 0) {
                auto receive_time = std::chrono::steady_clock::now();
                
                // 读取IMU数据
                if (imu_shm_ptr_->data_ready) {
                    // 计算延迟（使用时间戳）
                    uint64_t timestamp_ns = imu_shm_ptr_->timestamp_sec * 1000000000ULL + imu_shm_ptr_->timestamp_nanosec;
                    auto send_time = std::chrono::time_point<std::chrono::steady_clock>(
                        std::chrono::nanoseconds(timestamp_ns));
                    auto latency = std::chrono::duration<double, std::milli>(receive_time - send_time).count();
                    
                    // IMU数据没有sequence字段，所以跳过丢包检测
                    // 或者可以基于时间戳来检测
                    
                    // 更新统计
                    update_metrics(imu_metrics_, latency, sizeof(IMUSharedData));
                    
                    first_message = false;
                }
                
                // V操作（释放）
                sem_op.sem_op = 1;
                semop(imu_sem_id_, &sem_op, 1);
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
    
    void update_metrics(PerformanceMetrics& metrics, double latency_ms, uint32_t data_size) {
        auto current_time = std::chrono::steady_clock::now();
        
        // 更新延迟统计
        if (metrics.total_messages == 0) {
            metrics.avg_latency_ms = latency_ms;
            metrics.min_latency_ms = latency_ms;
            metrics.max_latency_ms = latency_ms;
        } else {
            metrics.avg_latency_ms = (metrics.avg_latency_ms * metrics.total_messages + latency_ms) / 
                                   (metrics.total_messages + 1);
            metrics.min_latency_ms = std::min(metrics.min_latency_ms, latency_ms);
            metrics.max_latency_ms = std::max(metrics.max_latency_ms, latency_ms);
        }
        
        // 更新计数和字节数
        metrics.total_messages++;
        metrics.total_bytes += data_size;
        
        // 计算吞吐量和消息频率
        auto elapsed = std::chrono::duration<double>(current_time - metrics.start_time).count();
        if (elapsed > 0) {
            metrics.throughput_mbps = (metrics.total_bytes / elapsed) / (1024.0 * 1024.0);
            metrics.message_rate_hz = metrics.total_messages / elapsed;
        }
        
        metrics.last_update = current_time;
    }
    
    void monitor_resources() {
        while (running_ && ros::ok()) {
            // 获取CPU使用率（简化版本）
            struct rusage usage;
            if (getrusage(RUSAGE_SELF, &usage) == 0) {
                // 计算内存使用（RSS）
                pointcloud_metrics_.memory_usage_mb = usage.ru_maxrss / 1024.0; // KB to MB
                imu_metrics_.memory_usage_mb = usage.ru_maxrss / 1024.0;
            }
            
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    
    void report_loop() {
        while (running_ && ros::ok()) {
            std::this_thread::sleep_for(std::chrono::duration<double>(report_interval_));
            
            if (running_) {
                publish_performance_report();
            }
        }
    }
    
    void publish_performance_report() {
        std_msgs::String report_msg;
        std::ostringstream oss;
        
        oss << "=== ROS1 Performance Report ===\n";
        
        if (monitor_pointcloud_) {
            oss << "PointCloud Metrics:\n"
                << "  Messages: " << pointcloud_metrics_.total_messages << "\n"
                << "  Dropped: " << pointcloud_metrics_.dropped_messages << "\n"
                << "  Rate: " << std::fixed << std::setprecision(2) << pointcloud_metrics_.message_rate_hz << " Hz\n"
                << "  Throughput: " << pointcloud_metrics_.throughput_mbps << " MB/s\n"
                << "  Latency (avg/min/max): " << pointcloud_metrics_.avg_latency_ms 
                << "/" << pointcloud_metrics_.min_latency_ms 
                << "/" << pointcloud_metrics_.max_latency_ms << " ms\n";
        }
        
        if (monitor_imu_) {
            oss << "IMU Metrics:\n"
                << "  Messages: " << imu_metrics_.total_messages << "\n"
                << "  Dropped: " << imu_metrics_.dropped_messages << "\n"
                << "  Rate: " << std::fixed << std::setprecision(2) << imu_metrics_.message_rate_hz << " Hz\n"
                << "  Throughput: " << imu_metrics_.throughput_mbps << " MB/s\n"
                << "  Latency (avg/min/max): " << imu_metrics_.avg_latency_ms 
                << "/" << imu_metrics_.min_latency_ms 
                << "/" << imu_metrics_.max_latency_ms << " ms\n";
        }
        
        oss << "Memory Usage: " << std::max(pointcloud_metrics_.memory_usage_mb, imu_metrics_.memory_usage_mb) << " MB\n";
        
        report_msg.data = oss.str();
        performance_pub_.publish(report_msg);
        
        ROS_INFO_THROTTLE(10, "Performance report published");
    }
    
    void generate_final_report() {
        ROS_INFO("\n=== Final ROS1 Performance Report ===");
        
        if (monitor_pointcloud_) {
            ROS_INFO("PointCloud Summary:");
            ROS_INFO("  Total Messages: %lu", pointcloud_metrics_.total_messages);
            ROS_INFO("  Dropped Messages: %u", pointcloud_metrics_.dropped_messages);
            ROS_INFO("  Average Rate: %.2f Hz", pointcloud_metrics_.message_rate_hz);
            ROS_INFO("  Average Throughput: %.2f MB/s", pointcloud_metrics_.throughput_mbps);
            ROS_INFO("  Latency - Avg: %.2f ms, Min: %.2f ms, Max: %.2f ms",
                    pointcloud_metrics_.avg_latency_ms,
                    pointcloud_metrics_.min_latency_ms,
                    pointcloud_metrics_.max_latency_ms);
        }
        
        if (monitor_imu_) {
            ROS_INFO("IMU Summary:");
            ROS_INFO("  Total Messages: %lu", imu_metrics_.total_messages);
            ROS_INFO("  Dropped Messages: %u", imu_metrics_.dropped_messages);
            ROS_INFO("  Average Rate: %.2f Hz", imu_metrics_.message_rate_hz);
            ROS_INFO("  Average Throughput: %.2f MB/s", imu_metrics_.throughput_mbps);
            ROS_INFO("  Latency - Avg: %.2f ms, Min: %.2f ms, Max: %.2f ms",
                    imu_metrics_.avg_latency_ms,
                    imu_metrics_.min_latency_ms,
                    imu_metrics_.max_latency_ms);
        }
        
        // 保存结果到文件
        if (save_results_) {
            save_results_to_file();
        }
    }
    
    void save_results_to_file() {
        std::ofstream file(results_file_, std::ios::app);
        if (file.is_open()) {
            // 写入CSV头部（如果文件为空）
            file.seekp(0, std::ios::end);
            if (file.tellp() == 0) {
                file << "data_type,total_messages,dropped_messages,avg_rate_hz,avg_throughput_mbps,"
                     << "avg_latency_ms,min_latency_ms,max_latency_ms,memory_mb,timestamp\n";
            }
            
            auto now = std::chrono::system_clock::now();
            auto time_t = std::chrono::system_clock::to_time_t(now);
            
            if (monitor_pointcloud_) {
                file << "pointcloud," << pointcloud_metrics_.total_messages << ","
                     << pointcloud_metrics_.dropped_messages << ","
                     << pointcloud_metrics_.message_rate_hz << ","
                     << pointcloud_metrics_.throughput_mbps << ","
                     << pointcloud_metrics_.avg_latency_ms << ","
                     << pointcloud_metrics_.min_latency_ms << ","
                     << pointcloud_metrics_.max_latency_ms << ","
                     << pointcloud_metrics_.memory_usage_mb << ","
                     << time_t << "\n";
            }
            
            if (monitor_imu_) {
                file << "imu," << imu_metrics_.total_messages << ","
                     << imu_metrics_.dropped_messages << ","
                     << imu_metrics_.message_rate_hz << ","
                     << imu_metrics_.throughput_mbps << ","
                     << imu_metrics_.avg_latency_ms << ","
                     << imu_metrics_.min_latency_ms << ","
                     << imu_metrics_.max_latency_ms << ","
                     << imu_metrics_.memory_usage_mb << ","
                     << time_t << "\n";
            }
            
            file.close();
            ROS_INFO("Results saved to: %s", results_file_.c_str());
        } else {
            ROS_WARN("Failed to save results to: %s", results_file_.c_str());
        }
    }
    
    void cleanup_shared_memory() {
        ROS_INFO("Cleaning up shared memory resources");
        
        // 清理点云共享内存（文件映射方式）
        if (pointcloud_shm_ptr_ && pointcloud_shm_ptr_ != MAP_FAILED) {
            munmap(pointcloud_shm_ptr_, 50 * 1024 * 1024);
            pointcloud_shm_ptr_ = nullptr;
        }
        
        if (pointcloud_shm_fd_ >= 0) {
            close(pointcloud_shm_fd_);
            pointcloud_shm_fd_ = -1;
        }
        
        if (pointcloud_sem_ && pointcloud_sem_ != SEM_FAILED) {
            sem_close(pointcloud_sem_);
            pointcloud_sem_ = nullptr;
        }
        
        // 清理IMU共享内存（System V方式）
        if (imu_shm_ptr_) {
            shmdt(imu_shm_ptr_);
            imu_shm_ptr_ = nullptr;
        }
        
        // 注意：不删除共享内存段和信号量，因为writer进程可能还在使用
        // 实际应用中可能需要引用计数或其他机制来决定何时删除
        
        ROS_INFO("Shared memory cleanup completed");
    }
    
    // 成员变量
    std::shared_ptr<ros::NodeHandle> nh_;
    std::atomic<bool> running_;
    
    // 参数
    bool monitor_pointcloud_;
    bool monitor_imu_;
    double report_interval_;
    bool save_results_;
    std::string results_file_;
    
    // 发布者
    ros::Publisher performance_pub_;
    
    // 共享内存
    int pointcloud_shm_fd_ = -1;
    void* pointcloud_shm_ptr_ = nullptr;
    sem_t* pointcloud_sem_ = nullptr;
    
    int imu_shm_fd_ = -1;
    int imu_shm_id_ = -1;  // System V共享内存ID
    int imu_sem_id_ = -1;  // System V信号量ID
    IMUSharedData* imu_shm_ptr_ = nullptr;
    sem_t* imu_sem_ = nullptr;
    
    // 性能指标
    PerformanceMetrics pointcloud_metrics_;
    PerformanceMetrics imu_metrics_;
    
    // 线程
    std::thread pointcloud_thread_;
    std::thread imu_thread_;
    std::thread report_thread_;
    std::thread resource_thread_;
};

int main(int argc, char** argv) {
    ros::init(argc, argv, "performance_monitor_ros1");
    
    auto monitor = std::make_unique<PerformanceMonitorROS1>();
    
    // 启动监控
    monitor->start_monitoring();
    
    ROS_INFO("ROS1 Performance Monitor running. Press Ctrl+C to stop.");
    
    // 运行ROS循环
    ros::spin();
    
    // 停止监控
    monitor->stop_monitoring();
    
    return 0;
}