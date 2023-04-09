// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/RequestorDescription.idl
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
#include "v2x_msg/msg/detail/requestor_description__struct.h"
#include "v2x_msg/msg/detail/requestor_description__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__vehicle_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_id__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__requestor_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__requestor_type__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__requestor_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__requestor_position_vector__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__requestor_description__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("v2x_msg.msg._requestor_description.RequestorDescription", full_classname_dest, 55) == 0);
  }
  v2x_msg__msg__RequestorDescription * ros_message = _ros_message;
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
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__requestor_type__convert_from_py(field, &ros_message->type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__requestor_position_vector__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // routename
    PyObject * field = PyObject_GetAttrString(_pymsg, "routename");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->routename, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // transitstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "transitstatus");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->transitstatus, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // transitoccupancy
    PyObject * field = PyObject_GetAttrString(_pymsg, "transitoccupancy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transitoccupancy = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // transitschedule
    PyObject * field = PyObject_GetAttrString(_pymsg, "transitschedule");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transitschedule = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__requestor_description__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RequestorDescription */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._requestor_description");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RequestorDescription");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__RequestorDescription * ros_message = (v2x_msg__msg__RequestorDescription *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = v2x_msg__msg__requestor_type__convert_to_py(&ros_message->type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = v2x_msg__msg__requestor_position_vector__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // routename
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->routename.data,
      strlen(ros_message->routename.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "routename", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transitstatus
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->transitstatus.data,
      strlen(ros_message->transitstatus.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "transitstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transitoccupancy
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->transitoccupancy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transitoccupancy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transitschedule
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->transitschedule);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transitschedule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
