// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__CarDecisionInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__CarDecisionInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarDecisionInterface_
{
  using Type = CarDecisionInterface_<ContainerAllocator>;

  explicit CarDecisionInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->stop = false;
      this->speed = false;
      this->maxspeed = 0.0f;
      this->process_time = 0.0f;
      this->statemode = 0;
    }
  }

  explicit CarDecisionInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->stop = false;
      this->speed = false;
      this->maxspeed = 0.0f;
      this->process_time = 0.0f;
      this->statemode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _stop_type =
    bool;
  _stop_type stop;
  using _speed_type =
    bool;
  _speed_type speed;
  using _maxspeed_type =
    float;
  _maxspeed_type maxspeed;
  using _process_time_type =
    float;
  _process_time_type process_time;
  using _statemode_type =
    int8_t;
  _statemode_type statemode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__speed(
    const bool & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__maxspeed(
    const float & _arg)
  {
    this->maxspeed = _arg;
    return *this;
  }
  Type & set__process_time(
    const float & _arg)
  {
    this->process_time = _arg;
    return *this;
  }
  Type & set__statemode(
    const int8_t & _arg)
  {
    this->statemode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__CarDecisionInterface
    std::shared_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__CarDecisionInterface
    std::shared_ptr<car_interfaces::msg::CarDecisionInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarDecisionInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->maxspeed != other.maxspeed) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    if (this->statemode != other.statemode) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarDecisionInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarDecisionInterface_

// alias to use template instance with default allocator
using CarDecisionInterface =
  car_interfaces::msg::CarDecisionInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__STRUCT_HPP_
