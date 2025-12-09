// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/RegulatorInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__RegulatorInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__RegulatorInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegulatorInterface_
{
  using Type = RegulatorInterface_<ContainerAllocator>;

  explicit RegulatorInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->stop = false;
      this->process_time = 0.0f;
    }
  }

  explicit RegulatorInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->stop = false;
      this->process_time = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _stop_type =
    bool;
  _stop_type stop;
  using _process_time_type =
    float;
  _process_time_type process_time;

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
  Type & set__process_time(
    const float & _arg)
  {
    this->process_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::RegulatorInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::RegulatorInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::RegulatorInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::RegulatorInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__RegulatorInterface
    std::shared_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__RegulatorInterface
    std::shared_ptr<car_interfaces::msg::RegulatorInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegulatorInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegulatorInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegulatorInterface_

// alias to use template instance with default allocator
using RegulatorInterface =
  car_interfaces::msg::RegulatorInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__REGULATOR_INTERFACE__STRUCT_HPP_
