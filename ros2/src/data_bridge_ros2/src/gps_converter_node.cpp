#include <rclcpp/rclcpp.hpp>
#include <car_interfaces/msg/gps_interface.hpp>
#include <geodesy/utm.h>
#include <geographic_msgs/msg/geo_point.hpp>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <cstring>
#include <iostream>
#include <cmath>
#include <chrono>


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

class GpsConverterNode : public rclcpp::Node
{
public:
    GpsConverterNode() : Node("gps_converter_node")
    {
        // 初始化共享内存
        setupSharedMemory();
        
        // 创建QoS配置
        auto qos = rclcpp::QoS(10)
            .reliability(rclcpp::ReliabilityPolicy::BestEffort)
            .durability(rclcpp::DurabilityPolicy::Volatile)
            .history(rclcpp::HistoryPolicy::KeepLast);
        
        // 创建订阅者，订阅ROS2的GPS话题
        subscription_ = this->create_subscription<car_interfaces::msg::GpsInterface>(
            "/gps_data", qos,
            std::bind(&GpsConverterNode::gpsCallback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "GPS Converter Node started, subscribing to /gps_data");
        RCLCPP_INFO(this->get_logger(), "Converting ROS2 car_interfaces/msg/GpsInterface to ROS1 GpsImuInterface");
    }
    
    ~GpsConverterNode()
    {
        cleanup();
    }

private:
    void setupSharedMemory()
    {
        // 创建共享内存键
        key_t shm_key = ftok("/tmp", 'G');  // 'G' for GPS
        key_t sem_key = ftok("/tmp", 'g');  // 'i' for IMU semaphore
        if (shm_key == -1 || sem_key == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory key");
            return;
        }
        
        // 创建共享内存段
        shm_id_ = shmget(shm_key, sizeof(GpsImuSharedData), IPC_CREAT | 0666);
        if (shm_id_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create shared memory segment");
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
        
        
        // 附加共享内存
        shared_data_ = static_cast<GpsImuSharedData*>(shmat(shm_id_, nullptr, 0));
        if (shared_data_ == reinterpret_cast<GpsImuSharedData*>(-1)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to attach shared memory");
            return;
        }
        
        // 初始化共享内存数据
        memset(shared_data_, 0, sizeof(GpsImuSharedData));
        
        RCLCPP_INFO(this->get_logger(), "GPS shared memory initialized successfully");
    }
    
    void cleanup()
    {
        if (shared_data_ && shared_data_ != reinterpret_cast<GpsImuSharedData*>(-1)) {
            shmdt(shared_data_);
        }
        if (shm_id_ != -1) {
            shmctl(shm_id_, IPC_RMID, nullptr);
        }
    }
    
    // 角度转换函数：将0-360度转换为-180到180度
    double convertAngleTo180Range(double angle_360) {
        if (angle_360 > 180.0) {
            return angle_360 - 360.0;
        }
        return angle_360;
    }
    
    // 计算总加速度
    double calculateTotalAcceleration(double ax, double ay, double az) {
        return sqrt(ax * ax + ay * ay + az * az);
    }
    
    // 计算总速度
    double calculateTotalVelocity(double east_vel, double north_vel, double up_vel) {
        return sqrt(east_vel * east_vel + north_vel * north_vel + up_vel * up_vel);
    }
    
    // 根据位置状态推断导航标志
    std::string inferNavigationFlag(double longitude, double latitude, double height) {
        // 简单的状态推断逻辑
        if (longitude == 0.0 && latitude == 0.0) {
            return "0";  // 定位无效
        } else if (height > 0.0) {
            return "4";  // RTK固定解（假设有高度信息表示较好的定位）
        } else {
            return "2";  // 差分定位
        }
    }
    
    // 推断系统状态
    int32_t inferSystemState(const std::string& nav_flag) {
        if (nav_flag == "0") return 0;      // 初始化
        else if (nav_flag == "1") return 1; // 卫导模式
        else if (nav_flag == "2" || nav_flag == "4" || nav_flag == "5") return 2; // 组合导航模式
        else return 3; // 纯惯导模式
    }
    
    // 推断卫星状态
    int32_t inferSatelliteStatus(const std::string& nav_flag) {
        if (nav_flag == "0") return 0;      // 不定位不定向
        else if (nav_flag == "1") return 1; // 单点定位定向
        else if (nav_flag == "2") return 2; // 伪距差分定位定向
        else if (nav_flag == "4") return 4; // RTK稳定解定位定向
        else if (nav_flag == "5") return 5; // RTK浮点解定位定向
        else return 6; // 单点定位不定向
    }
    
    // 使用geodesy功能包进行经纬度到UTM坐标转换
    void convertLatLonToUTM(double lat, double lon, double& utm_x, double& utm_y) {
        // 创建地理坐标点
        geographic_msgs::msg::GeoPoint geo_point;
        geo_point.latitude = lat;
        geo_point.longitude = lon;
        geo_point.altitude = 0.0; // 高度设为0，因为我们只需要平面坐标
        
        // 转换为UTM坐标
        geodesy::UTMPoint utm_point(geo_point);
        
        utm_x = utm_point.easting;
        utm_y = utm_point.northing;
        
        RCLCPP_DEBUG(this->get_logger(), 
                    "Converted lat/lon (%.6f, %.6f) to UTM (%.2f, %.2f) in zone %d%c",
                    lat, lon, utm_x, utm_y, utm_point.zone, utm_point.band);
    }
    
    // GPS时间转换
    void convertToGpsTime(double timestamp, double& gps_week, double& gps_ms) {
        // GPS时间从1980年1月6日开始计算
        const double GPS_EPOCH = 315964800.0; // 1980年1月6日的Unix时间戳
        const double SECONDS_PER_WEEK = 604800.0; // 一周的秒数
        
        double gps_seconds = timestamp - GPS_EPOCH;
        gps_week = floor(gps_seconds / SECONDS_PER_WEEK);
        gps_ms = (gps_seconds - gps_week * SECONDS_PER_WEEK) * 1000.0;
    }
    
    void gpsCallback(const car_interfaces::msg::GpsInterface::SharedPtr msg)
    {
        if (!shared_data_) {
            RCLCPP_ERROR(this->get_logger(), "Shared memory not initialized");
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
        
        auto start_time = std::chrono::high_resolution_clock::now();
        
        // 推断导航状态标志
        std::string nav_flag = inferNavigationFlag(msg->longitude, msg->latitude, msg->height);
        strncpy(shared_data_->nav_flag, nav_flag.c_str(), sizeof(shared_data_->nav_flag) - 1);
        strncpy(shared_data_->nav_flag_g, nav_flag.c_str(), sizeof(shared_data_->nav_flag_g) - 1);
        
        // IMU数据映射
        shared_data_->x_acc = msg->ax;
        shared_data_->y_acc = msg->ay;
        shared_data_->z_acc = msg->az;
        shared_data_->x_gyro = msg->wx;
        shared_data_->y_gyro = msg->wy;
        shared_data_->z_gyro = msg->wz;
        
        // 计算总加速度
        shared_data_->acc = calculateTotalAcceleration(msg->ax, msg->ay, msg->az);
        
        // GPS时间转换
        convertToGpsTime(msg->timestamp, shared_data_->gps_week, shared_data_->gps_ms);
        
        // ROS时间戳
        // auto now = this->get_clock()->now();
        // shared_data_->header_sec = now.seconds();
        // shared_data_->header_nanosec = now.nanoseconds() % 1000000000;
        // shared_data_->gps_time = static_cast<int64_t>(msg->timestamp * 1000000000); // 转换为纳秒
        // ROS时间戳 - 使用msg中的时间戳
        // msg->timestamp 是 double 类型 (秒)，先转换为总纳秒数以保持精度和一致性
        int64_t total_nanoseconds = static_cast<int64_t>(msg->timestamp * 1e9);
        shared_data_->header_sec = static_cast<uint64_t>(total_nanoseconds / 1000000000);
        shared_data_->header_nanosec = static_cast<uint32_t>(total_nanoseconds % 1000000000);
        shared_data_->gps_time = total_nanoseconds; // 保持一致
        
        // 位置信息
        shared_data_->PosLon = msg->longitude;
        shared_data_->PosLat = msg->latitude;
        shared_data_->PosAlt = msg->height;
        
        // GNSS位置信息（备份）
        shared_data_->lat_g = msg->latitude;
        shared_data_->lon_g = msg->longitude;
        shared_data_->alt_g = msg->height;
        
        // 速度信息
        shared_data_->east_speed_g = msg->eastvelocity;
        shared_data_->north_speed_g = msg->northvelocity;
        shared_data_->up_speed_g = msg->skyvelocity;
        shared_data_->VelE = msg->eastvelocity;
        shared_data_->VelN = msg->northvelocity;
        shared_data_->VelU = msg->skyvelocity;
        shared_data_->Vel = calculateTotalVelocity(msg->eastvelocity, msg->northvelocity, msg->skyvelocity);
        
        // 姿态角度转换
        shared_data_->AngleHeading = msg->yaw;
        shared_data_->AnglePitch = msg->pitch;
        shared_data_->AngleRoll = msg->roll;
        shared_data_->heading_g = msg->yaw;
        
        // 系统状态推断
        shared_data_->system_state = inferSystemState(nav_flag);
        shared_data_->satellite_status = inferSatelliteStatus(nav_flag);
        
        // 默认值设置
        shared_data_->GpsNumSatsUsed = 12; // 假设使用12颗卫星
        shared_data_->GpsAge = 0.1;        // 假设差分延时0.1秒
        shared_data_->state = true;        // 设备状态正常
        
        // UTM坐标转换
        convertLatLonToUTM(msg->latitude, msg->longitude, shared_data_->posX, shared_data_->posY);
        shared_data_->posZ = msg->height;
        
        // 进程处理时间
        shared_data_->process_time = msg->process_time;
        shared_data_->Gps_Cfault = false; // 假设通信正常
        
        // SLAM数据（使用GPS数据填充）
        shared_data_->x = shared_data_->posX;
        shared_data_->y = shared_data_->posY;
        shared_data_->z = shared_data_->posZ;
        shared_data_->pitch = msg->pitch;
        shared_data_->roll = msg->roll;
        shared_data_->yaw = msg->yaw;
        shared_data_->vel = shared_data_->Vel;
        shared_data_->lat = msg->latitude;
        shared_data_->lon = msg->longitude;
        shared_data_->state_ndt = true; // 假设NDT状态正常
        
        // 标记数据就绪
        shared_data_->data_ready = true;
        
        // 计算处理时间
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
        // 释放信号量锁
        sem_op.sem_op = 1;  // V操作（释放）
        semop(sem_id_, &sem_op, 1);
        RCLCPP_DEBUG(this->get_logger(), 
            "GPS data converted: Lat=%.6f, Lon=%.6f, Heading=%.2f, Processing time: %.3f ms",
            msg->latitude, msg->longitude, msg->yaw, duration.count() / 1000.0);
    }
    
    rclcpp::Subscription<car_interfaces::msg::GpsInterface>::SharedPtr subscription_;
    GpsImuSharedData* shared_data_ = nullptr;
    int shm_id_ = -1;
    int sem_id_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<GpsConverterNode>();
    
    RCLCPP_INFO(node->get_logger(), "GPS Converter Node is running...");
    
    rclcpp::spin(node);
    
    rclcpp::shutdown();
    return 0;
}