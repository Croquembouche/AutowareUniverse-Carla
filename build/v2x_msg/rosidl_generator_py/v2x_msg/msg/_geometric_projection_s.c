// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/GeometricProjection.idl
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
#include "v2x_msg/msg/detail/geometric_projection__struct.h"
#include "v2x_msg/msg/detail/geometric_projection__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__circle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__circle__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__geometric_projection__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._geometric_projection.GeometricProjection", full_classname_dest, 53) == 0);
  }
  v2x_msg__msg__GeometricProjection * ros_message = _ros_message;
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->direction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // extent
    PyObject * field = PyObject_GetAttrString(_pymsg, "extent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extent = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lanewidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanewidth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanewidth = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // circle
    PyObject * field = PyObject_GetAttrString(_pymsg, "circle");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__circle__convert_from_py(field, &ros_message->circle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__geometric_projection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GeometricProjection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._geometric_projection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GeometricProjection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__GeometricProjection * ros_message = (v2x_msg__msg__GeometricProjection *)raw_ros_message;
  {  // direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->direction.data,
      strlen(ros_message->direction.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extent
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->extent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanewidth
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lanewidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanewidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circle
    PyObject * field = NULL;
    field = v2x_msg__msg__circle__convert_to_py(&ros_message->circle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "circle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
