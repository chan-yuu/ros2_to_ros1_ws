// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/RadarObstacleInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/radar_obstacle_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obstacledata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
car_interfaces__msg__RadarObstacleInterface__init(car_interfaces__msg__RadarObstacleInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // number
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__init(&msg->obstacledata, 0)) {
    car_interfaces__msg__RadarObstacleInterface__fini(msg);
    return false;
  }
  // process_time
  return true;
}

void
car_interfaces__msg__RadarObstacleInterface__fini(car_interfaces__msg__RadarObstacleInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // number
  // obstacledata
  rosidl_runtime_c__float__Sequence__fini(&msg->obstacledata);
  // process_time
}

bool
car_interfaces__msg__RadarObstacleInterface__are_equal(const car_interfaces__msg__RadarObstacleInterface * lhs, const car_interfaces__msg__RadarObstacleInterface * rhs)
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
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->obstacledata), &(rhs->obstacledata)))
  {
    return false;
  }
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__RadarObstacleInterface__copy(
  const car_interfaces__msg__RadarObstacleInterface * input,
  car_interfaces__msg__RadarObstacleInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // number
  output->number = input->number;
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->obstacledata), &(output->obstacledata)))
  {
    return false;
  }
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__RadarObstacleInterface *
car_interfaces__msg__RadarObstacleInterface__create()
{
  car_interfaces__msg__RadarObstacleInterface * msg = (car_interfaces__msg__RadarObstacleInterface *)malloc(sizeof(car_interfaces__msg__RadarObstacleInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__RadarObstacleInterface));
  bool success = car_interfaces__msg__RadarObstacleInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__RadarObstacleInterface__destroy(car_interfaces__msg__RadarObstacleInterface * msg)
{
  if (msg) {
    car_interfaces__msg__RadarObstacleInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__RadarObstacleInterface__Sequence__init(car_interfaces__msg__RadarObstacleInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__RadarObstacleInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__RadarObstacleInterface *)calloc(size, sizeof(car_interfaces__msg__RadarObstacleInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__RadarObstacleInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__RadarObstacleInterface__fini(&data[i - 1]);
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
car_interfaces__msg__RadarObstacleInterface__Sequence__fini(car_interfaces__msg__RadarObstacleInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__RadarObstacleInterface__fini(&array->data[i]);
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

car_interfaces__msg__RadarObstacleInterface__Sequence *
car_interfaces__msg__RadarObstacleInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__RadarObstacleInterface__Sequence * array = (car_interfaces__msg__RadarObstacleInterface__Sequence *)malloc(sizeof(car_interfaces__msg__RadarObstacleInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__RadarObstacleInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__RadarObstacleInterface__Sequence__destroy(car_interfaces__msg__RadarObstacleInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__RadarObstacleInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__RadarObstacleInterface__Sequence__are_equal(const car_interfaces__msg__RadarObstacleInterface__Sequence * lhs, const car_interfaces__msg__RadarObstacleInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__RadarObstacleInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__RadarObstacleInterface__Sequence__copy(
  const car_interfaces__msg__RadarObstacleInterface__Sequence * input,
  car_interfaces__msg__RadarObstacleInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__RadarObstacleInterface);
    car_interfaces__msg__RadarObstacleInterface * data =
      (car_interfaces__msg__RadarObstacleInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__RadarObstacleInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__RadarObstacleInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__RadarObstacleInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
