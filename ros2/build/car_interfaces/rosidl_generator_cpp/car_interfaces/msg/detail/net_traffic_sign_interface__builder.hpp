// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/net_traffic_sign_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_NetTrafficSignInterface_process_time
{
public:
  explicit Init_NetTrafficSignInterface_process_time(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::NetTrafficSignInterface process_time(::car_interfaces::msg::NetTrafficSignInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_parkingstate
{
public:
  explicit Init_NetTrafficSignInterface_parkingstate(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_process_time parkingstate(::car_interfaces::msg::NetTrafficSignInterface::_parkingstate_type arg)
  {
    msg_.parkingstate = std::move(arg);
    return Init_NetTrafficSignInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_parkingnumber
{
public:
  explicit Init_NetTrafficSignInterface_parkingnumber(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_parkingstate parkingnumber(::car_interfaces::msg::NetTrafficSignInterface::_parkingnumber_type arg)
  {
    msg_.parkingnumber = std::move(arg);
    return Init_NetTrafficSignInterface_parkingstate(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_etcstate
{
public:
  explicit Init_NetTrafficSignInterface_etcstate(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_parkingnumber etcstate(::car_interfaces::msg::NetTrafficSignInterface::_etcstate_type arg)
  {
    msg_.etcstate = std::move(arg);
    return Init_NetTrafficSignInterface_parkingnumber(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_etcnumber
{
public:
  explicit Init_NetTrafficSignInterface_etcnumber(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_etcstate etcnumber(::car_interfaces::msg::NetTrafficSignInterface::_etcnumber_type arg)
  {
    msg_.etcnumber = std::move(arg);
    return Init_NetTrafficSignInterface_etcstate(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_lightstate
{
public:
  explicit Init_NetTrafficSignInterface_lightstate(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_etcnumber lightstate(::car_interfaces::msg::NetTrafficSignInterface::_lightstate_type arg)
  {
    msg_.lightstate = std::move(arg);
    return Init_NetTrafficSignInterface_etcnumber(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_lightnumber
{
public:
  explicit Init_NetTrafficSignInterface_lightnumber(::car_interfaces::msg::NetTrafficSignInterface & msg)
  : msg_(msg)
  {}
  Init_NetTrafficSignInterface_lightstate lightnumber(::car_interfaces::msg::NetTrafficSignInterface::_lightnumber_type arg)
  {
    msg_.lightnumber = std::move(arg);
    return Init_NetTrafficSignInterface_lightstate(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

class Init_NetTrafficSignInterface_timestamp
{
public:
  Init_NetTrafficSignInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetTrafficSignInterface_lightnumber timestamp(::car_interfaces::msg::NetTrafficSignInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NetTrafficSignInterface_lightnumber(msg_);
  }

private:
  ::car_interfaces::msg::NetTrafficSignInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::NetTrafficSignInterface>()
{
  return car_interfaces::msg::builder::Init_NetTrafficSignInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__BUILDER_HPP_
