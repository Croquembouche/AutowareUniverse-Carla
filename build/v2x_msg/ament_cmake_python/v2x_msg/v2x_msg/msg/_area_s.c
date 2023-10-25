// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/Area.idl
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
#include "v2x_msg/msg/detail/area__struct.h"
#include "v2x_msg/msg/detail/area__functions.h"

bool v2x_msg__msg__shape_point_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__shape_point_set__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__circle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__circle__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__region_point_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__region_point_set__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__area__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[23];
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
    assert(strncmp("v2x_msg.msg._area.Area", full_classname_dest, 22) == 0);
  }
  v2x_msg__msg__Area * ros_message = _ros_message;
  {  // shapepointset
    PyObject * field = PyObject_GetAttrString(_pymsg, "shapepointset");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__shape_point_set__convert_from_py(field, &ros_message->shapepointset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cirle
    PyObject * field = PyObject_GetAttrString(_pymsg, "cirle");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__circle__convert_from_py(field, &ros_message->cirle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // regionpointset
    PyObject * field = PyObject_GetAttrString(_pymsg, "regionpointset");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__region_point_set__convert_from_py(field, &ros_message->regionpointset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__area__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Area */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._area");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Area");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__Area * ros_message = (v2x_msg__msg__Area *)raw_ros_message;
  {  // shapepointset
    PyObject * field = NULL;
    field = v2x_msg__msg__shape_point_set__convert_to_py(&ros_message->shapepointset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "shapepointset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cirle
    PyObject * field = NULL;
    field = v2x_msg__msg__circle__convert_to_py(&ros_message->cirle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cirle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // regionpointset
    PyObject * field = NULL;
    field = v2x_msg__msg__region_point_set__convert_to_py(&ros_message->regionpointset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "regionpointset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
