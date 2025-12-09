// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_interfaces:msg/PidInterface.idl
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
#include "car_interfaces/msg/detail/pid_interface__struct.h"
#include "car_interfaces/msg/detail/pid_interface__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_interfaces__msg__pid_interface__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("car_interfaces.msg._pid_interface.PidInterface", full_classname_dest, 46) == 0);
  }
  car_interfaces__msg__PidInterface * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // refspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "refspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->refspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nowspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "nowspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nowspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // process_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cte
    PyObject * field = PyObject_GetAttrString(_pymsg, "cte");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cte = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dhead
    PyObject * field = PyObject_GetAttrString(_pymsg, "dhead");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dhead = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curpos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "curpos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curpos_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curpos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "curpos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curpos_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // refpox_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "refpox_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->refpox_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // refpox_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "refpox_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->refpox_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_interfaces__msg__pid_interface__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PidInterface */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_interfaces.msg._pid_interface");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PidInterface");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_interfaces__msg__PidInterface * ros_message = (car_interfaces__msg__PidInterface *)raw_ros_message;
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
  {  // refspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->refspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nowspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nowspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nowspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
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
  {  // cte
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dhead
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dhead);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dhead", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curpos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curpos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curpos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curpos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curpos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curpos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refpox_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->refpox_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refpox_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refpox_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->refpox_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refpox_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
