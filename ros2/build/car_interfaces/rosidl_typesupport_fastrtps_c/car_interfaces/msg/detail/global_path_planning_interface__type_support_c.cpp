// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/global_path_planning_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/global_path_planning_interface__struct.h"
#include "car_interfaces/msg/detail/global_path_planning_interface__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // back_point, end_obu_point, endpoint, routedata, startpoint
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // back_point, end_obu_point, endpoint, routedata, startpoint

// forward declare type support functions


using _GlobalPathPlanningInterface__ros_msg_type = car_interfaces__msg__GlobalPathPlanningInterface;

static bool _GlobalPathPlanningInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GlobalPathPlanningInterface__ros_msg_type * ros_message = static_cast<const _GlobalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
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

  // Field name: routedata
  {
    size_t size = ros_message->routedata.size;
    auto array_ptr = ros_message->routedata.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: back_point
  {
    size_t size = ros_message->back_point.size;
    auto array_ptr = ros_message->back_point.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_obu_point
  {
    size_t size = ros_message->end_obu_point.size;
    auto array_ptr = ros_message->end_obu_point.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  return true;
}

static bool _GlobalPathPlanningInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GlobalPathPlanningInterface__ros_msg_type * ros_message = static_cast<_GlobalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
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

  // Field name: routedata
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->routedata.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->routedata);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->routedata, size)) {
      fprintf(stderr, "failed to create array for field 'routedata'");
      return false;
    }
    auto array_ptr = ros_message->routedata.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: back_point
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->back_point.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->back_point);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->back_point, size)) {
      fprintf(stderr, "failed to create array for field 'back_point'");
      return false;
    }
    auto array_ptr = ros_message->back_point.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_obu_point
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_obu_point.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->end_obu_point);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->end_obu_point, size)) {
      fprintf(stderr, "failed to create array for field 'end_obu_point'");
      return false;
    }
    auto array_ptr = ros_message->end_obu_point.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__GlobalPathPlanningInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GlobalPathPlanningInterface__ros_msg_type * ros_message = static_cast<const _GlobalPathPlanningInterface__ros_msg_type *>(untyped_ros_message);
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
  // field.name routedata
  {
    size_t array_size = ros_message->routedata.size;
    auto array_ptr = ros_message->routedata.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_point
  {
    size_t array_size = ros_message->back_point.size;
    auto array_ptr = ros_message->back_point.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_obu_point
  {
    size_t array_size = ros_message->end_obu_point.size;
    auto array_ptr = ros_message->end_obu_point.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
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

static uint32_t _GlobalPathPlanningInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__GlobalPathPlanningInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__GlobalPathPlanningInterface(
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
  // member: routedata
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: back_point
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_obu_point
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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

static size_t _GlobalPathPlanningInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__GlobalPathPlanningInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GlobalPathPlanningInterface = {
  "car_interfaces::msg",
  "GlobalPathPlanningInterface",
  _GlobalPathPlanningInterface__cdr_serialize,
  _GlobalPathPlanningInterface__cdr_deserialize,
  _GlobalPathPlanningInterface__get_serialized_size,
  _GlobalPathPlanningInterface__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPathPlanningInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GlobalPathPlanningInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, GlobalPathPlanningInterface)() {
  return &_GlobalPathPlanningInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
