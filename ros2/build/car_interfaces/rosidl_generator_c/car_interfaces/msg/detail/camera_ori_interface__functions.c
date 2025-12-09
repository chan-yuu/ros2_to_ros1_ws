// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/CameraOriInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/camera_ori_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `imagedata`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
car_interfaces__msg__CameraOriInterface__init(car_interfaces__msg__CameraOriInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // imagedata
  if (!sensor_msgs__msg__Image__init(&msg->imagedata)) {
    car_interfaces__msg__CameraOriInterface__fini(msg);
    return false;
  }
  // process_time
  return true;
}

void
car_interfaces__msg__CameraOriInterface__fini(car_interfaces__msg__CameraOriInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // imagedata
  sensor_msgs__msg__Image__fini(&msg->imagedata);
  // process_time
}

bool
car_interfaces__msg__CameraOriInterface__are_equal(const car_interfaces__msg__CameraOriInterface * lhs, const car_interfaces__msg__CameraOriInterface * rhs)
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
  // imagedata
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->imagedata), &(rhs->imagedata)))
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
car_interfaces__msg__CameraOriInterface__copy(
  const car_interfaces__msg__CameraOriInterface * input,
  car_interfaces__msg__CameraOriInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // imagedata
  if (!sensor_msgs__msg__Image__copy(
      &(input->imagedata), &(output->imagedata)))
  {
    return false;
  }
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__CameraOriInterface *
car_interfaces__msg__CameraOriInterface__create()
{
  car_interfaces__msg__CameraOriInterface * msg = (car_interfaces__msg__CameraOriInterface *)malloc(sizeof(car_interfaces__msg__CameraOriInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__CameraOriInterface));
  bool success = car_interfaces__msg__CameraOriInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__CameraOriInterface__destroy(car_interfaces__msg__CameraOriInterface * msg)
{
  if (msg) {
    car_interfaces__msg__CameraOriInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__CameraOriInterface__Sequence__init(car_interfaces__msg__CameraOriInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__CameraOriInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__CameraOriInterface *)calloc(size, sizeof(car_interfaces__msg__CameraOriInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__CameraOriInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__CameraOriInterface__fini(&data[i - 1]);
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
car_interfaces__msg__CameraOriInterface__Sequence__fini(car_interfaces__msg__CameraOriInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__CameraOriInterface__fini(&array->data[i]);
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

car_interfaces__msg__CameraOriInterface__Sequence *
car_interfaces__msg__CameraOriInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__CameraOriInterface__Sequence * array = (car_interfaces__msg__CameraOriInterface__Sequence *)malloc(sizeof(car_interfaces__msg__CameraOriInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__CameraOriInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__CameraOriInterface__Sequence__destroy(car_interfaces__msg__CameraOriInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__CameraOriInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__CameraOriInterface__Sequence__are_equal(const car_interfaces__msg__CameraOriInterface__Sequence * lhs, const car_interfaces__msg__CameraOriInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__CameraOriInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__CameraOriInterface__Sequence__copy(
  const car_interfaces__msg__CameraOriInterface__Sequence * input,
  car_interfaces__msg__CameraOriInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__CameraOriInterface);
    car_interfaces__msg__CameraOriInterface * data =
      (car_interfaces__msg__CameraOriInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__CameraOriInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__CameraOriInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__CameraOriInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
