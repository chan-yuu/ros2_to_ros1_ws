/*
 * @Author: XWY CYUN
 * @Date: 2024-09-11 15:26:04
 * @LastEditors: CYUN && cyun@tju.enu.cn
 * @LastEditTime: 2025-01-08 17:27:22
 * @FilePath: /undefined/media/cyun/Ventoy/夹抱车/1.7/src/ndt_localizer/src/ndt.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Tianjin University, All Rights Reserved. 
 */
#include "ndt.h"
#include <std_msgs/Int32.h>

// 全局变量定义
car_interfaces::GpsImuInterface map_msg;
bool speedZero = false;
double speed = 0;
double initYaw_=0;
double initYaw=0;
bool initPose = true;
bool flag_location = false;

double angle =0;


// 角度转换函数，将角度转换为地图坐标系中的角度表示
double angle_2_angle(double angle) {
    double convert_angle = angle-90;
    while(convert_angle<-180) convert_angle = convert_angle+360;
    while(convert_angle>180) convert_angle = convert_angle-360;
     return -convert_angle;
}

// 速度和方向回调函数
void oriCallback(const car_interfaces::CarOriInterfaceConstPtr& msg) {
    if(msg->Car_Speed==0) speedZero=true;
    else speedZero=false;
    map_msg.vel = msg->Car_Speed;
}

// 初始化位置回调函数
void initCallback(const std_msgs::Int32ConstPtr& msg) {
    if(msg->data==1) {
        initPose = false;
    }
}

// GPS数据回调函数
void poseCallback(const car_interfaces::GpsImuInterfaceConstPtr& msg) {
   angle = angle_2_angle(msg->AngleHeading);
}


// NDT定位类构造函数
NdtLocalizer::NdtLocalizer(ros::NodeHandle &nh, ros::NodeHandle &private_nh):nh_(nh), private_nh_(private_nh), tf2_listener_(tf2_buffer_) {
    // 初始化状态和参数
    // key_value_stdmap_["state"] = "Initializing";
    init_params();

    // 根据定位模式订阅不同的初始位置话题
    if(location_mode==0) {
        initial_pose_sub_ = nh_.subscribe("initialpose", 100, &NdtLocalizer::callback_init_pose, this);
    } else {
        initial_pose_sub_ = nh_.subscribe("gps_in_ndt_map", 100, &NdtLocalizer::callback_init_pose_gps, this);
    }
    map_points_sub_ = nh_.subscribe("points_map", 1, &NdtLocalizer::callback_pointsmap, this);
    sensor_points_sub_ = nh_.subscribe("filtered_points", 1, &NdtLocalizer::callback_pointcloud, this);
    map_pub = nh_.advertise<car_interfaces::GpsImuInterface>("map_pose", 1);
    // diagnostic_thread_ = std::thread(&NdtLocalizer::timer_diagnostic, this);
    // diagnostic_thread_.detach();
    ndt_pose_pub_ = nh_.advertise<geometry_msgs::PoseStamped>("ndt_pose", 1);
}

// NDT定位类析构函数
NdtLocalizer::~NdtLocalizer() {}

// GPS初始位置回调函数
void NdtLocalizer::callback_init_pose_gps(const geometry_msgs::PoseStamped::ConstPtr& initial_pose_msg_ptr) {
    // 处理GPS初始位置信息
    if (initial_pose_msg_ptr->header.frame_id == map_frame_) {
        initial_pose_cov_msg_gps = *initial_pose_msg_ptr;
    } else {
        // 获取坐标变换
        geometry_msgs::TransformStamped::Ptr TF_pose_to_map_ptr(new geometry_msgs::TransformStamped);
        get_transform(map_frame_, initial_pose_msg_ptr->header.frame_id, TF_pose_to_map_ptr);

        // 坐标变换
        geometry_msgs::PoseStamped::Ptr mapTF_initial_pose_msg_ptr(
          new geometry_msgs::PoseStamped);
        tf2::doTransform(*initial_pose_msg_ptr, *mapTF_initial_pose_msg_ptr, *TF_pose_to_map_ptr);
        initial_pose_cov_msg_gps = *mapTF_initial_pose_msg_ptr;
    }
    // 初始化位置
    init_pose = false;
    tf2::Quaternion quat;
    tf2::fromMsg(initial_pose_cov_msg_gps.pose.orientation,quat);
    double roll,pitch,yaw;
    tf2::Matrix3x3(quat).getRPY(roll,pitch,yaw);
    initYaw_ = yaw*180/M_PI;
    if(initYaw_<=0)   initYaw_ = initYaw_+360;
}

