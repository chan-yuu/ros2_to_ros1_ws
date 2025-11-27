#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <cstring>
#include <chrono>

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

class PointCloudReader {
public:
    PointCloudReader() : nh_("~") {
        // 参数配置
        nh_.param<std::string>("shm_name", shm_name_, "/tmp/pointcloud_shm");
        nh_.param<std::string>("sem_name", sem_name_, "/pointcloud_sem");
        nh_.param<std::string>("output_topic", output_topic_, "/pointcloud_from_ros2");
        nh_.param<double>("publish_rate", publish_rate_, 10.0);
        nh_.param<bool>("enable_timing_log", enable_timing_log_, false);
        
        // 创建发布者
        pub_ = nh_.advertise<sensor_msgs::PointCloud2>(output_topic_, 10);
        
        // 初始化共享内存
        if (!init_shared_memory()) {
            ROS_ERROR("Failed to initialize shared memory");
            return;
        }
        
        // 启动定时器
        timer_ = nh_.createTimer(ros::Duration(1.0 / publish_rate_), 
                                &PointCloudReader::timer_callback, this);
        
        ROS_INFO("PointCloud Reader initialized");
        ROS_INFO("Reading from: %s", shm_name_.c_str());
        ROS_INFO("Publishing to: %s at %.1f Hz", output_topic_.c_str(), publish_rate_);
    }
    
    ~PointCloudReader() {
        cleanup();
    }

private:
    bool init_shared_memory() {
        // 打开共享内存
        shm_fd_ = open(shm_name_.c_str(), O_RDONLY);
        if (shm_fd_ == -1) {
            ROS_WARN("Shared memory not found: %s. Will retry...", shm_name_.c_str());
            return false;
        }
        
        // 获取共享内存大小
        struct stat sb;
        if (fstat(shm_fd_, &sb) == -1) {
            ROS_ERROR("Failed to get shared memory size");
            close(shm_fd_);
            return false;
        }
        
        shm_size_ = sb.st_size;
        
        // 映射共享内存
        shm_ptr_ = mmap(nullptr, shm_size_, PROT_READ, MAP_SHARED, shm_fd_, 0);
        if (shm_ptr_ == MAP_FAILED) {
            ROS_ERROR("Failed to map shared memory");
            close(shm_fd_);
            return false;
        }
        
        // 打开信号量
        sem_ = sem_open(sem_name_.c_str(), O_RDONLY);
        if (sem_ == SEM_FAILED) {
            ROS_ERROR("Failed to open semaphore: %s", sem_name_.c_str());
            munmap(shm_ptr_, shm_size_);
            close(shm_fd_);
            return false;
        }
        
        ROS_INFO("Shared memory initialized successfully (size: %zu bytes)", shm_size_);
        return true;
    }
    
    void timer_callback(const ros::TimerEvent& event) {
        if (!shm_ptr_ || shm_ptr_ == MAP_FAILED || sem_ == SEM_FAILED) {
            // 尝试重新初始化
            if (!init_shared_memory()) {
                return;
            }
        }
        
        auto start_time = std::chrono::high_resolution_clock::now();
        
        // 尝试获取信号量（非阻塞）
        if (sem_trywait(sem_) == 0) {
            try {
                read_and_publish_pointcloud();
            } catch (const std::exception& e) {
                ROS_WARN("Error reading pointcloud: %s", e.what());
            }
            sem_post(sem_);
        } else {
            // 没有新数据可读
            return;
        }
        
        if (enable_timing_log_) {
            auto end_time = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
            ROS_DEBUG("PointCloud read and publish took %ld microseconds", duration.count());
        }
    }
    
