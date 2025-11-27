#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <std_msgs/msg/string.hpp>
#include <chrono>
#include <memory>
#include <thread>
#include <atomic>
#include <random>
#include <vector>
#include <fstream>
#include <sstream>

struct BenchmarkConfig {
    double pointcloud_frequency = 10.0;  // Hz
    double imu_frequency = 100.0;        // Hz
    size_t pointcloud_size = 100000;     // points
    int test_duration_sec = 60;          // seconds
    bool enable_pointcloud = true;
    bool enable_imu = true;
    std::string test_name = "default";
    bool save_results = true;
    std::string results_file = "/tmp/benchmark_results.csv";
};

class BenchmarkTool : public rclcpp::Node {
public:
    BenchmarkTool() : Node("benchmark_tool"), running_(false) {
        // 参数配置
        this->declare_parameter("pointcloud_frequency", 10.0);
        this->declare_parameter("imu_frequency", 100.0);
        this->declare_parameter("pointcloud_size", 100000);
        this->declare_parameter("test_duration_sec", 60);
        this->declare_parameter("enable_pointcloud", true);
        this->declare_parameter("enable_imu", true);
        this->declare_parameter("test_name", std::string("default"));
        this->declare_parameter("save_results", true);
        this->declare_parameter("results_file", std::string("/tmp/benchmark_results.csv"));
        
        load_config();
        
        // 创建发布者
        if (config_.enable_pointcloud) {
            pointcloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(
                "/rslidar_points", 10);
        }
        
        if (config_.enable_imu) {
            imu_pub_ = this->create_publisher<sensor_msgs::msg::Imu>(
                "/imu/data", 10);
        }
        
        // 状态发布者
        status_pub_ = this->create_publisher<std_msgs::msg::String>(
            "/benchmark_status", 10);
        
        // 初始化测试数据
        init_test_data();
        
        RCLCPP_INFO(this->get_logger(), "Benchmark Tool initialized");
        RCLCPP_INFO(this->get_logger(), "Test: %s, Duration: %ds", 
                   config_.test_name.c_str(), config_.test_duration_sec);
        RCLCPP_INFO(this->get_logger(), "PointCloud: %s (%.1fHz, %zu points)", 
                   config_.enable_pointcloud ? "ON" : "OFF",
                   config_.pointcloud_frequency, config_.pointcloud_size);
        RCLCPP_INFO(this->get_logger(), "IMU: %s (%.1fHz)", 
                   config_.enable_imu ? "ON" : "OFF", config_.imu_frequency);
    }
    
    void start_benchmark() {
        if (running_) {
            RCLCPP_WARN(this->get_logger(), "Benchmark already running!");
            return;
        }
        
        RCLCPP_INFO(this->get_logger(), "Starting benchmark test: %s", config_.test_name.c_str());
        
        running_ = true;
        start_time_ = std::chrono::steady_clock::now();
        
        // 重置统计
        reset_statistics();
        
        // 启动发布线程
        if (config_.enable_pointcloud) {
            pointcloud_thread_ = std::thread(&BenchmarkTool::pointcloud_publisher_loop, this);
        }
        
        if (config_.enable_imu) {
            imu_thread_ = std::thread(&BenchmarkTool::imu_publisher_loop, this);
        }
        
        // 启动监控线程
        monitor_thread_ = std::thread(&BenchmarkTool::monitor_loop, this);
        
        // 启动测试计时器
        test_timer_ = this->create_wall_timer(
            std::chrono::seconds(config_.test_duration_sec),
            [this]() { stop_benchmark(); });
    }
    
    void stop_benchmark() {
        if (!running_) {
            return;
        }
        
        RCLCPP_INFO(this->get_logger(), "Stopping benchmark test...");
        
        running_ = false;
        
        // 等待线程结束
        if (pointcloud_thread_.joinable()) {
            pointcloud_thread_.join();
        }
        if (imu_thread_.joinable()) {
            imu_thread_.join();
        }
        if (monitor_thread_.joinable()) {
            monitor_thread_.join();
        }
        
        // 停止计时器
        if (test_timer_) {
            test_timer_->cancel();
        }
        
        // 生成报告
        generate_report();
        
        RCLCPP_INFO(this->get_logger(), "Benchmark test completed!");
    }
    
