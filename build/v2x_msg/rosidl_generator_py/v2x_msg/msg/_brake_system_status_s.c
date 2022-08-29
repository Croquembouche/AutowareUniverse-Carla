// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
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
#include "v2x_msg/msg/detail/brake_system_status__struct.h"
#include "v2x_msg/msg/detail/brake_system_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__brake_system_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("v2x_msg.msg._brake_system_status.BrakeSystemStatus", full_classname_dest, 50) == 0);
  }
  v2x_msg__msg__BrakeSystemStatus * ros_message = _ros_message;
  {  // wheelbrakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelbrakes");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->wheelbrakes, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // traction
    PyObject * field = PyObject_GetAttrString(_pymsg, "traction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traction = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->abs = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // scs
    PyObject * field = PyObject_GetAttrString(_pymsg, "scs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scs = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // brakeboost
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakeboost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brakeboost = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // auxbrakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "auxbrakes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auxbrakes = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__brake_system_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BrakeSystemStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._brake_system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BrakeSystemStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__BrakeSystemStatus * ros_message = (v2x_msg__msg__BrakeSystemStatus *)raw_ros_message;
  {  // wheelbrakes
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->wheelbrakes.data,
      strlen(ros_message->wheelbrakes.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelbrakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traction
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->traction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scs
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->scs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brakeboost
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->brakeboost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakeboost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auxbrakes
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->auxbrakes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auxbrakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
