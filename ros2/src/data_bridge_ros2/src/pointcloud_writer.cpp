#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <cstring>
#include <chrono>
#include <memory>

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

class PointCloudWriter : public rclcpp::Node {
public:
    PointCloudWriter() : Node("pointcloud_writer"), sequence_(0) {
        // 共享内存配置
        shm_name_ = "/tmp/pointcloud_shm";
        shm_size_ = 50 * 1024 * 1024; // 50MB
        
        // 创建共享内存
        if (!create_shared_memory()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory");
            return;
        }
        
        // 创建信号量
        sem_unlink("/pointcloud_sem");
        sem_ = sem_open("/pointcloud_sem", O_CREAT | O_EXCL, 0644, 1);
        if (sem_ == SEM_FAILED) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create semaphore");
            cleanup();
            return;
        }
        
        // 订阅点云话题
        subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/rslidar_points", 10,
            std::bind(&PointCloudWriter::pointcloud_callback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "PointCloud Writer Node started, subscribing to /rslidar_points");
    }
    
    ~PointCloudWriter() {
        cleanup();
    }

private:
    bool create_shared_memory() {
        // 创建共享内存文件
        shm_fd_ = open(shm_name_.c_str(), O_CREAT | O_RDWR | O_TRUNC, 0666);
        if (shm_fd_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory file");
            return false;
        }
        
        // 设置文件大小
        if (ftruncate(shm_fd_, shm_size_) == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set shared memory size");
            close(shm_fd_);
            return false;
        }
        
        // 映射内存
        shm_ptr_ = mmap(nullptr, shm_size_, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd_, 0);
        if (shm_ptr_ == MAP_FAILED) {
            RCLCPP_ERROR(this->get_logger(), "Failed to map shared memory");
            close(shm_fd_);
            return false;
        }
        
        // 初始化头部
        memset(shm_ptr_, 0, sizeof(SharedMemoryHeader));
        
        RCLCPP_INFO(this->get_logger(), "Shared memory created: %s (%zu bytes)", 
                   shm_name_.c_str(), shm_size_);
        return true;
    }
    
    void pointcloud_callback(const sensor_msgs::msg::PointCloud2::SharedPtr msg) {
        if (!shm_ptr_ || sem_ == SEM_FAILED) {
            return;
        }
        
        // 获取信号量
        if (sem_wait(sem_) != 0) {
            RCLCPP_WARN(this->get_logger(), "Failed to acquire semaphore");
            return;
        }
        
        try {
            // 计算所需空间
            size_t frame_id_size = msg->header.frame_id.size();
            size_t fields_size = 0;
            for (const auto& field : msg->fields) {
                fields_size += sizeof(uint32_t) * 3 + field.name.size(); // name_len, offset, datatype + name
            }
            size_t total_size = sizeof(SharedMemoryHeader) + frame_id_size + fields_size + msg->data.size();
            
            if (total_size > shm_size_) {
                RCLCPP_WARN(this->get_logger(), "PointCloud data too large: %zu bytes", total_size);
                sem_post(sem_);
                return;
            }
            
            // 写入头部信息
            SharedMemoryHeader* header = static_cast<SharedMemoryHeader*>(shm_ptr_);
            header->data_size = total_size - sizeof(SharedMemoryHeader);
            header->timestamp_ns = msg->header.stamp.sec * 1000000000ULL + msg->header.stamp.nanosec;
            header->sequence = ++sequence_;
            header->height = msg->height;
            header->width = msg->width;
            header->point_step = msg->point_step;
            header->row_step = msg->row_step;
            header->fields_count = msg->fields.size();
            header->is_dense = msg->is_dense ? 1 : 0;
            header->frame_id_len = frame_id_size;
            
            // 写入数据
            char* data_ptr = static_cast<char*>(shm_ptr_) + sizeof(SharedMemoryHeader);
            
            // 写入frame_id
            memcpy(data_ptr, msg->header.frame_id.c_str(), frame_id_size);
            data_ptr += frame_id_size;
            
            // 写入字段信息
            for (const auto& field : msg->fields) {
                uint32_t name_len = field.name.size();
                memcpy(data_ptr, &name_len, sizeof(uint32_t));
                data_ptr += sizeof(uint32_t);
                
                memcpy(data_ptr, &field.offset, sizeof(uint32_t));
                data_ptr += sizeof(uint32_t);
                
                memcpy(data_ptr, &field.datatype, sizeof(uint32_t));
                data_ptr += sizeof(uint32_t);
                
                memcpy(data_ptr, field.name.c_str(), name_len);
                data_ptr += name_len;
            }
            
            // 写入点云数据
            memcpy(data_ptr, msg->data.data(), msg->data.size());
            
            RCLCPP_DEBUG(this->get_logger(), "Written %zu bytes to shared memory", total_size);
            
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error in pointcloud callback: %s", e.what());
        }
        
        // 释放信号量
        sem_post(sem_);
    }
    
    void cleanup() {
        if (shm_ptr_ && shm_ptr_ != MAP_FAILED) {
            munmap(shm_ptr_, shm_size_);
            shm_ptr_ = nullptr;
        }
        
        if (shm_fd_ != -1) {
            close(shm_fd_);
            unlink(shm_name_.c_str());
            shm_fd_ = -1;
        }
        
        if (sem_ != SEM_FAILED) {
            sem_close(sem_);
            sem_unlink("/pointcloud_sem");
            sem_ = SEM_FAILED;
        }
    }
    
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_;
    std::string shm_name_;
    size_t shm_size_;
    int shm_fd_ = -1;
    void* shm_ptr_ = nullptr;
    sem_t* sem_ = SEM_FAILED;
    uint64_t sequence_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PointCloudWriter>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}