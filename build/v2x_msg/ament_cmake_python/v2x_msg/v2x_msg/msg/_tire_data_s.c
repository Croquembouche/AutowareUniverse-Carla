// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/TireData.idl
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
#include "v2x_msg/msg/detail/tire_data__struct.h"
#include "v2x_msg/msg/detail/tire_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__tire_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._tire_data.TireData", full_classname_dest, 31) == 0);
  }
  v2x_msg__msg__TireData * ros_message = _ros_message;
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->location = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pressure = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // wheelsensorstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelsensorstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheelsensorstatus = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // wheelendelectfault
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelendelectfault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheelendelectfault = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // leakagerate
    PyObject * field = PyObject_GetAttrString(_pymsg, "leakagerate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leakagerate = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detection = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__tire_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TireData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._tire_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TireData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__TireData * ros_message = (v2x_msg__msg__TireData *)raw_ros_message;
  {  // location
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelsensorstatus
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->wheelsensorstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelsensorstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelendelectfault
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->wheelendelectfault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelendelectfault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leakagerate
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->leakagerate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leakagerate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detection
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->detection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
