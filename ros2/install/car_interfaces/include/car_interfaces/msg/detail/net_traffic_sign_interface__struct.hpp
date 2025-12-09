// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__NetTrafficSignInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__NetTrafficSignInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetTrafficSignInterface_
{
  using Type = NetTrafficSignInterface_<ContainerAllocator>;

  explicit NetTrafficSignInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->lightnumber = 0;
      this->etcnumber = 0;
      this->parkingnumber = 0;
      this->process_time = 0.0f;
    }
  }

  explicit NetTrafficSignInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->lightnumber = 0;
      this->etcnumber = 0;
      this->parkingnumber = 0;
      this->process_time = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _lightnumber_type =
    int8_t;
  _lightnumber_type lightnumber;
  using _lightstate_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _lightstate_type lightstate;
  using _etcnumber_type =
    int8_t;
  _etcnumber_type etcnumber;
  using _etcstate_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _etcstate_type etcstate;
  using _parkingnumber_type =
    int8_t;
  _parkingnumber_type parkingnumber;
  using _parkingstate_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _parkingstate_type parkingstate;
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
  Type & set__lightnumber(
    const int8_t & _arg)
  {
    this->lightnumber = _arg;
    return *this;
  }
  Type & set__lightstate(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->lightstate = _arg;
    return *this;
  }
  Type & set__etcnumber(
    const int8_t & _arg)
  {
    this->etcnumber = _arg;
    return *this;
  }
  Type & set__etcstate(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->etcstate = _arg;
    return *this;
  }
  Type & set__parkingnumber(
    const int8_t & _arg)
  {
    this->parkingnumber = _arg;
    return *this;
  }
  Type & set__parkingstate(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->parkingstate = _arg;
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
    car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__NetTrafficSignInterface
    std::shared_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__NetTrafficSignInterface
    std::shared_ptr<car_interfaces::msg::NetTrafficSignInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetTrafficSignInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lightnumber != other.lightnumber) {
      return false;
    }
    if (this->lightstate != other.lightstate) {
      return false;
    }
    if (this->etcnumber != other.etcnumber) {
      return false;
    }
    if (this->etcstate != other.etcstate) {
      return false;
    }
    if (this->parkingnumber != other.parkingnumber) {
      return false;
    }
    if (this->parkingstate != other.parkingstate) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetTrafficSignInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetTrafficSignInterface_

// alias to use template instance with default allocator
using NetTrafficSignInterface =
  car_interfaces::msg::NetTrafficSignInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_HPP_
