// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/car_decision_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/car_decision_interface__struct.h"
#include "car_interfaces/msg/detail/car_decision_interface__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CarDecisionInterface__ros_msg_type = car_interfaces__msg__CarDecisionInterface;

static bool _CarDecisionInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarDecisionInterface__ros_msg_type * ros_message = static_cast<const _CarDecisionInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: stop
  {
    cdr << (ros_message->stop ? true : false);
  }

  // Field name: speed
  {
    cdr << (ros_message->speed ? true : false);
  }

  // Field name: maxspeed
  {
    cdr << ros_message->maxspeed;
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  // Field name: statemode
  {
    cdr << ros_message->statemode;
  }

  return true;
}

static bool _CarDecisionInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarDecisionInterface__ros_msg_type * ros_message = static_cast<_CarDecisionInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop = tmp ? true : false;
  }

  // Field name: speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed = tmp ? true : false;
  }

  // Field name: maxspeed
  {
    cdr >> ros_message->maxspeed;
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  // Field name: statemode
  {
    cdr >> ros_message->statemode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__CarDecisionInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarDecisionInterface__ros_msg_type * ros_message = static_cast<const _CarDecisionInterface__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop
  {
    size_t item_size = sizeof(ros_message->stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxspeed
  {
    size_t item_size = sizeof(ros_message->maxspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name process_time
  {
    size_t item_size = sizeof(ros_message->process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name statemode
  {
    size_t item_size = sizeof(ros_message->statemode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarDecisionInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__CarDecisionInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__CarDecisionInterface(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maxspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: statemode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarDecisionInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__CarDecisionInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarDecisionInterface = {
  "car_interfaces::msg",
  "CarDecisionInterface",
  _CarDecisionInterface__cdr_serialize,
  _CarDecisionInterface__cdr_deserialize,
  _CarDecisionInterface__get_serialized_size,
  _CarDecisionInterface__max_serialized_size
};

static rosidl_message_type_support_t _CarDecisionInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarDecisionInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, CarDecisionInterface)() {
  return &_CarDecisionInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
