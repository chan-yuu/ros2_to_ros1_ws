// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/LidarOriInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/lidar_ori_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/lidar_ori_interface__functions.h"
#include "car_interfaces/msg/detail/lidar_ori_interface__struct.h"


// Include directives for member types
// Member `pointcloud`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__LidarOriInterface__init(message_memory);
}

void LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__LidarOriInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LidarOriInterface, timestamp),  // bytes offset in struct
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
    offsetof(car_interfaces__msg__LidarOriInterface, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LidarOriInterface, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pointcloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LidarOriInterface, pointcloud),  // bytes offset in struct
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
    offsetof(car_interfaces__msg__LidarOriInterface, process_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "LidarOriInterface",  // message name
  5,  // number of fields
  sizeof(car_interfaces__msg__LidarOriInterface),
  LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_member_array,  // message members
  LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_type_support_handle = {
  0,
  &LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, LidarOriInterface)() {
  if (!LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_type_support_handle.typesupport_identifier) {
    LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LidarOriInterface__rosidl_typesupport_introspection_c__LidarOriInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
