// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/obu_receive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_interfaces/msg/detail/obu_receive__struct.hpp"

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
  const car_interfaces::msg::ObuReceive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: color
  cdr << ros_message.color;
  // Member: time
  cdr << ros_message.time;
  // Member: dis_to_stopline
  cdr << ros_message.dis_to_stopline;
  // Member: cutin_flag
  cdr << ros_message.cutin_flag;
  // Member: end_point_lat
  cdr << ros_message.end_point_lat;
  // Member: end_point_lon
  cdr << ros_message.end_point_lon;
  // Member: transit_point_1_lat
  cdr << ros_message.transit_point_1_lat;
  // Member: transit_point_1_lon
  cdr << ros_message.transit_point_1_lon;
  // Member: transit_point_2_lat
  cdr << ros_message.transit_point_2_lat;
  // Member: transit_point_2_lon
  cdr << ros_message.transit_point_2_lon;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_interfaces::msg::ObuReceive & ros_message)
{
  // Member: color
  cdr >> ros_message.color;

  // Member: time
  cdr >> ros_message.time;

  // Member: dis_to_stopline
  cdr >> ros_message.dis_to_stopline;

  // Member: cutin_flag
  cdr >> ros_message.cutin_flag;

  // Member: end_point_lat
  cdr >> ros_message.end_point_lat;

  // Member: end_point_lon
  cdr >> ros_message.end_point_lon;

  // Member: transit_point_1_lat
  cdr >> ros_message.transit_point_1_lat;

  // Member: transit_point_1_lon
  cdr >> ros_message.transit_point_1_lon;

  // Member: transit_point_2_lat
  cdr >> ros_message.transit_point_2_lat;

  // Member: transit_point_2_lon
  cdr >> ros_message.transit_point_2_lon;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
get_serialized_size(
  const car_interfaces::msg::ObuReceive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: color
  {
    size_t item_size = sizeof(ros_message.color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dis_to_stopline
  {
    size_t item_size = sizeof(ros_message.dis_to_stopline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cutin_flag
  {
    size_t item_size = sizeof(ros_message.cutin_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_point_lat
  {
    size_t item_size = sizeof(ros_message.end_point_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_point_lon
  {
    size_t item_size = sizeof(ros_message.end_point_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transit_point_1_lat
  {
    size_t item_size = sizeof(ros_message.transit_point_1_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transit_point_1_lon
  {
    size_t item_size = sizeof(ros_message.transit_point_1_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transit_point_2_lat
  {
    size_t item_size = sizeof(ros_message.transit_point_2_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transit_point_2_lon
  {
    size_t item_size = sizeof(ros_message.transit_point_2_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
max_serialized_size_ObuReceive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: color
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dis_to_stopline
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cutin_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: end_point_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_point_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: transit_point_1_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: transit_point_1_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: transit_point_2_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: transit_point_2_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ObuReceive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::ObuReceive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObuReceive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_interfaces::msg::ObuReceive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObuReceive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::ObuReceive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObuReceive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObuReceive(full_bounded, 0);
}

static message_type_support_callbacks_t _ObuReceive__callbacks = {
  "car_interfaces::msg",
  "ObuReceive",
  _ObuReceive__cdr_serialize,
  _ObuReceive__cdr_deserialize,
  _ObuReceive__get_serialized_size,
  _ObuReceive__max_serialized_size
};

static rosidl_message_type_support_t _ObuReceive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObuReceive__callbacks,
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
get_message_type_support_handle<car_interfaces::msg::ObuReceive>()
{
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_ObuReceive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_interfaces, msg, ObuReceive)() {
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_ObuReceive__handle;
}

#ifdef __cplusplus
}
#endif
