// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "car_interfaces/msg/detail/fusion_interface__struct.h"
#include "car_interfaces/msg/detail/fusion_interface__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_interfaces__msg__fusion_interface__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("car_interfaces.msg._fusion_interface.FusionInterface", full_classname_dest, 52) == 0);
  }
  car_interfaces__msg__FusionInterface * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // carlength
    PyObject * field = PyObject_GetAttrString(_pymsg, "carlength");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carlength = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // carwidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "carwidth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carwidth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // carheight
    PyObject * field = PyObject_GetAttrString(_pymsg, "carheight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carheight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // centeroffset
    PyObject * field = PyObject_GetAttrString(_pymsg, "centeroffset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centeroffset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // signnumber
    PyObject * field = PyObject_GetAttrString(_pymsg, "signnumber");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signnumber = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "signdata");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->signdata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->signdata.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'signdata'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->signdata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->signdata.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // lightdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "lightdata");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->lightdata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->lightdata.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lightdata'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->lightdata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->lightdata.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // obstacledata
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacledata");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->obstacledata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->obstacledata.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacledata'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->obstacledata), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->obstacledata.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wx
    PyObject * field = PyObject_GetAttrString(_pymsg, "wx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wy
    PyObject * field = PyObject_GetAttrString(_pymsg, "wy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wz
    PyObject * field = PyObject_GetAttrString(_pymsg, "wz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az
    PyObject * field = PyObject_GetAttrString(_pymsg, "az");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eastvelocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "eastvelocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eastvelocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // northvelocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "northvelocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->northvelocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skyvelocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "skyvelocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->skyvelocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // carspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "carspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steerangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steerangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steerangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gearpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gearpos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gearpos = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // braketq
    PyObject * field = PyObject_GetAttrString(_pymsg, "braketq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->braketq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // parkingstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "parkingstate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parkingstate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // batteryvol
    PyObject * field = PyObject_GetAttrString(_pymsg, "batteryvol");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batteryvol = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // batterydischargecur
    PyObject * field = PyObject_GetAttrString(_pymsg, "batterydischargecur");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batterydischargecur = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // car_run_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_run_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->car_run_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // throttle_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttle_percentage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // braking_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "braking_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->braking_percentage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reversing_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "reversing_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reversing_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speaker
    PyObject * field = PyObject_GetAttrString(_pymsg, "speaker");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speaker = (Py_True == field);
    Py_DECREF(field);
  }
  {  // start_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stop_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stop_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // process_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_interfaces__msg__fusion_interface__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FusionInterface */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_interfaces.msg._fusion_interface");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FusionInterface");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_interfaces__msg__FusionInterface * ros_message = (car_interfaces__msg__FusionInterface *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carlength
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->carlength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carlength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carwidth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->carwidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carwidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carheight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->carheight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carheight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centeroffset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centeroffset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centeroffset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signnumber
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signnumber);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signnumber", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signdata
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "signdata");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->signdata.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->signdata.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->signdata.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // lightdata
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "lightdata");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->lightdata.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->lightdata.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->lightdata.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // obstacledata
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "obstacledata");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->obstacledata.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->obstacledata.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->obstacledata.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eastvelocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eastvelocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eastvelocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // northvelocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->northvelocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "northvelocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skyvelocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->skyvelocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skyvelocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->carspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steerangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steerangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steerangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gearpos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gearpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gearpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braketq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->braketq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braketq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parkingstate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parkingstate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parkingstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batteryvol
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->batteryvol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batteryvol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batterydischargecur
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->batterydischargecur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batterydischargecur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_run_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->car_run_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_run_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_percentage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->throttle_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braking_percentage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->braking_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braking_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reversing_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reversing_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reversing_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speaker
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speaker ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speaker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stop_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
