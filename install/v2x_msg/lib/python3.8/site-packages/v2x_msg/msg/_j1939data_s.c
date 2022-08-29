// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/J1939data.idl
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
#include "v2x_msg/msg/detail/j1939data__struct.h"
#include "v2x_msg/msg/detail/j1939data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/axle_weight__functions.h"
#include "v2x_msg/msg/detail/tire_data__functions.h"
// end nested array functions include
bool v2x_msg__msg__tire_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__tire_data__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__axle_weight__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__axle_weight__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__j1939data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("v2x_msg.msg._j1939data.J1939data", full_classname_dest, 32) == 0);
  }
  v2x_msg__msg__J1939data * ros_message = _ros_message;
  {  // tires
    PyObject * field = PyObject_GetAttrString(_pymsg, "tires");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tires'");
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
    if (!v2x_msg__msg__TireData__Sequence__init(&(ros_message->tires), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__TireData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__TireData * dest = ros_message->tires.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__tire_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // axles
    PyObject * field = PyObject_GetAttrString(_pymsg, "axles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'axles'");
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
    if (!v2x_msg__msg__AxleWeight__Sequence__init(&(ros_message->axles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__AxleWeight__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__AxleWeight * dest = ros_message->axles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__axle_weight__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
  {  // cargoweight
    PyObject * field = PyObject_GetAttrString(_pymsg, "cargoweight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cargoweight = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steeringaxletemperture
    PyObject * field = PyObject_GetAttrString(_pymsg, "steeringaxletemperture");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steeringaxletemperture = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // driveaxlelocation
    PyObject * field = PyObject_GetAttrString(_pymsg, "driveaxlelocation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driveaxlelocation = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // driveaxleliftairpressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "driveaxleliftairpressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driveaxleliftairpressure = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // driveaxletemperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "driveaxletemperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driveaxletemperature = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // driveaxlelubpressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "driveaxlelubpressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driveaxlelubpressure = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steeringaxlelubepressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "steeringaxlelubepressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steeringaxlelubepressure = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__j1939data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of J1939data */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._j1939data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "J1939data");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__J1939data * ros_message = (v2x_msg__msg__J1939data *)raw_ros_message;
  {  // tires
    PyObject * field = NULL;
    size_t size = ros_message->tires.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__TireData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tires.data[i]);
      PyObject * pyitem = v2x_msg__msg__tire_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tires", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axles
    PyObject * field = NULL;
    size_t size = ros_message->axles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__AxleWeight * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->axles.data[i]);
      PyObject * pyitem = v2x_msg__msg__axle_weight__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "axles", field);
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
  {  // cargoweight
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->cargoweight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cargoweight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steeringaxletemperture
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->steeringaxletemperture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steeringaxletemperture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driveaxlelocation
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->driveaxlelocation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driveaxlelocation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driveaxleliftairpressure
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->driveaxleliftairpressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driveaxleliftairpressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driveaxletemperature
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->driveaxletemperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driveaxletemperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driveaxlelubpressure
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->driveaxlelubpressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driveaxlelubpressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steeringaxlelubepressure
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->steeringaxlelubepressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steeringaxlelubepressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
