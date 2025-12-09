// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/SonicStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/sonic_state_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_SonicStateInterface_error
{
public:
  explicit Init_SonicStateInterface_error(::car_interfaces::msg::SonicStateInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::SonicStateInterface error(::car_interfaces::msg::SonicStateInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::SonicStateInterface msg_;
};

class Init_SonicStateInterface_state
{
public:
  explicit Init_SonicStateInterface_state(::car_interfaces::msg::SonicStateInterface & msg)
  : msg_(msg)
  {}
  Init_SonicStateInterface_error state(::car_interfaces::msg::SonicStateInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SonicStateInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::SonicStateInterface msg_;
};

class Init_SonicStateInterface_id
{
public:
  explicit Init_SonicStateInterface_id(::car_interfaces::msg::SonicStateInterface & msg)
  : msg_(msg)
  {}
  Init_SonicStateInterface_state id(::car_interfaces::msg::SonicStateInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SonicStateInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::SonicStateInterface msg_;
};

class Init_SonicStateInterface_timestamp
{
public:
  Init_SonicStateInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonicStateInterface_id timestamp(::car_interfaces::msg::SonicStateInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SonicStateInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::SonicStateInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::SonicStateInterface>()
{
  return car_interfaces::msg::builder::Init_SonicStateInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__BUILDER_HPP_
