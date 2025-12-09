// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice
#include "car_interfaces/msg/detail/fusion_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_interfaces/msg/detail/fusion_interface__struct.h"
#include "car_interfaces/msg/detail/fusion_interface__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // lightdata, obstacledata, signdata
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // lightdata, obstacledata, signdata

// forward declare type support functions


using _FusionInterface__ros_msg_type = car_interfaces__msg__FusionInterface;

static bool _FusionInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FusionInterface__ros_msg_type * ros_message = static_cast<const _FusionInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: carlength
  {
    cdr << ros_message->carlength;
  }

  // Field name: carwidth
  {
    cdr << ros_message->carwidth;
  }

  // Field name: carheight
  {
    cdr << ros_message->carheight;
  }

  // Field name: centeroffset
  {
    cdr << ros_message->centeroffset;
  }

  // Field name: signnumber
  {
    cdr << ros_message->signnumber;
  }

  // Field name: signdata
  {
    size_t size = ros_message->signdata.size;
    auto array_ptr = ros_message->signdata.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lightdata
  {
    size_t size = ros_message->lightdata.size;
    auto array_ptr = ros_message->lightdata.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: obstacledata
  {
    size_t size = ros_message->obstacledata.size;
    auto array_ptr = ros_message->obstacledata.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: wx
  {
    cdr << ros_message->wx;
  }

  // Field name: wy
  {
    cdr << ros_message->wy;
  }

  // Field name: wz
  {
    cdr << ros_message->wz;
  }

  // Field name: ax
  {
    cdr << ros_message->ax;
  }

  // Field name: ay
  {
    cdr << ros_message->ay;
  }

  // Field name: az
  {
    cdr << ros_message->az;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: eastvelocity
  {
    cdr << ros_message->eastvelocity;
  }

  // Field name: northvelocity
  {
    cdr << ros_message->northvelocity;
  }

  // Field name: skyvelocity
  {
    cdr << ros_message->skyvelocity;
  }

  // Field name: carspeed
  {
    cdr << ros_message->carspeed;
  }

  // Field name: steerangle
  {
    cdr << ros_message->steerangle;
  }

  // Field name: gearpos
  {
    cdr << ros_message->gearpos;
  }

  // Field name: braketq
  {
    cdr << ros_message->braketq;
  }

  // Field name: parkingstate
  {
    cdr << ros_message->parkingstate;
  }

  // Field name: soc
  {
    cdr << ros_message->soc;
  }

  // Field name: batteryvol
  {
    cdr << ros_message->batteryvol;
  }

  // Field name: batterydischargecur
  {
    cdr << ros_message->batterydischargecur;
  }

  // Field name: car_run_mode
  {
    cdr << ros_message->car_run_mode;
  }

  // Field name: throttle_percentage
  {
    cdr << ros_message->throttle_percentage;
  }

  // Field name: braking_percentage
  {
    cdr << ros_message->braking_percentage;
  }

  // Field name: left_light
  {
    cdr << (ros_message->left_light ? true : false);
  }

  // Field name: right_light
  {
    cdr << (ros_message->right_light ? true : false);
  }

  // Field name: reversing_light
  {
    cdr << (ros_message->reversing_light ? true : false);
  }

  // Field name: speaker
  {
    cdr << (ros_message->speaker ? true : false);
  }

  // Field name: start_button
  {
    cdr << (ros_message->start_button ? true : false);
  }

  // Field name: stop_button
  {
    cdr << (ros_message->stop_button ? true : false);
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: process_time
  {
    cdr << ros_message->process_time;
  }

  return true;
}

static bool _FusionInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FusionInterface__ros_msg_type * ros_message = static_cast<_FusionInterface__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: carlength
  {
    cdr >> ros_message->carlength;
  }

  // Field name: carwidth
  {
    cdr >> ros_message->carwidth;
  }

  // Field name: carheight
  {
    cdr >> ros_message->carheight;
  }

  // Field name: centeroffset
  {
    cdr >> ros_message->centeroffset;
  }

  // Field name: signnumber
  {
    cdr >> ros_message->signnumber;
  }

  // Field name: signdata
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->signdata.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->signdata);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->signdata, size)) {
      fprintf(stderr, "failed to create array for field 'signdata'");
      return false;
    }
    auto array_ptr = ros_message->signdata.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lightdata
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lightdata.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->lightdata);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->lightdata, size)) {
      fprintf(stderr, "failed to create array for field 'lightdata'");
      return false;
    }
    auto array_ptr = ros_message->lightdata.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: obstacledata
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->obstacledata.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->obstacledata);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->obstacledata, size)) {
      fprintf(stderr, "failed to create array for field 'obstacledata'");
      return false;
    }
    auto array_ptr = ros_message->obstacledata.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: wx
  {
    cdr >> ros_message->wx;
  }

  // Field name: wy
  {
    cdr >> ros_message->wy;
  }

  // Field name: wz
  {
    cdr >> ros_message->wz;
  }

  // Field name: ax
  {
    cdr >> ros_message->ax;
  }

  // Field name: ay
  {
    cdr >> ros_message->ay;
  }

  // Field name: az
  {
    cdr >> ros_message->az;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: eastvelocity
  {
    cdr >> ros_message->eastvelocity;
  }

  // Field name: northvelocity
  {
    cdr >> ros_message->northvelocity;
  }

  // Field name: skyvelocity
  {
    cdr >> ros_message->skyvelocity;
  }

  // Field name: carspeed
  {
    cdr >> ros_message->carspeed;
  }

  // Field name: steerangle
  {
    cdr >> ros_message->steerangle;
  }

  // Field name: gearpos
  {
    cdr >> ros_message->gearpos;
  }

  // Field name: braketq
  {
    cdr >> ros_message->braketq;
  }

  // Field name: parkingstate
  {
    cdr >> ros_message->parkingstate;
  }

  // Field name: soc
  {
    cdr >> ros_message->soc;
  }

  // Field name: batteryvol
  {
    cdr >> ros_message->batteryvol;
  }

  // Field name: batterydischargecur
  {
    cdr >> ros_message->batterydischargecur;
  }

  // Field name: car_run_mode
  {
    cdr >> ros_message->car_run_mode;
  }

  // Field name: throttle_percentage
  {
    cdr >> ros_message->throttle_percentage;
  }

  // Field name: braking_percentage
  {
    cdr >> ros_message->braking_percentage;
  }

  // Field name: left_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_light = tmp ? true : false;
  }

  // Field name: right_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_light = tmp ? true : false;
  }

  // Field name: reversing_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reversing_light = tmp ? true : false;
  }

  // Field name: speaker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speaker = tmp ? true : false;
  }

  // Field name: start_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->start_button = tmp ? true : false;
  }

  // Field name: stop_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop_button = tmp ? true : false;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: process_time
  {
    cdr >> ros_message->process_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t get_serialized_size_car_interfaces__msg__FusionInterface(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FusionInterface__ros_msg_type * ros_message = static_cast<const _FusionInterface__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carlength
  {
    size_t item_size = sizeof(ros_message->carlength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carwidth
  {
    size_t item_size = sizeof(ros_message->carwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carheight
  {
    size_t item_size = sizeof(ros_message->carheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name centeroffset
  {
    size_t item_size = sizeof(ros_message->centeroffset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signnumber
  {
    size_t item_size = sizeof(ros_message->signnumber);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signdata
  {
    size_t array_size = ros_message->signdata.size;
    auto array_ptr = ros_message->signdata.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lightdata
  {
    size_t array_size = ros_message->lightdata.size;
    auto array_ptr = ros_message->lightdata.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacledata
  {
    size_t array_size = ros_message->obstacledata.size;
    auto array_ptr = ros_message->obstacledata.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wx
  {
    size_t item_size = sizeof(ros_message->wx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wy
  {
    size_t item_size = sizeof(ros_message->wy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wz
  {
    size_t item_size = sizeof(ros_message->wz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax
  {
    size_t item_size = sizeof(ros_message->ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay
  {
    size_t item_size = sizeof(ros_message->ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az
  {
    size_t item_size = sizeof(ros_message->az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eastvelocity
  {
    size_t item_size = sizeof(ros_message->eastvelocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name northvelocity
  {
    size_t item_size = sizeof(ros_message->northvelocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name skyvelocity
  {
    size_t item_size = sizeof(ros_message->skyvelocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carspeed
  {
    size_t item_size = sizeof(ros_message->carspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steerangle
  {
    size_t item_size = sizeof(ros_message->steerangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gearpos
  {
    size_t item_size = sizeof(ros_message->gearpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braketq
  {
    size_t item_size = sizeof(ros_message->braketq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parkingstate
  {
    size_t item_size = sizeof(ros_message->parkingstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name soc
  {
    size_t item_size = sizeof(ros_message->soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batteryvol
  {
    size_t item_size = sizeof(ros_message->batteryvol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batterydischargecur
  {
    size_t item_size = sizeof(ros_message->batterydischargecur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name car_run_mode
  {
    size_t item_size = sizeof(ros_message->car_run_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_percentage
  {
    size_t item_size = sizeof(ros_message->throttle_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braking_percentage
  {
    size_t item_size = sizeof(ros_message->braking_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_light
  {
    size_t item_size = sizeof(ros_message->left_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_light
  {
    size_t item_size = sizeof(ros_message->right_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reversing_light
  {
    size_t item_size = sizeof(ros_message->reversing_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speaker
  {
    size_t item_size = sizeof(ros_message->speaker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_button
  {
    size_t item_size = sizeof(ros_message->start_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_button
  {
    size_t item_size = sizeof(ros_message->stop_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name process_time
  {
    size_t item_size = sizeof(ros_message->process_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FusionInterface__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_interfaces__msg__FusionInterface(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_interfaces
size_t max_serialized_size_car_interfaces__msg__FusionInterface(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carlength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: carwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: carheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: centeroffset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: signnumber
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signdata
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lightdata
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacledata
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: eastvelocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: northvelocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: skyvelocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: carspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steerangle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gearpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: braketq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: parkingstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: batteryvol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: batterydischargecur
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: car_run_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: braking_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reversing_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speaker
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: start_button
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_button
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: process_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FusionInterface__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_car_interfaces__msg__FusionInterface(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FusionInterface = {
  "car_interfaces::msg",
  "FusionInterface",
  _FusionInterface__cdr_serialize,
  _FusionInterface__cdr_deserialize,
  _FusionInterface__get_serialized_size,
  _FusionInterface__max_serialized_size
};

static rosidl_message_type_support_t _FusionInterface__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FusionInterface,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_interfaces, msg, FusionInterface)() {
  return &_FusionInterface__type_support;
}

#if defined(__cplusplus)
}
#endif