// 初始位置回调函数
void NdtLocalizer::callback_init_pose(
  const geometry_msgs::PoseWithCovarianceStamped::ConstPtr & initial_pose_msg_ptr) {
    // 处理初始位置信息
    if (initial_pose_msg_ptr->header.frame_id == map_frame_) {
        initial_pose_cov_msg_ = *initial_pose_msg_ptr;
    } else {
        // 获取坐标变换
        geometry_msgs::TransformStamped::Ptr TF_pose_to_map_ptr(new geometry_msgs::TransformStamped);
        get_transform(map_frame_, initial_pose_msg_ptr->header.frame_id, TF_pose_to_map_ptr);

        // 坐标变换
        geometry_msgs::PoseWithCovarianceStamped::Ptr mapTF_initial_pose_msg_ptr(
          new geometry_msgs::PoseWithCovarianceStamped);
        tf2::doTransform(*initial_pose_msg_ptr, *mapTF_initial_pose_msg_ptr, *TF_pose_to_map_ptr);
        initial_pose_cov_msg_ = *mapTF_initial_pose_msg_ptr;
    }
    // 初始化位置
    init_pose = false;
    tf2::Quaternion quat;
    tf2::fromMsg(initial_pose_cov_msg_.pose.pose.orientation,quat);
    double roll,pitch,yaw;
    tf2::Matrix3x3(quat).getRPY(roll,pitch,yaw);
    initYaw_ = yaw*180/M_PI;
    if(initYaw_<=0)   initYaw_ = initYaw_+360;
}

