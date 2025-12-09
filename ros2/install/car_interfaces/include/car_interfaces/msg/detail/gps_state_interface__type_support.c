// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/GpsStateInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/gps_state_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/gps_state_interface__functions.h"
#include "car_interfaces/msg/detail/gps_state_interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__GpsStateInterface__init(message_memory);
}

void GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__GpsStateInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__GpsStateInterface, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__GpsStateInterface, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__GpsStateInterface, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__GpsStateInterface, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "GpsStateInterface",  // message name
  4,  // number of fields
  sizeof(car_interfaces__msg__GpsStateInterface),
  GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_member_array,  // message members
  GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_type_support_handle = {
  0,
  &GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, GpsStateInterface)() {
  if (!GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_type_support_handle.typesupport_identifier) {
    GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GpsStateInterface__rosidl_typesupport_introspection_c__GpsStateInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
