// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/CameraObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/camera_obstacle_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraObstacleInterface_weatherdata
{
public:
  explicit Init_CameraObstacleInterface_weatherdata(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::CameraObstacleInterface weatherdata(::car_interfaces::msg::CameraObstacleInterface::_weatherdata_type arg)
  {
    msg_.weatherdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_process_time
{
public:
  explicit Init_CameraObstacleInterface_process_time(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_CameraObstacleInterface_weatherdata process_time(::car_interfaces::msg::CameraObstacleInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return Init_CameraObstacleInterface_weatherdata(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_resultimage
{
public:
  explicit Init_CameraObstacleInterface_resultimage(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_CameraObstacleInterface_process_time resultimage(::car_interfaces::msg::CameraObstacleInterface::_resultimage_type arg)
  {
    msg_.resultimage = std::move(arg);
    return Init_CameraObstacleInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_obstacledata
{
public:
  explicit Init_CameraObstacleInterface_obstacledata(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_CameraObstacleInterface_resultimage obstacledata(::car_interfaces::msg::CameraObstacleInterface::_obstacledata_type arg)
  {
    msg_.obstacledata = std::move(arg);
    return Init_CameraObstacleInterface_resultimage(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_number
{
public:
  explicit Init_CameraObstacleInterface_number(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_CameraObstacleInterface_obstacledata number(::car_interfaces::msg::CameraObstacleInterface::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_CameraObstacleInterface_obstacledata(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_id
{
public:
  explicit Init_CameraObstacleInterface_id(::car_interfaces::msg::CameraObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_CameraObstacleInterface_number id(::car_interfaces::msg::CameraObstacleInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CameraObstacleInterface_number(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

class Init_CameraObstacleInterface_timestamp
{
public:
  Init_CameraObstacleInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraObstacleInterface_id timestamp(::car_interfaces::msg::CameraObstacleInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraObstacleInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::CameraObstacleInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::CameraObstacleInterface>()
{
  return car_interfaces::msg::builder::Init_CameraObstacleInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__BUILDER_HPP_
