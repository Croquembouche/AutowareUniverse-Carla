// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/EmergencyDetails.idl
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
#include "v2x_msg/msg/detail/emergency_details__struct.h"
#include "v2x_msg/msg/detail/emergency_details__functions.h"

bool v2x_msg__msg__privileged_events__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__privileged_events__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__emergency_details__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("v2x_msg.msg._emergency_details.EmergencyDetails", full_classname_dest, 47) == 0);
  }
  v2x_msg__msg__EmergencyDetails * ros_message = _ros_message;
  {  // notused
    PyObject * field = PyObject_GetAttrString(_pymsg, "notused");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notused = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sirenuse
    PyObject * field = PyObject_GetAttrString(_pymsg, "sirenuse");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sirenuse = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lightsuse
    PyObject * field = PyObject_GetAttrString(_pymsg, "lightsuse");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lightsuse = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // multi
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->multi = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // events
    PyObject * field = PyObject_GetAttrString(_pymsg, "events");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__privileged_events__convert_from_py(field, &ros_message->events)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // responsetype
    PyObject * field = PyObject_GetAttrString(_pymsg, "responsetype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->responsetype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__emergency_details__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EmergencyDetails */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._emergency_details");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EmergencyDetails");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__EmergencyDetails * ros_message = (v2x_msg__msg__EmergencyDetails *)raw_ros_message;
  {  // notused
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->notused);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sirenuse
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sirenuse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sirenuse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lightsuse
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lightsuse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lightsuse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->multi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // events
    PyObject * field = NULL;
    field = v2x_msg__msg__privileged_events__convert_to_py(&ros_message->events);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "events", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // responsetype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->responsetype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "responsetype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
