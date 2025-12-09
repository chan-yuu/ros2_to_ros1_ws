// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/global_path_planning_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `startpoint`
// Member `endpoint`
// Member `routedata`
// Member `back_point`
// Member `end_obu_point`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
car_interfaces__msg__GlobalPathPlanningInterface__init(car_interfaces__msg__GlobalPathPlanningInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // startpoint
  if (!rosidl_runtime_c__double__Sequence__init(&msg->startpoint, 0)) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
    return false;
  }
  // endpoint
  if (!rosidl_runtime_c__double__Sequence__init(&msg->endpoint, 0)) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
    return false;
  }
  // routedata
  if (!rosidl_runtime_c__double__Sequence__init(&msg->routedata, 0)) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
    return false;
  }
  // back_point
  if (!rosidl_runtime_c__float__Sequence__init(&msg->back_point, 0)) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
    return false;
  }
  // end_obu_point
  if (!rosidl_runtime_c__float__Sequence__init(&msg->end_obu_point, 0)) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
    return false;
  }
  // process_time
  return true;
}

void
car_interfaces__msg__GlobalPathPlanningInterface__fini(car_interfaces__msg__GlobalPathPlanningInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // startpoint
  rosidl_runtime_c__double__Sequence__fini(&msg->startpoint);
  // endpoint
  rosidl_runtime_c__double__Sequence__fini(&msg->endpoint);
  // routedata
  rosidl_runtime_c__double__Sequence__fini(&msg->routedata);
  // back_point
  rosidl_runtime_c__float__Sequence__fini(&msg->back_point);
  // end_obu_point
  rosidl_runtime_c__float__Sequence__fini(&msg->end_obu_point);
  // process_time
}

bool
car_interfaces__msg__GlobalPathPlanningInterface__are_equal(const car_interfaces__msg__GlobalPathPlanningInterface * lhs, const car_interfaces__msg__GlobalPathPlanningInterface * rhs)
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
  // routedata
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->routedata), &(rhs->routedata)))
  {
    return false;
  }
  // back_point
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->back_point), &(rhs->back_point)))
  {
    return false;
  }
  // end_obu_point
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->end_obu_point), &(rhs->end_obu_point)))
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
car_interfaces__msg__GlobalPathPlanningInterface__copy(
  const car_interfaces__msg__GlobalPathPlanningInterface * input,
  car_interfaces__msg__GlobalPathPlanningInterface * output)
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
  // routedata
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->routedata), &(output->routedata)))
  {
    return false;
  }
  // back_point
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->back_point), &(output->back_point)))
  {
    return false;
  }
  // end_obu_point
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->end_obu_point), &(output->end_obu_point)))
  {
    return false;
  }
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__GlobalPathPlanningInterface *
car_interfaces__msg__GlobalPathPlanningInterface__create()
{
  car_interfaces__msg__GlobalPathPlanningInterface * msg = (car_interfaces__msg__GlobalPathPlanningInterface *)malloc(sizeof(car_interfaces__msg__GlobalPathPlanningInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__GlobalPathPlanningInterface));
  bool success = car_interfaces__msg__GlobalPathPlanningInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__GlobalPathPlanningInterface__destroy(car_interfaces__msg__GlobalPathPlanningInterface * msg)
{
  if (msg) {
    car_interfaces__msg__GlobalPathPlanningInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__init(car_interfaces__msg__GlobalPathPlanningInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__GlobalPathPlanningInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__GlobalPathPlanningInterface *)calloc(size, sizeof(car_interfaces__msg__GlobalPathPlanningInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__GlobalPathPlanningInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__GlobalPathPlanningInterface__fini(&data[i - 1]);
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
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__fini(car_interfaces__msg__GlobalPathPlanningInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__GlobalPathPlanningInterface__fini(&array->data[i]);
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

car_interfaces__msg__GlobalPathPlanningInterface__Sequence *
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__GlobalPathPlanningInterface__Sequence * array = (car_interfaces__msg__GlobalPathPlanningInterface__Sequence *)malloc(sizeof(car_interfaces__msg__GlobalPathPlanningInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__GlobalPathPlanningInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__destroy(car_interfaces__msg__GlobalPathPlanningInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__GlobalPathPlanningInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__are_equal(const car_interfaces__msg__GlobalPathPlanningInterface__Sequence * lhs, const car_interfaces__msg__GlobalPathPlanningInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__GlobalPathPlanningInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__GlobalPathPlanningInterface__Sequence__copy(
  const car_interfaces__msg__GlobalPathPlanningInterface__Sequence * input,
  car_interfaces__msg__GlobalPathPlanningInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__GlobalPathPlanningInterface);
    car_interfaces__msg__GlobalPathPlanningInterface * data =
      (car_interfaces__msg__GlobalPathPlanningInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__GlobalPathPlanningInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__GlobalPathPlanningInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__GlobalPathPlanningInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
