// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/match_map_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/match_map_interface__functions.h"
#include "car_interfaces/msg/detail/match_map_interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__MatchMapInterface__init(message_memory);
}

void MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__MatchMapInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "special_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, special_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stopline_longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, stopline_longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stopline_latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, stopline_latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, cross),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_recognition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__MatchMapInterface, light_recognition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "MatchMapInterface",  // message name
  6,  // number of fields
  sizeof(car_interfaces__msg__MatchMapInterface),
  MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_member_array,  // message members
  MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_type_support_handle = {
  0,
  &MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, MatchMapInterface)() {
  if (!MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_type_support_handle.typesupport_identifier) {
    MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MatchMapInterface__rosidl_typesupport_introspection_c__MatchMapInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
