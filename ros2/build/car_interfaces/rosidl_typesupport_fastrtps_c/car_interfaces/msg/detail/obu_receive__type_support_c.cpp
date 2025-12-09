// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/obu_receive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/obu_receive__struct.h"
#include "car_interfaces/msg/detail/obu_receive__functions.h"
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


using _ObuReceive__ros_msg_type = car_interfaces__msg__ObuReceive;

static bool _ObuReceive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObuReceive__ros_msg_type * ros_message = static_cast<const _ObuReceive__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: dis_to_stopline
  {
    cdr << ros_message->dis_to_stopline;
  }

  // Field name: cutin_flag
  {
    cdr << ros_message->cutin_flag;
  }

  // Field name: end_point_lat
  {
    cdr << ros_message->end_point_lat;
  }

  // Field name: end_point_lon
  {
    cdr << ros_message->end_point_lon;
  }

  // Field name: transit_point_1_lat
  {
    cdr << ros_message->transit_point_1_lat;
  }

  // Field name: transit_point_1_lon
  {
    cdr << ros_message->transit_point_1_lon;
  }

  // Field name: transit_point_2_lat
  {
    cdr << ros_message->transit_point_2_lat;
  }

  // Field name: transit_point_2_lon
  {
    cdr << ros_message->transit_point_2_lon;
  }

  return true;
}

static bool _ObuReceive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObuReceive__ros_msg_type * ros_message = static_cast<_ObuReceive__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: dis_to_stopline
  {
    cdr >> ros_message->dis_to_stopline;
  }

  // Field name: cutin_flag
  {
    cdr >> ros_message->cutin_flag;
  }

  // Field name: end_point_lat
  {
    cdr >> ros_message->end_point_lat;
  }

  // Field name: end_point_lon
  {
    cdr >> ros_message->end_point_lon;
  }

  // Field name: transit_point_1_lat
  {
    cdr >> ros_message->transit_point_1_lat;
  }

  // Field name: transit_point_1_lon
  {
    cdr >> ros_message->transit_point_1_lon;
  }

  // Field name: transit_point_2_lat
  {
    cdr >> ros_message->transit_point_2_lat;
  }

  // Field name: transit_point_2_lon
  {
    cdr >> ros_message->transit_point_2_lon;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__ObuReceive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObuReceive__ros_msg_type * ros_message = static_cast<const _ObuReceive__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dis_to_stopline
  {
    size_t item_size = sizeof(ros_message->dis_to_stopline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cutin_flag
  {
    size_t item_size = sizeof(ros_message->cutin_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_point_lat
  {
    size_t item_size = sizeof(ros_message->end_point_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_point_lon
  {
    size_t item_size = sizeof(ros_message->end_point_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transit_point_1_lat
  {
    size_t item_size = sizeof(ros_message->transit_point_1_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transit_point_1_lon
  {
    size_t item_size = sizeof(ros_message->transit_point_1_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transit_point_2_lat
  {
    size_t item_size = sizeof(ros_message->transit_point_2_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transit_point_2_lon
  {
    size_t item_size = sizeof(ros_message->transit_point_2_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObuReceive__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__ObuReceive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__ObuReceive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: color
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dis_to_stopline
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cutin_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: end_point_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_point_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: transit_point_1_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: transit_point_1_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: transit_point_2_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: transit_point_2_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ObuReceive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__ObuReceive(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObuReceive = {
  "car_interfaces::msg",
  "ObuReceive",
  _ObuReceive__cdr_serialize,
  _ObuReceive__cdr_deserialize,
  _ObuReceive__get_serialized_size,
  _ObuReceive__max_serialized_size
};

static rosidl_message_type_support_t _ObuReceive__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObuReceive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, ObuReceive)() {
  return &_ObuReceive__type_support;
}

#if defined(__cplusplus)
}
#endif
