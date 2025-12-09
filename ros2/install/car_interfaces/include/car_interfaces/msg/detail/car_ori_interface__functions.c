// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/CarOriInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/car_ori_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
car_interfaces__msg__CarOriInterface__init(car_interfaces__msg__CarOriInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // carspeed
  // steerangle
  // gearpos
  // braketq
  // parkingstate
  // soc
  // batteryvol
  // batterydischargecur
  // car_run_mode
  // throttle_percentage
  // braking_percentage
  // left_light
  // right_light
  // reversing_light
  // speaker
  // start_button
  // stop_button
  // state
  // error
  // process_time
  return true;
}

void
car_interfaces__msg__CarOriInterface__fini(car_interfaces__msg__CarOriInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // carspeed
  // steerangle
  // gearpos
  // braketq
  // parkingstate
  // soc
  // batteryvol
  // batterydischargecur
  // car_run_mode
  // throttle_percentage
  // braking_percentage
  // left_light
  // right_light
  // reversing_light
  // speaker
  // start_button
  // stop_button
  // state
  // error
  // process_time
}

bool
car_interfaces__msg__CarOriInterface__are_equal(const car_interfaces__msg__CarOriInterface * lhs, const car_interfaces__msg__CarOriInterface * rhs)
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
  // carspeed
  if (lhs->carspeed != rhs->carspeed) {
    return false;
  }
  // steerangle
  if (lhs->steerangle != rhs->steerangle) {
    return false;
  }
  // gearpos
  if (lhs->gearpos != rhs->gearpos) {
    return false;
  }
  // braketq
  if (lhs->braketq != rhs->braketq) {
    return false;
  }
  // parkingstate
  if (lhs->parkingstate != rhs->parkingstate) {
    return false;
  }
  // soc
  if (lhs->soc != rhs->soc) {
    return false;
  }
  // batteryvol
  if (lhs->batteryvol != rhs->batteryvol) {
    return false;
  }
  // batterydischargecur
  if (lhs->batterydischargecur != rhs->batterydischargecur) {
    return false;
  }
  // car_run_mode
  if (lhs->car_run_mode != rhs->car_run_mode) {
    return false;
  }
  // throttle_percentage
  if (lhs->throttle_percentage != rhs->throttle_percentage) {
    return false;
  }
  // braking_percentage
  if (lhs->braking_percentage != rhs->braking_percentage) {
    return false;
  }
  // left_light
  if (lhs->left_light != rhs->left_light) {
    return false;
  }
  // right_light
  if (lhs->right_light != rhs->right_light) {
    return false;
  }
  // reversing_light
  if (lhs->reversing_light != rhs->reversing_light) {
    return false;
  }
  // speaker
  if (lhs->speaker != rhs->speaker) {
    return false;
  }
  // start_button
  if (lhs->start_button != rhs->start_button) {
    return false;
  }
  // stop_button
  if (lhs->stop_button != rhs->stop_button) {
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
  // process_time
  if (lhs->process_time != rhs->process_time) {
    return false;
  }
  return true;
}

bool
car_interfaces__msg__CarOriInterface__copy(
  const car_interfaces__msg__CarOriInterface * input,
  car_interfaces__msg__CarOriInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // carspeed
  output->carspeed = input->carspeed;
  // steerangle
  output->steerangle = input->steerangle;
  // gearpos
  output->gearpos = input->gearpos;
  // braketq
  output->braketq = input->braketq;
  // parkingstate
  output->parkingstate = input->parkingstate;
  // soc
  output->soc = input->soc;
  // batteryvol
  output->batteryvol = input->batteryvol;
  // batterydischargecur
  output->batterydischargecur = input->batterydischargecur;
  // car_run_mode
  output->car_run_mode = input->car_run_mode;
  // throttle_percentage
  output->throttle_percentage = input->throttle_percentage;
  // braking_percentage
  output->braking_percentage = input->braking_percentage;
  // left_light
  output->left_light = input->left_light;
  // right_light
  output->right_light = input->right_light;
  // reversing_light
  output->reversing_light = input->reversing_light;
  // speaker
  output->speaker = input->speaker;
  // start_button
  output->start_button = input->start_button;
  // stop_button
  output->stop_button = input->stop_button;
  // state
  output->state = input->state;
  // error
  output->error = input->error;
  // process_time
  output->process_time = input->process_time;
  return true;
}

car_interfaces__msg__CarOriInterface *
car_interfaces__msg__CarOriInterface__create()
{
  car_interfaces__msg__CarOriInterface * msg = (car_interfaces__msg__CarOriInterface *)malloc(sizeof(car_interfaces__msg__CarOriInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__CarOriInterface));
  bool success = car_interfaces__msg__CarOriInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__CarOriInterface__destroy(car_interfaces__msg__CarOriInterface * msg)
{
  if (msg) {
    car_interfaces__msg__CarOriInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__CarOriInterface__Sequence__init(car_interfaces__msg__CarOriInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__CarOriInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__CarOriInterface *)calloc(size, sizeof(car_interfaces__msg__CarOriInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__CarOriInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__CarOriInterface__fini(&data[i - 1]);
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
car_interfaces__msg__CarOriInterface__Sequence__fini(car_interfaces__msg__CarOriInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__CarOriInterface__fini(&array->data[i]);
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

car_interfaces__msg__CarOriInterface__Sequence *
car_interfaces__msg__CarOriInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__CarOriInterface__Sequence * array = (car_interfaces__msg__CarOriInterface__Sequence *)malloc(sizeof(car_interfaces__msg__CarOriInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__CarOriInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__CarOriInterface__Sequence__destroy(car_interfaces__msg__CarOriInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__CarOriInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__CarOriInterface__Sequence__are_equal(const car_interfaces__msg__CarOriInterface__Sequence * lhs, const car_interfaces__msg__CarOriInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__CarOriInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__CarOriInterface__Sequence__copy(
  const car_interfaces__msg__CarOriInterface__Sequence * input,
  car_interfaces__msg__CarOriInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__CarOriInterface);
    car_interfaces__msg__CarOriInterface * data =
      (car_interfaces__msg__CarOriInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__CarOriInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__CarOriInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__CarOriInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
