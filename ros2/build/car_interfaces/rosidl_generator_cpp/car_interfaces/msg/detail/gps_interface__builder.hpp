// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/GpsInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/gps_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_GpsInterface_process_time
{
public:
  explicit Init_GpsInterface_process_time(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::GpsInterface process_time(::car_interfaces::msg::GpsInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_skyvelocity
{
public:
  explicit Init_GpsInterface_skyvelocity(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_process_time skyvelocity(::car_interfaces::msg::GpsInterface::_skyvelocity_type arg)
  {
    msg_.skyvelocity = std::move(arg);
    return Init_GpsInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_northvelocity
{
public:
  explicit Init_GpsInterface_northvelocity(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_skyvelocity northvelocity(::car_interfaces::msg::GpsInterface::_northvelocity_type arg)
  {
    msg_.northvelocity = std::move(arg);
    return Init_GpsInterface_skyvelocity(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_eastvelocity
{
public:
  explicit Init_GpsInterface_eastvelocity(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_northvelocity eastvelocity(::car_interfaces::msg::GpsInterface::_eastvelocity_type arg)
  {
    msg_.eastvelocity = std::move(arg);
    return Init_GpsInterface_northvelocity(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_height
{
public:
  explicit Init_GpsInterface_height(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_eastvelocity height(::car_interfaces::msg::GpsInterface::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_GpsInterface_eastvelocity(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_latitude
{
public:
  explicit Init_GpsInterface_latitude(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_height latitude(::car_interfaces::msg::GpsInterface::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GpsInterface_height(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_longitude
{
public:
  explicit Init_GpsInterface_longitude(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_latitude longitude(::car_interfaces::msg::GpsInterface::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GpsInterface_latitude(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_az
{
public:
  explicit Init_GpsInterface_az(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_longitude az(::car_interfaces::msg::GpsInterface::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_GpsInterface_longitude(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_ay
{
public:
  explicit Init_GpsInterface_ay(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_az ay(::car_interfaces::msg::GpsInterface::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_GpsInterface_az(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_ax
{
public:
  explicit Init_GpsInterface_ax(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_ay ax(::car_interfaces::msg::GpsInterface::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_GpsInterface_ay(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_wz
{
public:
  explicit Init_GpsInterface_wz(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_ax wz(::car_interfaces::msg::GpsInterface::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return Init_GpsInterface_ax(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_wy
{
public:
  explicit Init_GpsInterface_wy(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_wz wy(::car_interfaces::msg::GpsInterface::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_GpsInterface_wz(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_wx
{
public:
  explicit Init_GpsInterface_wx(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_wy wx(::car_interfaces::msg::GpsInterface::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_GpsInterface_wy(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_roll
{
public:
  explicit Init_GpsInterface_roll(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_wx roll(::car_interfaces::msg::GpsInterface::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GpsInterface_wx(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_pitch
{
public:
  explicit Init_GpsInterface_pitch(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_roll pitch(::car_interfaces::msg::GpsInterface::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GpsInterface_roll(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_yaw
{
public:
  explicit Init_GpsInterface_yaw(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_pitch yaw(::car_interfaces::msg::GpsInterface::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GpsInterface_pitch(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_id
{
public:
  explicit Init_GpsInterface_id(::car_interfaces::msg::GpsInterface & msg)
  : msg_(msg)
  {}
  Init_GpsInterface_yaw id(::car_interfaces::msg::GpsInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GpsInterface_yaw(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

class Init_GpsInterface_timestamp
{
public:
  Init_GpsInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsInterface_id timestamp(::car_interfaces::msg::GpsInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GpsInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::GpsInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::GpsInterface>()
{
  return car_interfaces::msg::builder::Init_GpsInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__BUILDER_HPP_
