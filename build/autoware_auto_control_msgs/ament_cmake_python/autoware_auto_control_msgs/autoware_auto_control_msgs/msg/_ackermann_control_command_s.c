// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_control_msgs:msg/AckermannControlCommand.idl
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
#include "autoware_auto_control_msgs/msg/detail/ackermann_control_command__struct.h"
#include "autoware_auto_control_msgs/msg/detail/ackermann_control_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool autoware_auto_control_msgs__msg__ackermann_lateral_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_control_msgs__msg__ackermann_lateral_command__convert_to_py(void * raw_ros_message);
bool autoware_auto_control_msgs__msg__longitudinal_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_control_msgs__msg__longitudinal_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_control_msgs__msg__ackermann_control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("autoware_auto_control_msgs.msg._ackermann_control_command.AckermannControlCommand", full_classname_dest, 81) == 0);
  }
  autoware_auto_control_msgs__msg__AckermannControlCommand * ros_message = _ros_message;
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
  {  // lateral
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral");
    if (!field) {
      return false;
    }
    if (!autoware_auto_control_msgs__msg__ackermann_lateral_command__convert_from_py(field, &ros_message->lateral)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longitudinal
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal");
    if (!field) {
      return false;
    }
    if (!autoware_auto_control_msgs__msg__longitudinal_command__convert_from_py(field, &ros_message->longitudinal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_control_msgs__msg__ackermann_control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AckermannControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_control_msgs.msg._ackermann_control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AckermannControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_control_msgs__msg__AckermannControlCommand * ros_message = (autoware_auto_control_msgs__msg__AckermannControlCommand *)raw_ros_message;
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
  {  // lateral
    PyObject * field = NULL;
    field = autoware_auto_control_msgs__msg__ackermann_lateral_command__convert_to_py(&ros_message->lateral);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal
    PyObject * field = NULL;
    field = autoware_auto_control_msgs__msg__longitudinal_command__convert_to_py(&ros_message->longitudinal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
