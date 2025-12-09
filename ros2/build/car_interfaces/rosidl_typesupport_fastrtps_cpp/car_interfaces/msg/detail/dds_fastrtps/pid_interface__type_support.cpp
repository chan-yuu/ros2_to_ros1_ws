// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/pid_interface__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_interfaces/msg/detail/pid_interface__struct.hpp"

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
  const car_interfaces::msg::PidInterface & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: refspeed
  cdr << ros_message.refspeed;
  // Member: nowspeed
  cdr << ros_message.nowspeed;
  // Member: angle
  cdr << ros_message.angle;
  // Member: gear
  cdr << ros_message.gear;
  // Member: throttle_percentage
  cdr << ros_message.throttle_percentage;
  // Member: braking_percentage
  cdr << ros_message.braking_percentage;
  // Member: process_time
  cdr << ros_message.process_time;
  // Member: cte
  cdr << ros_message.cte;
  // Member: dhead
  cdr << ros_message.dhead;
  // Member: curpos_x
  cdr << ros_message.curpos_x;
  // Member: curpos_y
  cdr << ros_message.curpos_y;
  // Member: refpox_x
  cdr << ros_message.refpox_x;
  // Member: refpox_y
  cdr << ros_message.refpox_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_interfaces::msg::PidInterface & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: refspeed
  cdr >> ros_message.refspeed;

  // Member: nowspeed
  cdr >> ros_message.nowspeed;

  // Member: angle
  cdr >> ros_message.angle;

  // Member: gear
  cdr >> ros_message.gear;

  // Member: throttle_percentage
  cdr >> ros_message.throttle_percentage;

  // Member: braking_percentage
  cdr >> ros_message.braking_percentage;

  // Member: process_time
  cdr >> ros_message.process_time;

  // Member: cte
  cdr >> ros_message.cte;

  // Member: dhead
  cdr >> ros_message.dhead;

  // Member: curpos_x
  cdr >> ros_message.curpos_x;

  // Member: curpos_y
  cdr >> ros_message.curpos_y;

  // Member: refpox_x
  cdr >> ros_message.refpox_x;

  // Member: refpox_y
  cdr >> ros_message.refpox_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
get_serialized_size(
  const car_interfaces::msg::PidInterface & ros_message,
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
  // Member: refspeed
  {
    size_t item_size = sizeof(ros_message.refspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nowspeed
  {
    size_t item_size = sizeof(ros_message.nowspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_percentage
  {
    size_t item_size = sizeof(ros_message.throttle_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: braking_percentage
  {
    size_t item_size = sizeof(ros_message.braking_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: process_time
  {
    size_t item_size = sizeof(ros_message.process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cte
  {
    size_t item_size = sizeof(ros_message.cte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dhead
  {
    size_t item_size = sizeof(ros_message.dhead);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curpos_x
  {
    size_t item_size = sizeof(ros_message.curpos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curpos_y
  {
    size_t item_size = sizeof(ros_message.curpos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refpox_x
  {
    size_t item_size = sizeof(ros_message.refpox_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refpox_y
  {
    size_t item_size = sizeof(ros_message.refpox_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
max_serialized_size_PidInterface(
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

  // Member: refspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nowspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: braking_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dhead
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curpos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curpos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: refpox_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: refpox_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PidInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::PidInterface *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PidInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_interfaces::msg::PidInterface *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PidInterface__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::PidInterface *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PidInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PidInterface(full_bounded, 0);
}

static message_type_support_callbacks_t _PidInterface__callbacks = {
  "car_interfaces::msg",
  "PidInterface",
  _PidInterface__cdr_serialize,
  _PidInterface__cdr_deserialize,
  _PidInterface__get_serialized_size,
  _PidInterface__max_serialized_size
};

static rosidl_message_type_support_t _PidInterface__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PidInterface__callbacks,
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
get_message_type_support_handle<car_interfaces::msg::PidInterface>()
{
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_PidInterface__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_interfaces, msg, PidInterface)() {
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_PidInterface__handle;
}

#ifdef __cplusplus
}
#endif
