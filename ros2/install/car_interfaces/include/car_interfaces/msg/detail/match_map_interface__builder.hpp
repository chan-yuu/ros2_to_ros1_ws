// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/match_map_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_MatchMapInterface_light_recognition
{
public:
  explicit Init_MatchMapInterface_light_recognition(::car_interfaces::msg::MatchMapInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::MatchMapInterface light_recognition(::car_interfaces::msg::MatchMapInterface::_light_recognition_type arg)
  {
    msg_.light_recognition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

class Init_MatchMapInterface_cross
{
public:
  explicit Init_MatchMapInterface_cross(::car_interfaces::msg::MatchMapInterface & msg)
  : msg_(msg)
  {}
  Init_MatchMapInterface_light_recognition cross(::car_interfaces::msg::MatchMapInterface::_cross_type arg)
  {
    msg_.cross = std::move(arg);
    return Init_MatchMapInterface_light_recognition(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

class Init_MatchMapInterface_stopline_latitude
{
public:
  explicit Init_MatchMapInterface_stopline_latitude(::car_interfaces::msg::MatchMapInterface & msg)
  : msg_(msg)
  {}
  Init_MatchMapInterface_cross stopline_latitude(::car_interfaces::msg::MatchMapInterface::_stopline_latitude_type arg)
  {
    msg_.stopline_latitude = std::move(arg);
    return Init_MatchMapInterface_cross(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

class Init_MatchMapInterface_stopline_longitude
{
public:
  explicit Init_MatchMapInterface_stopline_longitude(::car_interfaces::msg::MatchMapInterface & msg)
  : msg_(msg)
  {}
  Init_MatchMapInterface_stopline_latitude stopline_longitude(::car_interfaces::msg::MatchMapInterface::_stopline_longitude_type arg)
  {
    msg_.stopline_longitude = std::move(arg);
    return Init_MatchMapInterface_stopline_latitude(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

class Init_MatchMapInterface_special_road
{
public:
  explicit Init_MatchMapInterface_special_road(::car_interfaces::msg::MatchMapInterface & msg)
  : msg_(msg)
  {}
  Init_MatchMapInterface_stopline_longitude special_road(::car_interfaces::msg::MatchMapInterface::_special_road_type arg)
  {
    msg_.special_road = std::move(arg);
    return Init_MatchMapInterface_stopline_longitude(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

class Init_MatchMapInterface_timestamp
{
public:
  Init_MatchMapInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MatchMapInterface_special_road timestamp(::car_interfaces::msg::MatchMapInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MatchMapInterface_special_road(msg_);
  }

private:
  ::car_interfaces::msg::MatchMapInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::MatchMapInterface>()
{
  return car_interfaces::msg::builder::Init_MatchMapInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__BUILDER_HPP_
