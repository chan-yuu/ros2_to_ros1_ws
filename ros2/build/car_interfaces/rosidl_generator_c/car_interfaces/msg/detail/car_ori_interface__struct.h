// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/CarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarOriInterface in the package car_interfaces.
typedef struct car_interfaces__msg__CarOriInterface
{
  double timestamp;
  uint8_t id;
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
} car_interfaces__msg__CarOriInterface;

// Struct for a sequence of car_interfaces__msg__CarOriInterface.
typedef struct car_interfaces__msg__CarOriInterface__Sequence
{
  car_interfaces__msg__CarOriInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__CarOriInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__STRUCT_H_
