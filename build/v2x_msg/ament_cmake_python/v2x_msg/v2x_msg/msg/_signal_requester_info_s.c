// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
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
#include "v2x_msg/msg/detail/signal_requester_info__struct.h"
#include "v2x_msg/msg/detail/signal_requester_info__functions.h"

bool v2x_msg__msg__vehicle_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_id__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__requestor_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__requestor_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__signal_requester_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("v2x_msg.msg._signal_requester_info.SignalRequesterInfo", full_classname_dest, 54) == 0);
  }
  v2x_msg__msg__SignalRequesterInfo * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_id__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request = PyLong_AsLongLong(field);
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
  {  // basicvehiclerole
    PyObject * field = PyObject_GetAttrString(_pymsg, "basicvehiclerole");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->basicvehiclerole = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // typedata
    PyObject * field = PyObject_GetAttrString(_pymsg, "typedata");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__requestor_type__convert_from_py(field, &ros_message->typedata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__signal_requester_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SignalRequesterInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._signal_requester_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SignalRequesterInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__SignalRequesterInfo * ros_message = (v2x_msg__msg__SignalRequesterInfo *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_id__convert_to_py(&ros_message->id);
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
  {  // request
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
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
  {  // basicvehiclerole
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->basicvehiclerole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "basicvehiclerole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // typedata
    PyObject * field = NULL;
    field = v2x_msg__msg__requestor_type__convert_to_py(&ros_message->typedata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "typedata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
