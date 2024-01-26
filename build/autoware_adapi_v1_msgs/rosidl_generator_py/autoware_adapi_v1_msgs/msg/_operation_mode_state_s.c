// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/operation_mode_state__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/operation_mode_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__operation_mode_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._operation_mode_state.OperationModeState", full_classname_dest, 67) == 0);
  }
  autoware_adapi_v1_msgs__msg__OperationModeState * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_autoware_control_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_autoware_control_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_autoware_control_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_in_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_in_transition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_in_transition = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_stop_mode_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stop_mode_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stop_mode_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_autonomous_mode_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_autonomous_mode_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_autonomous_mode_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_local_mode_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_local_mode_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_local_mode_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_remote_mode_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_remote_mode_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_remote_mode_available = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__operation_mode_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OperationModeState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._operation_mode_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OperationModeState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_adapi_v1_msgs__msg__OperationModeState * ros_message = (autoware_adapi_v1_msgs__msg__OperationModeState *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_autoware_control_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_autoware_control_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_autoware_control_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_in_transition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_in_transition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_in_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stop_mode_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stop_mode_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stop_mode_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_autonomous_mode_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_autonomous_mode_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_autonomous_mode_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_local_mode_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_local_mode_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_local_mode_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_remote_mode_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_remote_mode_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_remote_mode_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
