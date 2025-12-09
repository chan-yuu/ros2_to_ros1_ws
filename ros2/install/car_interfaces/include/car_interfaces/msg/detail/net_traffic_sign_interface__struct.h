// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lightstate'
// Member 'etcstate'
// Member 'parkingstate'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NetTrafficSignInterface in the package car_interfaces.
typedef struct car_interfaces__msg__NetTrafficSignInterface
{
  double timestamp;
  int8_t lightnumber;
  rosidl_runtime_c__int8__Sequence lightstate;
  int8_t etcnumber;
  rosidl_runtime_c__int8__Sequence etcstate;
  int8_t parkingnumber;
  rosidl_runtime_c__int8__Sequence parkingstate;
  float process_time;
} car_interfaces__msg__NetTrafficSignInterface;

// Struct for a sequence of car_interfaces__msg__NetTrafficSignInterface.
typedef struct car_interfaces__msg__NetTrafficSignInterface__Sequence
{
  car_interfaces__msg__NetTrafficSignInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__NetTrafficSignInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__NET_TRAFFIC_SIGN_INTERFACE__STRUCT_H_
