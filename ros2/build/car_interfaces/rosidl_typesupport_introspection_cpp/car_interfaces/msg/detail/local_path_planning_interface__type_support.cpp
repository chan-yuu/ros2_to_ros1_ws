// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "car_interfaces/msg/detail/local_path_planning_interface__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace car_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LocalPathPlanningInterface_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) car_interfaces::msg::LocalPathPlanningInterface(_init);
}

void LocalPathPlanningInterface_fini_function(void * message_memory)
{
  auto typed_message = static_cast<car_interfaces::msg::LocalPathPlanningInterface *>(message_memory);
  typed_message->~LocalPathPlanningInterface();
}

size_t size_function__LocalPathPlanningInterface__startpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__startpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__startpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__startpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LocalPathPlanningInterface__endpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__endpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__endpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__endpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LocalPathPlanningInterface__longitude(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__longitude(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__longitude(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__longitude(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LocalPathPlanningInterface__latitude(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__latitude(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__latitude(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__latitude(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LocalPathPlanningInterface__speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LocalPathPlanningInterface__angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPathPlanningInterface__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPathPlanningInterface__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalPathPlanningInterface__angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalPathPlanningInterface_message_member_array[10] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "startpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, startpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__startpoint,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__startpoint,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__startpoint,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__startpoint  // resize(index) function pointer
  },
  {
    "endpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, endpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__endpoint,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__endpoint,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__endpoint,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__endpoint  // resize(index) function pointer
  },
  {
    "longitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, longitude),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__longitude,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__longitude,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__longitude,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__longitude  // resize(index) function pointer
  },
  {
    "latitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, latitude),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__latitude,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__latitude,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__latitude,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__latitude  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__speed,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__speed,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__speed,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__speed  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPathPlanningInterface__angle,  // size() function pointer
    get_const_function__LocalPathPlanningInterface__angle,  // get_const(index) function pointer
    get_function__LocalPathPlanningInterface__angle,  // get(index) function pointer
    resize_function__LocalPathPlanningInterface__angle  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, control_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path_end_dis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, path_end_dis),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "process_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::LocalPathPlanningInterface, process_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalPathPlanningInterface_message_members = {
  "car_interfaces::msg",  // message namespace
  "LocalPathPlanningInterface",  // message name
  10,  // number of fields
  sizeof(car_interfaces::msg::LocalPathPlanningInterface),
  LocalPathPlanningInterface_message_member_array,  // message members
  LocalPathPlanningInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalPathPlanningInterface_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalPathPlanningInterface_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalPathPlanningInterface_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace car_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<car_interfaces::msg::LocalPathPlanningInterface>()
{
  return &::car_interfaces::msg::rosidl_typesupport_introspection_cpp::LocalPathPlanningInterface_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, car_interfaces, msg, LocalPathPlanningInterface)() {
  return &::car_interfaces::msg::rosidl_typesupport_introspection_cpp::LocalPathPlanningInterface_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
