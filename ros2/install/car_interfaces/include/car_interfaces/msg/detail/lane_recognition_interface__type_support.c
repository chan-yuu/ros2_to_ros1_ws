// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_interfaces:msg/LaneRecognitionInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_interfaces/msg/detail/lane_recognition_interface__rosidl_typesupport_introspection_c.h"
#include "car_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_interfaces/msg/detail/lane_recognition_interface__functions.h"
#include "car_interfaces/msg/detail/lane_recognition_interface__struct.h"


// Include directives for member types
// Member `resultimage`
#include "sensor_msgs/msg/image.h"
// Member `resultimage`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_interfaces__msg__LaneRecognitionInterface__init(message_memory);
}

void LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_fini_function(void * message_memory)
{
  car_interfaces__msg__LaneRecognitionInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LaneRecognitionInterface, timestamp),  // bytes offset in struct
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
    offsetof(car_interfaces__msg__LaneRecognitionInterface, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centeroffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LaneRecognitionInterface, centeroffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resultimage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_interfaces__msg__LaneRecognitionInterface, resultimage),  // bytes offset in struct
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
    offsetof(car_interfaces__msg__LaneRecognitionInterface, process_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_members = {
  "car_interfaces__msg",  // message namespace
  "LaneRecognitionInterface",  // message name
  5,  // number of fields
  sizeof(car_interfaces__msg__LaneRecognitionInterface),
  LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_member_array,  // message members
  LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_type_support_handle = {
  0,
  &LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_interfaces, msg, LaneRecognitionInterface)() {
  LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_type_support_handle.typesupport_identifier) {
    LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneRecognitionInterface__rosidl_typesupport_introspection_c__LaneRecognitionInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
