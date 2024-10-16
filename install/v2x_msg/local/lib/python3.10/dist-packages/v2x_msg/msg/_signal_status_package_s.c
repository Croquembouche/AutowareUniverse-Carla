// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
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
#include "v2x_msg/msg/detail/signal_status_package__struct.h"
#include "v2x_msg/msg/detail/signal_status_package__functions.h"

bool v2x_msg__msg__signal_requester_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__signal_requester_info__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__intersection_access_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__intersection_access_point__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__intersection_access_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__intersection_access_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__signal_status_package__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("v2x_msg.msg._signal_status_package.SignalStatusPackage", full_classname_dest, 54) == 0);
  }
  v2x_msg__msg__SignalStatusPackage * ros_message = _ros_message;
  {  // requester
    PyObject * field = PyObject_GetAttrString(_pymsg, "requester");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__signal_requester_info__convert_from_py(field, &ros_message->requester)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // inboundon
    PyObject * field = PyObject_GetAttrString(_pymsg, "inboundon");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__intersection_access_point__convert_from_py(field, &ros_message->inboundon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // outboundon
    PyObject * field = PyObject_GetAttrString(_pymsg, "outboundon");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__intersection_access_point__convert_from_py(field, &ros_message->outboundon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // minute
    PyObject * field = PyObject_GetAttrString(_pymsg, "minute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->minute = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // second
    PyObject * field = PyObject_GetAttrString(_pymsg, "second");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->second = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__signal_status_package__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SignalStatusPackage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._signal_status_package");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SignalStatusPackage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__SignalStatusPackage * ros_message = (v2x_msg__msg__SignalStatusPackage *)raw_ros_message;
  {  // requester
    PyObject * field = NULL;
    field = v2x_msg__msg__signal_requester_info__convert_to_py(&ros_message->requester);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "requester", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inboundon
    PyObject * field = NULL;
    field = v2x_msg__msg__intersection_access_point__convert_to_py(&ros_message->inboundon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "inboundon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outboundon
    PyObject * field = NULL;
    field = v2x_msg__msg__intersection_access_point__convert_to_py(&ros_message->outboundon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "outboundon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minute
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->minute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
