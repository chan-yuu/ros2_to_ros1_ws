#include <ros/ros.h>
#include <car_interfaces/GpsImuInterface.h>
#include <std_msgs/Header.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <iostream>

// GPS共享内存数据结构（需要与ROS2端保持一致）
// 共享内存结构体 - 对应ROS1的GpsImuInterface消息
struct GpsImuSharedData {
    // 导航状态标志
    char nav_flag[32];          // 定位状态标志
    char nav_flag_g[32];        // GNSS导航状态标志
    
    // IMU数据
    double x_acc;               // X轴加速度
    double y_acc;               // Y轴加速度  
    double z_acc;               // Z轴加速度
    double x_gyro;              // X轴角速度
    double y_gyro;              // Y轴角速度
    double z_gyro;              // Z轴角速度
    
    // 综合加速度和GPS时间
    double acc;                 // 总加速度
    double gps_week;            // GPS周
    double gps_ms;              // GPS毫秒
    
    // ROS时间戳
    uint64_t header_sec;        // 头部时间戳秒
    uint32_t header_nanosec;    // 头部时间戳纳秒
    int64_t gps_time;           // GPS时间戳
    
    // 位置信息
    double PosLon;              // 经度
    double PosLat;              // 纬度
    double PosAlt;              // 高度
    
    // GNSS位置信息（备份）
    double lat_g;               // GNSS纬度
    double lon_g;               // GNSS经度
    double alt_g;               // GNSS高度
    
    // 速度信息
    double east_speed_g;        // GNSS东向速度
    double north_speed_g;       // GNSS北向速度
    double up_speed_g;          // GNSS天向速度
    double VelE;                // 东向速度
    double VelN;                // 北向速度
    double VelU;                // 天向速度
    double Vel;                 // 车辆总速度
    double heading_g;           // GNSS航向角
    
    // 姿态角度
    double AngleHeading;        // 偏航角（-180-180）
    double AnglePitch;          // 俯仰角（-90-90）
    double AngleRoll;           // 横滚角（-180-180）
    
    // 系统状态
    int32_t system_state;       // 惯导模式
    int32_t GpsNumSatsUsed;     // 使用卫星数
    int32_t satellite_status;   // 卫星状态
    double GpsAge;              // 差分延时
    bool state;                 // 设备状态
    
    // UTM坐标
    double posX;                // UTM坐标X
    double posY;                // UTM坐标Y
    double posZ;                // UTM坐标Z（高程）
    
    double process_time;        // 进程处理时间
    bool Gps_Cfault;            // 惯导通信故障
    
    // SLAM数据
    double x;                   // SLAM X坐标
    double y;                   // SLAM Y坐标
    double z;                   // SLAM Z坐标
    double pitch;               // SLAM俯仰角
    double roll;                // SLAM横滚角
    double yaw;                 // SLAM偏航角
    double vel;                 // SLAM速度
    double lat;                 // SLAM纬度
    double lon;                 // SLAM经度
    bool state_ndt;             // NDT状态
    
    bool data_ready;            // 数据就绪标志
};

class GPSReader
{
private:
    ros::NodeHandle nh_;
    ros::Publisher gps_pub_;
    ros::Timer timer_;
    
    int shm_id_;
    int sem_id_;
    GpsImuSharedData* shm_ptr_;
    
public:
    GPSReader() : nh_("~"), shm_ptr_(nullptr)
    {
        // 创建发布者
        gps_pub_ = nh_.advertise<car_interfaces::GpsImuInterface>("/gps_imu_data", 10);
        
        // 初始化共享内存
        initSharedMemory();
        
        // 创建定时器，10Hz频率读取数据
        timer_ = nh_.createTimer(ros::Duration(0.1), &GPSReader::timerCallback, this);
        
        ROS_INFO("GPS Reader initialized");
    }
    
    ~GPSReader()
    {
        cleanup();
    }
    
private:
    void initSharedMemory()
    {
        // 创建共享内存和信号量的键
        key_t shm_key = ftok("/tmp", 'G');  // 'G' for GPS
        key_t sem_key = ftok("/tmp", 'g');  // 'g' for GPS semaphore
        
        if (shm_key == -1 || sem_key == -1) {
            ROS_ERROR("Failed to create keys");
            return;
        }
        
        // 获取共享内存段
        shm_id_ = shmget(shm_key, sizeof(GpsImuSharedData), 0666);
        if (shm_id_ == -1) {
            ROS_ERROR("Failed to get shared memory. Make sure ROS2 GPS writer is running first.");
            return;
        }
        
        // 附加到共享内存
        shm_ptr_ = (GpsImuSharedData*)shmat(shm_id_, nullptr, 0);
        if (shm_ptr_ == (GpsImuSharedData*)-1) {
            ROS_ERROR("Failed to attach shared memory");
            return;
        }
        
        // 获取信号量
        sem_id_ = semget(sem_key, 1, 0666);
        if (sem_id_ == -1) {
            ROS_ERROR("Failed to get semaphore. Make sure ROS2 GPS writer is running first.");
            return;
        }
        
        ROS_INFO("Shared memory initialized for GPS data reading");
    }
    
