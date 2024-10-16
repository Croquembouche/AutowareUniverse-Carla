// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
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
#include "v2x_msg/msg/detail/allowed_maneuvers__struct.h"
#include "v2x_msg/msg/detail/allowed_maneuvers__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__allowed_maneuvers__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("v2x_msg.msg._allowed_maneuvers.AllowedManeuvers", full_classname_dest, 47) == 0);
  }
  v2x_msg__msg__AllowedManeuvers * ros_message = _ros_message;
  {  // maneuverstraightallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuverstraightallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuverstraightallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuverleftallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuverleftallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuverleftallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuverrightallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuverrightallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuverrightallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuveruturnallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuveruturnallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuveruturnallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuverleftturnonredallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuverleftturnonredallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuverleftturnonredallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneverrightturnonredallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneverrightturnonredallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneverrightturnonredallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuverlanechangeallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuverlanechangeallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuverlanechangeallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maneuvernostoppingallowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuvernostoppingallowed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuvernostoppingallowed = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // yieldallwaysrequired
    PyObject * field = PyObject_GetAttrString(_pymsg, "yieldallwaysrequired");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yieldallwaysrequired = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // gowithhalt
    PyObject * field = PyObject_GetAttrString(_pymsg, "gowithhalt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gowithhalt = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // caution
    PyObject * field = PyObject_GetAttrString(_pymsg, "caution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->caution = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__allowed_maneuvers__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AllowedManeuvers */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._allowed_maneuvers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AllowedManeuvers");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__AllowedManeuvers * ros_message = (v2x_msg__msg__AllowedManeuvers *)raw_ros_message;
  {  // maneuverstraightallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuverstraightallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuverstraightallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuverleftallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuverleftallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuverleftallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuverrightallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuverrightallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuverrightallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuveruturnallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuveruturnallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuveruturnallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuverleftturnonredallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuverleftturnonredallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuverleftturnonredallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneverrightturnonredallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneverrightturnonredallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneverrightturnonredallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuverlanechangeallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuverlanechangeallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuverlanechangeallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuvernostoppingallowed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maneuvernostoppingallowed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuvernostoppingallowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yieldallwaysrequired
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->yieldallwaysrequired);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yieldallwaysrequired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gowithhalt
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->gowithhalt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gowithhalt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // caution
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->caution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "caution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserved1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
