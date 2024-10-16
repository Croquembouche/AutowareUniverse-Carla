// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
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
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/point32__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool autoware_auto_geometry_msgs__msg__quaternion32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * autoware_auto_geometry_msgs__msg__quaternion32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_perception_msgs__msg__bounding_box__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("autoware_auto_perception_msgs.msg._bounding_box.BoundingBox", full_classname_dest, 59) == 0);
  }
  autoware_auto_perception_msgs__msg__BoundingBox * ros_message = _ros_message;
  {  // centroid
    PyObject * field = PyObject_GetAttrString(_pymsg, "centroid");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->centroid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // size
    PyObject * field = PyObject_GetAttrString(_pymsg, "size");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    if (!autoware_auto_geometry_msgs__msg__quaternion32__convert_from_py(field, &ros_message->orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // corners
    PyObject * field = PyObject_GetAttrString(_pymsg, "corners");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'corners'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    geometry_msgs__msg__Point32 * dest = ros_message->corners;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point32__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 8;
      float * dest = ros_message->variance;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_label");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_label = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_label");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_label = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // class_likelihood
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_likelihood");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->class_likelihood = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_perception_msgs__msg__bounding_box__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BoundingBox */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_perception_msgs.msg._bounding_box");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BoundingBox");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_perception_msgs__msg__BoundingBox * ros_message = (autoware_auto_perception_msgs__msg__BoundingBox *)raw_ros_message;
  {  // centroid
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->centroid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "centroid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = autoware_auto_geometry_msgs__msg__quaternion32__convert_to_py(&ros_message->orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // corners
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point32 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->corners[i]);
      PyObject * pyitem = geometry_msgs__msg__point32__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "corners", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "variance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->variance[0]);
    memcpy(dst, src, 8 * sizeof(float));
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_label
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_label);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_label
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_label);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_likelihood
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->class_likelihood);
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_likelihood", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
