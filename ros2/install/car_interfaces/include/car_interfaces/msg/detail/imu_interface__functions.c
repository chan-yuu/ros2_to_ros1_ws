// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/ImuInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/imu_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__ImuInterface__init(car_interfaces__msg__ImuInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // yaw
  // pitch
  // roll
  // wx
  // wy
  // wz
  // ax
  // ay
  // az
  // process_time
  return true;
}

void
car_interfaces__msg__ImuInterface__fini(car_interfaces__msg__ImuInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // yaw
  // pitch
  // roll
  // wx
  // wy
  // wz
  // ax
  // ay
  // az
  // process_time
}

bool
car_interfaces__msg__ImuInterface__are_equal(const car_interfaces__msg__ImuInterface * lhs, const car_interfaces__msg__ImuInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // wx
  if (lhs->wx != rhs->wx) {
    return false;
  }
  // wy
  if (lhs->wy != rhs->wy) {
    return false;
  }
  // wz
  if (lhs->wz != rhs->wz) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__ImuInterface__copy(
  const car_interfaces__msg__ImuInterface * input,
  car_interfaces__msg__ImuInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // wx
  output->wx = input->wx;
  // wy
  output->wy = input->wy;
  // wz
  output->wz = input->wz;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__ImuInterface *
car_interfaces__msg__ImuInterface__create()
{
  car_interfaces__msg__ImuInterface * msg = (car_interfaces__msg__ImuInterface *)malloc(sizeof(car_interfaces__msg__ImuInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__ImuInterface));
  bool success = car_interfaces__msg__ImuInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__ImuInterface__destroy(car_interfaces__msg__ImuInterface * msg)
{
  if (msg) {
    car_interfaces__msg__ImuInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__ImuInterface__Sequence__init(car_interfaces__msg__ImuInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__ImuInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__ImuInterface *)calloc(size, sizeof(car_interfaces__msg__ImuInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__ImuInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__ImuInterface__fini(&data[i - 1]);
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
car_interfaces__msg__ImuInterface__Sequence__fini(car_interfaces__msg__ImuInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__ImuInterface__fini(&array->data[i]);
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

car_interfaces__msg__ImuInterface__Sequence *
car_interfaces__msg__ImuInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__ImuInterface__Sequence * array = (car_interfaces__msg__ImuInterface__Sequence *)malloc(sizeof(car_interfaces__msg__ImuInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__ImuInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__ImuInterface__Sequence__destroy(car_interfaces__msg__ImuInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__ImuInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__ImuInterface__Sequence__are_equal(const car_interfaces__msg__ImuInterface__Sequence * lhs, const car_interfaces__msg__ImuInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__ImuInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__ImuInterface__Sequence__copy(
  const car_interfaces__msg__ImuInterface__Sequence * input,
  car_interfaces__msg__ImuInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__ImuInterface);
    car_interfaces__msg__ImuInterface * data =
      (car_interfaces__msg__ImuInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__ImuInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__ImuInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__ImuInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
