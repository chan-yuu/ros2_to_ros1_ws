// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/local_path_planning_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocalPathPlanningInterface_process_time
{
public:
  explicit Init_LocalPathPlanningInterface_process_time(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LocalPathPlanningInterface process_time(::car_interfaces::msg::LocalPathPlanningInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_path_end_dis
{
public:
  explicit Init_LocalPathPlanningInterface_path_end_dis(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_process_time path_end_dis(::car_interfaces::msg::LocalPathPlanningInterface::_path_end_dis_type arg)
  {
    msg_.path_end_dis = std::move(arg);
    return Init_LocalPathPlanningInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_control_mode
{
public:
  explicit Init_LocalPathPlanningInterface_control_mode(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_path_end_dis control_mode(::car_interfaces::msg::LocalPathPlanningInterface::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_LocalPathPlanningInterface_path_end_dis(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_angle
{
public:
  explicit Init_LocalPathPlanningInterface_angle(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_control_mode angle(::car_interfaces::msg::LocalPathPlanningInterface::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_LocalPathPlanningInterface_control_mode(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_speed
{
public:
  explicit Init_LocalPathPlanningInterface_speed(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_angle speed(::car_interfaces::msg::LocalPathPlanningInterface::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LocalPathPlanningInterface_angle(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_latitude
{
public:
  explicit Init_LocalPathPlanningInterface_latitude(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_speed latitude(::car_interfaces::msg::LocalPathPlanningInterface::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_LocalPathPlanningInterface_speed(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_longitude
{
public:
  explicit Init_LocalPathPlanningInterface_longitude(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_latitude longitude(::car_interfaces::msg::LocalPathPlanningInterface::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_LocalPathPlanningInterface_latitude(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_endpoint
{
public:
  explicit Init_LocalPathPlanningInterface_endpoint(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_longitude endpoint(::car_interfaces::msg::LocalPathPlanningInterface::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_LocalPathPlanningInterface_longitude(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_startpoint
{
public:
  explicit Init_LocalPathPlanningInterface_startpoint(::car_interfaces::msg::LocalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_LocalPathPlanningInterface_endpoint startpoint(::car_interfaces::msg::LocalPathPlanningInterface::_startpoint_type arg)
  {
    msg_.startpoint = std::move(arg);
    return Init_LocalPathPlanningInterface_endpoint(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

class Init_LocalPathPlanningInterface_timestamp
{
public:
  Init_LocalPathPlanningInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPathPlanningInterface_startpoint timestamp(::car_interfaces::msg::LocalPathPlanningInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LocalPathPlanningInterface_startpoint(msg_);
  }

private:
  ::car_interfaces::msg::LocalPathPlanningInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LocalPathPlanningInterface>()
{
  return car_interfaces::msg::builder::Init_LocalPathPlanningInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_
