// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
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
#include "v2x_msg/msg/detail/vehicle_status_request__struct.h"
#include "v2x_msg/msg/detail/vehicle_status_request__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__vehicle_status_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("v2x_msg.msg._vehicle_status_request.VehicleStatusRequest", full_classname_dest, 56) == 0);
  }
  v2x_msg__msg__VehicleStatusRequest * ros_message = _ros_message;
  {  // datatype
    PyObject * field = PyObject_GetAttrString(_pymsg, "datatype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->datatype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // subtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "subtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->subtype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sendonlessthenvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "sendonlessthenvalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sendonlessthenvalue = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sendonmorethenvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "sendonmorethenvalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sendonmorethenvalue = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sendall
    PyObject * field = PyObject_GetAttrString(_pymsg, "sendall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sendall = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__vehicle_status_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatusRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._vehicle_status_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatusRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__VehicleStatusRequest * ros_message = (v2x_msg__msg__VehicleStatusRequest *)raw_ros_message;
  {  // datatype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->datatype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "datatype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subtype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->subtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sendonlessthenvalue
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sendonlessthenvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sendonlessthenvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sendonmorethenvalue
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sendonmorethenvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sendonmorethenvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sendall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sendall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sendall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
