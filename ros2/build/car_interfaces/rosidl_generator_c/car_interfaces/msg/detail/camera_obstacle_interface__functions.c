// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/CameraObstacleInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/camera_obstacle_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obstacledata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `resultimage`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
car_interfaces__msg__CameraObstacleInterface__init(car_interfaces__msg__CameraObstacleInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // number
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__init(&msg->obstacledata, 0)) {
    car_interfaces__msg__CameraObstacleInterface__fini(msg);
    return false;
  }
  // resultimage
  if (!sensor_msgs__msg__Image__init(&msg->resultimage)) {
    car_interfaces__msg__CameraObstacleInterface__fini(msg);
    return false;
  }
  // process_time
  // weatherdata
  return true;
}

void
car_interfaces__msg__CameraObstacleInterface__fini(car_interfaces__msg__CameraObstacleInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // number
  // obstacledata
  rosidl_runtime_c__float__Sequence__fini(&msg->obstacledata);
  // resultimage
  sensor_msgs__msg__Image__fini(&msg->resultimage);
  // process_time
  // weatherdata
}

bool
car_interfaces__msg__CameraObstacleInterface__are_equal(const car_interfaces__msg__CameraObstacleInterface * lhs, const car_interfaces__msg__CameraObstacleInterface * rhs)
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
  // resultimage
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->resultimage), &(rhs->resultimage)))
  {
    return false;
  }
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  // weatherdata
  if (lhs->weatherdata != rhs->weatherdata) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__CameraObstacleInterface__copy(
  const car_interfaces__msg__CameraObstacleInterface * input,
  car_interfaces__msg__CameraObstacleInterface * output)
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
  // resultimage
  if (!sensor_msgs__msg__Image__copy(
      &(input->resultimage), &(output->resultimage)))
  {
    return false;
  }
  // process_time
  output->process_time = input->process_time;
  // weatherdata
  output->weatherdata = input->weatherdata;
  return true;
}

car_interfaces__msg__CameraObstacleInterface *
car_interfaces__msg__CameraObstacleInterface__create()
{
  car_interfaces__msg__CameraObstacleInterface * msg = (car_interfaces__msg__CameraObstacleInterface *)malloc(sizeof(car_interfaces__msg__CameraObstacleInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__CameraObstacleInterface));
  bool success = car_interfaces__msg__CameraObstacleInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__CameraObstacleInterface__destroy(car_interfaces__msg__CameraObstacleInterface * msg)
{
  if (msg) {
    car_interfaces__msg__CameraObstacleInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__CameraObstacleInterface__Sequence__init(car_interfaces__msg__CameraObstacleInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__CameraObstacleInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__CameraObstacleInterface *)calloc(size, sizeof(car_interfaces__msg__CameraObstacleInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__CameraObstacleInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__CameraObstacleInterface__fini(&data[i - 1]);
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
car_interfaces__msg__CameraObstacleInterface__Sequence__fini(car_interfaces__msg__CameraObstacleInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__CameraObstacleInterface__fini(&array->data[i]);
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

car_interfaces__msg__CameraObstacleInterface__Sequence *
car_interfaces__msg__CameraObstacleInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__CameraObstacleInterface__Sequence * array = (car_interfaces__msg__CameraObstacleInterface__Sequence *)malloc(sizeof(car_interfaces__msg__CameraObstacleInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__CameraObstacleInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__CameraObstacleInterface__Sequence__destroy(car_interfaces__msg__CameraObstacleInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__CameraObstacleInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__CameraObstacleInterface__Sequence__are_equal(const car_interfaces__msg__CameraObstacleInterface__Sequence * lhs, const car_interfaces__msg__CameraObstacleInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__CameraObstacleInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__CameraObstacleInterface__Sequence__copy(
  const car_interfaces__msg__CameraObstacleInterface__Sequence * input,
  car_interfaces__msg__CameraObstacleInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__CameraObstacleInterface);
    car_interfaces__msg__CameraObstacleInterface * data =
      (car_interfaces__msg__CameraObstacleInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__CameraObstacleInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__CameraObstacleInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__CameraObstacleInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
