// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
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
#include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__struct.h"
#include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_vehicle_msgs__srv__autonomy_mode_change__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("autoware_auto_vehicle_msgs.srv._autonomy_mode_change.AutonomyModeChange_Request", full_classname_dest, 79) == 0);
  }
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_vehicle_msgs__srv__autonomy_mode_change__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutonomyModeChange_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_vehicle_msgs.srv._autonomy_mode_change");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutonomyModeChange_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * ros_message = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__struct.h"
// already included above
// #include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__empty__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__empty__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_vehicle_msgs__srv__autonomy_mode_change__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("autoware_auto_vehicle_msgs.srv._autonomy_mode_change.AutonomyModeChange_Response", full_classname_dest, 80) == 0);
  }
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * ros_message = _ros_message;
  {  // empty
    PyObject * field = PyObject_GetAttrString(_pymsg, "empty");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__empty__convert_from_py(field, &ros_message->empty)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_vehicle_msgs__srv__autonomy_mode_change__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutonomyModeChange_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_vehicle_msgs.srv._autonomy_mode_change");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutonomyModeChange_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * ros_message = (autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response *)raw_ros_message;
  {  // empty
    PyObject * field = NULL;
    field = std_msgs__msg__empty__convert_to_py(&ros_message->empty);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "empty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
