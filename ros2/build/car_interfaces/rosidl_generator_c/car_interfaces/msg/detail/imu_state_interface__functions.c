// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/ImuStateInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/imu_state_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__ImuStateInterface__init(car_interfaces__msg__ImuStateInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // state
  // error
  return true;
}

void
car_interfaces__msg__ImuStateInterface__fini(car_interfaces__msg__ImuStateInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // state
  // error
}

bool
car_interfaces__msg__ImuStateInterface__are_equal(const car_interfaces__msg__ImuStateInterface * lhs, const car_interfaces__msg__ImuStateInterface * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__ImuStateInterface__copy(
  const car_interfaces__msg__ImuStateInterface * input,
  car_interfaces__msg__ImuStateInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // state
  output->state = input->state;
  // error
  output->error = input->error;
  return true;
}

car_interfaces__msg__ImuStateInterface *
car_interfaces__msg__ImuStateInterface__create()
{
  car_interfaces__msg__ImuStateInterface * msg = (car_interfaces__msg__ImuStateInterface *)malloc(sizeof(car_interfaces__msg__ImuStateInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__ImuStateInterface));
  bool success = car_interfaces__msg__ImuStateInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__ImuStateInterface__destroy(car_interfaces__msg__ImuStateInterface * msg)
{
  if (msg) {
    car_interfaces__msg__ImuStateInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__ImuStateInterface__Sequence__init(car_interfaces__msg__ImuStateInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__ImuStateInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__ImuStateInterface *)calloc(size, sizeof(car_interfaces__msg__ImuStateInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__ImuStateInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__ImuStateInterface__fini(&data[i - 1]);
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
car_interfaces__msg__ImuStateInterface__Sequence__fini(car_interfaces__msg__ImuStateInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__ImuStateInterface__fini(&array->data[i]);
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

car_interfaces__msg__ImuStateInterface__Sequence *
car_interfaces__msg__ImuStateInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__ImuStateInterface__Sequence * array = (car_interfaces__msg__ImuStateInterface__Sequence *)malloc(sizeof(car_interfaces__msg__ImuStateInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__ImuStateInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__ImuStateInterface__Sequence__destroy(car_interfaces__msg__ImuStateInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__ImuStateInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__ImuStateInterface__Sequence__are_equal(const car_interfaces__msg__ImuStateInterface__Sequence * lhs, const car_interfaces__msg__ImuStateInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__ImuStateInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__ImuStateInterface__Sequence__copy(
  const car_interfaces__msg__ImuStateInterface__Sequence * input,
  car_interfaces__msg__ImuStateInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__ImuStateInterface);
    car_interfaces__msg__ImuStateInterface * data =
      (car_interfaces__msg__ImuStateInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__ImuStateInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__ImuStateInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__ImuStateInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
