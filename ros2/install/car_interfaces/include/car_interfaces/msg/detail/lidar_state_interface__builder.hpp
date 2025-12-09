// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LidarStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIDAR_STATE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LIDAR_STATE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/lidar_state_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LidarStateInterface_error
{
public:
  explicit Init_LidarStateInterface_error(::car_interfaces::msg::LidarStateInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LidarStateInterface error(::car_interfaces::msg::LidarStateInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LidarStateInterface msg_;
};

class Init_LidarStateInterface_state
{
public:
  explicit Init_LidarStateInterface_state(::car_interfaces::msg::LidarStateInterface & msg)
  : msg_(msg)
  {}
  Init_LidarStateInterface_error state(::car_interfaces::msg::LidarStateInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_LidarStateInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::LidarStateInterface msg_;
};

class Init_LidarStateInterface_id
{
public:
  explicit Init_LidarStateInterface_id(::car_interfaces::msg::LidarStateInterface & msg)
  : msg_(msg)
  {}
  Init_LidarStateInterface_state id(::car_interfaces::msg::LidarStateInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LidarStateInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::LidarStateInterface msg_;
};

class Init_LidarStateInterface_timestamp
{
public:
  Init_LidarStateInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarStateInterface_id timestamp(::car_interfaces::msg::LidarStateInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LidarStateInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::LidarStateInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LidarStateInterface>()
{
  return car_interfaces::msg::builder::Init_LidarStateInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LIDAR_STATE_INTERFACE__BUILDER_HPP_
