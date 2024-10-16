// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/MAP.idl
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
#include "v2x_msg/msg/detail/map__struct.h"
#include "v2x_msg/msg/detail/map__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"
#include "v2x_msg/msg/detail/road_segment__functions.h"
// end nested array functions include
bool v2x_msg__msg__intersection_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__intersection_geometry__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__road_segment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__road_segment__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__data_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__data_parameters__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__restriction_class_assignment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__restriction_class_assignment__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__map__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._map.MAP", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__MAP * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // msgissuerevision
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgissuerevision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgissuerevision = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // layertype
    PyObject * field = PyObject_GetAttrString(_pymsg, "layertype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layertype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // layerid
    PyObject * field = PyObject_GetAttrString(_pymsg, "layerid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layerid = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // intersections
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intersections'");
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
    if (!v2x_msg__msg__IntersectionGeometry__Sequence__init(&(ros_message->intersections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__IntersectionGeometry__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__IntersectionGeometry * dest = ros_message->intersections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__intersection_geometry__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // roadsegments
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadsegments");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'roadsegments'");
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
    if (!v2x_msg__msg__RoadSegment__Sequence__init(&(ros_message->roadsegments), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__RoadSegment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__RoadSegment * dest = ros_message->roadsegments.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__road_segment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // dataparameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "dataparameters");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__data_parameters__convert_from_py(field, &ros_message->dataparameters)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // restrictionlist
    PyObject * field = PyObject_GetAttrString(_pymsg, "restrictionlist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'restrictionlist'");
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
    if (!v2x_msg__msg__RestrictionClassAssignment__Sequence__init(&(ros_message->restrictionlist), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__RestrictionClassAssignment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__RestrictionClassAssignment * dest = ros_message->restrictionlist.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__restriction_class_assignment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * v2x_msg__msg__map__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MAP */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MAP");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__MAP * ros_message = (v2x_msg__msg__MAP *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msgissuerevision
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->msgissuerevision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgissuerevision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layertype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->layertype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layertype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layerid
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->layerid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layerid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersections
    PyObject * field = NULL;
    size_t size = ros_message->intersections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__IntersectionGeometry * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intersections.data[i]);
      PyObject * pyitem = v2x_msg__msg__intersection_geometry__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "intersections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadsegments
    PyObject * field = NULL;
    size_t size = ros_message->roadsegments.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__RoadSegment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->roadsegments.data[i]);
      PyObject * pyitem = v2x_msg__msg__road_segment__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "roadsegments", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dataparameters
    PyObject * field = NULL;
    field = v2x_msg__msg__data_parameters__convert_to_py(&ros_message->dataparameters);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dataparameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restrictionlist
    PyObject * field = NULL;
    size_t size = ros_message->restrictionlist.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__RestrictionClassAssignment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->restrictionlist.data[i]);
      PyObject * pyitem = v2x_msg__msg__restriction_class_assignment__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "restrictionlist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
