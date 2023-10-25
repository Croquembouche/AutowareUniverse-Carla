// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/PVD.idl
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
#include "v2x_msg/msg/detail/pvd__struct.h"
#include "v2x_msg/msg/detail/pvd__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/snapshot__functions.h"
// end nested array functions include
bool v2x_msg__msg__vehicle_ident__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_ident__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__full_position_vector__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_classification__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_classification__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__snapshot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__snapshot__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__pvd__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._pvd.PVD", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__PVD * ros_message = _ros_message;
  {  // timstamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timstamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timstamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // segnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "segnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->segnum = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // probeid
    PyObject * field = PyObject_GetAttrString(_pymsg, "probeid");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_ident__convert_from_py(field, &ros_message->probeid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // startvector
    PyObject * field = PyObject_GetAttrString(_pymsg, "startvector");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__full_position_vector__convert_from_py(field, &ros_message->startvector)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicletype
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicletype");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_classification__convert_from_py(field, &ros_message->vehicletype)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // snapshots
    PyObject * field = PyObject_GetAttrString(_pymsg, "snapshots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'snapshots'");
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
    if (!v2x_msg__msg__Snapshot__Sequence__init(&(ros_message->snapshots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__Snapshot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__Snapshot * dest = ros_message->snapshots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__snapshot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * v2x_msg__msg__pvd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PVD */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._pvd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PVD");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__PVD * ros_message = (v2x_msg__msg__PVD *)raw_ros_message;
  {  // timstamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timstamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timstamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // segnum
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->segnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "segnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // probeid
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_ident__convert_to_py(&ros_message->probeid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "probeid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startvector
    PyObject * field = NULL;
    field = v2x_msg__msg__full_position_vector__convert_to_py(&ros_message->startvector);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "startvector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicletype
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_classification__convert_to_py(&ros_message->vehicletype);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicletype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snapshots
    PyObject * field = NULL;
    size_t size = ros_message->snapshots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__Snapshot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->snapshots.data[i]);
      PyObject * pyitem = v2x_msg__msg__snapshot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "snapshots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
