// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/car_decision_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_CarDecisionInterface_statemode
{
public:
  explicit Init_CarDecisionInterface_statemode(::car_interfaces::msg::CarDecisionInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::CarDecisionInterface statemode(::car_interfaces::msg::CarDecisionInterface::_statemode_type arg)
  {
    msg_.statemode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

class Init_CarDecisionInterface_process_time
{
public:
  explicit Init_CarDecisionInterface_process_time(::car_interfaces::msg::CarDecisionInterface & msg)
  : msg_(msg)
  {}
  Init_CarDecisionInterface_statemode process_time(::car_interfaces::msg::CarDecisionInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return Init_CarDecisionInterface_statemode(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

class Init_CarDecisionInterface_maxspeed
{
public:
  explicit Init_CarDecisionInterface_maxspeed(::car_interfaces::msg::CarDecisionInterface & msg)
  : msg_(msg)
  {}
  Init_CarDecisionInterface_process_time maxspeed(::car_interfaces::msg::CarDecisionInterface::_maxspeed_type arg)
  {
    msg_.maxspeed = std::move(arg);
    return Init_CarDecisionInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

class Init_CarDecisionInterface_speed
{
public:
  explicit Init_CarDecisionInterface_speed(::car_interfaces::msg::CarDecisionInterface & msg)
  : msg_(msg)
  {}
  Init_CarDecisionInterface_maxspeed speed(::car_interfaces::msg::CarDecisionInterface::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CarDecisionInterface_maxspeed(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

class Init_CarDecisionInterface_stop
{
public:
  explicit Init_CarDecisionInterface_stop(::car_interfaces::msg::CarDecisionInterface & msg)
  : msg_(msg)
  {}
  Init_CarDecisionInterface_speed stop(::car_interfaces::msg::CarDecisionInterface::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_CarDecisionInterface_speed(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

class Init_CarDecisionInterface_timestamp
{
public:
  Init_CarDecisionInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarDecisionInterface_stop timestamp(::car_interfaces::msg::CarDecisionInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CarDecisionInterface_stop(msg_);
  }

private:
  ::car_interfaces::msg::CarDecisionInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::CarDecisionInterface>()
{
  return car_interfaces::msg::builder::Init_CarDecisionInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__BUILDER_HPP_