    void run_predefined_tests() {
        std::vector<BenchmarkConfig> test_configs = {
            // 低负载测试
            {5.0, 50.0, 50000, 30, true, true, "low_load", true, "/tmp/benchmark_low_load.csv"},
            // 中等负载测试
            {10.0, 100.0, 100000, 30, true, true, "medium_load", true, "/tmp/benchmark_medium_load.csv"},
            // 高负载测试
            {20.0, 200.0, 200000, 30, true, true, "high_load", true, "/tmp/benchmark_high_load.csv"},
            // 极高负载测试
            {30.0, 300.0, 300000, 30, true, true, "extreme_load", true, "/tmp/benchmark_extreme_load.csv"},
            // 仅点云测试
            {15.0, 0.0, 150000, 30, true, false, "pointcloud_only", true, "/tmp/benchmark_pc_only.csv"},
            // 仅IMU测试
            {0.0, 500.0, 0, 30, false, true, "imu_only", true, "/tmp/benchmark_imu_only.csv"}
        };
        
        for (const auto& test_config : test_configs) {
            config_ = test_config;
            load_config_to_parameters();
            init_test_data();
            
            RCLCPP_INFO(this->get_logger(), "\n=== Running Test: %s ===", config_.test_name.c_str());
            start_benchmark();
            
            // 等待测试完成
            while (running_ && rclcpp::ok()) {
                rclcpp::spin_some(this->get_node_base_interface());
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            
            // 测试间隔
            std::this_thread::sleep_for(std::chrono::seconds(5));
        }
        
        RCLCPP_INFO(this->get_logger(), "All benchmark tests completed!");
    }

private:
    void load_config() {
        config_.pointcloud_frequency = this->get_parameter("pointcloud_frequency").as_double();
        config_.imu_frequency = this->get_parameter("imu_frequency").as_double();
        config_.pointcloud_size = this->get_parameter("pointcloud_size").as_int();
        config_.test_duration_sec = this->get_parameter("test_duration_sec").as_int();
        config_.enable_pointcloud = this->get_parameter("enable_pointcloud").as_bool();
        config_.enable_imu = this->get_parameter("enable_imu").as_bool();
        config_.test_name = this->get_parameter("test_name").as_string();
        config_.save_results = this->get_parameter("save_results").as_bool();
        config_.results_file = this->get_parameter("results_file").as_string();
    }
    
    void load_config_to_parameters() {
        this->set_parameter(rclcpp::Parameter("pointcloud_frequency", config_.pointcloud_frequency));
        this->set_parameter(rclcpp::Parameter("imu_frequency", config_.imu_frequency));
        this->set_parameter(rclcpp::Parameter("pointcloud_size", static_cast<int>(config_.pointcloud_size)));
        this->set_parameter(rclcpp::Parameter("test_duration_sec", config_.test_duration_sec));
        this->set_parameter(rclcpp::Parameter("enable_pointcloud", config_.enable_pointcloud));
        this->set_parameter(rclcpp::Parameter("enable_imu", config_.enable_imu));
        this->set_parameter(rclcpp::Parameter("test_name", config_.test_name));
        this->set_parameter(rclcpp::Parameter("save_results", config_.save_results));
        this->set_parameter(rclcpp::Parameter("results_file", config_.results_file));
    }
    
    void init_test_data() {
        if (config_.enable_pointcloud) {
            // 生成测试点云数据
            test_pointcloud_ = std::make_shared<sensor_msgs::msg::PointCloud2>();
            test_pointcloud_->header.frame_id = "lidar_frame";
            test_pointcloud_->height = 1;
            test_pointcloud_->width = config_.pointcloud_size;
            test_pointcloud_->is_dense = true;
            
            // 设置字段
            test_pointcloud_->fields.resize(4);
            test_pointcloud_->fields[0].name = "x";
            test_pointcloud_->fields[0].offset = 0;
            test_pointcloud_->fields[0].datatype = sensor_msgs::msg::PointField::FLOAT32;
            test_pointcloud_->fields[0].count = 1;
            
            test_pointcloud_->fields[1].name = "y";
            test_pointcloud_->fields[1].offset = 4;
            test_pointcloud_->fields[1].datatype = sensor_msgs::msg::PointField::FLOAT32;
            test_pointcloud_->fields[1].count = 1;
            
            test_pointcloud_->fields[2].name = "z";
            test_pointcloud_->fields[2].offset = 8;
            test_pointcloud_->fields[2].datatype = sensor_msgs::msg::PointField::FLOAT32;
            test_pointcloud_->fields[2].count = 1;
            
            test_pointcloud_->fields[3].name = "intensity";
            test_pointcloud_->fields[3].offset = 12;
            test_pointcloud_->fields[3].datatype = sensor_msgs::msg::PointField::FLOAT32;
            test_pointcloud_->fields[3].count = 1;
            
            test_pointcloud_->point_step = 16;
            test_pointcloud_->row_step = test_pointcloud_->point_step * test_pointcloud_->width;
            test_pointcloud_->data.resize(test_pointcloud_->row_step);
            
            // 填充随机点云数据
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_real_distribution<float> pos_dist(-50.0f, 50.0f);
            std::uniform_real_distribution<float> intensity_dist(0.0f, 255.0f);
            
            float* data_ptr = reinterpret_cast<float*>(test_pointcloud_->data.data());
            for (size_t i = 0; i < config_.pointcloud_size; ++i) {
                data_ptr[i * 4 + 0] = pos_dist(gen);     // x
                data_ptr[i * 4 + 1] = pos_dist(gen);     // y
                data_ptr[i * 4 + 2] = pos_dist(gen);     // z
                data_ptr[i * 4 + 3] = intensity_dist(gen); // intensity
            }
        }
        
        if (config_.enable_imu) {
            // 生成测试IMU数据
            test_imu_ = std::make_shared<sensor_msgs::msg::Imu>();
            test_imu_->header.frame_id = "imu_frame";
            
            // 设置协方差矩阵
            for (int i = 0; i < 9; ++i) {
                test_imu_->orientation_covariance[i] = (i % 4 == 0) ? 0.01 : 0.0;
                test_imu_->angular_velocity_covariance[i] = (i % 4 == 0) ? 0.001 : 0.0;
                test_imu_->linear_acceleration_covariance[i] = (i % 4 == 0) ? 0.01 : 0.0;
            }
        }
    }
    
    void pointcloud_publisher_loop() {
        auto period = std::chrono::duration<double>(1.0 / config_.pointcloud_frequency);
        auto next_publish = std::chrono::steady_clock::now();
        
        while (running_ && rclcpp::ok()) {
            // 更新时间戳
            test_pointcloud_->header.stamp = this->now();
            
            // 发布点云
            pointcloud_pub_->publish(*test_pointcloud_);
            
            // 更新统计
            pc_published_count_++;
            pc_total_bytes_ += test_pointcloud_->data.size();
            
            // 等待下次发布
            next_publish += std::chrono::duration_cast<std::chrono::steady_clock::duration>(period);
            std::this_thread::sleep_until(next_publish);
        }
    }
    
    void imu_publisher_loop() {
        auto period = std::chrono::duration<double>(1.0 / config_.imu_frequency);
        auto next_publish = std::chrono::steady_clock::now();
        
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<double> gyro_dist(0.0, 0.1);
        std::normal_distribution<double> accel_dist(0.0, 0.5);
        std::uniform_real_distribution<double> quat_dist(-1.0, 1.0);
        
        while (running_ && rclcpp::ok()) {
            // 更新时间戳
            test_imu_->header.stamp = this->now();
            
            // 生成随机IMU数据
            test_imu_->angular_velocity.x = gyro_dist(gen);
            test_imu_->angular_velocity.y = gyro_dist(gen);
            test_imu_->angular_velocity.z = gyro_dist(gen);
            
            test_imu_->linear_acceleration.x = accel_dist(gen);
            test_imu_->linear_acceleration.y = accel_dist(gen);
            test_imu_->linear_acceleration.z = 9.81 + accel_dist(gen);
            
            // 简单的四元数（实际应用中应该是归一化的）
            double qw = quat_dist(gen);
            double qx = quat_dist(gen);
            double qy = quat_dist(gen);
            double qz = quat_dist(gen);
            double norm = sqrt(qw*qw + qx*qx + qy*qy + qz*qz);
            test_imu_->orientation.w = qw / norm;
            test_imu_->orientation.x = qx / norm;
            test_imu_->orientation.y = qy / norm;
            test_imu_->orientation.z = qz / norm;
            
            // 发布IMU数据
            imu_pub_->publish(*test_imu_);
            
            // 更新统计
            imu_published_count_++;
            
            // 等待下次发布
            next_publish += std::chrono::duration_cast<std::chrono::steady_clock::duration>(period);
            std::this_thread::sleep_until(next_publish);
        }
    }
    
    void monitor_loop() {
        while (running_ && rclcpp::ok()) {
            auto current_time = std::chrono::steady_clock::now();
            auto elapsed = std::chrono::duration<double>(current_time - start_time_).count();
            
            // 发布状态信息
            std_msgs::msg::String status_msg;
            std::ostringstream oss;
            oss << "Benchmark Status - Test: " << config_.test_name
                << ", Elapsed: " << static_cast<int>(elapsed) << "s"
                << ", PC Published: " << pc_published_count_.load()
                << ", IMU Published: " << imu_published_count_.load();
            
            status_msg.data = oss.str();
            status_pub_->publish(status_msg);
            
            RCLCPP_INFO_THROTTLE(this->get_logger(), *this->get_clock(), 5000,
                               "Test progress: %.1fs, PC: %lu, IMU: %lu",
                               elapsed, pc_published_count_.load(), imu_published_count_.load());
            
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    
    void reset_statistics() {
        pc_published_count_ = 0;
        imu_published_count_ = 0;
        pc_total_bytes_ = 0;
    }
    
    void generate_report() {
        auto end_time = std::chrono::steady_clock::now();
        auto actual_duration = std::chrono::duration<double>(end_time - start_time_).count();
        
        // 计算实际频率
        double actual_pc_freq = pc_published_count_.load() / actual_duration;
        double actual_imu_freq = imu_published_count_.load() / actual_duration;
        double actual_data_rate = (pc_total_bytes_.load() / actual_duration) / (1024.0 * 1024.0); // MB/s
        
        RCLCPP_INFO(this->get_logger(), "\n=== Benchmark Report ===");
        RCLCPP_INFO(this->get_logger(), "Test Name: %s", config_.test_name.c_str());
        RCLCPP_INFO(this->get_logger(), "Duration: %.2fs (target: %ds)", actual_duration, config_.test_duration_sec);
        RCLCPP_INFO(this->get_logger(), "PointCloud - Target: %.1fHz, Actual: %.1fHz, Count: %lu",
                   config_.pointcloud_frequency, actual_pc_freq, pc_published_count_.load());
        RCLCPP_INFO(this->get_logger(), "IMU - Target: %.1fHz, Actual: %.1fHz, Count: %lu",
                   config_.imu_frequency, actual_imu_freq, imu_published_count_.load());
        RCLCPP_INFO(this->get_logger(), "Data Rate: %.2f MB/s, Total: %.2f MB",
                   actual_data_rate, pc_total_bytes_.load() / (1024.0 * 1024.0));
        
        // 保存结果到文件
        if (config_.save_results) {
            save_results_to_file(actual_duration, actual_pc_freq, actual_imu_freq, actual_data_rate);
        }
    }
    
    void save_results_to_file(double duration, double pc_freq, double imu_freq, double data_rate) {
        std::ofstream file(config_.results_file, std::ios::app);
        if (file.is_open()) {
            // 写入CSV头部（如果文件为空）
            file.seekp(0, std::ios::end);
            if (file.tellp() == 0) {
                file << "test_name,duration,target_pc_freq,actual_pc_freq,target_imu_freq,actual_imu_freq,"
                     << "pc_count,imu_count,data_rate_mbps,total_mb,timestamp\n";
            }
            
            auto now = std::chrono::system_clock::now();
            auto time_t = std::chrono::system_clock::to_time_t(now);
            
            file << config_.test_name << ","
                 << duration << ","
                 << config_.pointcloud_frequency << ","
                 << pc_freq << ","
                 << config_.imu_frequency << ","
                 << imu_freq << ","
                 << pc_published_count_.load() << ","
                 << imu_published_count_.load() << ","
                 << data_rate << ","
                 << pc_total_bytes_.load() / (1024.0 * 1024.0) << ","
                 << time_t << "\n";
            
            file.close();
            RCLCPP_INFO(this->get_logger(), "Results saved to: %s", config_.results_file.c_str());
        } else {
            RCLCPP_WARN(this->get_logger(), "Failed to save results to: %s", config_.results_file.c_str());
        }
    }
    
    // 成员变量
    BenchmarkConfig config_;
    std::atomic<bool> running_;
    std::chrono::steady_clock::time_point start_time_;
    
    // 发布者
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_pub_;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_pub_;
    
    // 测试数据
    std::shared_ptr<sensor_msgs::msg::PointCloud2> test_pointcloud_;
    std::shared_ptr<sensor_msgs::msg::Imu> test_imu_;
    
    // 线程
    std::thread pointcloud_thread_;
    std::thread imu_thread_;
    std::thread monitor_thread_;
    
    // 计时器
    rclcpp::TimerBase::SharedPtr test_timer_;
    
    // 统计信息
    std::atomic<uint64_t> pc_published_count_{0};
    std::atomic<uint64_t> imu_published_count_{0};
    std::atomic<uint64_t> pc_total_bytes_{0};
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    
    auto benchmark = std::make_shared<BenchmarkTool>();
    
    // 检查命令行参数
    if (argc > 1 && std::string(argv[1]) == "--run-all-tests") {
        RCLCPP_INFO(benchmark->get_logger(), "Running all predefined benchmark tests...");
        benchmark->run_predefined_tests();
    } else {
        RCLCPP_INFO(benchmark->get_logger(), "Starting single benchmark test...");
        benchmark->start_benchmark();
        rclcpp::spin(benchmark);
    }
    
    rclcpp::shutdown();
    return 0;
}