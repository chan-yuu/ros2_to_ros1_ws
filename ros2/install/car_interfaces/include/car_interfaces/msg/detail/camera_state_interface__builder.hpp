// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/CameraStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAMERA_STATE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAMERA_STATE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/camera_state_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraStateInterface_error
{
public:
  explicit Init_CameraStateInterface_error(::car_interfaces::msg::CameraStateInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::CameraStateInterface error(::car_interfaces::msg::CameraStateInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::CameraStateInterface msg_;
};

class Init_CameraStateInterface_state
{
public:
  explicit Init_CameraStateInterface_state(::car_interfaces::msg::CameraStateInterface & msg)
  : msg_(msg)
  {}
  Init_CameraStateInterface_error state(::car_interfaces::msg::CameraStateInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CameraStateInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::CameraStateInterface msg_;
};

class Init_CameraStateInterface_id
{
public:
  explicit Init_CameraStateInterface_id(::car_interfaces::msg::CameraStateInterface & msg)
  : msg_(msg)
  {}
  Init_CameraStateInterface_state id(::car_interfaces::msg::CameraStateInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CameraStateInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::CameraStateInterface msg_;
};

class Init_CameraStateInterface_timestamp
{
public:
  Init_CameraStateInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStateInterface_id timestamp(::car_interfaces::msg::CameraStateInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraStateInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::CameraStateInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::CameraStateInterface>()
{
  return car_interfaces::msg::builder::Init_CameraStateInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAMERA_STATE_INTERFACE__BUILDER_HPP_
