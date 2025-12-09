// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/CameraOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/camera_ori_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraOriInterface_process_time
{
public:
  explicit Init_CameraOriInterface_process_time(::car_interfaces::msg::CameraOriInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::CameraOriInterface process_time(::car_interfaces::msg::CameraOriInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::CameraOriInterface msg_;
};

class Init_CameraOriInterface_imagedata
{
public:
  explicit Init_CameraOriInterface_imagedata(::car_interfaces::msg::CameraOriInterface & msg)
  : msg_(msg)
  {}
  Init_CameraOriInterface_process_time imagedata(::car_interfaces::msg::CameraOriInterface::_imagedata_type arg)
  {
    msg_.imagedata = std::move(arg);
    return Init_CameraOriInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::CameraOriInterface msg_;
};

class Init_CameraOriInterface_id
{
public:
  explicit Init_CameraOriInterface_id(::car_interfaces::msg::CameraOriInterface & msg)
  : msg_(msg)
  {}
  Init_CameraOriInterface_imagedata id(::car_interfaces::msg::CameraOriInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CameraOriInterface_imagedata(msg_);
  }

private:
  ::car_interfaces::msg::CameraOriInterface msg_;
};

class Init_CameraOriInterface_timestamp
{
public:
  Init_CameraOriInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraOriInterface_id timestamp(::car_interfaces::msg::CameraOriInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraOriInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::CameraOriInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::CameraOriInterface>()
{
  return car_interfaces::msg::builder::Init_CameraOriInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__BUILDER_HPP_
