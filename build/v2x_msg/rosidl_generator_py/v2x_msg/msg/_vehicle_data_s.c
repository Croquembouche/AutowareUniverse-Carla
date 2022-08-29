// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/VehicleData.idl
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
#include "v2x_msg/msg/detail/vehicle_data__struct.h"
#include "v2x_msg/msg/detail/vehicle_data__functions.h"

bool v2x_msg__msg__bumper_heights__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__bumper_heights__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("v2x_msg.msg._vehicle_data.VehicleData", full_classname_dest, 37) == 0);
  }
  v2x_msg__msg__VehicleData * ros_message = _ros_message;
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // bumpers
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumpers");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__bumper_heights__convert_from_py(field, &ros_message->bumpers)) {
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
  {  // trailerweight
    PyObject * field = PyObject_GetAttrString(_pymsg, "trailerweight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trailerweight = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__vehicle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._vehicle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__VehicleData * ros_message = (v2x_msg__msg__VehicleData *)raw_ros_message;
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bumpers
    PyObject * field = NULL;
    field = v2x_msg__msg__bumper_heights__convert_to_py(&ros_message->bumpers);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumpers", field);
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
  {  // trailerweight
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->trailerweight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trailerweight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
