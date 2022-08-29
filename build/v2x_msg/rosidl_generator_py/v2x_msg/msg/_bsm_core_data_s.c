// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/BSMCoreData.idl
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
#include "v2x_msg/msg/detail/bsm_core_data__struct.h"
#include "v2x_msg/msg/detail/bsm_core_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__acceleration_set4_way__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__acceleration_set4_way__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__brake_system_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__brake_system_status__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_size__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_size__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__bsm_core_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("v2x_msg.msg._bsm_core_data.BSMCoreData", full_classname_dest, 38) == 0);
  }
  v2x_msg__msg__BSMCoreData * ros_message = _ros_message;
  {  // msgcnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgcnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgcnt = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // secmark
    PyObject * field = PyObject_GetAttrString(_pymsg, "secmark");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->secmark = PyLong_AsLongLong(field);
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
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longitude = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // elev
    PyObject * field = PyObject_GetAttrString(_pymsg, "elev");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elev = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__positional_accuracy__convert_from_py(field, &ros_message->accuracy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // transmission
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmission");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transmission = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = PyLong_AsLongLong(field);
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
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // accelset
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelset");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__acceleration_set4_way__convert_from_py(field, &ros_message->accelset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakes");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__brake_system_status__convert_from_py(field, &ros_message->brakes)) {
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
    if (!v2x_msg__msg__vehicle_size__convert_from_py(field, &ros_message->size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__bsm_core_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BSMCoreData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._bsm_core_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BSMCoreData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__BSMCoreData * ros_message = (v2x_msg__msg__BSMCoreData *)raw_ros_message;
  {  // msgcnt
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->msgcnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgcnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "strict");
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
  {  // secmark
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->secmark);
    {
      int rc = PyObject_SetAttrString(_pymessage, "secmark", field);
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
  {  // elev
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->elev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy
    PyObject * field = NULL;
    field = v2x_msg__msg__positional_accuracy__convert_to_py(&ros_message->accuracy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmission
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->transmission);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
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
  {  // angle
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelset
    PyObject * field = NULL;
    field = v2x_msg__msg__acceleration_set4_way__convert_to_py(&ros_message->accelset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brakes
    PyObject * field = NULL;
    field = v2x_msg__msg__brake_system_status__convert_to_py(&ros_message->brakes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_size__convert_to_py(&ros_message->size);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
