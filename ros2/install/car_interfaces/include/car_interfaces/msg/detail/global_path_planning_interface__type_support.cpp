// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "car_interfaces/msg/detail/global_path_planning_interface__struct.hpp"
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

void GlobalPathPlanningInterface_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) car_interfaces::msg::GlobalPathPlanningInterface(_init);
}

void GlobalPathPlanningInterface_fini_function(void * message_memory)
{
  auto typed_message = static_cast<car_interfaces::msg::GlobalPathPlanningInterface *>(message_memory);
  typed_message->~GlobalPathPlanningInterface();
}

size_t size_function__GlobalPathPlanningInterface__startpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalPathPlanningInterface__startpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalPathPlanningInterface__startpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GlobalPathPlanningInterface__startpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GlobalPathPlanningInterface__endpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalPathPlanningInterface__endpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalPathPlanningInterface__endpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GlobalPathPlanningInterface__endpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GlobalPathPlanningInterface__routedata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalPathPlanningInterface__routedata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalPathPlanningInterface__routedata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__GlobalPathPlanningInterface__routedata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GlobalPathPlanningInterface__back_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalPathPlanningInterface__back_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalPathPlanningInterface__back_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__GlobalPathPlanningInterface__back_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GlobalPathPlanningInterface__end_obu_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalPathPlanningInterface__end_obu_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalPathPlanningInterface__end_obu_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__GlobalPathPlanningInterface__end_obu_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GlobalPathPlanningInterface_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, timestamp),  // bytes offset in struct
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
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, startpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalPathPlanningInterface__startpoint,  // size() function pointer
    get_const_function__GlobalPathPlanningInterface__startpoint,  // get_const(index) function pointer
    get_function__GlobalPathPlanningInterface__startpoint,  // get(index) function pointer
    resize_function__GlobalPathPlanningInterface__startpoint  // resize(index) function pointer
  },
  {
    "endpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, endpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalPathPlanningInterface__endpoint,  // size() function pointer
    get_const_function__GlobalPathPlanningInterface__endpoint,  // get_const(index) function pointer
    get_function__GlobalPathPlanningInterface__endpoint,  // get(index) function pointer
    resize_function__GlobalPathPlanningInterface__endpoint  // resize(index) function pointer
  },
  {
    "routedata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, routedata),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalPathPlanningInterface__routedata,  // size() function pointer
    get_const_function__GlobalPathPlanningInterface__routedata,  // get_const(index) function pointer
    get_function__GlobalPathPlanningInterface__routedata,  // get(index) function pointer
    resize_function__GlobalPathPlanningInterface__routedata  // resize(index) function pointer
  },
  {
    "back_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, back_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalPathPlanningInterface__back_point,  // size() function pointer
    get_const_function__GlobalPathPlanningInterface__back_point,  // get_const(index) function pointer
    get_function__GlobalPathPlanningInterface__back_point,  // get(index) function pointer
    resize_function__GlobalPathPlanningInterface__back_point  // resize(index) function pointer
  },
  {
    "end_obu_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, end_obu_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalPathPlanningInterface__end_obu_point,  // size() function pointer
    get_const_function__GlobalPathPlanningInterface__end_obu_point,  // get_const(index) function pointer
    get_function__GlobalPathPlanningInterface__end_obu_point,  // get(index) function pointer
    resize_function__GlobalPathPlanningInterface__end_obu_point  // resize(index) function pointer
  },
  {
    "process_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces::msg::GlobalPathPlanningInterface, process_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GlobalPathPlanningInterface_message_members = {
  "car_interfaces::msg",  // message namespace
  "GlobalPathPlanningInterface",  // message name
  7,  // number of fields
  sizeof(car_interfaces::msg::GlobalPathPlanningInterface),
  GlobalPathPlanningInterface_message_member_array,  // message members
  GlobalPathPlanningInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  GlobalPathPlanningInterface_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GlobalPathPlanningInterface_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GlobalPathPlanningInterface_message_members,
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
get_message_type_support_handle<car_interfaces::msg::GlobalPathPlanningInterface>()
{
  return &::car_interfaces::msg::rosidl_typesupport_introspection_cpp::GlobalPathPlanningInterface_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, car_interfaces, msg, GlobalPathPlanningInterface)() {
  return &::car_interfaces::msg::rosidl_typesupport_introspection_cpp::GlobalPathPlanningInterface_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
