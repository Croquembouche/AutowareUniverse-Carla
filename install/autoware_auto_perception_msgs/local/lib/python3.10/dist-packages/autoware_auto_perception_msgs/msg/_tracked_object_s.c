// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
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
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__object_classification__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__object_classification__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_to_py(void * raw_ros_message);
bool autoware_auto_perception_msgs__msg__shape__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_perception_msgs__msg__shape__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_perception_msgs__msg__tracked_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("autoware_auto_perception_msgs.msg._tracked_object.TrackedObject", full_classname_dest, 63) == 0);
  }
  autoware_auto_perception_msgs__msg__TrackedObject * ros_message = _ros_message;
  {  // object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->object_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // existence_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "existence_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->existence_probability = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'classification'");
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
    if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&(ros_message->classification), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_auto_perception_msgs__msg__ObjectClassification__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_auto_perception_msgs__msg__ObjectClassification * dest = ros_message->classification.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_auto_perception_msgs__msg__object_classification__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // kinematics
    PyObject * field = PyObject_GetAttrString(_pymsg, "kinematics");
    if (!field) {
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_from_py(field, &ros_message->kinematics)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // shape
    PyObject * field = PyObject_GetAttrString(_pymsg, "shape");
    if (!field) {
      return false;
    }
    if (!autoware_auto_perception_msgs__msg__shape__convert_from_py(field, &ros_message->shape)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_perception_msgs__msg__tracked_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackedObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_perception_msgs.msg._tracked_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackedObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_perception_msgs__msg__TrackedObject * ros_message = (autoware_auto_perception_msgs__msg__TrackedObject *)raw_ros_message;
  {  // object_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->object_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // existence_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->existence_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "existence_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    size_t size = ros_message->classification.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_auto_perception_msgs__msg__ObjectClassification * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->classification.data[i]);
      PyObject * pyitem = autoware_auto_perception_msgs__msg__object_classification__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kinematics
    PyObject * field = NULL;
    field = autoware_auto_perception_msgs__msg__tracked_object_kinematics__convert_to_py(&ros_message->kinematics);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kinematics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shape
    PyObject * field = NULL;
    field = autoware_auto_perception_msgs__msg__shape__convert_to_py(&ros_message->shape);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "shape", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
