// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_interfaces:msg/CarOriInterface.idl
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
#include "car_interfaces/msg/detail/car_ori_interface__struct.h"
#include "car_interfaces/msg/detail/car_ori_interface__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_interfaces__msg__car_ori_interface__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("car_interfaces.msg._car_ori_interface.CarOriInterface", full_classname_dest, 53) == 0);
  }
  car_interfaces__msg__CarOriInterface * ros_message = _ros_message;
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
PyObject * car_interfaces__msg__car_ori_interface__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarOriInterface */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_interfaces.msg._car_ori_interface");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarOriInterface");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_interfaces__msg__CarOriInterface * ros_message = (car_interfaces__msg__CarOriInterface *)raw_ros_message;
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
