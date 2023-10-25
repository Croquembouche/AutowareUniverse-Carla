// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateReport.idl
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
#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_state_report__struct.h"
#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_state_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_vehicle_msgs__msg__vehicle_state_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("autoware_auto_vehicle_msgs.msg._vehicle_state_report.VehicleStateReport", full_classname_dest, 71) == 0);
  }
  autoware_auto_vehicle_msgs__msg__VehicleStateReport * ros_message = _ros_message;
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
  {  // fuel
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fuel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blinker
    PyObject * field = PyObject_GetAttrString(_pymsg, "blinker");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blinker = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // headlight
    PyObject * field = PyObject_GetAttrString(_pymsg, "headlight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->headlight = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wiper
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wiper = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // hand_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "hand_brake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hand_brake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horn
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horn = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_vehicle_msgs__msg__vehicle_state_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStateReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_vehicle_msgs.msg._vehicle_state_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStateReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_vehicle_msgs__msg__VehicleStateReport * ros_message = (autoware_auto_vehicle_msgs__msg__VehicleStateReport *)raw_ros_message;
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
  {  // fuel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fuel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blinker
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blinker);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blinker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headlight
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->headlight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headlight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wiper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
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
  {  // hand_brake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hand_brake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hand_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
