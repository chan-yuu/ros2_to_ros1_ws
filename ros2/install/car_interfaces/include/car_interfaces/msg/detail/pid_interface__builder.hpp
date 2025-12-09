// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/pid_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_PidInterface_refpox_y
{
public:
  explicit Init_PidInterface_refpox_y(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::PidInterface refpox_y(::car_interfaces::msg::PidInterface::_refpox_y_type arg)
  {
    msg_.refpox_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_refpox_x
{
public:
  explicit Init_PidInterface_refpox_x(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_refpox_y refpox_x(::car_interfaces::msg::PidInterface::_refpox_x_type arg)
  {
    msg_.refpox_x = std::move(arg);
    return Init_PidInterface_refpox_y(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_curpos_y
{
public:
  explicit Init_PidInterface_curpos_y(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_refpox_x curpos_y(::car_interfaces::msg::PidInterface::_curpos_y_type arg)
  {
    msg_.curpos_y = std::move(arg);
    return Init_PidInterface_refpox_x(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_curpos_x
{
public:
  explicit Init_PidInterface_curpos_x(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_curpos_y curpos_x(::car_interfaces::msg::PidInterface::_curpos_x_type arg)
  {
    msg_.curpos_x = std::move(arg);
    return Init_PidInterface_curpos_y(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_dhead
{
public:
  explicit Init_PidInterface_dhead(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_curpos_x dhead(::car_interfaces::msg::PidInterface::_dhead_type arg)
  {
    msg_.dhead = std::move(arg);
    return Init_PidInterface_curpos_x(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_cte
{
public:
  explicit Init_PidInterface_cte(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_dhead cte(::car_interfaces::msg::PidInterface::_cte_type arg)
  {
    msg_.cte = std::move(arg);
    return Init_PidInterface_dhead(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_process_time
{
public:
  explicit Init_PidInterface_process_time(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_cte process_time(::car_interfaces::msg::PidInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return Init_PidInterface_cte(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_braking_percentage
{
public:
  explicit Init_PidInterface_braking_percentage(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_process_time braking_percentage(::car_interfaces::msg::PidInterface::_braking_percentage_type arg)
  {
    msg_.braking_percentage = std::move(arg);
    return Init_PidInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_throttle_percentage
{
public:
  explicit Init_PidInterface_throttle_percentage(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_braking_percentage throttle_percentage(::car_interfaces::msg::PidInterface::_throttle_percentage_type arg)
  {
    msg_.throttle_percentage = std::move(arg);
    return Init_PidInterface_braking_percentage(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_gear
{
public:
  explicit Init_PidInterface_gear(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_throttle_percentage gear(::car_interfaces::msg::PidInterface::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_PidInterface_throttle_percentage(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_angle
{
public:
  explicit Init_PidInterface_angle(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_gear angle(::car_interfaces::msg::PidInterface::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_PidInterface_gear(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_nowspeed
{
public:
  explicit Init_PidInterface_nowspeed(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_angle nowspeed(::car_interfaces::msg::PidInterface::_nowspeed_type arg)
  {
    msg_.nowspeed = std::move(arg);
    return Init_PidInterface_angle(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_refspeed
{
public:
  explicit Init_PidInterface_refspeed(::car_interfaces::msg::PidInterface & msg)
  : msg_(msg)
  {}
  Init_PidInterface_nowspeed refspeed(::car_interfaces::msg::PidInterface::_refspeed_type arg)
  {
    msg_.refspeed = std::move(arg);
    return Init_PidInterface_nowspeed(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

class Init_PidInterface_timestamp
{
public:
  Init_PidInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidInterface_refspeed timestamp(::car_interfaces::msg::PidInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PidInterface_refspeed(msg_);
  }

private:
  ::car_interfaces::msg::PidInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::PidInterface>()
{
  return car_interfaces::msg::builder::Init_PidInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__BUILDER_HPP_
