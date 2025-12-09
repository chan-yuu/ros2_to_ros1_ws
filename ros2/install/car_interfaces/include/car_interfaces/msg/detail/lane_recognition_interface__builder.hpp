// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LaneRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/lane_recognition_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LaneRecognitionInterface_process_time
{
public:
  explicit Init_LaneRecognitionInterface_process_time(::car_interfaces::msg::LaneRecognitionInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LaneRecognitionInterface process_time(::car_interfaces::msg::LaneRecognitionInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LaneRecognitionInterface msg_;
};

class Init_LaneRecognitionInterface_resultimage
{
public:
  explicit Init_LaneRecognitionInterface_resultimage(::car_interfaces::msg::LaneRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LaneRecognitionInterface_process_time resultimage(::car_interfaces::msg::LaneRecognitionInterface::_resultimage_type arg)
  {
    msg_.resultimage = std::move(arg);
    return Init_LaneRecognitionInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::LaneRecognitionInterface msg_;
};

class Init_LaneRecognitionInterface_centeroffset
{
public:
  explicit Init_LaneRecognitionInterface_centeroffset(::car_interfaces::msg::LaneRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LaneRecognitionInterface_resultimage centeroffset(::car_interfaces::msg::LaneRecognitionInterface::_centeroffset_type arg)
  {
    msg_.centeroffset = std::move(arg);
    return Init_LaneRecognitionInterface_resultimage(msg_);
  }

private:
  ::car_interfaces::msg::LaneRecognitionInterface msg_;
};

class Init_LaneRecognitionInterface_id
{
public:
  explicit Init_LaneRecognitionInterface_id(::car_interfaces::msg::LaneRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LaneRecognitionInterface_centeroffset id(::car_interfaces::msg::LaneRecognitionInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneRecognitionInterface_centeroffset(msg_);
  }

private:
  ::car_interfaces::msg::LaneRecognitionInterface msg_;
};

class Init_LaneRecognitionInterface_timestamp
{
public:
  Init_LaneRecognitionInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneRecognitionInterface_id timestamp(::car_interfaces::msg::LaneRecognitionInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LaneRecognitionInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::LaneRecognitionInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LaneRecognitionInterface>()
{
  return car_interfaces::msg::builder::Init_LaneRecognitionInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__BUILDER_HPP_
