// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/fusion_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `signdata`
// Member `lightdata`
// Member `obstacledata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
car_interfaces__msg__FusionInterface__init(car_interfaces__msg__FusionInterface * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id
  // carlength
  // carwidth
  // carheight
  // centeroffset
  // signnumber
  // signdata
  if (!rosidl_runtime_c__float__Sequence__init(&msg->signdata, 0)) {
    car_interfaces__msg__FusionInterface__fini(msg);
    return false;
  }
  // lightdata
  if (!rosidl_runtime_c__float__Sequence__init(&msg->lightdata, 0)) {
    car_interfaces__msg__FusionInterface__fini(msg);
    return false;
  }
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__init(&msg->obstacledata, 0)) {
    car_interfaces__msg__FusionInterface__fini(msg);
    return false;
  }
  // yaw
  // pitch
  // roll
  // wx
  // wy
  // wz
  // ax
  // ay
  // az
  // longitude
  // latitude
  // height
  // eastvelocity
  // northvelocity
  // skyvelocity
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
car_interfaces__msg__FusionInterface__fini(car_interfaces__msg__FusionInterface * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id
  // carlength
  // carwidth
  // carheight
  // centeroffset
  // signnumber
  // signdata
  rosidl_runtime_c__float__Sequence__fini(&msg->signdata);
  // lightdata
  rosidl_runtime_c__float__Sequence__fini(&msg->lightdata);
  // obstacledata
  rosidl_runtime_c__float__Sequence__fini(&msg->obstacledata);
  // yaw
  // pitch
  // roll
  // wx
  // wy
  // wz
  // ax
  // ay
  // az
  // longitude
  // latitude
  // height
  // eastvelocity
  // northvelocity
  // skyvelocity
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
car_interfaces__msg__FusionInterface__are_equal(const car_interfaces__msg__FusionInterface * lhs, const car_interfaces__msg__FusionInterface * rhs)
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
  // carlength
  if (lhs->carlength != rhs->carlength) {
    return false;
  }
  // carwidth
  if (lhs->carwidth != rhs->carwidth) {
    return false;
  }
  // carheight
  if (lhs->carheight != rhs->carheight) {
    return false;
  }
  // centeroffset
  if (lhs->centeroffset != rhs->centeroffset) {
    return false;
  }
  // signnumber
  if (lhs->signnumber != rhs->signnumber) {
    return false;
  }
  // signdata
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->signdata), &(rhs->signdata)))
  {
    return false;
  }
  // lightdata
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->lightdata), &(rhs->lightdata)))
  {
    return false;
  }
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->obstacledata), &(rhs->obstacledata)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // wx
  if (lhs->wx != rhs->wx) {
    return false;
  }
  // wy
  if (lhs->wy != rhs->wy) {
    return false;
  }
  // wz
  if (lhs->wz != rhs->wz) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // eastvelocity
  if (lhs->eastvelocity != rhs->eastvelocity) {
    return false;
  }
  // northvelocity
  if (lhs->northvelocity != rhs->northvelocity) {
    return false;
  }
  // skyvelocity
  if (lhs->skyvelocity != rhs->skyvelocity) {
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
car_interfaces__msg__FusionInterface__copy(
  const car_interfaces__msg__FusionInterface * input,
  car_interfaces__msg__FusionInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id
  output->id = input->id;
  // carlength
  output->carlength = input->carlength;
  // carwidth
  output->carwidth = input->carwidth;
  // carheight
  output->carheight = input->carheight;
  // centeroffset
  output->centeroffset = input->centeroffset;
  // signnumber
  output->signnumber = input->signnumber;
  // signdata
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->signdata), &(output->signdata)))
  {
    return false;
  }
  // lightdata
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->lightdata), &(output->lightdata)))
  {
    return false;
  }
  // obstacledata
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->obstacledata), &(output->obstacledata)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // wx
  output->wx = input->wx;
  // wy
  output->wy = input->wy;
  // wz
  output->wz = input->wz;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // longitude
  output->longitude = input->longitude;
  // latitude
  output->latitude = input->latitude;
  // height
  output->height = input->height;
  // eastvelocity
  output->eastvelocity = input->eastvelocity;
  // northvelocity
  output->northvelocity = input->northvelocity;
  // skyvelocity
  output->skyvelocity = input->skyvelocity;
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

car_interfaces__msg__FusionInterface *
car_interfaces__msg__FusionInterface__create()
{
  car_interfaces__msg__FusionInterface * msg = (car_interfaces__msg__FusionInterface *)malloc(sizeof(car_interfaces__msg__FusionInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__msg__FusionInterface));
  bool success = car_interfaces__msg__FusionInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
car_interfaces__msg__FusionInterface__destroy(car_interfaces__msg__FusionInterface * msg)
{
  if (msg) {
    car_interfaces__msg__FusionInterface__fini(msg);
  }
  free(msg);
}


bool
car_interfaces__msg__FusionInterface__Sequence__init(car_interfaces__msg__FusionInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  car_interfaces__msg__FusionInterface * data = NULL;
  if (size) {
    data = (car_interfaces__msg__FusionInterface *)calloc(size, sizeof(car_interfaces__msg__FusionInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__msg__FusionInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__msg__FusionInterface__fini(&data[i - 1]);
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
car_interfaces__msg__FusionInterface__Sequence__fini(car_interfaces__msg__FusionInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__msg__FusionInterface__fini(&array->data[i]);
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

car_interfaces__msg__FusionInterface__Sequence *
car_interfaces__msg__FusionInterface__Sequence__create(size_t size)
{
  car_interfaces__msg__FusionInterface__Sequence * array = (car_interfaces__msg__FusionInterface__Sequence *)malloc(sizeof(car_interfaces__msg__FusionInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__msg__FusionInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
car_interfaces__msg__FusionInterface__Sequence__destroy(car_interfaces__msg__FusionInterface__Sequence * array)
{
  if (array) {
    car_interfaces__msg__FusionInterface__Sequence__fini(array);
  }
  free(array);
}

bool
car_interfaces__msg__FusionInterface__Sequence__are_equal(const car_interfaces__msg__FusionInterface__Sequence * lhs, const car_interfaces__msg__FusionInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__msg__FusionInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__msg__FusionInterface__Sequence__copy(
  const car_interfaces__msg__FusionInterface__Sequence * input,
  car_interfaces__msg__FusionInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__msg__FusionInterface);
    car_interfaces__msg__FusionInterface * data =
      (car_interfaces__msg__FusionInterface *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__msg__FusionInterface__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_interfaces__msg__FusionInterface__fini(&data[i]);
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
    if (!car_interfaces__msg__FusionInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
