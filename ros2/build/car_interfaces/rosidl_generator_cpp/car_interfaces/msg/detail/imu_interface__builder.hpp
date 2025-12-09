// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/ImuInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__IMU_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__IMU_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/imu_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuInterface_process_time
{
public:
  explicit Init_ImuInterface_process_time(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::ImuInterface process_time(::car_interfaces::msg::ImuInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_az
{
public:
  explicit Init_ImuInterface_az(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_process_time az(::car_interfaces::msg::ImuInterface::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_ImuInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_ay
{
public:
  explicit Init_ImuInterface_ay(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_az ay(::car_interfaces::msg::ImuInterface::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_ImuInterface_az(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_ax
{
public:
  explicit Init_ImuInterface_ax(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_ay ax(::car_interfaces::msg::ImuInterface::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_ImuInterface_ay(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_wz
{
public:
  explicit Init_ImuInterface_wz(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_ax wz(::car_interfaces::msg::ImuInterface::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return Init_ImuInterface_ax(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_wy
{
public:
  explicit Init_ImuInterface_wy(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_wz wy(::car_interfaces::msg::ImuInterface::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_ImuInterface_wz(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_wx
{
public:
  explicit Init_ImuInterface_wx(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_wy wx(::car_interfaces::msg::ImuInterface::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_ImuInterface_wy(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_roll
{
public:
  explicit Init_ImuInterface_roll(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_wx roll(::car_interfaces::msg::ImuInterface::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ImuInterface_wx(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_pitch
{
public:
  explicit Init_ImuInterface_pitch(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_roll pitch(::car_interfaces::msg::ImuInterface::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ImuInterface_roll(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_yaw
{
public:
  explicit Init_ImuInterface_yaw(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_pitch yaw(::car_interfaces::msg::ImuInterface::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ImuInterface_pitch(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_id
{
public:
  explicit Init_ImuInterface_id(::car_interfaces::msg::ImuInterface & msg)
  : msg_(msg)
  {}
  Init_ImuInterface_yaw id(::car_interfaces::msg::ImuInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ImuInterface_yaw(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

class Init_ImuInterface_timestamp
{
public:
  Init_ImuInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuInterface_id timestamp(::car_interfaces::msg::ImuInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ImuInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::ImuInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::ImuInterface>()
{
  return car_interfaces::msg::builder::Init_ImuInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__IMU_INTERFACE__BUILDER_HPP_
