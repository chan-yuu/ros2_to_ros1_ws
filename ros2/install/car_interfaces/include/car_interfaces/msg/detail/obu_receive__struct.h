// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ObuReceive in the package car_interfaces.
typedef struct car_interfaces__msg__ObuReceive
{
  uint8_t color;
  uint8_t time;
  float dis_to_stopline;
  uint8_t cutin_flag;
  double end_point_lat;
  double end_point_lon;
  double transit_point_1_lat;
  double transit_point_1_lon;
  double transit_point_2_lat;
  double transit_point_2_lon;
} car_interfaces__msg__ObuReceive;

// Struct for a sequence of car_interfaces__msg__ObuReceive.
typedef struct car_interfaces__msg__ObuReceive__Sequence
{
  car_interfaces__msg__ObuReceive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__ObuReceive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__OBU_RECEIVE__STRUCT_H_
