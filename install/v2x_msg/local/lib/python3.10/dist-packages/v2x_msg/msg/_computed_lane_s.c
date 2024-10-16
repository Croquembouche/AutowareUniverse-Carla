// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/ComputedLane.idl
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
#include "v2x_msg/msg/detail/computed_lane__struct.h"
#include "v2x_msg/msg/detail/computed_lane__functions.h"

bool v2x_msg__msg__offset_xaxis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__offset_xaxis__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__offset_yaxis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__offset_yaxis__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__computed_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("v2x_msg.msg._computed_lane.ComputedLane", full_classname_dest, 39) == 0);
  }
  v2x_msg__msg__ComputedLane * ros_message = _ros_message;
  {  // referencelaneid
    PyObject * field = PyObject_GetAttrString(_pymsg, "referencelaneid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->referencelaneid = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // offsetxaxis
    PyObject * field = PyObject_GetAttrString(_pymsg, "offsetxaxis");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__offset_xaxis__convert_from_py(field, &ros_message->offsetxaxis)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // offsetyaxis
    PyObject * field = PyObject_GetAttrString(_pymsg, "offsetyaxis");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__offset_yaxis__convert_from_py(field, &ros_message->offsetyaxis)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rotatexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotatexy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rotatexy = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // scalexaxis
    PyObject * field = PyObject_GetAttrString(_pymsg, "scalexaxis");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scalexaxis = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // scaleyaxis
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaleyaxis");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scaleyaxis = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__computed_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputedLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._computed_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputedLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__ComputedLane * ros_message = (v2x_msg__msg__ComputedLane *)raw_ros_message;
  {  // referencelaneid
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->referencelaneid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "referencelaneid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offsetxaxis
    PyObject * field = NULL;
    field = v2x_msg__msg__offset_xaxis__convert_to_py(&ros_message->offsetxaxis);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "offsetxaxis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offsetyaxis
    PyObject * field = NULL;
    field = v2x_msg__msg__offset_yaxis__convert_to_py(&ros_message->offsetyaxis);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "offsetyaxis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotatexy
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rotatexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotatexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scalexaxis
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->scalexaxis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scalexaxis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaleyaxis
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->scaleyaxis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaleyaxis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
