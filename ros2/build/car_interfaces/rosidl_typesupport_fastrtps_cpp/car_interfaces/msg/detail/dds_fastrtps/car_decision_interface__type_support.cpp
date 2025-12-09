// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/car_decision_interface__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_interfaces/msg/detail/car_decision_interface__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace car_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_serialize(
  const car_interfaces::msg::CarDecisionInterface & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: stop
  cdr << (ros_message.stop ? true : false);
  // Member: speed
  cdr << (ros_message.speed ? true : false);
  // Member: maxspeed
  cdr << ros_message.maxspeed;
  // Member: process_time
  cdr << ros_message.process_time;
  // Member: statemode
  cdr << ros_message.statemode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_interfaces::msg::CarDecisionInterface & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stop = tmp ? true : false;
  }

  // Member: speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speed = tmp ? true : false;
  }

  // Member: maxspeed
  cdr >> ros_message.maxspeed;

  // Member: process_time
  cdr >> ros_message.process_time;

  // Member: statemode
  cdr >> ros_message.statemode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
get_serialized_size(
  const car_interfaces::msg::CarDecisionInterface & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop
  {
    size_t item_size = sizeof(ros_message.stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxspeed
  {
    size_t item_size = sizeof(ros_message.maxspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: process_time
  {
    size_t item_size = sizeof(ros_message.process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: statemode
  {
    size_t item_size = sizeof(ros_message.statemode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
max_serialized_size_CarDecisionInterface(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maxspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: statemode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CarDecisionInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::CarDecisionInterface *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarDecisionInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_interfaces::msg::CarDecisionInterface *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarDecisionInterface__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::CarDecisionInterface *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarDecisionInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarDecisionInterface(full_bounded, 0);
}

static message_type_support_callbacks_t _CarDecisionInterface__callbacks = {
  "car_interfaces::msg",
  "CarDecisionInterface",
  _CarDecisionInterface__cdr_serialize,
  _CarDecisionInterface__cdr_deserialize,
  _CarDecisionInterface__get_serialized_size,
  _CarDecisionInterface__max_serialized_size
};

static rosidl_message_type_support_t _CarDecisionInterface__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarDecisionInterface__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace car_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_car_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<car_interfaces::msg::CarDecisionInterface>()
{
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_CarDecisionInterface__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_interfaces, msg, CarDecisionInterface)() {
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_CarDecisionInterface__handle;
}

#ifdef __cplusplus
}
#endif
