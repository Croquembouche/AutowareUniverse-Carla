// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
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
#include "v2x_msg/msg/detail/intersection_status_object__struct.h"
#include "v2x_msg/msg/detail/intersection_status_object__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__intersection_status_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._intersection_status_object.IntersectionStatusObject", full_classname_dest, 64) == 0);
  }
  v2x_msg__msg__IntersectionStatusObject * ros_message = _ros_message;
  {  // manualcontrolisenabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "manualcontrolisenabled");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->manualcontrolisenabled = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // stoptimeisactivated
    PyObject * field = PyObject_GetAttrString(_pymsg, "stoptimeisactivated");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stoptimeisactivated = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // failureflash
    PyObject * field = PyObject_GetAttrString(_pymsg, "failureflash");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failureflash = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // preemptisactive
    PyObject * field = PyObject_GetAttrString(_pymsg, "preemptisactive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->preemptisactive = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // signalpriorityisactive
    PyObject * field = PyObject_GetAttrString(_pymsg, "signalpriorityisactive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signalpriorityisactive = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // fixedtimeoperation
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixedtimeoperation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fixedtimeoperation = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // trafficdependentoperation
    PyObject * field = PyObject_GetAttrString(_pymsg, "trafficdependentoperation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trafficdependentoperation = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // standbyoperation
    PyObject * field = PyObject_GetAttrString(_pymsg, "standbyoperation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->standbyoperation = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // failuremode
    PyObject * field = PyObject_GetAttrString(_pymsg, "failuremode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failuremode = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // off
    PyObject * field = PyObject_GetAttrString(_pymsg, "off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->off = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // recentmapmessageupdate
    PyObject * field = PyObject_GetAttrString(_pymsg, "recentmapmessageupdate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->recentmapmessageupdate = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // recentchangeinmapassignedlanesidsused
    PyObject * field = PyObject_GetAttrString(_pymsg, "recentchangeinmapassignedlanesidsused");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->recentchangeinmapassignedlanesidsused = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // novalidmapisabilableatthistime
    PyObject * field = PyObject_GetAttrString(_pymsg, "novalidmapisabilableatthistime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->novalidmapisabilableatthistime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // nobalidspatisabilableatthistime
    PyObject * field = PyObject_GetAttrString(_pymsg, "nobalidspatisabilableatthistime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nobalidspatisabilableatthistime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve14
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve14");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve14 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve15
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve15");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve15 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__intersection_status_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntersectionStatusObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._intersection_status_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntersectionStatusObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__IntersectionStatusObject * ros_message = (v2x_msg__msg__IntersectionStatusObject *)raw_ros_message;
  {  // manualcontrolisenabled
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->manualcontrolisenabled);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manualcontrolisenabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stoptimeisactivated
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->stoptimeisactivated);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stoptimeisactivated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failureflash
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->failureflash);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failureflash", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preemptisactive
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->preemptisactive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preemptisactive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signalpriorityisactive
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->signalpriorityisactive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signalpriorityisactive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixedtimeoperation
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->fixedtimeoperation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixedtimeoperation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trafficdependentoperation
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->trafficdependentoperation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trafficdependentoperation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standbyoperation
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->standbyoperation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standbyoperation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failuremode
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->failuremode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failuremode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // off
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recentmapmessageupdate
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->recentmapmessageupdate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recentmapmessageupdate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recentchangeinmapassignedlanesidsused
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->recentchangeinmapassignedlanesidsused);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recentchangeinmapassignedlanesidsused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // novalidmapisabilableatthistime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->novalidmapisabilableatthistime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "novalidmapisabilableatthistime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nobalidspatisabilableatthistime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->nobalidspatisabilableatthistime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nobalidspatisabilableatthistime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve14
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve14);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve14", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve15
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve15);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
