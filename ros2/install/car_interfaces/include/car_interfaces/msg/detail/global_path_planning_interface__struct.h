// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__STRUCT_H_

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
// Member 'routedata'
// Member 'back_point'
// Member 'end_obu_point'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/GlobalPathPlanningInterface in the package car_interfaces.
typedef struct car_interfaces__msg__GlobalPathPlanningInterface
{
  double timestamp;
  rosidl_runtime_c__double__Sequence startpoint;
  rosidl_runtime_c__double__Sequence endpoint;
  rosidl_runtime_c__double__Sequence routedata;
  rosidl_runtime_c__float__Sequence back_point;
  rosidl_runtime_c__float__Sequence end_obu_point;
  float process_time;
} car_interfaces__msg__GlobalPathPlanningInterface;

// Struct for a sequence of car_interfaces__msg__GlobalPathPlanningInterface.
typedef struct car_interfaces__msg__GlobalPathPlanningInterface__Sequence
{
  car_interfaces__msg__GlobalPathPlanningInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__GlobalPathPlanningInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__GLOBAL_PATH_PLANNING_INTERFACE__STRUCT_H_
