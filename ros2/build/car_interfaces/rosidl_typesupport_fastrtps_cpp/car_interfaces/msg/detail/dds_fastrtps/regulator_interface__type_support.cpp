// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/RegulatorInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/regulator_interface__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_interfaces/msg/detail/regulator_interface__struct.hpp"

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
  const car_interfaces::msg::RegulatorInterface & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: stop
  cdr << (ros_message.stop ? true : false);
  // Member: process_time
  cdr << ros_message.process_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_interfaces::msg::RegulatorInterface & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stop = tmp ? true : false;
  }

  // Member: process_time
  cdr >> ros_message.process_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
get_serialized_size(
  const car_interfaces::msg::RegulatorInterface & ros_message,
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
  // Member: stop
  {
    size_t item_size = sizeof(ros_message.stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: process_time
  {
    size_t item_size = sizeof(ros_message.process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_interfaces
max_serialized_size_RegulatorInterface(
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

  // Member: stop
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

  return current_alignment - initial_alignment;
}

static bool _RegulatorInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::RegulatorInterface *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegulatorInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_interfaces::msg::RegulatorInterface *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegulatorInterface__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_interfaces::msg::RegulatorInterface *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegulatorInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegulatorInterface(full_bounded, 0);
}

static message_type_support_callbacks_t _RegulatorInterface__callbacks = {
  "car_interfaces::msg",
  "RegulatorInterface",
  _RegulatorInterface__cdr_serialize,
  _RegulatorInterface__cdr_deserialize,
  _RegulatorInterface__get_serialized_size,
  _RegulatorInterface__max_serialized_size
};

static rosidl_message_type_support_t _RegulatorInterface__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegulatorInterface__callbacks,
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
get_message_type_support_handle<car_interfaces::msg::RegulatorInterface>()
{
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_RegulatorInterface__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_interfaces, msg, RegulatorInterface)() {
  return &car_interfaces::msg::typesupport_fastrtps_cpp::_RegulatorInterface__handle;
}

#ifdef __cplusplus
}
#endif
