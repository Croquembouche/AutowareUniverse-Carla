// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/IntersectionAccessPoint.idl
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
#include "v2x_msg/msg/detail/intersection_access_point__struct.h"
#include "v2x_msg/msg/detail/intersection_access_point__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__intersection_access_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("v2x_msg.msg._intersection_access_point.IntersectionAccessPoint", full_classname_dest, 62) == 0);
  }
  v2x_msg__msg__IntersectionAccessPoint * ros_message = _ros_message;
  {  // lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "approach");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->approach = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // connection
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__intersection_access_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntersectionAccessPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._intersection_access_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntersectionAccessPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__IntersectionAccessPoint * ros_message = (v2x_msg__msg__IntersectionAccessPoint *)raw_ros_message;
  {  // lane
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // approach
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->approach);
    {
      int rc = PyObject_SetAttrString(_pymessage, "approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->connection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