// 地图点云回调函数
void NdtLocalizer::callback_pointsmap(
  const sensor_msgs::PointCloud2::ConstPtr & map_points_msg_ptr) {
    // 处理地图点云信息
    const auto trans_epsilon = ndt_.getTransformationEpsilon();
    const auto step_size = ndt_.getStepSize();
    const auto resolution = ndt_.getResolution();
    const auto max_iterations = ndt_.getMaximumIterations();

    pcl::NormalDistributionsTransform<pcl::PointXYZ, pcl::PointXYZ> ndt_new;

    ndt_new.setTransformationEpsilon(trans_epsilon);
    ndt_new.setStepSize(step_size);
    ndt_new.setResolution(resolution);
    ndt_new.setMaximumIterations(max_iterations);

    pcl::PointCloud<pcl::PointXYZ>::Ptr map_points_ptr(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::fromROSMsg(*map_points_msg_ptr, *map_points_ptr);
    ndt_new.setInputTarget(map_points_ptr);
    // create Thread
    // detach
    pcl::PointCloud<pcl::PointXYZ>::Ptr output_cloud(new pcl::PointCloud<pcl::PointXYZ>);
    ndt_new.align(*output_cloud, Eigen::Matrix4f::Identity());

    // swap
    ndt_map_mtx_.lock();
    ndt_ = ndt_new;
    ndt_map_mtx_.unlock();
}

// 旋转矩阵转换为四元数函数
Eigen::Quaternionf rotationMatrix2Quaternionf(Eigen::Matrix3f R) {
    Eigen::Quaternionf q = Eigen::Quaternionf(R);
    q.normalize();
    return q;
}


void NdtLocalizer::callback_pointcloud(const sensor_msgs::PointCloud2::ConstPtr& sensor_points_sensorTF_msg_ptr) {
    // Store the received point cloud data for later processing in the main loop.
    sensorPointsSensorTF = *sensor_points_sensorTF_msg_ptr;
}


void NdtLocalizer::processPointCloudData() {
    if (!sensorPointsSensorTF.data.empty()) {
      const auto exe_start_time = std::chrono::system_clock::now();
        // mutex Map
        std::lock_guard<std::mutex> lock(ndt_map_mtx_);

        const std::string sensor_frame = sensorPointsSensorTF.header.frame_id;
        const auto sensor_ros_time = sensorPointsSensorTF.header.stamp;

        boost::shared_ptr<pcl::PointCloud<pcl::PointXYZ>> sensor_points_sensorTF_ptr(
            new pcl::PointCloud<pcl::PointXYZ>);

        pcl::fromROSMsg(sensorPointsSensorTF, *sensor_points_sensorTF_ptr);
        // get TF base to sensor
        geometry_msgs::TransformStamped::Ptr TF_base_to_sensor_ptr(new geometry_msgs::TransformStamped);
        get_transform(base_frame_, sensor_frame, TF_base_to_sensor_ptr);

        const Eigen::Affine3d base_to_sensor_affine = tf2::transformToEigen(*TF_base_to_sensor_ptr);
        const Eigen::Matrix4f base_to_sensor_matrix = base_to_sensor_affine.matrix().cast<float>();

        boost::shared_ptr<pcl::PointCloud<pcl::PointXYZ>> sensor_points_baselinkTF_ptr(
            new pcl::PointCloud<pcl::PointXYZ>);
        pcl::transformPointCloud(
            *sensor_points_sensorTF_ptr, *sensor_points_baselinkTF_ptr, base_to_sensor_matrix);

        // set input point cloud
        ndt_.setInputSource(sensor_points_baselinkTF_ptr);

        if (ndt_.getInputTarget() == nullptr) {
            ROS_WARN_STREAM_THROTTLE(1, "No MAP!");
            return;
        }
        // align
        Eigen::Matrix4f initial_pose_matrix;

        if (location_mode == 0) {
            if (!init_pose && initPose) {
                Eigen::Affine3d initial_pose_affine;
                tf2::fromMsg(initial_pose_cov_msg_.pose.pose, initial_pose_affine);
                initial_pose_matrix = initial_pose_affine.matrix().cast<float>();
                // for the first time, we don't know the pre_trans, so just use the init_trans,
                // which means, the delta trans for the second time is 0
                pre_trans = initial_pose_matrix;
                init_pose = true;
            }
            else {
                // use predicted pose as init guess (currently we only impl linear model)
                initial_pose_matrix = pre_trans * delta_trans;
            }
        }
        else {
            if (!init_pose && initPose) {
                Eigen::Affine3d initial_pose_affine;
                tf2::fromMsg(initial_pose_cov_msg_gps.pose, initial_pose_affine);
                initial_pose_matrix = initial_pose_affine.matrix().cast<float>();
                // for the first time, we don't know the pre_trans, so just use the init_trans,
                // which means, the delta trans for the second time is 0
                pre_trans = initial_pose_matrix;
                init_pose = true;
            }
            else {
                // use predicted pose as init guess (currently we only impl linear model)
                initial_pose_matrix = pre_trans * delta_trans;
            }
        }


        pcl::PointCloud<pcl::PointXYZ>::Ptr output_cloud(new pcl::PointCloud<pcl::PointXYZ>);
        // const auto align_start_time = std::chrono::system_clock::now();
        // key_value_stdmap_["state"] = "Aligning";
        ndt_.align(*output_cloud, initial_pose_matrix);
        // key_value_stdmap_["state"] = "Sleeping";
        // const auto align_end_time = std::chrono::system_clock::now();
        // const double align_time = std::chrono::duration_cast<std::chrono::microseconds>(align_end_time - align_start_time).count() / 1000.0;

        const Eigen::Matrix4f result_pose_matrix = ndt_.getFinalTransformation();
        Eigen::Affine3d result_pose_affine;
        result_pose_affine.matrix() = result_pose_matrix.cast<double>();
        const geometry_msgs::Pose result_pose_msg = tf2::toMsg(result_pose_affine);

        const float transform_probability = ndt_.getTransformationProbability();
        const int iteration_num = ndt_.getFinalNumIteration();
        // ROS_INFO_STREAM("transform_probability: " << transform_probability);
        // ROS_INFO_STREAM("iteration_num: " << iteration_num);

        bool is_converged = true;
        static size_t skipping_publish_num = 0;

        static int print_count = 0; //
        ROS_WARN_ONCE("\033[1;32m Start Localization");
        if (iteration_num >= ndt_.getMaximumIterations() + 2 ||
            transform_probability < converged_param_transform_probability_) {
            is_converged = false;
            ++skipping_publish_num;
            // ROS_INFO_STREAM("\033[1;31m Not Converged!!! : ");
            // flag_location = true;
            print_count++;
            if (print_count >= 10) {
                ROS_INFO_STREAM("\033[1;31m Not Converged!!! : ");
                print_count = 0;
            }
        }
        else {
            skipping_publish_num = 0;
            print_count++;
            if (print_count >= 10) {
                ROS_INFO_STREAM("\033[1;32m init localization success!!! : ");
                print_count = 0;
            }
        }
        // calculate the delta tf from pre_trans to current_trans
        delta_trans = pre_trans.inverse() * result_pose_matrix;

        pre_trans = result_pose_matrix;

        map_msg.header.stamp = sensor_ros_time;
        map_msg.header.frame_id = "map";

        Eigen::Vector3f map_translation = result_pose_matrix.block<3, 1>(0, 3);
        map_msg.x = map_translation(0);
        map_msg.y = map_translation(1);
        map_msg.z = map_translation(2);

        map_msg.AngleHeading = angle;
        // publish
        geometry_msgs::PoseStamped result_pose_stamped_msg;
        result_pose_stamped_msg.header.stamp = sensor_ros_time;
        result_pose_stamped_msg.header.frame_id = map_frame_;
        result_pose_stamped_msg.pose = result_pose_msg;

        tf2::Quaternion quat;
        tf2::fromMsg(result_pose_msg.orientation, quat);
        double roll, pitch, yaw;
        tf2::Matrix3x3(quat).getEulerYPR(yaw, pitch, roll);
        map_msg.pitch = pitch * 180 / M_PI;
        map_msg.roll = roll * 180 / M_PI;
        map_msg.yaw = yaw * 180 / M_PI;

        if (map_msg.yaw < 0) map_msg.yaw = map_msg.yaw + 360;

        if (is_converged) {
            ndt_pose_pub_.publish(result_pose_stamped_msg);
            map_pub.publish(map_msg);
        }

        // publish tf(map frame to base frame)
        if(location_gps){
            ROS_INFO_ONCE("gps mode is running");
        }
        else{
            publish_tf(map_frame_, base_frame_, result_pose_stamped_msg);
        }

        const auto exe_end_time = std::chrono::system_clock::now();
        const double exe_time = std::chrono::duration_cast<std::chrono::microseconds>(exe_end_time - exe_start_time).count() / 1000.0;
        
        static int count = 0;
        if (count % 10 == 0) {
            std::cout << "Execution time: " << exe_time << "ms" << std::endl;
        }
        count++;
    }
}

void NdtLocalizer::init_params() {
  // 获取参数
  private_nh_.getParam("base_frame", base_frame_);
  ROS_INFO("base_frame_id: %s", base_frame_.c_str());
  nh_.getParam("location_mode", location_mode);
  ROS_INFO("location_mode: %d", location_mode);
  double trans_epsilon = ndt_.getTransformationEpsilon();
  double step_size = ndt_.getStepSize();
  double resolution = ndt_.getResolution();
  int max_iterations = ndt_.getMaximumIterations();

  private_nh_.getParam("trans_epsilon", trans_epsilon);
  private_nh_.getParam("step_size", step_size);
  private_nh_.getParam("resolution", resolution);
  private_nh_.getParam("max_iterations", max_iterations);
  nh_.getParam("location_gps", location_gps);
  ROS_INFO("location_gps: %d", location_gps);

  map_frame_ = "map";

  ndt_.setTransformationEpsilon(trans_epsilon);
  ndt_.setStepSize(step_size);
  ndt_.setResolution(resolution);
  ndt_.setMaximumIterations(max_iterations);

  ROS_INFO(
      "trans_epsilon: %lf, step_size: %lf, resolution: %lf, max_iterations: %d", trans_epsilon,
      step_size, resolution, max_iterations);

  private_nh_.getParam(
      "converged_param_transform_probability", converged_param_transform_probability_);
}

// // 获取坐标变换函数
// bool NdtLocalizer::get_transform(
//   const std::string & target_frame, const std::string & source_frame,
//   const geometry_msgs::TransformStamped::Ptr & transform_stamped_ptr, const ros::Time & time_stamp)
// {
//   // 如果目标帧和源帧相同，直接设置变换为单位变换
//   if (target_frame == source_frame) {
//     transform_stamped_ptr->header.stamp = time_stamp;
//     transform_stamped_ptr->header.frame_id = target_frame;
//     transform_stamped_ptr->child_frame_id = source_frame;
//     transform_stamped_ptr->transform.translation.x = 0.0;
//     transform_stamped_ptr->transform.translation.y = 0.0;
//     transform_stamped_ptr->transform.translation.z = 0.0;
//     transform_stamped_ptr->transform.rotation.x = 0.0;
//     transform_stamped_ptr->transform.rotation.y = 0.0;
//     transform_stamped_ptr->transform.rotation.z = 0.0;
//     transform_stamped_ptr->transform.rotation.w = 1.0;
//     return true;
//   }

//   try {
//     // 尝试获取坐标变换
//     *transform_stamped_ptr =
//       tf2_buffer_.lookupTransform(target_frame, source_frame, time_stamp);
//   } catch (tf2::TransformException & ex) {
//     ROS_WARN("%s", ex.what());
//     ROS_ERROR("Please publish TF %s to %s", target_frame.c_str(), source_frame.c_str());

//     transform_stamped_ptr->header.stamp = time_stamp;
//     transform_stamped_ptr->header.frame_id = target_frame;
//     transform_stamped_ptr->child_frame_id = source_frame;
//     transform_stamped_ptr->transform.translation.x = 0.0;
//     transform_stamped_ptr->transform.translation.y = 0.0;
//     transform_stamped_ptr->transform.translation.z = 0.0;
//     transform_stamped_ptr->transform.rotation.x = 0.0;
//     transform_stamped_ptr->transform.rotation.y = 0.0;
//     transform_stamped_ptr->transform.rotation.z = 0.0;
//     transform_stamped_ptr->transform.rotation.w = 1.0;
//     return false;
//   }
//   return true;
// }

// 获取坐标变换函数（无时间戳）
bool NdtLocalizer::get_transform(
  const std::string & target_frame, const std::string & source_frame,
  const geometry_msgs::TransformStamped::Ptr & transform_stamped_ptr)
{
  if (target_frame == source_frame) {
    transform_stamped_ptr->header.stamp = ros::Time::now();
    transform_stamped_ptr->header.frame_id = target_frame;
    transform_stamped_ptr->child_frame_id = source_frame;
    transform_stamped_ptr->transform.translation.x = 0.0;
    transform_stamped_ptr->transform.translation.y = 0.0;
    transform_stamped_ptr->transform.translation.z = 0.0;
    transform_stamped_ptr->transform.rotation.x = 0.0;
    transform_stamped_ptr->transform.rotation.y = 0.0;
    transform_stamped_ptr->transform.rotation.z = 0.0;
    transform_stamped_ptr->transform.rotation.w = 1.0;
    return true;
  }

  try {
    *transform_stamped_ptr =
      tf2_buffer_.lookupTransform(target_frame, source_frame, ros::Time(0), ros::Duration(1.0));
  } catch (tf2::TransformException & ex) {
    ROS_WARN("%s", ex.what());
    ROS_ERROR("Please publish TF %s to %s", target_frame.c_str(), source_frame.c_str());

    transform_stamped_ptr->header.stamp = ros::Time::now();
    transform_stamped_ptr->header.frame_id = target_frame;
    transform_stamped_ptr->child_frame_id = source_frame;
    transform_stamped_ptr->transform.translation.x = 0.0;
    transform_stamped_ptr->transform.translation.y = 0.0;
    transform_stamped_ptr->transform.translation.z = 0.0;
    transform_stamped_ptr->transform.rotation.x = 0.0;
    transform_stamped_ptr->transform.rotation.y = 0.0;
    transform_stamped_ptr->transform.rotation.z = 0.0;
    transform_stamped_ptr->transform.rotation.w = 1.0;
    return false;
  }
  return true;
}

// 发布坐标变换
void NdtLocalizer::publish_tf(
  const std::string & frame_id, const std::string & child_frame_id,
  const geometry_msgs::PoseStamped & pose_msg)
{
  // 创建坐标变换信息
  geometry_msgs::TransformStamped transform_stamped;
  transform_stamped.header.frame_id = frame_id;
  transform_stamped.child_frame_id = child_frame_id;
  transform_stamped.header.stamp = pose_msg.header.stamp;

  transform_stamped.transform.translation.x = pose_msg.pose.position.x;
  transform_stamped.transform.translation.y = pose_msg.pose.position.y;
  transform_stamped.transform.translation.z = pose_msg.pose.position.z;

  tf2::Quaternion tf_quaternion;
  tf2::fromMsg(pose_msg.pose.orientation, tf_quaternion);
  transform_stamped.transform.rotation.x = tf_quaternion.x();
  transform_stamped.transform.rotation.y = tf_quaternion.y();
  transform_stamped.transform.rotation.z = tf_quaternion.z();
  transform_stamped.transform.rotation.w = tf_quaternion.w();

  tf2_broadcaster_.sendTransform(transform_stamped);
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "ndt_localizer");
  ros::NodeHandle nh;
  ros::NodeHandle private_nh("~");
  
  NdtLocalizer ndt_localizer(nh, private_nh);
  // 订阅初始化位置话题
  ros::Subscriber init_sub = nh.subscribe<std_msgs::Int32>("/plan_flag", 10, initCallback);
  ros::Subscriber ori_sub = nh.subscribe<car_interfaces::CarOriInterface>("/car_ori_data", 10, oriCallback);
  ros::Subscriber gps_sub = nh.subscribe<car_interfaces::GpsImuInterface>("/gps_imu", 10, poseCallback);
  // 进入ROS循环

  ros::Rate rate(10);
  while (ros::ok()) {
      ndt_localizer.processPointCloudData();
      ros::spinOnce();
      rate.sleep();
  }
  // ros::spin();
  return 0;
}
