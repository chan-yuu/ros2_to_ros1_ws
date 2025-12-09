// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/MatchMapInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/match_map_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__MatchMapInterface__init(car_interfaces__msg__MatchMapInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // special_road
  // stopline_longitude
  // stopline_latitude
  // cross
  // light_recognition
  return true;
}

void
car_interfaces__msg__MatchMapInterface__fini(car_interfaces__msg__MatchMapInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // special_road
  // stopline_longitude
  // stopline_latitude
  // cross
  // light_recognition
}

bool
car_interfaces__msg__MatchMapInterface__are_equal(const car_interfaces__msg__MatchMapInterface * lhs, const car_interfaces__msg__MatchMapInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // special_road
  if (lhs->special_road != rhs->special_road) {
    return false;
  }
  // stopline_longitude
  if (lhs->stopline_longitude != rhs->stopline_longitude) {
    return false;
  }
  // stopline_latitude
  if (lhs->stopline_latitude != rhs->stopline_latitude) {
    return false;
  }
  // cross
  if (lhs->cross != rhs->cross) {
    return false;
  }
  // light_recognition
  if (lhs->light_recognition != rhs->light_recognition) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__MatchMapInterface__copy(
  const car_interfaces__msg__MatchMapInterface * input,
  car_interfaces__msg__MatchMapInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // special_road
  output->special_road = input->special_road;
  // stopline_longitude
  output->stopline_longitude = input->stopline_longitude;
  // stopline_latitude
  output->stopline_latitude = input->stopline_latitude;
  // cross
  output->cross = input->cross;
  // light_recognition
  output->light_recognition = input->light_recognition;
  return true;
}

car_interfaces__msg__MatchMapInterface *
car_interfaces__msg__MatchMapInterface__create()
{
  car_interfaces__msg__MatchMapInterface * msg = (car_interfaces__msg__MatchMapInterface *)malloc(sizeof(car_interfaces__msg__MatchMapInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__MatchMapInterface));
  bool success = car_interfaces__msg__MatchMapInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__MatchMapInterface__destroy(car_interfaces__msg__MatchMapInterface * msg)
{
  if (msg) {
    car_interfaces__msg__MatchMapInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__MatchMapInterface__Sequence__init(car_interfaces__msg__MatchMapInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__MatchMapInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__MatchMapInterface *)calloc(size, sizeof(car_interfaces__msg__MatchMapInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__MatchMapInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__MatchMapInterface__fini(&data[i - 1]);
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
car_interfaces__msg__MatchMapInterface__Sequence__fini(car_interfaces__msg__MatchMapInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__MatchMapInterface__fini(&array->data[i]);
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

car_interfaces__msg__MatchMapInterface__Sequence *
car_interfaces__msg__MatchMapInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__MatchMapInterface__Sequence * array = (car_interfaces__msg__MatchMapInterface__Sequence *)malloc(sizeof(car_interfaces__msg__MatchMapInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__MatchMapInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__MatchMapInterface__Sequence__destroy(car_interfaces__msg__MatchMapInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__MatchMapInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__MatchMapInterface__Sequence__are_equal(const car_interfaces__msg__MatchMapInterface__Sequence * lhs, const car_interfaces__msg__MatchMapInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__MatchMapInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__MatchMapInterface__Sequence__copy(
  const car_interfaces__msg__MatchMapInterface__Sequence * input,
  car_interfaces__msg__MatchMapInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__MatchMapInterface);
    car_interfaces__msg__MatchMapInterface * data =
      (car_interfaces__msg__MatchMapInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__MatchMapInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__MatchMapInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__MatchMapInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
