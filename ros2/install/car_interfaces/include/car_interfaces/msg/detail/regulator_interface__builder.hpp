// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/RegulatorInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/regulator_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_RegulatorInterface_process_time
{
public:
  explicit Init_RegulatorInterface_process_time(::car_interfaces::msg::RegulatorInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::RegulatorInterface process_time(::car_interfaces::msg::RegulatorInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::RegulatorInterface msg_;
};

class Init_RegulatorInterface_stop
{
public:
  explicit Init_RegulatorInterface_stop(::car_interfaces::msg::RegulatorInterface & msg)
  : msg_(msg)
  {}
  Init_RegulatorInterface_process_time stop(::car_interfaces::msg::RegulatorInterface::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_RegulatorInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::RegulatorInterface msg_;
};

class Init_RegulatorInterface_timestamp
{
public:
  Init_RegulatorInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegulatorInterface_stop timestamp(::car_interfaces::msg::RegulatorInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RegulatorInterface_stop(msg_);
  }

private:
  ::car_interfaces::msg::RegulatorInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::RegulatorInterface>()
{
  return car_interfaces::msg::builder::Init_RegulatorInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__BUILDER_HPP_
