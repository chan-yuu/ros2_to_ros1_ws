// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LidarObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIDAR_OBSTACLE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LIDAR_OBSTACLE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/lidar_obstacle_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LidarObstacleInterface_process_time
{
public:
  explicit Init_LidarObstacleInterface_process_time(::car_interfaces::msg::LidarObstacleInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LidarObstacleInterface process_time(::car_interfaces::msg::LidarObstacleInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LidarObstacleInterface msg_;
};

class Init_LidarObstacleInterface_obstacledata
{
public:
  explicit Init_LidarObstacleInterface_obstacledata(::car_interfaces::msg::LidarObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_LidarObstacleInterface_process_time obstacledata(::car_interfaces::msg::LidarObstacleInterface::_obstacledata_type arg)
  {
    msg_.obstacledata = std::move(arg);
    return Init_LidarObstacleInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::LidarObstacleInterface msg_;
};

class Init_LidarObstacleInterface_number
{
public:
  explicit Init_LidarObstacleInterface_number(::car_interfaces::msg::LidarObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_LidarObstacleInterface_obstacledata number(::car_interfaces::msg::LidarObstacleInterface::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_LidarObstacleInterface_obstacledata(msg_);
  }

private:
  ::car_interfaces::msg::LidarObstacleInterface msg_;
};

class Init_LidarObstacleInterface_id
{
public:
  explicit Init_LidarObstacleInterface_id(::car_interfaces::msg::LidarObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_LidarObstacleInterface_number id(::car_interfaces::msg::LidarObstacleInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LidarObstacleInterface_number(msg_);
  }

private:
  ::car_interfaces::msg::LidarObstacleInterface msg_;
};

class Init_LidarObstacleInterface_timestamp
{
public:
  Init_LidarObstacleInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarObstacleInterface_id timestamp(::car_interfaces::msg::LidarObstacleInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LidarObstacleInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::LidarObstacleInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LidarObstacleInterface>()
{
  return car_interfaces::msg::builder::Init_LidarObstacleInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LIDAR_OBSTACLE_INTERFACE__BUILDER_HPP_
