#include <rclcpp/rclcpp.hpp>
#include <tf2_msgs/msg/tf_message.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <unordered_map>
#include "tf_shared_memory.h"

class TFWriterNode : public rclcpp::Node
{
public:
    TFWriterNode() : Node("tf_writer_node")
    {
        // 初始化共享内存
        setupSharedMemory();
        
        // 创建订阅者 - /tf话题
        tf_subscription_ = this->create_subscription<tf2_msgs::msg::TFMessage>(
            "/tf", 10,
            std::bind(&TFWriterNode::tfCallback, this, std::placeholders::_1));
        
        // 创建订阅者 - /tf_static话题
        tf_static_subscription_ = this->create_subscription<tf2_msgs::msg::TFMessage>(
            "/tf_static", 10,
            std::bind(&TFWriterNode::tfStaticCallback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "TF Writer Node started, subscribing to /tf and /tf_static");
    }
    
    ~TFWriterNode()
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
            RCLCPP_ERROR(this->get_logger(), "Failed to create keys");
            return;
        }
        
        // 创建共享内存段
        shm_id_ = shmget(shm_key, sizeof(TFSharedData), IPC_CREAT | 0666);
        if (shm_id_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory");
            return;
        }
        
        // 附加到共享内存
        shm_ptr_ = (TFSharedData*)shmat(shm_id_, nullptr, 0);
        if (shm_ptr_ == (TFSharedData*)-1) {
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
        memset(shm_ptr_, 0, sizeof(TFSharedData));
        shm_ptr_->header.max_transforms = MAX_TF_TRANSFORMS;
        shm_ptr_->header.transform_count = 0;
        shm_ptr_->header.data_ready = false;
        
        RCLCPP_INFO(this->get_logger(), "TF shared memory initialized");
    }
    
    void tfCallback(const tf2_msgs::msg::TFMessage::SharedPtr msg)
    {
        processTFMessage(msg, false); // 非静态变换
    }
    
    void tfStaticCallback(const tf2_msgs::msg::TFMessage::SharedPtr msg)
    {
        processTFMessage(msg, true); // 静态变换
    }
    
    void processTFMessage(const tf2_msgs::msg::TFMessage::SharedPtr msg, bool is_static)
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
        
        try {
            // 处理每个变换
            for (const auto& transform : msg->transforms) {
                updateTransform(transform, is_static);
            }
            
            // 更新时间戳
            auto now = this->get_clock()->now();
            shm_ptr_->header.last_update_ns = now.nanoseconds();
            shm_ptr_->header.data_ready = true;
            
            RCLCPP_DEBUG(this->get_logger(), "Updated %zu TF transforms (static: %s)", 
                        msg->transforms.size(), is_static ? "true" : "false");
            
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error processing TF message: %s", e.what());
        }
        
        // 释放信号量锁
        sem_op.sem_op = 1;  // V操作（释放）
        semop(sem_id_, &sem_op, 1);
    }
    
    void updateTransform(const geometry_msgs::msg::TransformStamped& transform, bool is_static)
    {
        // 查找是否已存在相同的变换
        std::string key = transform.header.frame_id + "->" + transform.child_frame_id;
        
        int index = -1;
        for (uint32_t i = 0; i < shm_ptr_->header.transform_count; ++i) {
            if (strcmp(shm_ptr_->transforms[i].parent_frame, transform.header.frame_id.c_str()) == 0 &&
                strcmp(shm_ptr_->transforms[i].child_frame, transform.child_frame_id.c_str()) == 0) {
                index = i;
                break;
            }
        }
        
        // 如果没找到且还有空间，创建新的
        if (index == -1) {
            if (shm_ptr_->header.transform_count >= MAX_TF_TRANSFORMS) {
                RCLCPP_WARN(this->get_logger(), "TF transform buffer full, ignoring new transform");
                return;
            }
            index = shm_ptr_->header.transform_count++;
        }
        
        // 更新变换数据
        TFTransform& tf = shm_ptr_->transforms[index];
        
        // 复制坐标系名称（确保不超出缓冲区）
        strncpy(tf.parent_frame, transform.header.frame_id.c_str(), sizeof(tf.parent_frame) - 1);
        tf.parent_frame[sizeof(tf.parent_frame) - 1] = '\0';
        
        strncpy(tf.child_frame, transform.child_frame_id.c_str(), sizeof(tf.child_frame) - 1);
        tf.child_frame[sizeof(tf.child_frame) - 1] = '\0';
        
        // 复制变换数据
        tf.translation[0] = transform.transform.translation.x;
        tf.translation[1] = transform.transform.translation.y;
        tf.translation[2] = transform.transform.translation.z;
        
        tf.rotation[0] = transform.transform.rotation.x;
        tf.rotation[1] = transform.transform.rotation.y;
        tf.rotation[2] = transform.transform.rotation.z;
        tf.rotation[3] = transform.transform.rotation.w;
        
        tf.timestamp_sec = transform.header.stamp.sec;
        tf.timestamp_nanosec = transform.header.stamp.nanosec;
        tf.is_static = is_static;
    }
    
    void cleanup()
    {
        if (shm_ptr_ && shm_ptr_ != (TFSharedData*)-1) {
            shmdt(shm_ptr_);
        }
    }
    
    rclcpp::Subscription<tf2_msgs::msg::TFMessage>::SharedPtr tf_subscription_;
    rclcpp::Subscription<tf2_msgs::msg::TFMessage>::SharedPtr tf_static_subscription_;
    int shm_id_;
    int sem_id_;
    TFSharedData* shm_ptr_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TFWriterNode>();
    
    try {
        rclcpp::spin(node);
    } catch (const std::exception& e) {
        RCLCPP_ERROR(node->get_logger(), "Exception in main: %s", e.what());
    }
    
    rclcpp::shutdown();
    return 0;
}