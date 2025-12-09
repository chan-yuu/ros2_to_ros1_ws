// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__MatchMapInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__MatchMapInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MatchMapInterface_
{
  using Type = MatchMapInterface_<ContainerAllocator>;

  explicit MatchMapInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->special_road = 0;
      this->stopline_longitude = 0.0;
      this->stopline_latitude = 0.0;
      this->cross = false;
      this->light_recognition = false;
    }
  }

  explicit MatchMapInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->special_road = 0;
      this->stopline_longitude = 0.0;
      this->stopline_latitude = 0.0;
      this->cross = false;
      this->light_recognition = false;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _special_road_type =
    uint8_t;
  _special_road_type special_road;
  using _stopline_longitude_type =
    double;
  _stopline_longitude_type stopline_longitude;
  using _stopline_latitude_type =
    double;
  _stopline_latitude_type stopline_latitude;
  using _cross_type =
    bool;
  _cross_type cross;
  using _light_recognition_type =
    bool;
  _light_recognition_type light_recognition;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__special_road(
    const uint8_t & _arg)
  {
    this->special_road = _arg;
    return *this;
  }
  Type & set__stopline_longitude(
    const double & _arg)
  {
    this->stopline_longitude = _arg;
    return *this;
  }
  Type & set__stopline_latitude(
    const double & _arg)
  {
    this->stopline_latitude = _arg;
    return *this;
  }
  Type & set__cross(
    const bool & _arg)
  {
    this->cross = _arg;
    return *this;
  }
  Type & set__light_recognition(
    const bool & _arg)
  {
    this->light_recognition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::MatchMapInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::MatchMapInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::MatchMapInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::MatchMapInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__MatchMapInterface
    std::shared_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__MatchMapInterface
    std::shared_ptr<car_interfaces::msg::MatchMapInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MatchMapInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->special_road != other.special_road) {
      return false;
    }
    if (this->stopline_longitude != other.stopline_longitude) {
      return false;
    }
    if (this->stopline_latitude != other.stopline_latitude) {
      return false;
    }
    if (this->cross != other.cross) {
      return false;
    }
    if (this->light_recognition != other.light_recognition) {
      return false;
    }
    return true;
  }
  bool operator!=(const MatchMapInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MatchMapInterface_

// alias to use template instance with default allocator
using MatchMapInterface =
  car_interfaces::msg::MatchMapInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_HPP_
