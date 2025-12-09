// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__BUILDER_HPP_

#include "car_interfaces/msg/detail/obu_receive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObuReceive_transit_point_2_lon
{
public:
  explicit Init_ObuReceive_transit_point_2_lon(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::ObuReceive transit_point_2_lon(::car_interfaces::msg::ObuReceive::_transit_point_2_lon_type arg)
  {
    msg_.transit_point_2_lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_transit_point_2_lat
{
public:
  explicit Init_ObuReceive_transit_point_2_lat(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_transit_point_2_lon transit_point_2_lat(::car_interfaces::msg::ObuReceive::_transit_point_2_lat_type arg)
  {
    msg_.transit_point_2_lat = std::move(arg);
    return Init_ObuReceive_transit_point_2_lon(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_transit_point_1_lon
{
public:
  explicit Init_ObuReceive_transit_point_1_lon(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_transit_point_2_lat transit_point_1_lon(::car_interfaces::msg::ObuReceive::_transit_point_1_lon_type arg)
  {
    msg_.transit_point_1_lon = std::move(arg);
    return Init_ObuReceive_transit_point_2_lat(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_transit_point_1_lat
{
public:
  explicit Init_ObuReceive_transit_point_1_lat(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_transit_point_1_lon transit_point_1_lat(::car_interfaces::msg::ObuReceive::_transit_point_1_lat_type arg)
  {
    msg_.transit_point_1_lat = std::move(arg);
    return Init_ObuReceive_transit_point_1_lon(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_end_point_lon
{
public:
  explicit Init_ObuReceive_end_point_lon(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_transit_point_1_lat end_point_lon(::car_interfaces::msg::ObuReceive::_end_point_lon_type arg)
  {
    msg_.end_point_lon = std::move(arg);
    return Init_ObuReceive_transit_point_1_lat(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_end_point_lat
{
public:
  explicit Init_ObuReceive_end_point_lat(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_end_point_lon end_point_lat(::car_interfaces::msg::ObuReceive::_end_point_lat_type arg)
  {
    msg_.end_point_lat = std::move(arg);
    return Init_ObuReceive_end_point_lon(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_cutin_flag
{
public:
  explicit Init_ObuReceive_cutin_flag(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_end_point_lat cutin_flag(::car_interfaces::msg::ObuReceive::_cutin_flag_type arg)
  {
    msg_.cutin_flag = std::move(arg);
    return Init_ObuReceive_end_point_lat(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_dis_to_stopline
{
public:
  explicit Init_ObuReceive_dis_to_stopline(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_cutin_flag dis_to_stopline(::car_interfaces::msg::ObuReceive::_dis_to_stopline_type arg)
  {
    msg_.dis_to_stopline = std::move(arg);
    return Init_ObuReceive_cutin_flag(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_time
{
public:
  explicit Init_ObuReceive_time(::car_interfaces::msg::ObuReceive & msg)
  : msg_(msg)
  {}
  Init_ObuReceive_dis_to_stopline time(::car_interfaces::msg::ObuReceive::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_ObuReceive_dis_to_stopline(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

class Init_ObuReceive_color
{
public:
  Init_ObuReceive_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObuReceive_time color(::car_interfaces::msg::ObuReceive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ObuReceive_time(msg_);
  }

private:
  ::car_interfaces::msg::ObuReceive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::ObuReceive>()
{
  return car_interfaces::msg::builder::Init_ObuReceive_color();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__BUILDER_HPP_
