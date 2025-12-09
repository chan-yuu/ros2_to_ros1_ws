// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__PidInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__PidInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PidInterface_
{
  using Type = PidInterface_<ContainerAllocator>;

  explicit PidInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->refspeed = 0.0f;
      this->nowspeed = 0.0f;
      this->angle = 0.0f;
      this->gear = 0;
      this->throttle_percentage = 0;
      this->braking_percentage = 0;
      this->process_time = 0.0f;
      this->cte = 0.0f;
      this->dhead = 0.0f;
      this->curpos_x = 0.0f;
      this->curpos_y = 0.0f;
      this->refpox_x = 0.0f;
      this->refpox_y = 0.0f;
    }
  }

  explicit PidInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->refspeed = 0.0f;
      this->nowspeed = 0.0f;
      this->angle = 0.0f;
      this->gear = 0;
      this->throttle_percentage = 0;
      this->braking_percentage = 0;
      this->process_time = 0.0f;
      this->cte = 0.0f;
      this->dhead = 0.0f;
      this->curpos_x = 0.0f;
      this->curpos_y = 0.0f;
      this->refpox_x = 0.0f;
      this->refpox_y = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _refspeed_type =
    float;
  _refspeed_type refspeed;
  using _nowspeed_type =
    float;
  _nowspeed_type nowspeed;
  using _angle_type =
    float;
  _angle_type angle;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _throttle_percentage_type =
    uint8_t;
  _throttle_percentage_type throttle_percentage;
  using _braking_percentage_type =
    uint8_t;
  _braking_percentage_type braking_percentage;
  using _process_time_type =
    float;
  _process_time_type process_time;
  using _cte_type =
    float;
  _cte_type cte;
  using _dhead_type =
    float;
  _dhead_type dhead;
  using _curpos_x_type =
    float;
  _curpos_x_type curpos_x;
  using _curpos_y_type =
    float;
  _curpos_y_type curpos_y;
  using _refpox_x_type =
    float;
  _refpox_x_type refpox_x;
  using _refpox_y_type =
    float;
  _refpox_y_type refpox_y;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__refspeed(
    const float & _arg)
  {
    this->refspeed = _arg;
    return *this;
  }
  Type & set__nowspeed(
    const float & _arg)
  {
    this->nowspeed = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__throttle_percentage(
    const uint8_t & _arg)
  {
    this->throttle_percentage = _arg;
    return *this;
  }
  Type & set__braking_percentage(
    const uint8_t & _arg)
  {
    this->braking_percentage = _arg;
    return *this;
  }
  Type & set__process_time(
    const float & _arg)
  {
    this->process_time = _arg;
    return *this;
  }
  Type & set__cte(
    const float & _arg)
  {
    this->cte = _arg;
    return *this;
  }
  Type & set__dhead(
    const float & _arg)
  {
    this->dhead = _arg;
    return *this;
  }
  Type & set__curpos_x(
    const float & _arg)
  {
    this->curpos_x = _arg;
    return *this;
  }
  Type & set__curpos_y(
    const float & _arg)
  {
    this->curpos_y = _arg;
    return *this;
  }
  Type & set__refpox_x(
    const float & _arg)
  {
    this->refpox_x = _arg;
    return *this;
  }
  Type & set__refpox_y(
    const float & _arg)
  {
    this->refpox_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::PidInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::PidInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::PidInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::PidInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__PidInterface
    std::shared_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__PidInterface
    std::shared_ptr<car_interfaces::msg::PidInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PidInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->refspeed != other.refspeed) {
      return false;
    }
    if (this->nowspeed != other.nowspeed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->throttle_percentage != other.throttle_percentage) {
      return false;
    }
    if (this->braking_percentage != other.braking_percentage) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    if (this->cte != other.cte) {
      return false;
    }
    if (this->dhead != other.dhead) {
      return false;
    }
    if (this->curpos_x != other.curpos_x) {
      return false;
    }
    if (this->curpos_y != other.curpos_y) {
      return false;
    }
    if (this->refpox_x != other.refpox_x) {
      return false;
    }
    if (this->refpox_y != other.refpox_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PidInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PidInterface_

// alias to use template instance with default allocator
using PidInterface =
  car_interfaces::msg::PidInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__STRUCT_HPP_
