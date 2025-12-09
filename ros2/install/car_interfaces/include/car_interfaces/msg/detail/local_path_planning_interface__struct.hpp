// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__LocalPathPlanningInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__LocalPathPlanningInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalPathPlanningInterface_
{
  using Type = LocalPathPlanningInterface_<ContainerAllocator>;

  explicit LocalPathPlanningInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->control_mode = 0.0f;
      this->path_end_dis = 0.0f;
      this->process_time = 0.0f;
    }
  }

  explicit LocalPathPlanningInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->control_mode = 0.0f;
      this->path_end_dis = 0.0f;
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
  using _longitude_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _longitude_type longitude;
  using _latitude_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _latitude_type latitude;
  using _speed_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _speed_type speed;
  using _angle_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angle_type angle;
  using _control_mode_type =
    float;
  _control_mode_type control_mode;
  using _path_end_dis_type =
    float;
  _path_end_dis_type path_end_dis;
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
  Type & set__longitude(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__speed(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__angle(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__control_mode(
    const float & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__path_end_dis(
    const float & _arg)
  {
    this->path_end_dis = _arg;
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
    car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__LocalPathPlanningInterface
    std::shared_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__LocalPathPlanningInterface
    std::shared_ptr<car_interfaces::msg::LocalPathPlanningInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalPathPlanningInterface_ & other) const
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
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->path_end_dis != other.path_end_dis) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalPathPlanningInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalPathPlanningInterface_

// alias to use template instance with default allocator
using LocalPathPlanningInterface =
  car_interfaces::msg::LocalPathPlanningInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__STRUCT_HPP_
