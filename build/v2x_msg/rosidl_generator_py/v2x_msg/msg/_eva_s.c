// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/EVA.idl
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
#include "v2x_msg/msg/detail/eva__struct.h"
#include "v2x_msg/msg/detail/eva__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__rsa__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__rsa__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__emergency_details__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__emergency_details__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__eva__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[21];
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
    assert(strncmp("v2x_msg.msg._eva.EVA", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__EVA * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rsamsg
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsamsg");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__rsa__convert_from_py(field, &ros_message->rsamsg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // responsetype
    PyObject * field = PyObject_GetAttrString(_pymsg, "responsetype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->responsetype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // details
    PyObject * field = PyObject_GetAttrString(_pymsg, "details");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__emergency_details__convert_from_py(field, &ros_message->details)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mass = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // basictype
    PyObject * field = PyObject_GetAttrString(_pymsg, "basictype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->basictype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // vehicletype
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicletype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicletype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // responseequip
    PyObject * field = PyObject_GetAttrString(_pymsg, "responseequip");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->responseequip = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // respondertype
    PyObject * field = PyObject_GetAttrString(_pymsg, "respondertype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->respondertype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__eva__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EVA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._eva");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EVA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__EVA * ros_message = (v2x_msg__msg__EVA *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rsamsg
    PyObject * field = NULL;
    field = v2x_msg__msg__rsa__convert_to_py(&ros_message->rsamsg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsamsg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // responsetype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->responsetype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "responsetype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // details
    PyObject * field = NULL;
    field = v2x_msg__msg__emergency_details__convert_to_py(&ros_message->details);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "details", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // basictype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->basictype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "basictype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicletype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->vehicletype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicletype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // responseequip
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->responseequip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "responseequip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // respondertype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->respondertype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "respondertype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
