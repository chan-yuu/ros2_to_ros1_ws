// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/pid_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__PidInterface__init(car_interfaces__msg__PidInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // refspeed
  // nowspeed
  // angle
  // gear
  // throttle_percentage
  // braking_percentage
  // process_time
  // cte
  // dhead
  // curpos_x
  // curpos_y
  // refpox_x
  // refpox_y
  return true;
}

void
car_interfaces__msg__PidInterface__fini(car_interfaces__msg__PidInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // refspeed
  // nowspeed
  // angle
  // gear
  // throttle_percentage
  // braking_percentage
  // process_time
  // cte
  // dhead
  // curpos_x
  // curpos_y
  // refpox_x
  // refpox_y
}

bool
car_interfaces__msg__PidInterface__are_equal(const car_interfaces__msg__PidInterface * lhs, const car_interfaces__msg__PidInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // refspeed
  if (lhs->refspeed != rhs->refspeed) {
    return false;
  }
  // nowspeed
  if (lhs->nowspeed != rhs->nowspeed) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // throttle_percentage
  if (lhs->throttle_percentage != rhs->throttle_percentage) {
    return false;
  }
  // braking_percentage
  if (lhs->braking_percentage != rhs->braking_percentage) {
    return false;
  }
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  // cte
  if (lhs->cte != rhs->cte) {
    return false;
  }
  // dhead
  if (lhs->dhead != rhs->dhead) {
    return false;
  }
  // curpos_x
  if (lhs->curpos_x != rhs->curpos_x) {
    return false;
  }
  // curpos_y
  if (lhs->curpos_y != rhs->curpos_y) {
    return false;
  }
  // refpox_x
  if (lhs->refpox_x != rhs->refpox_x) {
    return false;
  }
  // refpox_y
  if (lhs->refpox_y != rhs->refpox_y) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__PidInterface__copy(
  const car_interfaces__msg__PidInterface * input,
  car_interfaces__msg__PidInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // refspeed
  output->refspeed = input->refspeed;
  // nowspeed
  output->nowspeed = input->nowspeed;
  // angle
  output->angle = input->angle;
  // gear
  output->gear = input->gear;
  // throttle_percentage
  output->throttle_percentage = input->throttle_percentage;
  // braking_percentage
  output->braking_percentage = input->braking_percentage;
  // process_time
  output->process_time = input->process_time;
  // cte
  output->cte = input->cte;
  // dhead
  output->dhead = input->dhead;
  // curpos_x
  output->curpos_x = input->curpos_x;
  // curpos_y
  output->curpos_y = input->curpos_y;
  // refpox_x
  output->refpox_x = input->refpox_x;
  // refpox_y
  output->refpox_y = input->refpox_y;
  return true;
}

car_interfaces__msg__PidInterface *
car_interfaces__msg__PidInterface__create()
{
  car_interfaces__msg__PidInterface * msg = (car_interfaces__msg__PidInterface *)malloc(sizeof(car_interfaces__msg__PidInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__PidInterface));
  bool success = car_interfaces__msg__PidInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__PidInterface__destroy(car_interfaces__msg__PidInterface * msg)
{
  if (msg) {
    car_interfaces__msg__PidInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__PidInterface__Sequence__init(car_interfaces__msg__PidInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__PidInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__PidInterface *)calloc(size, sizeof(car_interfaces__msg__PidInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__PidInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__PidInterface__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
car_interfaces__msg__PidInterface__Sequence__fini(car_interfaces__msg__PidInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__PidInterface__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

car_interfaces__msg__PidInterface__Sequence *
car_interfaces__msg__PidInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__PidInterface__Sequence * array = (car_interfaces__msg__PidInterface__Sequence *)malloc(sizeof(car_interfaces__msg__PidInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__PidInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__PidInterface__Sequence__destroy(car_interfaces__msg__PidInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__PidInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__PidInterface__Sequence__are_equal(const car_interfaces__msg__PidInterface__Sequence * lhs, const car_interfaces__msg__PidInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__PidInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__PidInterface__Sequence__copy(
  const car_interfaces__msg__PidInterface__Sequence * input,
  car_interfaces__msg__PidInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__PidInterface);
    car_interfaces__msg__PidInterface * data =
      (car_interfaces__msg__PidInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__PidInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__PidInterface__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_interfaces__msg__PidInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
