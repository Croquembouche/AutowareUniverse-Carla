// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
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
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__struct.h"
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__accel_steer_yaw_rate_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("v2x_msg.msg._accel_steer_yaw_rate_confidence.AccelSteerYawRateConfidence", full_classname_dest, 72) == 0);
  }
  v2x_msg__msg__AccelSteerYawRateConfidence * ros_message = _ros_message;
  {  // yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yawrate = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acceleration = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steeringwheelangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steeringwheelangle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steeringwheelangle = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__accel_steer_yaw_rate_confidence__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AccelSteerYawRateConfidence */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._accel_steer_yaw_rate_confidence");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AccelSteerYawRateConfidence");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__AccelSteerYawRateConfidence * ros_message = (v2x_msg__msg__AccelSteerYawRateConfidence *)raw_ros_message;
  {  // yawrate
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->yawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steeringwheelangle
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->steeringwheelangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steeringwheelangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
