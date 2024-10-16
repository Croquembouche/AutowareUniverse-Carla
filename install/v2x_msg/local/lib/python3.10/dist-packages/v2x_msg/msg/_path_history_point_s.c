// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
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
#include "v2x_msg/msg/detail/path_history_point__struct.h"
#include "v2x_msg/msg/detail/path_history_point__functions.h"

bool v2x_msg__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__positional_accuracy__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__path_history_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("v2x_msg.msg._path_history_point.PathHistoryPoint", full_classname_dest, 48) == 0);
  }
  v2x_msg__msg__PathHistoryPoint * ros_message = _ros_message;
  {  // latoffset
    PyObject * field = PyObject_GetAttrString(_pymsg, "latoffset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latoffset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lonoffset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lonoffset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lonoffset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // elevationoffset
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevationoffset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elevationoffset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // timeoffset
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeoffset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeoffset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__positional_accuracy__convert_from_py(field, &ros_message->accuracy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__path_history_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathHistoryPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._path_history_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathHistoryPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__PathHistoryPoint * ros_message = (v2x_msg__msg__PathHistoryPoint *)raw_ros_message;
  {  // latoffset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->latoffset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latoffset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lonoffset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lonoffset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lonoffset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevationoffset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->elevationoffset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevationoffset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeoffset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timeoffset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeoffset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy
    PyObject * field = NULL;
    field = v2x_msg__msg__positional_accuracy__convert_to_py(&ros_message->accuracy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
