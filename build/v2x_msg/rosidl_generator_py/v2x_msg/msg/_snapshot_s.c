// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/Snapshot.idl
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
#include "v2x_msg/msg/detail/snapshot__struct.h"
#include "v2x_msg/msg/detail/snapshot__functions.h"

bool v2x_msg__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__full_position_vector__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_safety_extensions__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_safety_extensions__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__snapshot__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("v2x_msg.msg._snapshot.Snapshot", full_classname_dest, 30) == 0);
  }
  v2x_msg__msg__Snapshot * ros_message = _ros_message;
  {  // theposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "theposition");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__full_position_vector__convert_from_py(field, &ros_message->theposition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // safetyext
    PyObject * field = PyObject_GetAttrString(_pymsg, "safetyext");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_safety_extensions__convert_from_py(field, &ros_message->safetyext)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dataset
    PyObject * field = PyObject_GetAttrString(_pymsg, "dataset");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_status__convert_from_py(field, &ros_message->dataset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__snapshot__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Snapshot */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._snapshot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Snapshot");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__Snapshot * ros_message = (v2x_msg__msg__Snapshot *)raw_ros_message;
  {  // theposition
    PyObject * field = NULL;
    field = v2x_msg__msg__full_position_vector__convert_to_py(&ros_message->theposition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "theposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safetyext
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_safety_extensions__convert_to_py(&ros_message->safetyext);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "safetyext", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dataset
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_status__convert_to_py(&ros_message->dataset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dataset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
