// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/LidarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pointcloud'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LidarOriInterface in the package car_interfaces.
typedef struct car_interfaces__msg__LidarOriInterface
{
  double timestamp;
  uint8_t id;
  uint32_t number;
  rosidl_runtime_c__float__Sequence pointcloud;
  float process_time;
} car_interfaces__msg__LidarOriInterface;

// Struct for a sequence of car_interfaces__msg__LidarOriInterface.
typedef struct car_interfaces__msg__LidarOriInterface__Sequence
{
  car_interfaces__msg__LidarOriInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__LidarOriInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__LIDAR_ORI_INTERFACE__STRUCT_H_
