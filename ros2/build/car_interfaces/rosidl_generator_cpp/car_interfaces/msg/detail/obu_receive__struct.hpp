// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__ObuReceive __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__ObuReceive __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObuReceive_
{
  using Type = ObuReceive_<ContainerAllocator>;

  explicit ObuReceive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->time = 0;
      this->dis_to_stopline = 0.0f;
      this->cutin_flag = 0;
      this->end_point_lat = 0.0;
      this->end_point_lon = 0.0;
      this->transit_point_1_lat = 0.0;
      this->transit_point_1_lon = 0.0;
      this->transit_point_2_lat = 0.0;
      this->transit_point_2_lon = 0.0;
    }
  }

  explicit ObuReceive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->time = 0;
      this->dis_to_stopline = 0.0f;
      this->cutin_flag = 0;
      this->end_point_lat = 0.0;
      this->end_point_lon = 0.0;
      this->transit_point_1_lat = 0.0;
      this->transit_point_1_lon = 0.0;
      this->transit_point_2_lat = 0.0;
      this->transit_point_2_lon = 0.0;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _time_type =
    uint8_t;
  _time_type time;
  using _dis_to_stopline_type =
    float;
  _dis_to_stopline_type dis_to_stopline;
  using _cutin_flag_type =
    uint8_t;
  _cutin_flag_type cutin_flag;
  using _end_point_lat_type =
    double;
  _end_point_lat_type end_point_lat;
  using _end_point_lon_type =
    double;
  _end_point_lon_type end_point_lon;
  using _transit_point_1_lat_type =
    double;
  _transit_point_1_lat_type transit_point_1_lat;
  using _transit_point_1_lon_type =
    double;
  _transit_point_1_lon_type transit_point_1_lon;
  using _transit_point_2_lat_type =
    double;
  _transit_point_2_lat_type transit_point_2_lat;
  using _transit_point_2_lon_type =
    double;
  _transit_point_2_lon_type transit_point_2_lon;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__time(
    const uint8_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__dis_to_stopline(
    const float & _arg)
  {
    this->dis_to_stopline = _arg;
    return *this;
  }
  Type & set__cutin_flag(
    const uint8_t & _arg)
  {
    this->cutin_flag = _arg;
    return *this;
  }
  Type & set__end_point_lat(
    const double & _arg)
  {
    this->end_point_lat = _arg;
    return *this;
  }
  Type & set__end_point_lon(
    const double & _arg)
  {
    this->end_point_lon = _arg;
    return *this;
  }
  Type & set__transit_point_1_lat(
    const double & _arg)
  {
    this->transit_point_1_lat = _arg;
    return *this;
  }
  Type & set__transit_point_1_lon(
    const double & _arg)
  {
    this->transit_point_1_lon = _arg;
    return *this;
  }
  Type & set__transit_point_2_lat(
    const double & _arg)
  {
    this->transit_point_2_lat = _arg;
    return *this;
  }
  Type & set__transit_point_2_lon(
    const double & _arg)
  {
    this->transit_point_2_lon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::ObuReceive_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::ObuReceive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::ObuReceive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::ObuReceive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__ObuReceive
    std::shared_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__ObuReceive
    std::shared_ptr<car_interfaces::msg::ObuReceive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObuReceive_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->dis_to_stopline != other.dis_to_stopline) {
      return false;
    }
    if (this->cutin_flag != other.cutin_flag) {
      return false;
    }
    if (this->end_point_lat != other.end_point_lat) {
      return false;
    }
    if (this->end_point_lon != other.end_point_lon) {
      return false;
    }
    if (this->transit_point_1_lat != other.transit_point_1_lat) {
      return false;
    }
    if (this->transit_point_1_lon != other.transit_point_1_lon) {
      return false;
    }
    if (this->transit_point_2_lat != other.transit_point_2_lat) {
      return false;
    }
    if (this->transit_point_2_lon != other.transit_point_2_lon) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObuReceive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObuReceive_

// alias to use template instance with default allocator
using ObuReceive =
  car_interfaces::msg::ObuReceive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_HPP_
