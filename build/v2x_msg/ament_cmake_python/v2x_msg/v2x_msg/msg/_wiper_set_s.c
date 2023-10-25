// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/WiperSet.idl
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
#include "v2x_msg/msg/detail/wiper_set__struct.h"
#include "v2x_msg/msg/detail/wiper_set__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__wiper_set__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("v2x_msg.msg._wiper_set.WiperSet", full_classname_dest, 31) == 0);
  }
  v2x_msg__msg__WiperSet * ros_message = _ros_message;
  {  // statusfront
    PyObject * field = PyObject_GetAttrString(_pymsg, "statusfront");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->statusfront = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // ratefront
    PyObject * field = PyObject_GetAttrString(_pymsg, "ratefront");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ratefront = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // statusrear
    PyObject * field = PyObject_GetAttrString(_pymsg, "statusrear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->statusrear = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // raterear
    PyObject * field = PyObject_GetAttrString(_pymsg, "raterear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->raterear = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__wiper_set__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WiperSet */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._wiper_set");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WiperSet");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__WiperSet * ros_message = (v2x_msg__msg__WiperSet *)raw_ros_message;
  {  // statusfront
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->statusfront);
    {
      int rc = PyObject_SetAttrString(_pymessage, "statusfront", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ratefront
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->ratefront);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ratefront", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // statusrear
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->statusrear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "statusrear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raterear
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->raterear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raterear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
