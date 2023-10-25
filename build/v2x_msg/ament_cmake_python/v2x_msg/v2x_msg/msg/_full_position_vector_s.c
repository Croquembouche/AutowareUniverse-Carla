// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/FullPositionVector.idl
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
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
#include "v2x_msg/msg/detail/full_position_vector__functions.h"

bool v2x_msg__msg__d_date_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__d_date_time__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__transmission_and_speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__transmission_and_speed__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__position_confidence_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__position_confidence_set__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__speedand_headingand_throttle_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__speedand_headingand_throttle_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("v2x_msg.msg._full_position_vector.FullPositionVector", full_classname_dest, 52) == 0);
  }
  v2x_msg__msg__FullPositionVector * ros_message = _ros_message;
  {  // utctime
    PyObject * field = PyObject_GetAttrString(_pymsg, "utctime");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__d_date_time__convert_from_py(field, &ros_message->utctime)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longitude = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lat = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elevation = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__transmission_and_speed__convert_from_py(field, &ros_message->speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // posaccuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "posaccuracy");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__positional_accuracy__convert_from_py(field, &ros_message->posaccuracy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // timeconfidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeconfidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeconfidence = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // posconfidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "posconfidence");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__position_confidence_set__convert_from_py(field, &ros_message->posconfidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speedconfidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "speedconfidence");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__speedand_headingand_throttle_confidence__convert_from_py(field, &ros_message->speedconfidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__full_position_vector__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FullPositionVector */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._full_position_vector");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FullPositionVector");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__FullPositionVector * ros_message = (v2x_msg__msg__FullPositionVector *)raw_ros_message;
  {  // utctime
    PyObject * field = NULL;
    field = v2x_msg__msg__d_date_time__convert_to_py(&ros_message->utctime);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utctime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = v2x_msg__msg__transmission_and_speed__convert_to_py(&ros_message->speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posaccuracy
    PyObject * field = NULL;
    field = v2x_msg__msg__positional_accuracy__convert_to_py(&ros_message->posaccuracy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "posaccuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeconfidence
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timeconfidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeconfidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posconfidence
    PyObject * field = NULL;
    field = v2x_msg__msg__position_confidence_set__convert_to_py(&ros_message->posconfidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "posconfidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speedconfidence
    PyObject * field = NULL;
    field = v2x_msg__msg__speedand_headingand_throttle_confidence__convert_to_py(&ros_message->speedconfidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speedconfidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
