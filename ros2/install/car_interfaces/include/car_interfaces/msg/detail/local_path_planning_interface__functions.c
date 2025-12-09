// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/local_path_planning_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `startpoint`
// Member `endpoint`
// Member `longitude`
// Member `latitude`
// Member `speed`
// Member `angle`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
car_interfaces__msg__LocalPathPlanningInterface__init(car_interfaces__msg__LocalPathPlanningInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // startpoint
  if (!rosidl_runtime_c__double__Sequence__init(&msg->startpoint, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__double__Sequence__init(&msg->endpoint, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__init(&msg->longitude, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__init(&msg->latitude, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__init(&msg->speed, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angle, 0)) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
    return false;
  }
  // control_mode
  // path_end_dis
  // process_time
  return true;
}

void
car_interfaces__msg__LocalPathPlanningInterface__fini(car_interfaces__msg__LocalPathPlanningInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // startpoint
  rosidl_runtime_c__double__Sequence__fini(&msg->startpoint);
  // endpoint
  rosidl_runtime_c__double__Sequence__fini(&msg->endpoint);
  // longitude
  rosidl_runtime_c__double__Sequence__fini(&msg->longitude);
  // latitude
  rosidl_runtime_c__double__Sequence__fini(&msg->latitude);
  // speed
  rosidl_runtime_c__float__Sequence__fini(&msg->speed);
  // angle
  rosidl_runtime_c__float__Sequence__fini(&msg->angle);
  // control_mode
  // path_end_dis
  // process_time
}

bool
car_interfaces__msg__LocalPathPlanningInterface__are_equal(const car_interfaces__msg__LocalPathPlanningInterface * lhs, const car_interfaces__msg__LocalPathPlanningInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // startpoint
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->startpoint), &(rhs->startpoint)))
  {
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->longitude), &(rhs->longitude)))
  {
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->latitude), &(rhs->latitude)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angle), &(rhs->angle)))
  {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // path_end_dis
  if (lhs->path_end_dis != rhs->path_end_dis) {
    return false;
  }
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__LocalPathPlanningInterface__copy(
  const car_interfaces__msg__LocalPathPlanningInterface * input,
  car_interfaces__msg__LocalPathPlanningInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // startpoint
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->startpoint), &(output->startpoint)))
  {
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->longitude), &(output->longitude)))
  {
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->latitude), &(output->latitude)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angle), &(output->angle)))
  {
    return false;
  }
  // control_mode
  output->control_mode = input->control_mode;
  // path_end_dis
  output->path_end_dis = input->path_end_dis;
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__LocalPathPlanningInterface *
car_interfaces__msg__LocalPathPlanningInterface__create()
{
  car_interfaces__msg__LocalPathPlanningInterface * msg = (car_interfaces__msg__LocalPathPlanningInterface *)malloc(sizeof(car_interfaces__msg__LocalPathPlanningInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__LocalPathPlanningInterface));
  bool success = car_interfaces__msg__LocalPathPlanningInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__LocalPathPlanningInterface__destroy(car_interfaces__msg__LocalPathPlanningInterface * msg)
{
  if (msg) {
    car_interfaces__msg__LocalPathPlanningInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__LocalPathPlanningInterface__Sequence__init(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__LocalPathPlanningInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__LocalPathPlanningInterface *)calloc(size, sizeof(car_interfaces__msg__LocalPathPlanningInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__LocalPathPlanningInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__LocalPathPlanningInterface__fini(&data[i - 1]);
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
car_interfaces__msg__LocalPathPlanningInterface__Sequence__fini(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__LocalPathPlanningInterface__fini(&array->data[i]);
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

car_interfaces__msg__LocalPathPlanningInterface__Sequence *
car_interfaces__msg__LocalPathPlanningInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__LocalPathPlanningInterface__Sequence * array = (car_interfaces__msg__LocalPathPlanningInterface__Sequence *)malloc(sizeof(car_interfaces__msg__LocalPathPlanningInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__LocalPathPlanningInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__LocalPathPlanningInterface__Sequence__destroy(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__LocalPathPlanningInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__LocalPathPlanningInterface__Sequence__are_equal(const car_interfaces__msg__LocalPathPlanningInterface__Sequence * lhs, const car_interfaces__msg__LocalPathPlanningInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__LocalPathPlanningInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__LocalPathPlanningInterface__Sequence__copy(
  const car_interfaces__msg__LocalPathPlanningInterface__Sequence * input,
  car_interfaces__msg__LocalPathPlanningInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__LocalPathPlanningInterface);
    car_interfaces__msg__LocalPathPlanningInterface * data =
      (car_interfaces__msg__LocalPathPlanningInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__LocalPathPlanningInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__LocalPathPlanningInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__LocalPathPlanningInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
