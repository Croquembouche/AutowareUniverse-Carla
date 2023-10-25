// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
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
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"
// end nested array functions include
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
bool autoware_auto_perception_msgs__msg__predicted_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__predicted_path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_perception_msgs__msg__predicted_object_kinematics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[89];
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
    assert(strncmp("autoware_auto_perception_msgs.msg._predicted_object_kinematics.PredictedObjectKinematics", full_classname_dest, 88) == 0);
  }
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * ros_message = _ros_message;
  {  // initial_pose_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_pose_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_with_covariance__convert_from_py(field, &ros_message->initial_pose_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // initial_twist_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_twist_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_with_covariance__convert_from_py(field, &ros_message->initial_twist_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // initial_acceleration_with_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_acceleration_with_covariance");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel_with_covariance__convert_from_py(field, &ros_message->initial_acceleration_with_covariance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // predicted_paths
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_paths");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predicted_paths'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(&(ros_message->predicted_paths), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_auto_perception_msgs__msg__PredictedPath__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_auto_perception_msgs__msg__PredictedPath * dest = ros_message->predicted_paths.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_auto_perception_msgs__msg__predicted_path__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_perception_msgs__msg__predicted_object_kinematics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PredictedObjectKinematics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_perception_msgs.msg._predicted_object_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PredictedObjectKinematics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics * ros_message = (autoware_auto_perception_msgs__msg__PredictedObjectKinematics *)raw_ros_message;
  {  // initial_pose_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_with_covariance__convert_to_py(&ros_message->initial_pose_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_pose_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_twist_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_with_covariance__convert_to_py(&ros_message->initial_twist_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_twist_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_acceleration_with_covariance
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel_with_covariance__convert_to_py(&ros_message->initial_acceleration_with_covariance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_acceleration_with_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predicted_paths
    PyObject * field = NULL;
    size_t size = ros_message->predicted_paths.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_auto_perception_msgs__msg__PredictedPath * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->predicted_paths.data[i]);
      PyObject * pyitem = autoware_auto_perception_msgs__msg__predicted_path__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "predicted_paths", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
