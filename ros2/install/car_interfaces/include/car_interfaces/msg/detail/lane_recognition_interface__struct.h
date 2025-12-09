// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/LaneRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'resultimage'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/LaneRecognitionInterface in the package car_interfaces.
typedef struct car_interfaces__msg__LaneRecognitionInterface
{
  double timestamp;
  uint8_t id;
  float centeroffset;
  sensor_msgs__msg__Image resultimage;
  float process_time;
} car_interfaces__msg__LaneRecognitionInterface;

// Struct for a sequence of car_interfaces__msg__LaneRecognitionInterface.
typedef struct car_interfaces__msg__LaneRecognitionInterface__Sequence
{
  car_interfaces__msg__LaneRecognitionInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__LaneRecognitionInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__LANE_RECOGNITION_INTERFACE__STRUCT_H_
