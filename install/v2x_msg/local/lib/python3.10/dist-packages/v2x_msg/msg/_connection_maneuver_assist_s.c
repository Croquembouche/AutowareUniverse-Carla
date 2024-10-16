// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
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
#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.h"
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__connection_maneuver_assist__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("v2x_msg.msg._connection_maneuver_assist.ConnectionManeuverAssist", full_classname_dest, 64) == 0);
  }
  v2x_msg__msg__ConnectionManeuverAssist * ros_message = _ros_message;
  {  // connectionid
    PyObject * field = PyObject_GetAttrString(_pymsg, "connectionid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connectionid = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // queuelength
    PyObject * field = PyObject_GetAttrString(_pymsg, "queuelength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->queuelength = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // availablestoragelength
    PyObject * field = PyObject_GetAttrString(_pymsg, "availablestoragelength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->availablestoragelength = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // waitonstop
    PyObject * field = PyObject_GetAttrString(_pymsg, "waitonstop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->waitonstop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pedbicycledetect
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedbicycledetect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pedbicycledetect = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__connection_maneuver_assist__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectionManeuverAssist */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._connection_maneuver_assist");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectionManeuverAssist");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__ConnectionManeuverAssist * ros_message = (v2x_msg__msg__ConnectionManeuverAssist *)raw_ros_message;
  {  // connectionid
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->connectionid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connectionid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queuelength
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->queuelength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "queuelength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // availablestoragelength
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->availablestoragelength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "availablestoragelength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waitonstop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->waitonstop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waitonstop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedbicycledetect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pedbicycledetect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedbicycledetect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
