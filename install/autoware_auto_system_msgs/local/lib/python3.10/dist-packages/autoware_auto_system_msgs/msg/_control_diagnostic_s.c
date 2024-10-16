// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
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
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__struct.h"
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool autoware_auto_system_msgs__msg__diagnostic_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_system_msgs__msg__diagnostic_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_system_msgs__msg__control_diagnostic__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("autoware_auto_system_msgs.msg._control_diagnostic.ControlDiagnostic", full_classname_dest, 67) == 0);
  }
  autoware_auto_system_msgs__msg__ControlDiagnostic * ros_message = _ros_message;
  {  // diag_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_header");
    if (!field) {
      return false;
    }
    if (!autoware_auto_system_msgs__msg__diagnostic_header__convert_from_py(field, &ros_message->diag_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // new_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_trajectory");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->new_trajectory = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trajectory_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->trajectory_source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pose_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pose_source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lateral_error_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_error_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_error_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_error_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_error_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_error_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_error_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_error_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_error_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_error_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_error_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_error_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_error_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_system_msgs__msg__control_diagnostic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlDiagnostic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_system_msgs.msg._control_diagnostic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlDiagnostic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_system_msgs__msg__ControlDiagnostic * ros_message = (autoware_auto_system_msgs__msg__ControlDiagnostic *)raw_ros_message;
  {  // diag_header
    PyObject * field = NULL;
    field = autoware_auto_system_msgs__msg__diagnostic_header__convert_to_py(&ros_message->diag_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_trajectory
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->new_trajectory ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->trajectory_source.data,
      strlen(ros_message->trajectory_source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pose_source.data,
      strlen(ros_message->pose_source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_error_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_error_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_error_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_error_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_error_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_error_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_error_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_error_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_error_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_error_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_error_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_error_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_error_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
