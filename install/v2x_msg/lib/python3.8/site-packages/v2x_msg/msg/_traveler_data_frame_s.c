// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
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
#include "v2x_msg/msg/detail/traveler_data_frame__struct.h"
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/geographical_path__functions.h"
// end nested array functions include
bool v2x_msg__msg__msg_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__msg_id__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__geographical_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__geographical_path__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__content__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__content__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__traveler_data_frame__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._traveler_data_frame.TravelerDataFrame", full_classname_dest, 50) == 0);
  }
  v2x_msg__msg__TravelerDataFrame * ros_message = _ros_message;
  {  // notused
    PyObject * field = PyObject_GetAttrString(_pymsg, "notused");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notused = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // frametype
    PyObject * field = PyObject_GetAttrString(_pymsg, "frametype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frametype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // msgid
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgid");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__msg_id__convert_from_py(field, &ros_message->msgid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // startyear
    PyObject * field = PyObject_GetAttrString(_pymsg, "startyear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->startyear = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // starttime
    PyObject * field = PyObject_GetAttrString(_pymsg, "starttime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->starttime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // durationtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "durationtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->durationtime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->priority = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // notused1
    PyObject * field = PyObject_GetAttrString(_pymsg, "notused1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notused1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // regions
    PyObject * field = PyObject_GetAttrString(_pymsg, "regions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'regions'");
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
    if (!v2x_msg__msg__GeographicalPath__Sequence__init(&(ros_message->regions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__GeographicalPath__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__GeographicalPath * dest = ros_message->regions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__geographical_path__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // notused2
    PyObject * field = PyObject_GetAttrString(_pymsg, "notused2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notused2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // notused3
    PyObject * field = PyObject_GetAttrString(_pymsg, "notused3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notused3 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // content
    PyObject * field = PyObject_GetAttrString(_pymsg, "content");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__content__convert_from_py(field, &ros_message->content)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // url
    PyObject * field = PyObject_GetAttrString(_pymsg, "url");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->url, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__traveler_data_frame__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TravelerDataFrame */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._traveler_data_frame");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TravelerDataFrame");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__TravelerDataFrame * ros_message = (v2x_msg__msg__TravelerDataFrame *)raw_ros_message;
  {  // notused
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->notused);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frametype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->frametype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frametype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msgid
    PyObject * field = NULL;
    field = v2x_msg__msg__msg_id__convert_to_py(&ros_message->msgid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startyear
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->startyear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startyear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starttime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->starttime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starttime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // durationtime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->durationtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "durationtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // notused1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->notused1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notused1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // regions
    PyObject * field = NULL;
    size_t size = ros_message->regions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__GeographicalPath * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->regions.data[i]);
      PyObject * pyitem = v2x_msg__msg__geographical_path__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "regions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // notused2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->notused2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notused2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // notused3
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->notused3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notused3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // content
    PyObject * field = NULL;
    field = v2x_msg__msg__content__convert_to_py(&ros_message->content);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "content", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // url
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->url.data,
      strlen(ros_message->url.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "url", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
