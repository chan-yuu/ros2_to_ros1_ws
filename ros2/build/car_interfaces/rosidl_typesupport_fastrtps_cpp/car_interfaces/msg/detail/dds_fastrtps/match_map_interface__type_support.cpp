// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/match_map_interface__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_interfaces/msg/detail/match_map_interface__struct.hpp"

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
  const car_interfaces::msg::MatchMapInterface & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: special_road
  cdr << ros_message.special_road;
  // Member: stopline_longitude
  cdr << ros_message.stopline_longitude;
  // Member: stopline_latitude
  cdr << ros_message.stopline_latitude;
  // Member: cross
  cdr << (ros_message.cross ? true : false);
  // Member: light_recognition
  cdr << (ros_message.light_recognition ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_interfaces::msg::MatchMapInterface & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: special_road
  cdr >> ros_message.special_road;

  // Member: stopline_longitude
  cdr >> ros_message.stopline_longitude;

  // Member: stopline_latitude
  cdr >> ros_message.stopline_latitude;

  // Member: cross
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cross = tmp ? true : false;
  }

  // Member: light_recognition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.light_recognition = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
get_serialized_size(
  const car_interfaces::msg::MatchMapInterface & ros_message,
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
  // Member: special_road
  {
    size_t item_size = sizeof(ros_message.special_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stopline_longitude
  {
    size_t item_size = sizeof(ros_message.stopline_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stopline_latitude
  {
    size_t item_size = sizeof(ros_message.stopline_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cross
  {
    size_t item_size = sizeof(ros_message.cross);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_recognition
  {
    size_t item_size = sizeof(ros_message.light_recognition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
max_serialized_size_MatchMapInterface(
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

  // Member: special_road
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stopline_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: stopline_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cross
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_recognition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MatchMapInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::MatchMapInterface *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MatchMapInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_interfaces::msg::MatchMapInterface *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MatchMapInterface__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::MatchMapInterface *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MatchMapInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MatchMapInterface(full_bounded, 0);
}

static message_type_support_callbacks_t _MatchMapInterface__callbacks = {
  "car_interfaces::msg",
  "MatchMapInterface",
  _MatchMapInterface__cdr_serialize,
  _MatchMapInterface__cdr_deserialize,
  _MatchMapInterface__get_serialized_size,
  _MatchMapInterface__max_serialized_size
};

static rosidl_message_type_support_t _MatchMapInterface__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MatchMapInterface__callbacks,
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
get_message_type_support_handle<car_interfaces::msg::MatchMapInterface>()
{
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_MatchMapInterface__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_interfaces, msg, MatchMapInterface)() {
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_MatchMapInterface__handle;
}

#ifdef __cplusplus
}
#endif
