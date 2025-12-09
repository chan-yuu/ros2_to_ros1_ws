// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/CarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__CarOriInterface __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__CarOriInterface __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarOriInterface_
{
  using Type = CarOriInterface_<ContainerAllocator>;

  explicit CarOriInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0;
      this->carspeed = 0.0f;
      this->steerangle = 0.0f;
      this->gearpos = 0;
      this->braketq = 0.0f;
      this->parkingstate = 0;
      this->soc = 0;
      this->batteryvol = 0;
      this->batterydischargecur = 0;
      this->car_run_mode = 0;
      this->throttle_percentage = 0;
      this->braking_percentage = 0;
      this->left_light = false;
      this->right_light = false;
      this->reversing_light = false;
      this->speaker = false;
      this->start_button = false;
      this->stop_button = false;
      this->state = 0;
      this->error = 0;
      this->process_time = 0.0f;
    }
  }

  explicit CarOriInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0;
      this->carspeed = 0.0f;
      this->steerangle = 0.0f;
      this->gearpos = 0;
      this->braketq = 0.0f;
      this->parkingstate = 0;
      this->soc = 0;
      this->batteryvol = 0;
      this->batterydischargecur = 0;
      this->car_run_mode = 0;
      this->throttle_percentage = 0;
      this->braking_percentage = 0;
      this->left_light = false;
      this->right_light = false;
      this->reversing_light = false;
      this->speaker = false;
      this->start_button = false;
      this->stop_button = false;
      this->state = 0;
      this->error = 0;
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
  using _carspeed_type =
    float;
  _carspeed_type carspeed;
  using _steerangle_type =
    float;
  _steerangle_type steerangle;
  using _gearpos_type =
    int8_t;
  _gearpos_type gearpos;
  using _braketq_type =
    float;
  _braketq_type braketq;
  using _parkingstate_type =
    uint8_t;
  _parkingstate_type parkingstate;
  using _soc_type =
    uint8_t;
  _soc_type soc;
  using _batteryvol_type =
    uint8_t;
  _batteryvol_type batteryvol;
  using _batterydischargecur_type =
    uint16_t;
  _batterydischargecur_type batterydischargecur;
  using _car_run_mode_type =
    uint8_t;
  _car_run_mode_type car_run_mode;
  using _throttle_percentage_type =
    uint8_t;
  _throttle_percentage_type throttle_percentage;
  using _braking_percentage_type =
    uint8_t;
  _braking_percentage_type braking_percentage;
  using _left_light_type =
    bool;
  _left_light_type left_light;
  using _right_light_type =
    bool;
  _right_light_type right_light;
  using _reversing_light_type =
    bool;
  _reversing_light_type reversing_light;
  using _speaker_type =
    bool;
  _speaker_type speaker;
  using _start_button_type =
    bool;
  _start_button_type start_button;
  using _stop_button_type =
    bool;
  _stop_button_type stop_button;
  using _state_type =
    uint8_t;
  _state_type state;
  using _error_type =
    uint8_t;
  _error_type error;
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
  Type & set__carspeed(
    const float & _arg)
  {
    this->carspeed = _arg;
    return *this;
  }
  Type & set__steerangle(
    const float & _arg)
  {
    this->steerangle = _arg;
    return *this;
  }
  Type & set__gearpos(
    const int8_t & _arg)
  {
    this->gearpos = _arg;
    return *this;
  }
  Type & set__braketq(
    const float & _arg)
  {
    this->braketq = _arg;
    return *this;
  }
  Type & set__parkingstate(
    const uint8_t & _arg)
  {
    this->parkingstate = _arg;
    return *this;
  }
  Type & set__soc(
    const uint8_t & _arg)
  {
    this->soc = _arg;
    return *this;
  }
  Type & set__batteryvol(
    const uint8_t & _arg)
  {
    this->batteryvol = _arg;
    return *this;
  }
  Type & set__batterydischargecur(
    const uint16_t & _arg)
  {
    this->batterydischargecur = _arg;
    return *this;
  }
  Type & set__car_run_mode(
    const uint8_t & _arg)
  {
    this->car_run_mode = _arg;
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
  Type & set__left_light(
    const bool & _arg)
  {
    this->left_light = _arg;
    return *this;
  }
  Type & set__right_light(
    const bool & _arg)
  {
    this->right_light = _arg;
    return *this;
  }
  Type & set__reversing_light(
    const bool & _arg)
  {
    this->reversing_light = _arg;
    return *this;
  }
  Type & set__speaker(
    const bool & _arg)
  {
    this->speaker = _arg;
    return *this;
  }
  Type & set__start_button(
    const bool & _arg)
  {
    this->start_button = _arg;
    return *this;
  }
  Type & set__stop_button(
    const bool & _arg)
  {
    this->stop_button = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
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
    car_interfaces::msg::CarOriInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::CarOriInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CarOriInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::CarOriInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__CarOriInterface
    std::shared_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__CarOriInterface
    std::shared_ptr<car_interfaces::msg::CarOriInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarOriInterface_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->carspeed != other.carspeed) {
      return false;
    }
    if (this->steerangle != other.steerangle) {
      return false;
    }
    if (this->gearpos != other.gearpos) {
      return false;
    }
    if (this->braketq != other.braketq) {
      return false;
    }
    if (this->parkingstate != other.parkingstate) {
      return false;
    }
    if (this->soc != other.soc) {
      return false;
    }
    if (this->batteryvol != other.batteryvol) {
      return false;
    }
    if (this->batterydischargecur != other.batterydischargecur) {
      return false;
    }
    if (this->car_run_mode != other.car_run_mode) {
      return false;
    }
    if (this->throttle_percentage != other.throttle_percentage) {
      return false;
    }
    if (this->braking_percentage != other.braking_percentage) {
      return false;
    }
    if (this->left_light != other.left_light) {
      return false;
    }
    if (this->right_light != other.right_light) {
      return false;
    }
    if (this->reversing_light != other.reversing_light) {
      return false;
    }
    if (this->speaker != other.speaker) {
      return false;
    }
    if (this->start_button != other.start_button) {
      return false;
    }
    if (this->stop_button != other.stop_button) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->process_time != other.process_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarOriInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarOriInterface_

// alias to use template instance with default allocator
using CarOriInterface =
  car_interfaces::msg::CarOriInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_HPP_
