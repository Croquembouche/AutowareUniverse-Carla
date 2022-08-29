// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
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
#include "v2x_msg/msg/detail/antenna_offset_set__struct.h"
#include "v2x_msg/msg/detail/antenna_offset_set__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__antenna_offset_set__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("v2x_msg.msg._antenna_offset_set.AntennaOffsetSet", full_classname_dest, 48) == 0);
  }
  v2x_msg__msg__AntennaOffsetSet * ros_message = _ros_message;
  {  // antoffsetx
    PyObject * field = PyObject_GetAttrString(_pymsg, "antoffsetx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->antoffsetx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // antoffsety
    PyObject * field = PyObject_GetAttrString(_pymsg, "antoffsety");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->antoffsety = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // antoffsetz
    PyObject * field = PyObject_GetAttrString(_pymsg, "antoffsetz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->antoffsetz = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__antenna_offset_set__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AntennaOffsetSet */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._antenna_offset_set");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AntennaOffsetSet");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__AntennaOffsetSet * ros_message = (v2x_msg__msg__AntennaOffsetSet *)raw_ros_message;
  {  // antoffsetx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->antoffsetx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antoffsetx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antoffsety
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->antoffsety);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antoffsety", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antoffsetz
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->antoffsetz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antoffsetz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
