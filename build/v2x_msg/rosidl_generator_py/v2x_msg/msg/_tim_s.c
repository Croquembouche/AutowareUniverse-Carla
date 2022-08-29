// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/TIM.idl
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
#include "v2x_msg/msg/detail/tim__struct.h"
#include "v2x_msg/msg/detail/tim__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"
// end nested array functions include
bool v2x_msg__msg__traveler_data_frame__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__traveler_data_frame__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__tim__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._tim.TIM", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__TIM * ros_message = _ros_message;
  {  // msgcnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgcnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgcnt = PyLong_AsLongLong(field);
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
  {  // packetid
    PyObject * field = PyObject_GetAttrString(_pymsg, "packetid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->packetid = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // urlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "urlb");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->urlb, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dataframes
    PyObject * field = PyObject_GetAttrString(_pymsg, "dataframes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dataframes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__TravelerDataFrame__Sequence__init(&(ros_message->dataframes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__TravelerDataFrame__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__TravelerDataFrame * dest = ros_message->dataframes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__traveler_data_frame__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__tim__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TIM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._tim");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TIM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__TIM * ros_message = (v2x_msg__msg__TIM *)raw_ros_message;
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
  {  // packetid
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->packetid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "packetid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // urlb
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->urlb.data,
      strlen(ros_message->urlb.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "urlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dataframes
    PyObject * field = NULL;
    size_t size = ros_message->dataframes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__TravelerDataFrame * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dataframes.data[i]);
      PyObject * pyitem = v2x_msg__msg__traveler_data_frame__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "dataframes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
