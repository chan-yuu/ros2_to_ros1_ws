// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/CameraObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__STRUCT_H_

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
// Member 'resultimage'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/CameraObstacleInterface in the package car_interfaces.
typedef struct car_interfaces__msg__CameraObstacleInterface
{
  double timestamp;
  uint8_t id;
  uint16_t number;
  rosidl_runtime_c__float__Sequence obstacledata;
  sensor_msgs__msg__Image resultimage;
  float process_time;
  bool weatherdata;
} car_interfaces__msg__CameraObstacleInterface;

// Struct for a sequence of car_interfaces__msg__CameraObstacleInterface.
typedef struct car_interfaces__msg__CameraObstacleInterface__Sequence
{
  car_interfaces__msg__CameraObstacleInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__CameraObstacleInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__CAMERA_OBSTACLE_INTERFACE__STRUCT_H_
