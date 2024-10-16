// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
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
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_with_covariance__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_with_covariance__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel_with_covariance__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[85];
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
    assert(strncmp("autoware_auto_perception_msgs.msg._tracked_object_kinematics.TrackedObjectKinematics", full_classname_dest, 84) == 0);
  }
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * ros_message = _ros_message;
  {  // pose_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_with_covariance__convert_from_py(field, &ros_message->pose_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation_availability
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_availability");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->orientation_availability = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // twist_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_with_covariance__convert_from_py(field, &ros_message->twist_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel_with_covariance__convert_from_py(field, &ros_message->acceleration_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_stationary
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stationary");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stationary = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackedObjectKinematics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_perception_msgs.msg._tracked_object_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackedObjectKinematics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * ros_message = (autoware_auto_perception_msgs__msg__TrackedObjectKinematics *)raw_ros_message;
  {  // pose_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_with_covariance__convert_to_py(&ros_message->pose_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_availability
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->orientation_availability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_availability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twist_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_with_covariance__convert_to_py(&ros_message->twist_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel_with_covariance__convert_to_py(&ros_message->acceleration_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stationary
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stationary ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stationary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
