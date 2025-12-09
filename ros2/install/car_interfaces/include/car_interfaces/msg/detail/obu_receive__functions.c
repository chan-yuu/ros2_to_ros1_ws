// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/ObuReceive.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/obu_receive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__ObuReceive__init(car_interfaces__msg__ObuReceive * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // time
  // dis_to_stopline
  // cutin_flag
  // end_point_lat
  // end_point_lon
  // transit_point_1_lat
  // transit_point_1_lon
  // transit_point_2_lat
  // transit_point_2_lon
  return true;
}

void
car_interfaces__msg__ObuReceive__fini(car_interfaces__msg__ObuReceive * msg)
{
  if (!msg) {
    return;
  }
  // color
  // time
  // dis_to_stopline
  // cutin_flag
  // end_point_lat
  // end_point_lon
  // transit_point_1_lat
  // transit_point_1_lon
  // transit_point_2_lat
  // transit_point_2_lon
}

bool
car_interfaces__msg__ObuReceive__are_equal(const car_interfaces__msg__ObuReceive * lhs, const car_interfaces__msg__ObuReceive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // dis_to_stopline
  if (lhs->dis_to_stopline != rhs->dis_to_stopline) {
    return false;
  }
  // cutin_flag
  if (lhs->cutin_flag != rhs->cutin_flag) {
    return false;
  }
  // end_point_lat
  if (lhs->end_point_lat != rhs->end_point_lat) {
    return false;
  }
  // end_point_lon
  if (lhs->end_point_lon != rhs->end_point_lon) {
    return false;
  }
  // transit_point_1_lat
  if (lhs->transit_point_1_lat != rhs->transit_point_1_lat) {
    return false;
  }
  // transit_point_1_lon
  if (lhs->transit_point_1_lon != rhs->transit_point_1_lon) {
    return false;
  }
  // transit_point_2_lat
  if (lhs->transit_point_2_lat != rhs->transit_point_2_lat) {
    return false;
  }
  // transit_point_2_lon
  if (lhs->transit_point_2_lon != rhs->transit_point_2_lon) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__ObuReceive__copy(
  const car_interfaces__msg__ObuReceive * input,
  car_interfaces__msg__ObuReceive * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // time
  output->time = input->time;
  // dis_to_stopline
  output->dis_to_stopline = input->dis_to_stopline;
  // cutin_flag
  output->cutin_flag = input->cutin_flag;
  // end_point_lat
  output->end_point_lat = input->end_point_lat;
  // end_point_lon
  output->end_point_lon = input->end_point_lon;
  // transit_point_1_lat
  output->transit_point_1_lat = input->transit_point_1_lat;
  // transit_point_1_lon
  output->transit_point_1_lon = input->transit_point_1_lon;
  // transit_point_2_lat
  output->transit_point_2_lat = input->transit_point_2_lat;
  // transit_point_2_lon
  output->transit_point_2_lon = input->transit_point_2_lon;
  return true;
}

car_interfaces__msg__ObuReceive *
car_interfaces__msg__ObuReceive__create()
{
  car_interfaces__msg__ObuReceive * msg = (car_interfaces__msg__ObuReceive *)malloc(sizeof(car_interfaces__msg__ObuReceive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__ObuReceive));
  bool success = car_interfaces__msg__ObuReceive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__ObuReceive__destroy(car_interfaces__msg__ObuReceive * msg)
{
  if (msg) {
    car_interfaces__msg__ObuReceive__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__ObuReceive__Sequence__init(car_interfaces__msg__ObuReceive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__ObuReceive * data = NULL;
  if (size) {
    data = (car_interfaces__msg__ObuReceive *)calloc(size, sizeof(car_interfaces__msg__ObuReceive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__ObuReceive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__ObuReceive__fini(&data[i - 1]);
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
car_interfaces__msg__ObuReceive__Sequence__fini(car_interfaces__msg__ObuReceive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__ObuReceive__fini(&array->data[i]);
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

car_interfaces__msg__ObuReceive__Sequence *
car_interfaces__msg__ObuReceive__Sequence__create(size_t size)
{
  car_interfaces__msg__ObuReceive__Sequence * array = (car_interfaces__msg__ObuReceive__Sequence *)malloc(sizeof(car_interfaces__msg__ObuReceive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__ObuReceive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__ObuReceive__Sequence__destroy(car_interfaces__msg__ObuReceive__Sequence * array)
{
  if (array) {
    car_interfaces__msg__ObuReceive__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__ObuReceive__Sequence__are_equal(const car_interfaces__msg__ObuReceive__Sequence * lhs, const car_interfaces__msg__ObuReceive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__ObuReceive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__ObuReceive__Sequence__copy(
  const car_interfaces__msg__ObuReceive__Sequence * input,
  car_interfaces__msg__ObuReceive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__ObuReceive);
    car_interfaces__msg__ObuReceive * data =
      (car_interfaces__msg__ObuReceive *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__ObuReceive__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__ObuReceive__fini(&data[i]);
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
    if (!car_interfaces__msg__ObuReceive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
