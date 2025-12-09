// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/RadarObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__RADAR_OBSTACLE_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__RADAR_OBSTACLE_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacledata'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RadarObstacleInterface in the package car_interfaces.
typedef struct car_interfaces__msg__RadarObstacleInterface
{
  double timestamp;
  uint8_t id;
  uint16_t number;
  rosidl_runtime_c__float__Sequence obstacledata;
  float process_time;
} car_interfaces__msg__RadarObstacleInterface;

// Struct for a sequence of car_interfaces__msg__RadarObstacleInterface.
typedef struct car_interfaces__msg__RadarObstacleInterface__Sequence
{
  car_interfaces__msg__RadarObstacleInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__RadarObstacleInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__RADAR_OBSTACLE_INTERFACE__STRUCT_H_
