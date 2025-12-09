// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/HmiStartEndPointInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__HmiStartEndPointInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__HmiStartEndPointInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HmiStartEndPointInterface_
{
  using Type = HmiStartEndPointInterface_<ContainerAllocator>;

  explicit HmiStartEndPointInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->process_time = 0.0f;
    }
  }

  explicit HmiStartEndPointInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->process_time = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _startpoint_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _startpoint_type startpoint;
  using _endpoint_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _endpoint_type endpoint;
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
  Type & set__startpoint(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->startpoint = _arg;
    return *this;
  }
  Type & set__endpoint(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->endpoint = _arg;
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
    car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__HmiStartEndPointInterface
    std::shared_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__HmiStartEndPointInterface
    std::shared_ptr<car_interfaces::msg::HmiStartEndPointInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HmiStartEndPointInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->startpoint != other.startpoint) {
      return false;
    }
    if (this->endpoint != other.endpoint) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const HmiStartEndPointInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HmiStartEndPointInterface_

// alias to use template instance with default allocator
using HmiStartEndPointInterface =
  car_interfaces::msg::HmiStartEndPointInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__HMI_START_END_POINT_INTERFACE__STRUCT_HPP_
