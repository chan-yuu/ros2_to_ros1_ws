// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/SignRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SIGN_RECOGNITION_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__SIGN_RECOGNITION_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/sign_recognition_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_SignRecognitionInterface_process_time
{
public:
  explicit Init_SignRecognitionInterface_process_time(::car_interfaces::msg::SignRecognitionInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::SignRecognitionInterface process_time(::car_interfaces::msg::SignRecognitionInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

class Init_SignRecognitionInterface_resultimage
{
public:
  explicit Init_SignRecognitionInterface_resultimage(::car_interfaces::msg::SignRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_SignRecognitionInterface_process_time resultimage(::car_interfaces::msg::SignRecognitionInterface::_resultimage_type arg)
  {
    msg_.resultimage = std::move(arg);
    return Init_SignRecognitionInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

class Init_SignRecognitionInterface_signdata
{
public:
  explicit Init_SignRecognitionInterface_signdata(::car_interfaces::msg::SignRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_SignRecognitionInterface_resultimage signdata(::car_interfaces::msg::SignRecognitionInterface::_signdata_type arg)
  {
    msg_.signdata = std::move(arg);
    return Init_SignRecognitionInterface_resultimage(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

class Init_SignRecognitionInterface_signnumber
{
public:
  explicit Init_SignRecognitionInterface_signnumber(::car_interfaces::msg::SignRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_SignRecognitionInterface_signdata signnumber(::car_interfaces::msg::SignRecognitionInterface::_signnumber_type arg)
  {
    msg_.signnumber = std::move(arg);
    return Init_SignRecognitionInterface_signdata(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

class Init_SignRecognitionInterface_id
{
public:
  explicit Init_SignRecognitionInterface_id(::car_interfaces::msg::SignRecognitionInterface & msg)
  : msg_(msg)
  {}
  Init_SignRecognitionInterface_signnumber id(::car_interfaces::msg::SignRecognitionInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SignRecognitionInterface_signnumber(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

class Init_SignRecognitionInterface_timestamp
{
public:
  Init_SignRecognitionInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignRecognitionInterface_id timestamp(::car_interfaces::msg::SignRecognitionInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SignRecognitionInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::SignRecognitionInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::SignRecognitionInterface>()
{
  return car_interfaces::msg::builder::Init_SignRecognitionInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__SIGN_RECOGNITION_INTERFACE__BUILDER_HPP_
