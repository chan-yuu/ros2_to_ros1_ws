#include <ros/ros.h>
#include <tf2_msgs/TFMessage.h>
#include <geometry_msgs/TransformStamped.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <chrono>
#include "tf_shared_memory.h"

class TFReaderNode
{
public:
    TFReaderNode(ros::NodeHandle& nh) : nh_(nh), last_update_ns_(0)
    {
        // 初始化共享内存
        setupSharedMemory();
        
        // 创建发布者
        tf_publisher_ = nh_.advertise<tf2_msgs::TFMessage>("/tf", 10);
        tf_static_publisher_ = nh_.advertise<tf2_msgs::TFMessage>("/tf_static", 10, true); // latch=true for static
        
        // 创建定时器，定期读取共享内存
        timer_ = nh_.createTimer(ros::Duration(0.01), &TFReaderNode::timerCallback, this); // 100Hz
        
        ROS_INFO("TF Reader Node started, publishing to /tf and /tf_static");
    }
    
    ~TFReaderNode()
    {
        cleanup();
    }

private:
    void setupSharedMemory()
    {
        // 创建共享内存键
        key_t shm_key = ftok(TF_SHM_KEY_FILE, TF_SHM_KEY_ID);
        key_t sem_key = ftok(TF_SHM_KEY_FILE, TF_SEM_KEY_ID);
        
        if (shm_key == -1 || sem_key == -1) {
            ROS_ERROR("Failed to create keys");
            return;
        }
        
        // 连接到共享内存段
        shm_id_ = shmget(shm_key, sizeof(TFSharedData), 0666);
        if (shm_id_ == -1) {
            ROS_ERROR("Failed to connect to shared memory. Make sure tf_writer is running.");
            return;
        }
        
        // 附加到共享内存
        shm_ptr_ = (TFSharedData*)shmat(shm_id_, nullptr, 0);
        if (shm_ptr_ == (TFSharedData*)-1) {
            ROS_ERROR("Failed to attach shared memory");
            return;
        }
        
        // 连接到信号量
        sem_id_ = semget(sem_key, 1, 0666);
        if (sem_id_ == -1) {
            ROS_ERROR("Failed to connect to semaphore");
            return;
        }
        
        ROS_INFO("TF shared memory connected successfully");
    }
    
    void timerCallback(const ros::TimerEvent&)
    {
        if (!shm_ptr_) {
            return;
        }
        
        // 获取信号量锁
        struct sembuf sem_op;
        sem_op.sem_num = 0;
        sem_op.sem_op = -1;  // P操作（等待）
        sem_op.sem_flg = IPC_NOWAIT; // 非阻塞
        
        if (semop(sem_id_, &sem_op, 1) == -1) {
            // 如果无法获取锁，跳过这次读取
            return;
        }
        
        try {
            // 检查是否有新数据
            if (!shm_ptr_->header.data_ready || 
                shm_ptr_->header.last_update_ns == last_update_ns_) {
                // 释放信号量锁
                sem_op.sem_op = 1;  // V操作（释放）
                semop(sem_id_, &sem_op, 1);
                return;
            }
            
            // 读取TF数据
            std::vector<TFTransform> transforms;
            transforms.reserve(shm_ptr_->header.transform_count);
            
            for (uint32_t i = 0; i < shm_ptr_->header.transform_count; ++i) {
                transforms.push_back(shm_ptr_->transforms[i]);
            }
            
            last_update_ns_ = shm_ptr_->header.last_update_ns;
            
            // 释放信号量锁
            sem_op.sem_op = 1;  // V操作（释放）
            semop(sem_id_, &sem_op, 1);
            
            // 发布TF数据
            publishTransforms(transforms);
            
        } catch (const std::exception& e) {
            ROS_ERROR("Error reading TF data: %s", e.what());
            // 确保释放信号量锁
            sem_op.sem_op = 1;  // V操作（释放）
            semop(sem_id_, &sem_op, 1);
        }
    }
    
    void publishTransforms(const std::vector<TFTransform>& transforms)
    {
        if (transforms.empty()) {
            return;
        }
        
        tf2_msgs::TFMessage tf_msg;
        tf2_msgs::TFMessage tf_static_msg;
        
        for (const auto& tf : transforms) {
            geometry_msgs::TransformStamped transform_stamped;
            
            // 设置头部信息
            transform_stamped.header.frame_id = std::string(tf.parent_frame);
            transform_stamped.child_frame_id = std::string(tf.child_frame);
            transform_stamped.header.stamp.sec = tf.timestamp_sec;
            transform_stamped.header.stamp.nsec = tf.timestamp_nanosec;
            
            // 设置变换数据
            transform_stamped.transform.translation.x = tf.translation[0];
            transform_stamped.transform.translation.y = tf.translation[1];
            transform_stamped.transform.translation.z = tf.translation[2];
            
            transform_stamped.transform.rotation.x = tf.rotation[0];
            transform_stamped.transform.rotation.y = tf.rotation[1];
            transform_stamped.transform.rotation.z = tf.rotation[2];
            transform_stamped.transform.rotation.w = tf.rotation[3];
            
            // 根据是否为静态变换分别添加到不同的消息中
            if (tf.is_static) {
                tf_static_msg.transforms.push_back(transform_stamped);
            } else {
                tf_msg.transforms.push_back(transform_stamped);
            }
        }
        
        // 发布非静态变换
        if (!tf_msg.transforms.empty()) {
            tf_publisher_.publish(tf_msg);
            ROS_DEBUG("Published %zu dynamic TF transforms", tf_msg.transforms.size());
        }
        
        // 发布静态变换
        if (!tf_static_msg.transforms.empty()) {
            tf_static_publisher_.publish(tf_static_msg);
            ROS_DEBUG("Published %zu static TF transforms", tf_static_msg.transforms.size());
        }
    }
    
    void cleanup()
    {
        if (shm_ptr_ && shm_ptr_ != (TFSharedData*)-1) {
            shmdt(shm_ptr_);
        }
    }
    
    ros::NodeHandle& nh_;
    ros::Publisher tf_publisher_;
    ros::Publisher tf_static_publisher_;
    ros::Timer timer_;
    
    int shm_id_;
    int sem_id_;
    TFSharedData* shm_ptr_;
    uint64_t last_update_ns_;
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "tf_reader_node");
    ros::NodeHandle nh;
    
    try {
        TFReaderNode node(nh);
        ros::spin();
    } catch (const std::exception& e) {
        ROS_ERROR("Exception in main: %s", e.what());
        return 1;
    }
    
    return 0;
}