// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
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
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_perception_msgs__msg__looking_traffic_signal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("autoware_auto_perception_msgs.msg._looking_traffic_signal.LookingTrafficSignal", full_classname_dest, 78) == 0);
  }
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_module_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_module_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_module_running = (Py_True == field);
    Py_DECREF(field);
  }
  {  // perception
    PyObject * field = PyObject_GetAttrString(_pymsg, "perception");
    if (!field) {
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(field, &ros_message->perception)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // external
    PyObject * field = PyObject_GetAttrString(_pymsg, "external");
    if (!field) {
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(field, &ros_message->external)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_perception_msgs__msg__looking_traffic_signal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LookingTrafficSignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_perception_msgs.msg._looking_traffic_signal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LookingTrafficSignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * ros_message = (autoware_auto_perception_msgs__msg__LookingTrafficSignal *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_module_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_module_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_module_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // perception
    PyObject * field = NULL;
    field = autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(&ros_message->perception);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "perception", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external
    PyObject * field = NULL;
    field = autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(&ros_message->external);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "external", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = autoware_auto_perception_msgs__msg__traffic_signal_with_judge__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
