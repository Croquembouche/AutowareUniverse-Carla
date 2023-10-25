// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/SRM.idl
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
#include "v2x_msg/msg/detail/srm__struct.h"
#include "v2x_msg/msg/detail/srm__functions.h"

bool v2x_msg__msg__signal_request_package__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__signal_request_package__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__requestor_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__requestor_description__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__srm__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._srm.SRM", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__SRM * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // second
    PyObject * field = PyObject_GetAttrString(_pymsg, "second");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->second = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sequencenumber
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequencenumber");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequencenumber = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // requests
    PyObject * field = PyObject_GetAttrString(_pymsg, "requests");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__signal_request_package__convert_from_py(field, &ros_message->requests)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // requestor
    PyObject * field = PyObject_GetAttrString(_pymsg, "requestor");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__requestor_description__convert_from_py(field, &ros_message->requestor)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__srm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SRM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._srm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SRM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__SRM * ros_message = (v2x_msg__msg__SRM *)raw_ros_message;
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
  {  // second
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequencenumber
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sequencenumber);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequencenumber", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requests
    PyObject * field = NULL;
    field = v2x_msg__msg__signal_request_package__convert_to_py(&ros_message->requests);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "requests", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requestor
    PyObject * field = NULL;
    field = v2x_msg__msg__requestor_description__convert_to_py(&ros_message->requestor);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "requestor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
