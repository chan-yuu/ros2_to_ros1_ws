// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/RadarStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__RADAR_STATE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__RADAR_STATE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/radar_state_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_RadarStateInterface_error
{
public:
  explicit Init_RadarStateInterface_error(::car_interfaces::msg::RadarStateInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::RadarStateInterface error(::car_interfaces::msg::RadarStateInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::RadarStateInterface msg_;
};

class Init_RadarStateInterface_state
{
public:
  explicit Init_RadarStateInterface_state(::car_interfaces::msg::RadarStateInterface & msg)
  : msg_(msg)
  {}
  Init_RadarStateInterface_error state(::car_interfaces::msg::RadarStateInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RadarStateInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::RadarStateInterface msg_;
};

class Init_RadarStateInterface_id
{
public:
  explicit Init_RadarStateInterface_id(::car_interfaces::msg::RadarStateInterface & msg)
  : msg_(msg)
  {}
  Init_RadarStateInterface_state id(::car_interfaces::msg::RadarStateInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarStateInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::RadarStateInterface msg_;
};

class Init_RadarStateInterface_timestamp
{
public:
  Init_RadarStateInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarStateInterface_id timestamp(::car_interfaces::msg::RadarStateInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RadarStateInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::RadarStateInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::RadarStateInterface>()
{
  return car_interfaces::msg::builder::Init_RadarStateInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__RADAR_STATE_INTERFACE__BUILDER_HPP_
