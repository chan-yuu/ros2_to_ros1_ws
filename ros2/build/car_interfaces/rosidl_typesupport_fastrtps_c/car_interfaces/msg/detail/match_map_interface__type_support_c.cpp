// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/match_map_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/match_map_interface__struct.h"
#include "car_interfaces/msg/detail/match_map_interface__functions.h"
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


using _MatchMapInterface__ros_msg_type = car_interfaces__msg__MatchMapInterface;

static bool _MatchMapInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MatchMapInterface__ros_msg_type * ros_message = static_cast<const _MatchMapInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: special_road
  {
    cdr << ros_message->special_road;
  }

  // Field name: stopline_longitude
  {
    cdr << ros_message->stopline_longitude;
  }

  // Field name: stopline_latitude
  {
    cdr << ros_message->stopline_latitude;
  }

  // Field name: cross
  {
    cdr << (ros_message->cross ? true : false);
  }

  // Field name: light_recognition
  {
    cdr << (ros_message->light_recognition ? true : false);
  }

  return true;
}

static bool _MatchMapInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MatchMapInterface__ros_msg_type * ros_message = static_cast<_MatchMapInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: special_road
  {
    cdr >> ros_message->special_road;
  }

  // Field name: stopline_longitude
  {
    cdr >> ros_message->stopline_longitude;
  }

  // Field name: stopline_latitude
  {
    cdr >> ros_message->stopline_latitude;
  }

  // Field name: cross
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cross = tmp ? true : false;
  }

  // Field name: light_recognition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_recognition = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__MatchMapInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MatchMapInterface__ros_msg_type * ros_message = static_cast<const _MatchMapInterface__ros_msg_type *>(untyped_ros_message);
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
  // field.name special_road
  {
    size_t item_size = sizeof(ros_message->special_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stopline_longitude
  {
    size_t item_size = sizeof(ros_message->stopline_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stopline_latitude
  {
    size_t item_size = sizeof(ros_message->stopline_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cross
  {
    size_t item_size = sizeof(ros_message->cross);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_recognition
  {
    size_t item_size = sizeof(ros_message->light_recognition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MatchMapInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__MatchMapInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__MatchMapInterface(
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
  // member: special_road
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stopline_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stopline_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cross
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_recognition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MatchMapInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__MatchMapInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MatchMapInterface = {
  "car_interfaces::msg",
  "MatchMapInterface",
  _MatchMapInterface__cdr_serialize,
  _MatchMapInterface__cdr_deserialize,
  _MatchMapInterface__get_serialized_size,
  _MatchMapInterface__max_serialized_size
};

static rosidl_message_type_support_t _MatchMapInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MatchMapInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, MatchMapInterface)() {
  return &_MatchMapInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
