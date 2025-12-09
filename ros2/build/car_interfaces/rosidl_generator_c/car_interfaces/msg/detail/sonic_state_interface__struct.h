// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/SonicStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SonicStateInterface in the package car_interfaces.
typedef struct car_interfaces__msg__SonicStateInterface
{
  double timestamp;
  uint8_t id;
  uint8_t state;
  uint8_t error;
} car_interfaces__msg__SonicStateInterface;

// Struct for a sequence of car_interfaces__msg__SonicStateInterface.
typedef struct car_interfaces__msg__SonicStateInterface__Sequence
{
  car_interfaces__msg__SonicStateInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__SonicStateInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__STRUCT_H_
