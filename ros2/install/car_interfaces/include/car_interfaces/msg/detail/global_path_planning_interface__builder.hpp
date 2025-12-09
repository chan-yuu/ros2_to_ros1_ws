// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/global_path_planning_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_GlobalPathPlanningInterface_process_time
{
public:
  explicit Init_GlobalPathPlanningInterface_process_time(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::GlobalPathPlanningInterface process_time(::car_interfaces::msg::GlobalPathPlanningInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_end_obu_point
{
public:
  explicit Init_GlobalPathPlanningInterface_end_obu_point(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_GlobalPathPlanningInterface_process_time end_obu_point(::car_interfaces::msg::GlobalPathPlanningInterface::_end_obu_point_type arg)
  {
    msg_.end_obu_point = std::move(arg);
    return Init_GlobalPathPlanningInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_back_point
{
public:
  explicit Init_GlobalPathPlanningInterface_back_point(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_GlobalPathPlanningInterface_end_obu_point back_point(::car_interfaces::msg::GlobalPathPlanningInterface::_back_point_type arg)
  {
    msg_.back_point = std::move(arg);
    return Init_GlobalPathPlanningInterface_end_obu_point(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_routedata
{
public:
  explicit Init_GlobalPathPlanningInterface_routedata(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_GlobalPathPlanningInterface_back_point routedata(::car_interfaces::msg::GlobalPathPlanningInterface::_routedata_type arg)
  {
    msg_.routedata = std::move(arg);
    return Init_GlobalPathPlanningInterface_back_point(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_endpoint
{
public:
  explicit Init_GlobalPathPlanningInterface_endpoint(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_GlobalPathPlanningInterface_routedata endpoint(::car_interfaces::msg::GlobalPathPlanningInterface::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_GlobalPathPlanningInterface_routedata(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_startpoint
{
public:
  explicit Init_GlobalPathPlanningInterface_startpoint(::car_interfaces::msg::GlobalPathPlanningInterface & msg)
  : msg_(msg)
  {}
  Init_GlobalPathPlanningInterface_endpoint startpoint(::car_interfaces::msg::GlobalPathPlanningInterface::_startpoint_type arg)
  {
    msg_.startpoint = std::move(arg);
    return Init_GlobalPathPlanningInterface_endpoint(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

class Init_GlobalPathPlanningInterface_timestamp
{
public:
  Init_GlobalPathPlanningInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalPathPlanningInterface_startpoint timestamp(::car_interfaces::msg::GlobalPathPlanningInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GlobalPathPlanningInterface_startpoint(msg_);
  }

private:
  ::car_interfaces::msg::GlobalPathPlanningInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::GlobalPathPlanningInterface>()
{
  return car_interfaces::msg::builder::Init_GlobalPathPlanningInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__BUILDER_HPP_
