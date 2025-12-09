// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/LightRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lightdata'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'resultimage'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/LightRecognitionInterface in the package car_interfaces.
typedef struct car_interfaces__msg__LightRecognitionInterface
{
  double timestamp;
  uint8_t id;
  rosidl_runtime_c__float__Sequence lightdata;
  sensor_msgs__msg__Image resultimage;
  float process_time;
} car_interfaces__msg__LightRecognitionInterface;

// Struct for a sequence of car_interfaces__msg__LightRecognitionInterface.
typedef struct car_interfaces__msg__LightRecognitionInterface__Sequence
{
  car_interfaces__msg__LightRecognitionInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__LightRecognitionInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__STRUCT_H_
