// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/ICA.idl
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
#include "v2x_msg/msg/detail/ica__struct.h"
#include "v2x_msg/msg/detail/ica__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__bsm_core_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__bsm_core_data__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_history__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_history__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_prediction__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__intersection_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__intersection_reference_id__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__approach_or_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__approach_or_lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__ica__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._ica.ICA", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__ICA * ros_message = _ros_message;
  {  // msgcnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgcnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgcnt = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // partone
    PyObject * field = PyObject_GetAttrString(_pymsg, "partone");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__bsm_core_data__convert_from_py(field, &ros_message->partone)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path
    PyObject * field = PyObject_GetAttrString(_pymsg, "path");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__path_history__convert_from_py(field, &ros_message->path)) {
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
  {  // intersectionid
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersectionid");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__intersection_reference_id__convert_from_py(field, &ros_message->intersectionid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lanenumber
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanenumber");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__approach_or_lane__convert_from_py(field, &ros_message->lanenumber)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eventflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "eventflag");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eventflag, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__ica__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ICA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._ica");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ICA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__ICA * ros_message = (v2x_msg__msg__ICA *)raw_ros_message;
  {  // msgcnt
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->msgcnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgcnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "strict");
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
  {  // partone
    PyObject * field = NULL;
    field = v2x_msg__msg__bsm_core_data__convert_to_py(&ros_message->partone);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "partone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path
    PyObject * field = NULL;
    field = v2x_msg__msg__path_history__convert_to_py(&ros_message->path);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path", field);
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
  {  // intersectionid
    PyObject * field = NULL;
    field = v2x_msg__msg__intersection_reference_id__convert_to_py(&ros_message->intersectionid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersectionid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanenumber
    PyObject * field = NULL;
    field = v2x_msg__msg__approach_or_lane__convert_to_py(&ros_message->lanenumber);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanenumber", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eventflag
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eventflag.data,
      strlen(ros_message->eventflag.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eventflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
