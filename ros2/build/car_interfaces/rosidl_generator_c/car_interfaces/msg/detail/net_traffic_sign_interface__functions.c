// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/NetTrafficSignInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/net_traffic_sign_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `lightstate`
// Member `etcstate`
// Member `parkingstate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
car_interfaces__msg__NetTrafficSignInterface__init(car_interfaces__msg__NetTrafficSignInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // lightnumber
  // lightstate
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->lightstate, 0)) {
    car_interfaces__msg__NetTrafficSignInterface__fini(msg);
    return false;
  }
  // etcnumber
  // etcstate
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->etcstate, 0)) {
    car_interfaces__msg__NetTrafficSignInterface__fini(msg);
    return false;
  }
  // parkingnumber
  // parkingstate
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->parkingstate, 0)) {
    car_interfaces__msg__NetTrafficSignInterface__fini(msg);
    return false;
  }
  // process_time
  return true;
}

void
car_interfaces__msg__NetTrafficSignInterface__fini(car_interfaces__msg__NetTrafficSignInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // lightnumber
  // lightstate
  rosidl_runtime_c__int8__Sequence__fini(&msg->lightstate);
  // etcnumber
  // etcstate
  rosidl_runtime_c__int8__Sequence__fini(&msg->etcstate);
  // parkingnumber
  // parkingstate
  rosidl_runtime_c__int8__Sequence__fini(&msg->parkingstate);
  // process_time
}

bool
car_interfaces__msg__NetTrafficSignInterface__are_equal(const car_interfaces__msg__NetTrafficSignInterface * lhs, const car_interfaces__msg__NetTrafficSignInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // lightnumber
  if (lhs->lightnumber != rhs->lightnumber) {
    return false;
  }
  // lightstate
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->lightstate), &(rhs->lightstate)))
  {
    return false;
  }
  // etcnumber
  if (lhs->etcnumber != rhs->etcnumber) {
    return false;
  }
  // etcstate
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->etcstate), &(rhs->etcstate)))
  {
    return false;
  }
  // parkingnumber
  if (lhs->parkingnumber != rhs->parkingnumber) {
    return false;
  }
  // parkingstate
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->parkingstate), &(rhs->parkingstate)))
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
car_interfaces__msg__NetTrafficSignInterface__copy(
  const car_interfaces__msg__NetTrafficSignInterface * input,
  car_interfaces__msg__NetTrafficSignInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // lightnumber
  output->lightnumber = input->lightnumber;
  // lightstate
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->lightstate), &(output->lightstate)))
  {
    return false;
  }
  // etcnumber
  output->etcnumber = input->etcnumber;
  // etcstate
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->etcstate), &(output->etcstate)))
  {
    return false;
  }
  // parkingnumber
  output->parkingnumber = input->parkingnumber;
  // parkingstate
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->parkingstate), &(output->parkingstate)))
  {
    return false;
  }
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__NetTrafficSignInterface *
car_interfaces__msg__NetTrafficSignInterface__create()
{
  car_interfaces__msg__NetTrafficSignInterface * msg = (car_interfaces__msg__NetTrafficSignInterface *)malloc(sizeof(car_interfaces__msg__NetTrafficSignInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__NetTrafficSignInterface));
  bool success = car_interfaces__msg__NetTrafficSignInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__NetTrafficSignInterface__destroy(car_interfaces__msg__NetTrafficSignInterface * msg)
{
  if (msg) {
    car_interfaces__msg__NetTrafficSignInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__NetTrafficSignInterface__Sequence__init(car_interfaces__msg__NetTrafficSignInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__NetTrafficSignInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__NetTrafficSignInterface *)calloc(size, sizeof(car_interfaces__msg__NetTrafficSignInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__NetTrafficSignInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__NetTrafficSignInterface__fini(&data[i - 1]);
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
car_interfaces__msg__NetTrafficSignInterface__Sequence__fini(car_interfaces__msg__NetTrafficSignInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__NetTrafficSignInterface__fini(&array->data[i]);
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

car_interfaces__msg__NetTrafficSignInterface__Sequence *
car_interfaces__msg__NetTrafficSignInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__NetTrafficSignInterface__Sequence * array = (car_interfaces__msg__NetTrafficSignInterface__Sequence *)malloc(sizeof(car_interfaces__msg__NetTrafficSignInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__NetTrafficSignInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__NetTrafficSignInterface__Sequence__destroy(car_interfaces__msg__NetTrafficSignInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__NetTrafficSignInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__NetTrafficSignInterface__Sequence__are_equal(const car_interfaces__msg__NetTrafficSignInterface__Sequence * lhs, const car_interfaces__msg__NetTrafficSignInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__NetTrafficSignInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__NetTrafficSignInterface__Sequence__copy(
  const car_interfaces__msg__NetTrafficSignInterface__Sequence * input,
  car_interfaces__msg__NetTrafficSignInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__NetTrafficSignInterface);
    car_interfaces__msg__NetTrafficSignInterface * data =
      (car_interfaces__msg__NetTrafficSignInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__NetTrafficSignInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__NetTrafficSignInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__NetTrafficSignInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