    void timerCallback(const ros::TimerEvent&)
    {
        if (!shm_ptr_ || shm_ptr_ == (GpsImuSharedData*)-1) {
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
            // 创建GPS消息
            car_interfaces::GpsImuInterface gps_msg;
            
            // 设置header
            gps_msg.header.stamp.sec = shm_ptr_->header_sec;
            gps_msg.header.stamp.nsec = shm_ptr_->header_nanosec;
            gps_msg.header.frame_id = "gps_link";
            
            // 导航标志
            gps_msg.nav_flag = std::string(shm_ptr_->nav_flag);
            gps_msg.nav_flag_g = std::string(shm_ptr_->nav_flag_g);
            
            // 加速度和陀螺仪数据
            gps_msg.x_acc = shm_ptr_->x_acc;
            gps_msg.y_acc = shm_ptr_->y_acc;
            gps_msg.z_acc = shm_ptr_->z_acc;
            gps_msg.x_gyro = shm_ptr_->x_gyro;
            gps_msg.y_gyro = shm_ptr_->y_gyro;
            gps_msg.z_gyro = shm_ptr_->z_gyro;
            gps_msg.acc = shm_ptr_->acc;
            
            // GPS时间
            gps_msg.gps_week = shm_ptr_->gps_week;
            gps_msg.gps_ms = shm_ptr_->gps_ms;
            gps_msg.gps_time = shm_ptr_->gps_time;
            
            // 位置信息
            gps_msg.PosLon = shm_ptr_->PosLon;
            gps_msg.PosLat = shm_ptr_->PosLat;
            gps_msg.PosAlt = shm_ptr_->PosAlt;
            gps_msg.lat_g = shm_ptr_->lat_g;
            gps_msg.lon_g = shm_ptr_->lon_g;
            gps_msg.alt_g = shm_ptr_->alt_g;
            
            // 速度信息
            gps_msg.east_speed_g = shm_ptr_->east_speed_g;
            gps_msg.north_speed_g = shm_ptr_->north_speed_g;
            gps_msg.up_speed_g = shm_ptr_->up_speed_g;
            gps_msg.VelE = shm_ptr_->VelE;
            gps_msg.VelN = shm_ptr_->VelN;
            gps_msg.VelU = shm_ptr_->VelU;
            gps_msg.Vel = shm_ptr_->Vel;
            gps_msg.heading_g = shm_ptr_->heading_g;
            
            // 姿态角
            gps_msg.AngleHeading = shm_ptr_->AngleHeading;
            gps_msg.AnglePitch = shm_ptr_->AnglePitch;
            gps_msg.AngleRoll = shm_ptr_->AngleRoll;
            
            // 系统状态
            gps_msg.system_state = shm_ptr_->system_state;
            gps_msg.GpsNumSatsUsed = shm_ptr_->GpsNumSatsUsed;
            gps_msg.GpsAge = shm_ptr_->GpsAge;
            gps_msg.state = shm_ptr_->state;
            gps_msg.Gps_Cfault = shm_ptr_->Gps_Cfault;
            
            // UTM坐标
            gps_msg.posX = shm_ptr_->posX;
            gps_msg.posY = shm_ptr_->posY;
            gps_msg.posZ = shm_ptr_->posZ;
            
            // 处理时间
            gps_msg.process_time = shm_ptr_->process_time;
            
            // SLAM数据
            gps_msg.x = shm_ptr_->x;
            gps_msg.y = shm_ptr_->y;
            gps_msg.z = shm_ptr_->z;
            gps_msg.pitch = shm_ptr_->pitch;
            gps_msg.roll = shm_ptr_->roll;
            gps_msg.yaw = shm_ptr_->yaw;
            gps_msg.vel = shm_ptr_->vel;
            gps_msg.lat = shm_ptr_->lat;
            gps_msg.lon = shm_ptr_->lon;
            gps_msg.state_ndt = shm_ptr_->state_ndt;
            
            // 发布消息
            gps_pub_.publish(gps_msg);
            
            // 标记数据已读取
            shm_ptr_->data_ready = false;
            
            ROS_DEBUG("GPS data published from shared memory");
        }
        
        // 释放信号量锁
        sem_op.sem_op = 1;  // V操作（释放）
        semop(sem_id_, &sem_op, 1);
    }
    
    void cleanup()
    {
        if (shm_ptr_ && shm_ptr_ != (GpsImuSharedData*)-1) {
            shmdt(shm_ptr_);
            shm_ptr_ = nullptr;
        }
    }
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "gps_reader");
    
    try {
        GPSReader gps_reader;
        ros::spin();
    }
    catch (const std::exception& e) {
        ROS_ERROR("GPS Reader error: %s", e.what());
        return 1;
    }
    
    return 0;
}