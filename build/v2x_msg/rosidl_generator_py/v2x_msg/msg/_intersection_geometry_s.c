// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
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
#include "v2x_msg/msg/detail/intersection_geometry__struct.h"
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/generic_lane__functions.h"
#include "v2x_msg/msg/detail/speed_limit__functions.h"
// end nested array functions include
bool v2x_msg__msg__intersection_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__intersection_reference_id__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__position3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__position3_d__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__speed_limit__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__generic_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__generic_lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__intersection_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("v2x_msg.msg._intersection_geometry.IntersectionGeometry", full_classname_dest, 55) == 0);
  }
  v2x_msg__msg__IntersectionGeometry * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__intersection_reference_id__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->revision = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // refpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "refpoint");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__position3_d__convert_from_py(field, &ros_message->refpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lanewidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanewidth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanewidth = PyLong_AsLongLong(field);
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
  {  // laneset
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneset");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'laneset'");
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
    if (!v2x_msg__msg__GenericLane__Sequence__init(&(ros_message->laneset), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__GenericLane__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__GenericLane * dest = ros_message->laneset.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__generic_lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // preemptprioritydata
    PyObject * field = PyObject_GetAttrString(_pymsg, "preemptprioritydata");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->preemptprioritydata, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__intersection_geometry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntersectionGeometry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._intersection_geometry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntersectionGeometry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__IntersectionGeometry * ros_message = (v2x_msg__msg__IntersectionGeometry *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = v2x_msg__msg__intersection_reference_id__convert_to_py(&ros_message->id);
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
  {  // revision
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refpoint
    PyObject * field = NULL;
    field = v2x_msg__msg__position3_d__convert_to_py(&ros_message->refpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "refpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanewidth
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lanewidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanewidth", field);
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
  {  // laneset
    PyObject * field = NULL;
    size_t size = ros_message->laneset.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__GenericLane * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->laneset.data[i]);
      PyObject * pyitem = v2x_msg__msg__generic_lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "laneset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preemptprioritydata
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->preemptprioritydata.data,
      strlen(ros_message->preemptprioritydata.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "preemptprioritydata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
