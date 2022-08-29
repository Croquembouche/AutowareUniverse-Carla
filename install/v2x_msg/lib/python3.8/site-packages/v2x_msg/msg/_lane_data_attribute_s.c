// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
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
#include "v2x_msg/msg/detail/lane_data_attribute__struct.h"
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/speed_limit__functions.h"
// end nested array functions include
bool v2x_msg__msg__speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__speed_limit__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__lane_data_attribute__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("v2x_msg.msg._lane_data_attribute.LaneDataAttribute", full_classname_dest, 50) == 0);
  }
  v2x_msg__msg__LaneDataAttribute * ros_message = _ros_message;
  {  // pathendpointangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pathendpointangle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pathendpointangle = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lanecrownpointcenter
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanecrownpointcenter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanecrownpointcenter = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lancrownpointleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "lancrownpointleft");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lancrownpointleft = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lanecrownpointright
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanecrownpointright");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanecrownpointright = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // laneangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneangle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laneangle = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // speedlimits
    PyObject * field = PyObject_GetAttrString(_pymsg, "speedlimits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speedlimits'");
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
    if (!v2x_msg__msg__SpeedLimit__Sequence__init(&(ros_message->speedlimits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__SpeedLimit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__SpeedLimit * dest = ros_message->speedlimits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__speed_limit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * v2x_msg__msg__lane_data_attribute__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneDataAttribute */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._lane_data_attribute");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneDataAttribute");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__LaneDataAttribute * ros_message = (v2x_msg__msg__LaneDataAttribute *)raw_ros_message;
  {  // pathendpointangle
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->pathendpointangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pathendpointangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanecrownpointcenter
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lanecrownpointcenter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanecrownpointcenter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lancrownpointleft
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lancrownpointleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lancrownpointleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanecrownpointright
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lanecrownpointright);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanecrownpointright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneangle
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->laneangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laneangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speedlimits
    PyObject * field = NULL;
    size_t size = ros_message->speedlimits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__SpeedLimit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speedlimits.data[i]);
      PyObject * pyitem = v2x_msg__msg__speed_limit__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "speedlimits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
