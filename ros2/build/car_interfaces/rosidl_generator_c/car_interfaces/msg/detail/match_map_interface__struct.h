// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MatchMapInterface in the package car_interfaces.
typedef struct car_interfaces__msg__MatchMapInterface
{
  double timestamp;
  uint8_t special_road;
  double stopline_longitude;
  double stopline_latitude;
  bool cross;
  bool light_recognition;
} car_interfaces__msg__MatchMapInterface;

// Struct for a sequence of car_interfaces__msg__MatchMapInterface.
typedef struct car_interfaces__msg__MatchMapInterface__Sequence
{
  car_interfaces__msg__MatchMapInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__MatchMapInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__MATCH_MAP_INTERFACE__STRUCT_H_
