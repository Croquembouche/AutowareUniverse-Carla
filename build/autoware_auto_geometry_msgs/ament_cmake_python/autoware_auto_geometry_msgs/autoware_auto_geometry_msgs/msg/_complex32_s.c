// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
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
#include "autoware_auto_geometry_msgs/msg/detail/complex32__struct.h"
#include "autoware_auto_geometry_msgs/msg/detail/complex32__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_geometry_msgs__msg__complex32__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("autoware_auto_geometry_msgs.msg._complex32.Complex32", full_classname_dest, 52) == 0);
  }
  autoware_auto_geometry_msgs__msg__Complex32 * ros_message = _ros_message;
  {  // real
    PyObject * field = PyObject_GetAttrString(_pymsg, "real");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->real = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imag
    PyObject * field = PyObject_GetAttrString(_pymsg, "imag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imag = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_geometry_msgs__msg__complex32__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Complex32 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_geometry_msgs.msg._complex32");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Complex32");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_geometry_msgs__msg__Complex32 * ros_message = (autoware_auto_geometry_msgs__msg__Complex32 *)raw_ros_message;
  {  // real
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->real);
    {
      int rc = PyObject_SetAttrString(_pymessage, "real", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
