/*
 * @Author: CYUN && cyun@tju.enu.cn
 * @Date: 2025-01-05 22:50:57
 * @LastEditors: CYUN && cyun@tju.enu.cn
 * @LastEditTime: 2025-01-05 23:13:00
 * @FilePath: /undefined/home/cyun/Documents/lidar_ws/src/ndt_localizer/src/points_downsampler.cpp
 * @Description: 
 * 
 * Copyright (c) 2025 by Tianjin University, All Rights Reserved. 
 */
#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>

#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>

// #include "points_downsampler.h"

#define MAX_MEASUREMENT_RANGE 80.0

ros::Publisher filtered_points_pub;

// Leaf size of VoxelGrid filter.
static double voxel_leaf_size = 0.0;

static bool _output_log = false;
static std::ofstream ofs;
static std::string filename;

static std::string POINTS_TOPIC;

static pcl::PointCloud<pcl::PointXYZ> removePointsByRange(pcl::PointCloud<pcl::PointXYZ> scan, double min_range, double max_range)
{
  pcl::PointCloud<pcl::PointXYZ> narrowed_scan;
  narrowed_scan.header = scan.header;

  if (min_range >= max_range) {
    ROS_ERROR_ONCE("min_range>=max_range @(%lf, %lf)", min_range, max_range);
    return scan;
  }

  double square_min_range = min_range * min_range;
  double square_max_range = max_range * max_range;

  // 打印原始点云数量
  // ROS_INFO("Original point cloud size: %zu", scan.size());

  for (pcl::PointCloud<pcl::PointXYZ>::const_iterator iter = scan.begin(); iter != scan.end(); ++iter)
  {
    const pcl::PointXYZ &p = *iter;
    double square_distance = p.x * p.x + p.y * p.y;

    if (square_min_range <= square_distance && square_distance <= square_max_range) {
      narrowed_scan.points.push_back(p);
    }
  }

  // 打印范围筛选后点云数量
  // ROS_INFO("Narrowed point cloud size: %zu", narrowed_scan.size());

  return narrowed_scan;
}

static void scan_callback(const sensor_msgs::PointCloud2::ConstPtr& input)
{
  pcl::PointCloud<pcl::PointXYZ> scan;
  pcl::fromROSMsg(*input, scan);

  // 移除超出范围的点并打印点数
  scan = removePointsByRange(scan, 0, MAX_MEASUREMENT_RANGE);

  pcl::PointCloud<pcl::PointXYZ>::Ptr scan_ptr(new pcl::PointCloud<pcl::PointXYZ>(scan));
  pcl::PointCloud<pcl::PointXYZ>::Ptr filtered_scan_ptr(new pcl::PointCloud<pcl::PointXYZ>());

  // 打印范围筛选后点云数量（与上面的输出相同，但为了完整性保留）
  // ROS_INFO("After range filtering point cloud size: %zu", scan_ptr->size());

  sensor_msgs::PointCloud2 filtered_msg;

  // 如果 voxel_leaf_size < 0.1 voxel_grid_filter 不能下采样 (PCL 规范)
  if (voxel_leaf_size >= 0.1)
  {
    // 下采样 Velodyne 扫描使用 VoxelGrid 滤波器
    pcl::VoxelGrid<pcl::PointXYZ> voxel_grid_filter;
    voxel_grid_filter.setLeafSize(voxel_leaf_size, voxel_leaf_size, voxel_leaf_size);
    voxel_grid_filter.setInputCloud(scan_ptr);
    
    // 应用滤波器之前再次打印点数
    // ROS_INFO("Before VoxelGrid filter point cloud size: %zu", scan_ptr->size());

    voxel_grid_filter.filter(*filtered_scan_ptr);

    // 应用滤波器之后打印点数
    // ROS_INFO("After VoxelGrid filter point cloud size: %zu", filtered_scan_ptr->size());

    pcl::toROSMsg(*filtered_scan_ptr, filtered_msg);
  }
  else
  {
    // 如果不进行下采样，则直接转换为 ROS 消息并打印点数
    pcl::toROSMsg(*scan_ptr, filtered_msg);
    // ROS_INFO("No VoxelGrid filtering applied, point cloud size: %zu", scan_ptr->size());
  }

  filtered_msg.header = input->header;
  filtered_points_pub.publish(filtered_msg);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "voxel_grid_filter");

  ros::NodeHandle nh;
  ros::NodeHandle private_nh("~");

  private_nh.getParam("points_topic", POINTS_TOPIC);
  private_nh.getParam("output_log", _output_log);

  private_nh.param<double>("leaf_size", voxel_leaf_size, 0.1);
  ROS_INFO_STREAM("Voxel leaf size is: "<<voxel_leaf_size);
  if(_output_log == true){
	  char buffer[80];
	  std::time_t now = std::time(NULL);
	  std::tm *pnow = std::localtime(&now);
	  std::strftime(buffer,80,"%Y%m%d_%H%M%S",pnow);
	  filename = "voxel_grid_filter_" + std::string(buffer) + ".csv";
	  ofs.open(filename.c_str(), std::ios::app);
  }

  // Publishers
  filtered_points_pub = nh.advertise<sensor_msgs::PointCloud2>("/filtered_points", 10);

  // Subscribers
  ros::Subscriber scan_sub = nh.subscribe(POINTS_TOPIC, 10, scan_callback);

  ros::spin();

  return 0;
}
