#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <iostream>

// 共享内存结构体（与ROS2端保持一致）
struct IMUSharedData {
    double linear_acceleration[3];  // x, y, z
    double angular_velocity[3];     // x, y, z
    double orientation[4];          // x, y, z, w (quaternion)
    uint64_t timestamp_sec;
    uint32_t timestamp_nanosec;
    bool data_ready;
};

class IMUReaderNode
{
public:
    IMUReaderNode(ros::NodeHandle& nh) : nh_(nh)
    {
        // 初始化共享内存
        setupSharedMemory();
        
        // 从参数服务器获取输出话题名称
        std::string output_topic;
        nh_.param<std::string>("output_topic", output_topic, "/imu_data");
        
        // 创建发布者
        imu_pub_ = nh_.advertise<sensor_msgs::Imu>(output_topic, 10);
        
        // 创建定时器，定期检查共享内存
        timer_ = nh_.createTimer(ros::Duration(0.01), &IMUReaderNode::timerCallback, this);  // 100Hz
        
        ROS_INFO("IMU Reader Node started, publishing to %s", output_topic.c_str());
    }
    
    ~IMUReaderNode()
    {
        cleanup();
    }

private:
    void setupSharedMemory()
    {
        // 创建共享内存键（与ROS2端保持一致）
        key_t shm_key = ftok("/tmp", 'I');  // 'I' for IMU
        key_t sem_key = ftok("/tmp", 'i');  // 'i' for IMU semaphore
        
        if (shm_key == -1 || sem_key == -1) {
            ROS_ERROR("Failed to create keys");
            return;
        }
        
        // 获取共享内存段
        shm_id_ = shmget(shm_key, sizeof(IMUSharedData), 0666);
        if (shm_id_ == -1) {
            ROS_ERROR("Failed to get shared memory. Make sure ROS2 writer is running first.");
            return;
        }
        
        // 附加到共享内存
        shm_ptr_ = (IMUSharedData*)shmat(shm_id_, nullptr, 0);
        if (shm_ptr_ == (IMUSharedData*)-1) {
            ROS_ERROR("Failed to attach shared memory");
            return;
        }
        
        // 获取信号量
        sem_id_ = semget(sem_key, 1, 0666);
        if (sem_id_ == -1) {
            ROS_ERROR("Failed to get semaphore. Make sure ROS2 writer is running first.");
            return;
        }
        
        ROS_INFO("Shared memory initialized for IMU data reading");
    }
    
    void timerCallback(const ros::TimerEvent&)
    {
        if (!shm_ptr_ || shm_ptr_ == (IMUSharedData*)-1) {
            return;
        }
        
        // 获取信号量锁
        struct sembuf sem_op;
        sem_op.sem_num = 0;
        sem_op.sem_op = -1;  // P操作（等待）
        sem_op.sem_flg = IPC_NOWAIT;  // 非阻塞
        
        if (semop(sem_id_, &sem_op, 1) == -1) {
            // 如果无法获取锁，跳过这次读取
            return;
        }
        
        // 检查是否有新数据
        if (shm_ptr_->data_ready) {
            // 读取IMU数据
            sensor_msgs::Imu imu_msg;
            
            // 设置header
            imu_msg.header.stamp.sec = shm_ptr_->timestamp_sec;
            imu_msg.header.stamp.nsec = shm_ptr_->timestamp_nanosec;
            imu_msg.header.frame_id = "imu_link";
            
            // 设置线性加速度
            imu_msg.linear_acceleration.x = shm_ptr_->linear_acceleration[0];
            imu_msg.linear_acceleration.y = shm_ptr_->linear_acceleration[1];
            imu_msg.linear_acceleration.z = shm_ptr_->linear_acceleration[2];
            
            // 设置角速度
            imu_msg.angular_velocity.x = shm_ptr_->angular_velocity[0];
            imu_msg.angular_velocity.y = shm_ptr_->angular_velocity[1];
            imu_msg.angular_velocity.z = shm_ptr_->angular_velocity[2];
            
            // 设置方向（四元数）
            imu_msg.orientation.x = shm_ptr_->orientation[0];
            imu_msg.orientation.y = shm_ptr_->orientation[1];
            imu_msg.orientation.z = shm_ptr_->orientation[2];
            imu_msg.orientation.w = shm_ptr_->orientation[3];
            
            // 设置协方差矩阵（这里使用默认值）
            for (int i = 0; i < 9; i++) {
                imu_msg.orientation_covariance[i] = 0.0;
                imu_msg.angular_velocity_covariance[i] = 0.0;
                imu_msg.linear_acceleration_covariance[i] = 0.0;
            }
            imu_msg.orientation_covariance[0] = -1;  // 表示未知
            imu_msg.angular_velocity_covariance[0] = -1;
            imu_msg.linear_acceleration_covariance[0] = -1;
            
            // 发布消息
            imu_pub_.publish(imu_msg);
            
            // 标记数据已读取
            shm_ptr_->data_ready = false;
            
            ROS_DEBUG("IMU data published from shared memory");
        }
        
        // 释放信号量锁
        sem_op.sem_op = 1;  // V操作（释放）
        semop(sem_id_, &sem_op, 1);
    }
    
    void cleanup()
    {
        if (shm_ptr_ && shm_ptr_ != (IMUSharedData*)-1) {
            shmdt(shm_ptr_);
        }
    }
    
    ros::NodeHandle& nh_;
    ros::Publisher imu_pub_;
    ros::Timer timer_;
    int shm_id_;
    int sem_id_;
    IMUSharedData* shm_ptr_;
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "imu_reader_node");
    ros::NodeHandle nh;
    
    try {
        IMUReaderNode node(nh);
        ros::spin();
    } catch (const std::exception& e) {
        ROS_ERROR("Exception in main: %s", e.what());
    }
    
    return 0;
}