// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/VehicleClassification.idl
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
#include "v2x_msg/msg/detail/vehicle_classification__struct.h"
#include "v2x_msg/msg/detail/vehicle_classification__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__vehicle_classification__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("v2x_msg.msg._vehicle_classification.VehicleClassification", full_classname_dest, 57) == 0);
  }
  v2x_msg__msg__VehicleClassification * ros_message = _ros_message;
  {  // keytype
    PyObject * field = PyObject_GetAttrString(_pymsg, "keytype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keytype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // role
    PyObject * field = PyObject_GetAttrString(_pymsg, "role");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->role = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // iso3883
    PyObject * field = PyObject_GetAttrString(_pymsg, "iso3883");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iso3883 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // hpmstype
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpmstype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hpmstype = PyLong_AsLongLong(field);
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
  {  // fueltype
    PyObject * field = PyObject_GetAttrString(_pymsg, "fueltype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fueltype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__vehicle_classification__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleClassification */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._vehicle_classification");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleClassification");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__VehicleClassification * ros_message = (v2x_msg__msg__VehicleClassification *)raw_ros_message;
  {  // keytype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->keytype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keytype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // role
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->role);
    {
      int rc = PyObject_SetAttrString(_pymessage, "role", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iso3883
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->iso3883);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iso3883", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpmstype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->hpmstype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpmstype", field);
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
  {  // fueltype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->fueltype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fueltype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
