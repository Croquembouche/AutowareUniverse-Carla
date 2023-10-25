// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
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
#include "v2x_msg/msg/detail/node_offset_point_ll__struct.h"
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"

bool v2x_msg__msg__node_ll24_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll24_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_ll28_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll28_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_ll32_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll32_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_ll36_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll36_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_ll44_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll44_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_ll48_b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_ll48_b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__nodellmd64b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__nodellmd64b__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__node_offset_point_ll__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("v2x_msg.msg._node_offset_point_ll.NodeOffsetPointLL", full_classname_dest, 51) == 0);
  }
  v2x_msg__msg__NodeOffsetPointLL * ros_message = _ros_message;
  {  // nodell1
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell1");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll24_b__convert_from_py(field, &ros_message->nodell1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodell2
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell2");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll28_b__convert_from_py(field, &ros_message->nodell2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodell3
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell3");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll32_b__convert_from_py(field, &ros_message->nodell3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodell4
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell4");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll36_b__convert_from_py(field, &ros_message->nodell4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodell5
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell5");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll44_b__convert_from_py(field, &ros_message->nodell5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodell6
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodell6");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_ll48_b__convert_from_py(field, &ros_message->nodell6)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodelatlon
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodelatlon");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__nodellmd64b__convert_from_py(field, &ros_message->nodelatlon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__node_offset_point_ll__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeOffsetPointLL */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._node_offset_point_ll");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeOffsetPointLL");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__NodeOffsetPointLL * ros_message = (v2x_msg__msg__NodeOffsetPointLL *)raw_ros_message;
  {  // nodell1
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll24_b__convert_to_py(&ros_message->nodell1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodell2
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll28_b__convert_to_py(&ros_message->nodell2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodell3
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll32_b__convert_to_py(&ros_message->nodell3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodell4
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll36_b__convert_to_py(&ros_message->nodell4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodell5
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll44_b__convert_to_py(&ros_message->nodell5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodell6
    PyObject * field = NULL;
    field = v2x_msg__msg__node_ll48_b__convert_to_py(&ros_message->nodell6);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodell6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodelatlon
    PyObject * field = NULL;
    field = v2x_msg__msg__nodellmd64b__convert_to_py(&ros_message->nodelatlon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodelatlon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
