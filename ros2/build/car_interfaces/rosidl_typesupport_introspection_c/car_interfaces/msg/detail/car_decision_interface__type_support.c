// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/car_decision_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/car_decision_interface__functions.h"
#include "car_interfaces/msg/detail/car_decision_interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__CarDecisionInterface__init(message_memory);
}

void CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__CarDecisionInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__CarDecisionInterface, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__CarDecisionInterface, stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__CarDecisionInterface, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maxspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__CarDecisionInterface, maxspeed),  // bytes offset in struct
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
    offsetof(car_interfaces__msg__CarDecisionInterface, process_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statemode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__CarDecisionInterface, statemode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "CarDecisionInterface",  // message name
  6,  // number of fields
  sizeof(car_interfaces__msg__CarDecisionInterface),
  CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_member_array,  // message members
  CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_type_support_handle = {
  0,
  &CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, CarDecisionInterface)() {
  if (!CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_type_support_handle.typesupport_identifier) {
    CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarDecisionInterface__rosidl_typesupport_introspection_c__CarDecisionInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
