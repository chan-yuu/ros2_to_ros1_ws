// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/net_traffic_sign_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/net_traffic_sign_interface__functions.h"
#include "car_interfaces/msg/detail/net_traffic_sign_interface__struct.h"


// Include directives for member types
// Member `lightstate`
// Member `etcstate`
// Member `parkingstate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__NetTrafficSignInterface__init(message_memory);
}

void NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__NetTrafficSignInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lightnumber",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, lightnumber),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lightstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, lightstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "etcnumber",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, etcnumber),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "etcstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, etcstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parkingnumber",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, parkingnumber),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parkingstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, parkingstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__NetTrafficSignInterface, process_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "NetTrafficSignInterface",  // message name
  8,  // number of fields
  sizeof(car_interfaces__msg__NetTrafficSignInterface),
  NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_member_array,  // message members
  NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_type_support_handle = {
  0,
  &NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, NetTrafficSignInterface)() {
  if (!NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_type_support_handle.typesupport_identifier) {
    NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NetTrafficSignInterface__rosidl_typesupport_introspection_c__NetTrafficSignInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
