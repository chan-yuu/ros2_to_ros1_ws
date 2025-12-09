// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_interfaces:msg/ObuReceive.idl
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
#include "car_interfaces/msg/detail/obu_receive__struct.h"
#include "car_interfaces/msg/detail/obu_receive__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_interfaces__msg__obu_receive__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("car_interfaces.msg._obu_receive.ObuReceive", full_classname_dest, 42) == 0);
  }
  car_interfaces__msg__ObuReceive * ros_message = _ros_message;
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dis_to_stopline
    PyObject * field = PyObject_GetAttrString(_pymsg, "dis_to_stopline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dis_to_stopline = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cutin_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "cutin_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cutin_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_point_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_point_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_point_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_point_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_point_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_point_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transit_point_1_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "transit_point_1_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transit_point_1_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transit_point_1_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "transit_point_1_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transit_point_1_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transit_point_2_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "transit_point_2_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transit_point_2_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transit_point_2_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "transit_point_2_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transit_point_2_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_interfaces__msg__obu_receive__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObuReceive */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_interfaces.msg._obu_receive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObuReceive");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_interfaces__msg__ObuReceive * ros_message = (car_interfaces__msg__ObuReceive *)raw_ros_message;
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dis_to_stopline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dis_to_stopline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dis_to_stopline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cutin_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cutin_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cutin_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_point_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_point_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_point_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_point_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_point_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_point_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transit_point_1_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transit_point_1_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transit_point_1_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transit_point_1_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transit_point_1_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transit_point_1_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transit_point_2_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transit_point_2_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transit_point_2_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transit_point_2_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transit_point_2_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transit_point_2_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
