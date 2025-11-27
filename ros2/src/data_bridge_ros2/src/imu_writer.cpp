#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <iostream>

// 共享内存结构体
struct IMUSharedData {
    double linear_acceleration[3];  // x, y, z
    double angular_velocity[3];     // x, y, z
    double orientation[4];          // x, y, z, w (quaternion)
    uint64_t timestamp_sec;
    uint32_t timestamp_nanosec;
    bool data_ready;
};

class IMUWriterNode : public rclcpp::Node
{
public:
    IMUWriterNode() : Node("imu_writer_node")
    {
        // 初始化共享内存
        setupSharedMemory();
        
        // 创建QoS配置以兼容/imu_plugin/out话题
        auto qos = rclcpp::QoS(10)
            .reliability(rclcpp::ReliabilityPolicy::BestEffort)
            .durability(rclcpp::DurabilityPolicy::Volatile)
            .history(rclcpp::HistoryPolicy::KeepLast);
        
        // 创建订阅者
        subscription_ = this->create_subscription<sensor_msgs::msg::Imu>(
            "/imu/data", qos,
            std::bind(&IMUWriterNode::imuCallback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "IMU Writer Node started, subscribing to /imu/data");
    }
    
    ~IMUWriterNode()
    {
        cleanup();
    }

private:
    void setupSharedMemory()
    {
        // 创建共享内存键
        key_t shm_key = ftok("/tmp", 'I');  // 'I' for IMU
        key_t sem_key = ftok("/tmp", 'i');  // 'i' for IMU semaphore
        
        if (shm_key == -1 || sem_key == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create keys");
            return;
        }
        
        // 创建共享内存段
        shm_id_ = shmget(shm_key, sizeof(IMUSharedData), IPC_CREAT | 0666);
        if (shm_id_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory");
            return;
        }
        
        // 附加到共享内存
        shm_ptr_ = (IMUSharedData*)shmat(shm_id_, nullptr, 0);
        if (shm_ptr_ == (IMUSharedData*)-1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to attach shared memory");
            return;
        }
        
        // 创建信号量
        sem_id_ = semget(sem_key, 1, IPC_CREAT | 0666);
        if (sem_id_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create semaphore");
            return;
        }
        
        // 初始化信号量
        semctl(sem_id_, 0, SETVAL, 1);
        
        // 初始化共享数据
        memset(shm_ptr_, 0, sizeof(IMUSharedData));
        
        RCLCPP_INFO(this->get_logger(), "Shared memory initialized for IMU data");
    }
    
    void imuCallback(const sensor_msgs::msg::Imu::SharedPtr msg)
    {
        if (!shm_ptr_) {
            RCLCPP_WARN(this->get_logger(), "Shared memory not initialized");
            return;
        }
        
        // 获取信号量锁
        struct sembuf sem_op;
        sem_op.sem_num = 0;
        sem_op.sem_op = -1;  // P操作（等待）
        sem_op.sem_flg = 0;
        
        if (semop(sem_id_, &sem_op, 1) == -1) {
            RCLCPP_WARN(this->get_logger(), "Failed to acquire semaphore");
            return;
        }
        
        // 写入IMU数据到共享内存
        shm_ptr_->linear_acceleration[0] = msg->linear_acceleration.x;
        shm_ptr_->linear_acceleration[1] = msg->linear_acceleration.y;
        shm_ptr_->linear_acceleration[2] = msg->linear_acceleration.z;
        
        shm_ptr_->angular_velocity[0] = msg->angular_velocity.x;
        shm_ptr_->angular_velocity[1] = msg->angular_velocity.y;
        shm_ptr_->angular_velocity[2] = msg->angular_velocity.z;
        
        shm_ptr_->orientation[0] = msg->orientation.x;
        shm_ptr_->orientation[1] = msg->orientation.y;
        shm_ptr_->orientation[2] = msg->orientation.z;
        shm_ptr_->orientation[3] = msg->orientation.w;
        
        shm_ptr_->timestamp_sec = msg->header.stamp.sec;
        shm_ptr_->timestamp_nanosec = msg->header.stamp.nanosec;
        shm_ptr_->data_ready = true;
        
        // 释放信号量锁
        sem_op.sem_op = 1;  // V操作（释放）
        semop(sem_id_, &sem_op, 1);
        
        RCLCPP_DEBUG(this->get_logger(), "IMU data written to shared memory");
    }
    
    void cleanup()
    {
        if (shm_ptr_ && shm_ptr_ != (IMUSharedData*)-1) {
            shmdt(shm_ptr_);
        }
    }
    
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_;
    int shm_id_;
    int sem_id_;
    IMUSharedData* shm_ptr_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<IMUWriterNode>();
    
    try {
        rclcpp::spin(node);
    } catch (const std::exception& e) {
        RCLCPP_ERROR(node->get_logger(), "Exception in main: %s", e.what());
    }
    
    rclcpp::shutdown();
    return 0;
}