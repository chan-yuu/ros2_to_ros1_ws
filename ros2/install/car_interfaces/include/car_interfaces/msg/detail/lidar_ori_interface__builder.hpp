// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LidarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/lidar_ori_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LidarOriInterface_process_time
{
public:
  explicit Init_LidarOriInterface_process_time(::car_interfaces::msg::LidarOriInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LidarOriInterface process_time(::car_interfaces::msg::LidarOriInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LidarOriInterface msg_;
};

class Init_LidarOriInterface_pointcloud
{
public:
  explicit Init_LidarOriInterface_pointcloud(::car_interfaces::msg::LidarOriInterface & msg)
  : msg_(msg)
  {}
  Init_LidarOriInterface_process_time pointcloud(::car_interfaces::msg::LidarOriInterface::_pointcloud_type arg)
  {
    msg_.pointcloud = std::move(arg);
    return Init_LidarOriInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::LidarOriInterface msg_;
};

class Init_LidarOriInterface_number
{
public:
  explicit Init_LidarOriInterface_number(::car_interfaces::msg::LidarOriInterface & msg)
  : msg_(msg)
  {}
  Init_LidarOriInterface_pointcloud number(::car_interfaces::msg::LidarOriInterface::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_LidarOriInterface_pointcloud(msg_);
  }

private:
  ::car_interfaces::msg::LidarOriInterface msg_;
};

class Init_LidarOriInterface_id
{
public:
  explicit Init_LidarOriInterface_id(::car_interfaces::msg::LidarOriInterface & msg)
  : msg_(msg)
  {}
  Init_LidarOriInterface_number id(::car_interfaces::msg::LidarOriInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LidarOriInterface_number(msg_);
  }

private:
  ::car_interfaces::msg::LidarOriInterface msg_;
};

class Init_LidarOriInterface_timestamp
{
public:
  Init_LidarOriInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarOriInterface_id timestamp(::car_interfaces::msg::LidarOriInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LidarOriInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::LidarOriInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LidarOriInterface>()
{
  return car_interfaces::msg::builder::Init_LidarOriInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__BUILDER_HPP_
