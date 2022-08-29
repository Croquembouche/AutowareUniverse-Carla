// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/PathHistory.idl
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
#include "v2x_msg/msg/detail/path_history__struct.h"
#include "v2x_msg/msg/detail/path_history__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/path_history_point__functions.h"
// end nested array functions include
bool v2x_msg__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__full_position_vector__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_history_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_history_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__path_history__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._path_history.PathHistory", full_classname_dest, 37) == 0);
  }
  v2x_msg__msg__PathHistory * ros_message = _ros_message;
  {  // initialposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialposition");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__full_position_vector__convert_from_py(field, &ros_message->initialposition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // currgnssstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "currgnssstatus");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->currgnssstatus, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // crumbdata
    PyObject * field = PyObject_GetAttrString(_pymsg, "crumbdata");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'crumbdata'");
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
    if (!v2x_msg__msg__PathHistoryPoint__Sequence__init(&(ros_message->crumbdata), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__PathHistoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__PathHistoryPoint * dest = ros_message->crumbdata.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__path_history_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * v2x_msg__msg__path_history__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathHistory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._path_history");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathHistory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__PathHistory * ros_message = (v2x_msg__msg__PathHistory *)raw_ros_message;
  {  // initialposition
    PyObject * field = NULL;
    field = v2x_msg__msg__full_position_vector__convert_to_py(&ros_message->initialposition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // currgnssstatus
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->currgnssstatus.data,
      strlen(ros_message->currgnssstatus.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "currgnssstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crumbdata
    PyObject * field = NULL;
    size_t size = ros_message->crumbdata.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__PathHistoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->crumbdata.data[i]);
      PyObject * pyitem = v2x_msg__msg__path_history_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "crumbdata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
