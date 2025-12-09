// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/local_path_planning_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/local_path_planning_interface__struct.h"
#include "car_interfaces/msg/detail/local_path_planning_interface__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // angle, endpoint, latitude, longitude, speed, startpoint
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // angle, endpoint, latitude, longitude, speed, startpoint

// forward declare type support functions


using _LocalPathPlanningInterface__ros_msg_type = car_interfaces__msg__LocalPathPlanningInterface;

static bool _LocalPathPlanningInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LocalPathPlanningInterface__ros_msg_type * ros_message = static_cast<const _LocalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: startpoint
  {
    size_t size = ros_message->startpoint.size;
    auto array_ptr = ros_message->startpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: endpoint
  {
    size_t size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: longitude
  {
    size_t size = ros_message->longitude.size;
    auto array_ptr = ros_message->longitude.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: latitude
  {
    size_t size = ros_message->latitude.size;
    auto array_ptr = ros_message->latitude.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    size_t size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angle
  {
    size_t size = ros_message->angle.size;
    auto array_ptr = ros_message->angle.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: path_end_dis
  {
    cdr << ros_message->path_end_dis;
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  return true;
}

static bool _LocalPathPlanningInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LocalPathPlanningInterface__ros_msg_type * ros_message = static_cast<_LocalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: startpoint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->startpoint.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->startpoint);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->startpoint, size)) {
      fprintf(stderr, "failed to create array for field 'startpoint'");
      return false;
    }
    auto array_ptr = ros_message->startpoint.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: endpoint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->endpoint.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->endpoint);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->endpoint, size)) {
      fprintf(stderr, "failed to create array for field 'endpoint'");
      return false;
    }
    auto array_ptr = ros_message->endpoint.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: longitude
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->longitude.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->longitude);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->longitude, size)) {
      fprintf(stderr, "failed to create array for field 'longitude'");
      return false;
    }
    auto array_ptr = ros_message->longitude.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: latitude
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->latitude.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->latitude);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->latitude, size)) {
      fprintf(stderr, "failed to create array for field 'latitude'");
      return false;
    }
    auto array_ptr = ros_message->latitude.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speed.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->speed);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->speed, size)) {
      fprintf(stderr, "failed to create array for field 'speed'");
      return false;
    }
    auto array_ptr = ros_message->speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->angle.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->angle);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->angle, size)) {
      fprintf(stderr, "failed to create array for field 'angle'");
      return false;
    }
    auto array_ptr = ros_message->angle.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: path_end_dis
  {
    cdr >> ros_message->path_end_dis;
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__LocalPathPlanningInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LocalPathPlanningInterface__ros_msg_type * ros_message = static_cast<const _LocalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
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
  // field.name startpoint
  {
    size_t array_size = ros_message->startpoint.size;
    auto array_ptr = ros_message->startpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endpoint
  {
    size_t array_size = ros_message->endpoint.size;
    auto array_ptr = ros_message->endpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t array_size = ros_message->longitude.size;
    auto array_ptr = ros_message->longitude.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t array_size = ros_message->latitude.size;
    auto array_ptr = ros_message->latitude.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t array_size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t array_size = ros_message->angle.size;
    auto array_ptr = ros_message->angle.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_end_dis
  {
    size_t item_size = sizeof(ros_message->path_end_dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name process_time
  {
    size_t item_size = sizeof(ros_message->process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LocalPathPlanningInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__LocalPathPlanningInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__LocalPathPlanningInterface(
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
  // member: startpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: endpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latitude
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: path_end_dis
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

  return current_alignment - initial_alignment;
}

static size_t _LocalPathPlanningInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__LocalPathPlanningInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LocalPathPlanningInterface = {
  "car_interfaces::msg",
  "LocalPathPlanningInterface",
  _LocalPathPlanningInterface__cdr_serialize,
  _LocalPathPlanningInterface__cdr_deserialize,
  _LocalPathPlanningInterface__get_serialized_size,
  _LocalPathPlanningInterface__max_serialized_size
};

static rosidl_message_type_support_t _LocalPathPlanningInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LocalPathPlanningInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, LocalPathPlanningInterface)() {
  return &_LocalPathPlanningInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
