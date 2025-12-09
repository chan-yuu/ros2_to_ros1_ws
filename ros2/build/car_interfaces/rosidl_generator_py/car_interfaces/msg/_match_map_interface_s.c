// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_interfaces:msg/MatchMapInterface.idl
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
#include "car_interfaces/msg/detail/match_map_interface__struct.h"
#include "car_interfaces/msg/detail/match_map_interface__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_interfaces__msg__match_map_interface__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("car_interfaces.msg._match_map_interface.MatchMapInterface", full_classname_dest, 57) == 0);
  }
  car_interfaces__msg__MatchMapInterface * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // special_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "special_road");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->special_road = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stopline_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopline_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stopline_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stopline_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopline_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stopline_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cross
    PyObject * field = PyObject_GetAttrString(_pymsg, "cross");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cross = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_recognition
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_recognition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_recognition = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_interfaces__msg__match_map_interface__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MatchMapInterface */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_interfaces.msg._match_map_interface");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MatchMapInterface");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_interfaces__msg__MatchMapInterface * ros_message = (car_interfaces__msg__MatchMapInterface *)raw_ros_message;
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
  {  // special_road
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->special_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "special_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopline_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stopline_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopline_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopline_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stopline_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopline_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cross
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cross ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cross", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_recognition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_recognition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_recognition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
