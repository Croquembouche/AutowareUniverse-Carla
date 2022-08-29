// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/PSM.idl
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
#include "v2x_msg/msg/detail/psm__struct.h"
#include "v2x_msg/msg/detail/psm__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__position3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__position3_d__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__acceleration_set4_way__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__acceleration_set4_way__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_history__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_history__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__path_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__path_prediction__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__propelled_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__propelled_information__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__psm__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("v2x_msg.msg._psm.PSM", full_classname_dest, 20) == 0);
  }
  v2x_msg__msg__PSM * ros_message = _ros_message;
  {  // basictype
    PyObject * field = PyObject_GetAttrString(_pymsg, "basictype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->basictype = PyLong_AsLongLong(field);
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
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__position3_d__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // pathhistory
    PyObject * field = PyObject_GetAttrString(_pymsg, "pathhistory");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__path_history__convert_from_py(field, &ros_message->pathhistory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pathprediction
    PyObject * field = PyObject_GetAttrString(_pymsg, "pathprediction");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__path_prediction__convert_from_py(field, &ros_message->pathprediction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // propulsion
    PyObject * field = PyObject_GetAttrString(_pymsg, "propulsion");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__propelled_information__convert_from_py(field, &ros_message->propulsion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // usestate
    PyObject * field = PyObject_GetAttrString(_pymsg, "usestate");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->usestate, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // crossrequest
    PyObject * field = PyObject_GetAttrString(_pymsg, "crossrequest");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->crossrequest = (Py_True == field);
    Py_DECREF(field);
  }
  {  // crossstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "crossstate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->crossstate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clustersize
    PyObject * field = PyObject_GetAttrString(_pymsg, "clustersize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clustersize = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // clusterradius
    PyObject * field = PyObject_GetAttrString(_pymsg, "clusterradius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clusterradius = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // eventrespondertype
    PyObject * field = PyObject_GetAttrString(_pymsg, "eventrespondertype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eventrespondertype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // activitytype
    PyObject * field = PyObject_GetAttrString(_pymsg, "activitytype");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->activitytype, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // activitysubtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "activitysubtype");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->activitysubtype, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // assisttype
    PyObject * field = PyObject_GetAttrString(_pymsg, "assisttype");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->assisttype, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sizing
    PyObject * field = PyObject_GetAttrString(_pymsg, "sizing");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sizing, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // attachment
    PyObject * field = PyObject_GetAttrString(_pymsg, "attachment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attachment = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // attachmentradius
    PyObject * field = PyObject_GetAttrString(_pymsg, "attachmentradius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attachmentradius = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // animaltype
    PyObject * field = PyObject_GetAttrString(_pymsg, "animaltype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->animaltype = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__psm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PSM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._psm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PSM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__PSM * ros_message = (v2x_msg__msg__PSM *)raw_ros_message;
  {  // basictype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->basictype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "basictype", field);
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
  {  // position
    PyObject * field = NULL;
    field = v2x_msg__msg__position3_d__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
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
  {  // pathhistory
    PyObject * field = NULL;
    field = v2x_msg__msg__path_history__convert_to_py(&ros_message->pathhistory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pathhistory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pathprediction
    PyObject * field = NULL;
    field = v2x_msg__msg__path_prediction__convert_to_py(&ros_message->pathprediction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pathprediction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // propulsion
    PyObject * field = NULL;
    field = v2x_msg__msg__propelled_information__convert_to_py(&ros_message->propulsion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "propulsion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usestate
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->usestate.data,
      strlen(ros_message->usestate.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "usestate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crossrequest
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->crossrequest ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crossrequest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crossstate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->crossstate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crossstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clustersize
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->clustersize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clustersize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clusterradius
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->clusterradius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clusterradius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eventrespondertype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->eventrespondertype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eventrespondertype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activitytype
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->activitytype.data,
      strlen(ros_message->activitytype.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "activitytype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activitysubtype
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->activitysubtype.data,
      strlen(ros_message->activitysubtype.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "activitysubtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // assisttype
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->assisttype.data,
      strlen(ros_message->assisttype.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "assisttype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sizing
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sizing.data,
      strlen(ros_message->sizing.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sizing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attachment
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->attachment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attachment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attachmentradius
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->attachmentradius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attachmentradius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // animaltype
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->animaltype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "animaltype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
