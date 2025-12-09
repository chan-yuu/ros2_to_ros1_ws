// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/SonicObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/sonic_obstacle_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_SonicObstacleInterface_process_time
{
public:
  explicit Init_SonicObstacleInterface_process_time(::car_interfaces::msg::SonicObstacleInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::SonicObstacleInterface process_time(::car_interfaces::msg::SonicObstacleInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::SonicObstacleInterface msg_;
};

class Init_SonicObstacleInterface_obstacledata
{
public:
  explicit Init_SonicObstacleInterface_obstacledata(::car_interfaces::msg::SonicObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_SonicObstacleInterface_process_time obstacledata(::car_interfaces::msg::SonicObstacleInterface::_obstacledata_type arg)
  {
    msg_.obstacledata = std::move(arg);
    return Init_SonicObstacleInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::SonicObstacleInterface msg_;
};

class Init_SonicObstacleInterface_number
{
public:
  explicit Init_SonicObstacleInterface_number(::car_interfaces::msg::SonicObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_SonicObstacleInterface_obstacledata number(::car_interfaces::msg::SonicObstacleInterface::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_SonicObstacleInterface_obstacledata(msg_);
  }

private:
  ::car_interfaces::msg::SonicObstacleInterface msg_;
};

class Init_SonicObstacleInterface_id
{
public:
  explicit Init_SonicObstacleInterface_id(::car_interfaces::msg::SonicObstacleInterface & msg)
  : msg_(msg)
  {}
  Init_SonicObstacleInterface_number id(::car_interfaces::msg::SonicObstacleInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SonicObstacleInterface_number(msg_);
  }

private:
  ::car_interfaces::msg::SonicObstacleInterface msg_;
};

class Init_SonicObstacleInterface_timestamp
{
public:
  Init_SonicObstacleInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonicObstacleInterface_id timestamp(::car_interfaces::msg::SonicObstacleInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SonicObstacleInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::SonicObstacleInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::SonicObstacleInterface>()
{
  return car_interfaces::msg::builder::Init_SonicObstacleInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__BUILDER_HPP_