    void read_and_publish_pointcloud() {
        SharedMemoryHeader* header = static_cast<SharedMemoryHeader*>(shm_ptr_);
        
        // 检查序列号，避免重复发布
        if (header->sequence <= last_sequence_) {
            return;
        }
        
        // 验证数据大小
        if (header->data_size == 0 || header->data_size > (shm_size_ - sizeof(SharedMemoryHeader))) {
            ROS_WARN("Invalid data size: %lu", header->data_size);
            return;
        }
        
        // 创建PointCloud2消息
        sensor_msgs::PointCloud2 cloud_msg;
        
        // 设置基本信息
        cloud_msg.header.stamp.sec = header->timestamp_ns / 1000000000ULL;
        cloud_msg.header.stamp.nsec = header->timestamp_ns % 1000000000ULL;
        cloud_msg.height = header->height;
        cloud_msg.width = header->width;
        cloud_msg.point_step = header->point_step;
        cloud_msg.row_step = header->row_step;
        cloud_msg.is_dense = (header->is_dense == 1);
        cloud_msg.is_bigendian = false;
        
        // 解析数据
        char* data_ptr = static_cast<char*>(shm_ptr_) + sizeof(SharedMemoryHeader);
        
        // 读取frame_id
        if (header->frame_id_len > 0) {
            cloud_msg.header.frame_id = std::string(data_ptr, header->frame_id_len);
            data_ptr += header->frame_id_len;
        } else {
            cloud_msg.header.frame_id = "rslidar";
        }
        
        // 读取字段信息
        cloud_msg.fields.clear();
        cloud_msg.fields.resize(header->fields_count);
        
        for (uint32_t i = 0; i < header->fields_count; ++i) {
            // 读取字段名长度
            uint32_t name_len;
            memcpy(&name_len, data_ptr, sizeof(uint32_t));
            data_ptr += sizeof(uint32_t);
            
            // 读取offset
            memcpy(&cloud_msg.fields[i].offset, data_ptr, sizeof(uint32_t));
            data_ptr += sizeof(uint32_t);
            
            // 读取datatype
            memcpy(&cloud_msg.fields[i].datatype, data_ptr, sizeof(uint32_t));
            data_ptr += sizeof(uint32_t);
            
            // 读取字段名
            cloud_msg.fields[i].name = std::string(data_ptr, name_len);
            data_ptr += name_len;
            
            cloud_msg.fields[i].count = 1;
        }
        
        // 读取点云数据
        size_t point_data_size = header->data_size - (data_ptr - (static_cast<char*>(shm_ptr_) + sizeof(SharedMemoryHeader)));
        cloud_msg.data.resize(point_data_size);
        memcpy(cloud_msg.data.data(), data_ptr, point_data_size);
        
        // 发布消息
        pub_.publish(cloud_msg);
        
        last_sequence_ = header->sequence;
        message_count_++;
        
        if (message_count_ % 50 == 0) {
            ROS_INFO("Published %lu pointcloud messages (seq: %lu, points: %u)", 
                    message_count_, header->sequence, cloud_msg.width * cloud_msg.height);
        }
    }
    

    
    void cleanup() {
        if (shm_ptr_ && shm_ptr_ != MAP_FAILED) {
            munmap(shm_ptr_, shm_size_);
            shm_ptr_ = nullptr;
        }
        
        if (shm_fd_ != -1) {
            close(shm_fd_);
            shm_fd_ = -1;
        }
        
        if (sem_ != SEM_FAILED) {
            sem_close(sem_);
            sem_ = SEM_FAILED;
        }
        
        ROS_INFO("PointCloud Reader cleanup completed");
    }
    
    // ROS组件
    ros::NodeHandle nh_;
    ros::Publisher pub_;
    ros::Timer timer_;
    
    // 配置参数
    std::string shm_name_;
    std::string sem_name_;
    std::string output_topic_;
    double publish_rate_;
    bool enable_timing_log_;
    
    // 共享内存
    int shm_fd_ = -1;
    void* shm_ptr_ = nullptr;
    size_t shm_size_ = 0;
    sem_t* sem_ = SEM_FAILED;
    
    // 状态跟踪
    uint64_t last_sequence_ = 0;
    uint64_t message_count_ = 0;
};

int main(int argc, char** argv) {
    ros::init(argc, argv, "pointcloud_reader");
    
    try {
        PointCloudReader reader;
        ros::spin();
    } catch (const std::exception& e) {
        ROS_ERROR("PointCloud Reader failed: %s", e.what());
        return 1;
    }
    
    return 0;
}