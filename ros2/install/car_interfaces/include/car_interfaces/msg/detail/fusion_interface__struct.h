// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'signdata'
// Member 'lightdata'
// Member 'obstacledata'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/FusionInterface in the package car_interfaces.
typedef struct car_interfaces__msg__FusionInterface
{
  double timestamp;
  uint8_t id;
  float carlength;
  float carwidth;
  float carheight;
  float centeroffset;
  uint8_t signnumber;
  rosidl_runtime_c__float__Sequence signdata;
  rosidl_runtime_c__float__Sequence lightdata;
  rosidl_runtime_c__float__Sequence obstacledata;
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
  float carspeed;
  float steerangle;
  int8_t gearpos;
  float braketq;
  uint8_t parkingstate;
  uint8_t soc;
  uint8_t batteryvol;
  uint16_t batterydischargecur;
  uint8_t car_run_mode;
  uint8_t throttle_percentage;
  uint8_t braking_percentage;
  bool left_light;
  bool right_light;
  bool reversing_light;
  bool speaker;
  bool start_button;
  bool stop_button;
  uint8_t state;
  uint8_t error;
  float process_time;
} car_interfaces__msg__FusionInterface;

// Struct for a sequence of car_interfaces__msg__FusionInterface.
typedef struct car_interfaces__msg__FusionInterface__Sequence
{
  car_interfaces__msg__FusionInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__FusionInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__STRUCT_H_
