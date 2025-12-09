// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/LightRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/light_recognition_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_LightRecognitionInterface_process_time
{
public:
  explicit Init_LightRecognitionInterface_process_time(::car_interfaces::msg::LightRecognitionInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::LightRecognitionInterface process_time(::car_interfaces::msg::LightRecognitionInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::LightRecognitionInterface msg_;
};

class Init_LightRecognitionInterface_resultimage
{
public:
  explicit Init_LightRecognitionInterface_resultimage(::car_interfaces::msg::LightRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LightRecognitionInterface_process_time resultimage(::car_interfaces::msg::LightRecognitionInterface::_resultimage_type arg)
  {
    msg_.resultimage = std::move(arg);
    return Init_LightRecognitionInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::LightRecognitionInterface msg_;
};

class Init_LightRecognitionInterface_lightdata
{
public:
  explicit Init_LightRecognitionInterface_lightdata(::car_interfaces::msg::LightRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LightRecognitionInterface_resultimage lightdata(::car_interfaces::msg::LightRecognitionInterface::_lightdata_type arg)
  {
    msg_.lightdata = std::move(arg);
    return Init_LightRecognitionInterface_resultimage(msg_);
  }

private:
  ::car_interfaces::msg::LightRecognitionInterface msg_;
};

class Init_LightRecognitionInterface_id
{
public:
  explicit Init_LightRecognitionInterface_id(::car_interfaces::msg::LightRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_LightRecognitionInterface_lightdata id(::car_interfaces::msg::LightRecognitionInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LightRecognitionInterface_lightdata(msg_);
  }

private:
  ::car_interfaces::msg::LightRecognitionInterface msg_;
};

class Init_LightRecognitionInterface_timestamp
{
public:
  Init_LightRecognitionInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightRecognitionInterface_id timestamp(::car_interfaces::msg::LightRecognitionInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LightRecognitionInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::LightRecognitionInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::LightRecognitionInterface>()
{
  return car_interfaces::msg::builder::Init_LightRecognitionInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__BUILDER_HPP_
