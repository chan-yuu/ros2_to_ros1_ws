// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/pid_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/pid_interface__struct.h"
#include "car_interfaces/msg/detail/pid_interface__functions.h"
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


using _PidInterface__ros_msg_type = car_interfaces__msg__PidInterface;

static bool _PidInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PidInterface__ros_msg_type * ros_message = static_cast<const _PidInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: refspeed
  {
    cdr << ros_message->refspeed;
  }

  // Field name: nowspeed
  {
    cdr << ros_message->nowspeed;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: throttle_percentage
  {
    cdr << ros_message->throttle_percentage;
  }

  // Field name: braking_percentage
  {
    cdr << ros_message->braking_percentage;
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  // Field name: cte
  {
    cdr << ros_message->cte;
  }

  // Field name: dhead
  {
    cdr << ros_message->dhead;
  }

  // Field name: curpos_x
  {
    cdr << ros_message->curpos_x;
  }

  // Field name: curpos_y
  {
    cdr << ros_message->curpos_y;
  }

  // Field name: refpox_x
  {
    cdr << ros_message->refpox_x;
  }

  // Field name: refpox_y
  {
    cdr << ros_message->refpox_y;
  }

  return true;
}

static bool _PidInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PidInterface__ros_msg_type * ros_message = static_cast<_PidInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: refspeed
  {
    cdr >> ros_message->refspeed;
  }

  // Field name: nowspeed
  {
    cdr >> ros_message->nowspeed;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: throttle_percentage
  {
    cdr >> ros_message->throttle_percentage;
  }

  // Field name: braking_percentage
  {
    cdr >> ros_message->braking_percentage;
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  // Field name: cte
  {
    cdr >> ros_message->cte;
  }

  // Field name: dhead
  {
    cdr >> ros_message->dhead;
  }

  // Field name: curpos_x
  {
    cdr >> ros_message->curpos_x;
  }

  // Field name: curpos_y
  {
    cdr >> ros_message->curpos_y;
  }

  // Field name: refpox_x
  {
    cdr >> ros_message->refpox_x;
  }

  // Field name: refpox_y
  {
    cdr >> ros_message->refpox_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__PidInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PidInterface__ros_msg_type * ros_message = static_cast<const _PidInterface__ros_msg_type *>(untyped_ros_message);
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
  // field.name refspeed
  {
    size_t item_size = sizeof(ros_message->refspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nowspeed
  {
    size_t item_size = sizeof(ros_message->nowspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_percentage
  {
    size_t item_size = sizeof(ros_message->throttle_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braking_percentage
  {
    size_t item_size = sizeof(ros_message->braking_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name process_time
  {
    size_t item_size = sizeof(ros_message->process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cte
  {
    size_t item_size = sizeof(ros_message->cte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dhead
  {
    size_t item_size = sizeof(ros_message->dhead);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curpos_x
  {
    size_t item_size = sizeof(ros_message->curpos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curpos_y
  {
    size_t item_size = sizeof(ros_message->curpos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refpox_x
  {
    size_t item_size = sizeof(ros_message->refpox_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refpox_y
  {
    size_t item_size = sizeof(ros_message->refpox_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PidInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__PidInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__PidInterface(
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
  // member: refspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nowspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: braking_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dhead
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curpos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curpos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refpox_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refpox_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PidInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__PidInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PidInterface = {
  "car_interfaces::msg",
  "PidInterface",
  _PidInterface__cdr_serialize,
  _PidInterface__cdr_deserialize,
  _PidInterface__get_serialized_size,
  _PidInterface__max_serialized_size
};

static rosidl_message_type_support_t _PidInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PidInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, PidInterface)() {
  return &_PidInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
