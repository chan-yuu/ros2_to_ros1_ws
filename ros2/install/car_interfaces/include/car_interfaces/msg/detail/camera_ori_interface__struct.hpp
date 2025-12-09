// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/CameraOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'imagedata'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__CameraOriInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__CameraOriInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraOriInterface_
{
  using Type = CameraOriInterface_<ContainerAllocator>;

  explicit CameraOriInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imagedata(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0;
      this->process_time = 0.0f;
    }
  }

  explicit CameraOriInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imagedata(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0;
      this->process_time = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _id_type =
    uint8_t;
  _id_type id;
  using _imagedata_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _imagedata_type imagedata;
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
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__imagedata(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->imagedata = _arg;
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
    car_interfaces::msg::CameraOriInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::CameraOriInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CameraOriInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CameraOriInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__CameraOriInterface
    std::shared_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__CameraOriInterface
    std::shared_ptr<car_interfaces::msg::CameraOriInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraOriInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->imagedata != other.imagedata) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraOriInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraOriInterface_

// alias to use template instance with default allocator
using CameraOriInterface =
  car_interfaces::msg::CameraOriInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAMERA_ORI_INTERFACE__STRUCT_HPP_
