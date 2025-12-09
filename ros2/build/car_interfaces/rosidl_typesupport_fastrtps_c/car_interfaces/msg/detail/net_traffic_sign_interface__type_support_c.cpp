// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/net_traffic_sign_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/net_traffic_sign_interface__struct.h"
#include "car_interfaces/msg/detail/net_traffic_sign_interface__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // etcstate, lightstate, parkingstate
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // etcstate, lightstate, parkingstate

// forward declare type support functions


using _NetTrafficSignInterface__ros_msg_type = car_interfaces__msg__NetTrafficSignInterface;

static bool _NetTrafficSignInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NetTrafficSignInterface__ros_msg_type * ros_message = static_cast<const _NetTrafficSignInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: lightnumber
  {
    cdr << ros_message->lightnumber;
  }

  // Field name: lightstate
  {
    size_t size = ros_message->lightstate.size;
    auto array_ptr = ros_message->lightstate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: etcnumber
  {
    cdr << ros_message->etcnumber;
  }

  // Field name: etcstate
  {
    size_t size = ros_message->etcstate.size;
    auto array_ptr = ros_message->etcstate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: parkingnumber
  {
    cdr << ros_message->parkingnumber;
  }

  // Field name: parkingstate
  {
    size_t size = ros_message->parkingstate.size;
    auto array_ptr = ros_message->parkingstate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  return true;
}

static bool _NetTrafficSignInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NetTrafficSignInterface__ros_msg_type * ros_message = static_cast<_NetTrafficSignInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: lightnumber
  {
    cdr >> ros_message->lightnumber;
  }

  // Field name: lightstate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lightstate.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->lightstate);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->lightstate, size)) {
      fprintf(stderr, "failed to create array for field 'lightstate'");
      return false;
    }
    auto array_ptr = ros_message->lightstate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: etcnumber
  {
    cdr >> ros_message->etcnumber;
  }

  // Field name: etcstate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->etcstate.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->etcstate);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->etcstate, size)) {
      fprintf(stderr, "failed to create array for field 'etcstate'");
      return false;
    }
    auto array_ptr = ros_message->etcstate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: parkingnumber
  {
    cdr >> ros_message->parkingnumber;
  }

  // Field name: parkingstate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parkingstate.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->parkingstate);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->parkingstate, size)) {
      fprintf(stderr, "failed to create array for field 'parkingstate'");
      return false;
    }
    auto array_ptr = ros_message->parkingstate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__NetTrafficSignInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NetTrafficSignInterface__ros_msg_type * ros_message = static_cast<const _NetTrafficSignInterface__ros_msg_type *>(untyped_ros_message);
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
  // field.name lightnumber
  {
    size_t item_size = sizeof(ros_message->lightnumber);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lightstate
  {
    size_t array_size = ros_message->lightstate.size;
    auto array_ptr = ros_message->lightstate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name etcnumber
  {
    size_t item_size = sizeof(ros_message->etcnumber);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name etcstate
  {
    size_t array_size = ros_message->etcstate.size;
    auto array_ptr = ros_message->etcstate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parkingnumber
  {
    size_t item_size = sizeof(ros_message->parkingnumber);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parkingstate
  {
    size_t array_size = ros_message->parkingstate.size;
    auto array_ptr = ros_message->parkingstate.data;
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

static uint32_t _NetTrafficSignInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__NetTrafficSignInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__NetTrafficSignInterface(
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
  // member: lightnumber
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lightstate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: etcnumber
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: etcstate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parkingnumber
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parkingstate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NetTrafficSignInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__NetTrafficSignInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NetTrafficSignInterface = {
  "car_interfaces::msg",
  "NetTrafficSignInterface",
  _NetTrafficSignInterface__cdr_serialize,
  _NetTrafficSignInterface__cdr_deserialize,
  _NetTrafficSignInterface__get_serialized_size,
  _NetTrafficSignInterface__max_serialized_size
};

static rosidl_message_type_support_t _NetTrafficSignInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NetTrafficSignInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, NetTrafficSignInterface)() {
  return &_NetTrafficSignInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
