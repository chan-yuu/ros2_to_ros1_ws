// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/GpsInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GpsInterface in the package car_interfaces.
typedef struct car_interfaces__msg__GpsInterface
{
  double timestamp;
  uint8_t id;
  float yaw;
  float pitch;
  float roll;
  float wx;
  float wy;
  float wz;
  float ax;
  float ay;
  float az;
  double longitude;
  double latitude;
  double height;
  float eastvelocity;
  float northvelocity;
  float skyvelocity;
  float process_time;
} car_interfaces__msg__GpsInterface;

// Struct for a sequence of car_interfaces__msg__GpsInterface.
typedef struct car_interfaces__msg__GpsInterface__Sequence
{
  car_interfaces__msg__GpsInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__GpsInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__GPS_INTERFACE__STRUCT_H_
