// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/HmiStartEndPointInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/hmi_start_end_point_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_HmiStartEndPointInterface_process_time
{
public:
  explicit Init_HmiStartEndPointInterface_process_time(::car_interfaces::msg::HmiStartEndPointInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::HmiStartEndPointInterface process_time(::car_interfaces::msg::HmiStartEndPointInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::HmiStartEndPointInterface msg_;
};

class Init_HmiStartEndPointInterface_endpoint
{
public:
  explicit Init_HmiStartEndPointInterface_endpoint(::car_interfaces::msg::HmiStartEndPointInterface & msg)
  : msg_(msg)
  {}
  Init_HmiStartEndPointInterface_process_time endpoint(::car_interfaces::msg::HmiStartEndPointInterface::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_HmiStartEndPointInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::HmiStartEndPointInterface msg_;
};

class Init_HmiStartEndPointInterface_startpoint
{
public:
  explicit Init_HmiStartEndPointInterface_startpoint(::car_interfaces::msg::HmiStartEndPointInterface & msg)
  : msg_(msg)
  {}
  Init_HmiStartEndPointInterface_endpoint startpoint(::car_interfaces::msg::HmiStartEndPointInterface::_startpoint_type arg)
  {
    msg_.startpoint = std::move(arg);
    return Init_HmiStartEndPointInterface_endpoint(msg_);
  }

private:
  ::car_interfaces::msg::HmiStartEndPointInterface msg_;
};

class Init_HmiStartEndPointInterface_timestamp
{
public:
  Init_HmiStartEndPointInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HmiStartEndPointInterface_startpoint timestamp(::car_interfaces::msg::HmiStartEndPointInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HmiStartEndPointInterface_startpoint(msg_);
  }

private:
  ::car_interfaces::msg::HmiStartEndPointInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::HmiStartEndPointInterface>()
{
  return car_interfaces::msg::builder::Init_HmiStartEndPointInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__BUILDER_HPP_
