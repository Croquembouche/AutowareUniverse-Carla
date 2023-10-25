// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
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
#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__struct.h"
#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__functions.h"

bool autoware_auto_planning_msgs__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_planning_msgs__msg__trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_planning_msgs__srv__modify_trajectory__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("autoware_auto_planning_msgs.srv._modify_trajectory.ModifyTrajectory_Request", full_classname_dest, 75) == 0);
  }
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Request * ros_message = _ros_message;
  {  // original_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "original_trajectory");
    if (!field) {
      return false;
    }
    if (!autoware_auto_planning_msgs__msg__trajectory__convert_from_py(field, &ros_message->original_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_planning_msgs__srv__modify_trajectory__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ModifyTrajectory_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_planning_msgs.srv._modify_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ModifyTrajectory_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Request * ros_message = (autoware_auto_planning_msgs__srv__ModifyTrajectory_Request *)raw_ros_message;
  {  // original_trajectory
    PyObject * field = NULL;
    field = autoware_auto_planning_msgs__msg__trajectory__convert_to_py(&ros_message->original_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "original_trajectory", field);
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
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__functions.h"

bool autoware_auto_planning_msgs__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_planning_msgs__msg__trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_planning_msgs__srv__modify_trajectory__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("autoware_auto_planning_msgs.srv._modify_trajectory.ModifyTrajectory_Response", full_classname_dest, 76) == 0);
  }
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Response * ros_message = _ros_message;
  {  // modified_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "modified_trajectory");
    if (!field) {
      return false;
    }
    if (!autoware_auto_planning_msgs__msg__trajectory__convert_from_py(field, &ros_message->modified_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_planning_msgs__srv__modify_trajectory__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ModifyTrajectory_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_planning_msgs.srv._modify_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ModifyTrajectory_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Response * ros_message = (autoware_auto_planning_msgs__srv__ModifyTrajectory_Response *)raw_ros_message;
  {  // modified_trajectory
    PyObject * field = NULL;
    field = autoware_auto_planning_msgs__msg__trajectory__convert_to_py(&ros_message->modified_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "modified_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
