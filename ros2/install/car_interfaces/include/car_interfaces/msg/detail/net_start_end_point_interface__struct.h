// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/NetStartEndPointInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__NET_START_END_POINT_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__NET_START_END_POINT_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'startpoint'
// Member 'endpoint'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NetStartEndPointInterface in the package car_interfaces.
typedef struct car_interfaces__msg__NetStartEndPointInterface
{
  double timestamp;
  rosidl_runtime_c__double__Sequence startpoint;
  rosidl_runtime_c__double__Sequence endpoint;
  float process_time;
} car_interfaces__msg__NetStartEndPointInterface;

// Struct for a sequence of car_interfaces__msg__NetStartEndPointInterface.
typedef struct car_interfaces__msg__NetStartEndPointInterface__Sequence
{
  car_interfaces__msg__NetStartEndPointInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__NetStartEndPointInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__NET_START_END_POINT_INTERFACE__STRUCT_H_
