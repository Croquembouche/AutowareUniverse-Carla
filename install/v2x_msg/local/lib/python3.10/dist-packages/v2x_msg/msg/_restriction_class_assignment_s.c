// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
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
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/restriction_user_type__functions.h"
// end nested array functions include
bool v2x_msg__msg__restriction_user_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__restriction_user_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__restriction_class_assignment__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("v2x_msg.msg._restriction_class_assignment.RestrictionClassAssignment", full_classname_dest, 68) == 0);
  }
  v2x_msg__msg__RestrictionClassAssignment * ros_message = _ros_message;
  {  // restrictionclassid
    PyObject * field = PyObject_GetAttrString(_pymsg, "restrictionclassid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->restrictionclassid = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // users
    PyObject * field = PyObject_GetAttrString(_pymsg, "users");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'users'");
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
    if (!v2x_msg__msg__RestrictionUserType__Sequence__init(&(ros_message->users), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__RestrictionUserType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__RestrictionUserType * dest = ros_message->users.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__restriction_user_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * v2x_msg__msg__restriction_class_assignment__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RestrictionClassAssignment */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._restriction_class_assignment");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RestrictionClassAssignment");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__RestrictionClassAssignment * ros_message = (v2x_msg__msg__RestrictionClassAssignment *)raw_ros_message;
  {  // restrictionclassid
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->restrictionclassid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restrictionclassid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // users
    PyObject * field = NULL;
    size_t size = ros_message->users.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__RestrictionUserType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->users.data[i]);
      PyObject * pyitem = v2x_msg__msg__restriction_user_type__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "users", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
