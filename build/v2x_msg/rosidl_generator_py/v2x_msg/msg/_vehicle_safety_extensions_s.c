// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
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
#include "v2x_msg/msg/detail/vehicle_safety_extensions__struct.h"
#include "v2x_msg/msg/detail/vehicle_safety_extensions__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__path_history__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_history__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_prediction__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__vehicle_safety_extensions__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("v2x_msg.msg._vehicle_safety_extensions.VehicleSafetyExtensions", full_classname_dest, 62) == 0);
  }
  v2x_msg__msg__VehicleSafetyExtensions * ros_message = _ros_message;
  {  // vehicleeventflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicleeventflags");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicleeventflags, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pathhistory
    PyObject * field = PyObject_GetAttrString(_pymsg, "pathhistory");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__path_history__convert_from_py(field, &ros_message->pathhistory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pathprediction
    PyObject * field = PyObject_GetAttrString(_pymsg, "pathprediction");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__path_prediction__convert_from_py(field, &ros_message->pathprediction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // texteriorlights
    PyObject * field = PyObject_GetAttrString(_pymsg, "texteriorlights");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->texteriorlights, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__vehicle_safety_extensions__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleSafetyExtensions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._vehicle_safety_extensions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleSafetyExtensions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__VehicleSafetyExtensions * ros_message = (v2x_msg__msg__VehicleSafetyExtensions *)raw_ros_message;
  {  // vehicleeventflags
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicleeventflags.data,
      strlen(ros_message->vehicleeventflags.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicleeventflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pathhistory
    PyObject * field = NULL;
    field = v2x_msg__msg__path_history__convert_to_py(&ros_message->pathhistory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pathhistory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pathprediction
    PyObject * field = NULL;
    field = v2x_msg__msg__path_prediction__convert_to_py(&ros_message->pathprediction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pathprediction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // texteriorlights
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->texteriorlights.data,
      strlen(ros_message->texteriorlights.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "texteriorlights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
