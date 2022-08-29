// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/VehicleStatus.idl
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
#include "v2x_msg/msg/detail/vehicle_status__struct.h"
#include "v2x_msg/msg/detail/vehicle_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool v2x_msg__msg__wiper_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__wiper_set__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__brake_system_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__brake_system_status__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__steering__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__steering__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__accel_sets__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__accel_sets__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__object__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__full_position_vector__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__speedand_headingand_throttle_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__speedand_headingand_throttle_confidence__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_data__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__vehicle_ident__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__vehicle_ident__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__j1939data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__j1939data__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__weather_report__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__weather_report__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("v2x_msg.msg._vehicle_status.VehicleStatus", full_classname_dest, 41) == 0);
  }
  v2x_msg__msg__VehicleStatus * ros_message = _ros_message;
  {  // lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "lights");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lights, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lightbar
    PyObject * field = PyObject_GetAttrString(_pymsg, "lightbar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lightbar = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // wipers
    PyObject * field = PyObject_GetAttrString(_pymsg, "wipers");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__wiper_set__convert_from_py(field, &ros_message->wipers)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // brakestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakestatus");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__brake_system_status__convert_from_py(field, &ros_message->brakestatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // roadfriction
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadfriction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roadfriction = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sundata
    PyObject * field = PyObject_GetAttrString(_pymsg, "sundata");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sundata = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // raindata
    PyObject * field = PyObject_GetAttrString(_pymsg, "raindata");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->raindata = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // airtemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "airtemp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airtemp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // airpres
    PyObject * field = PyObject_GetAttrString(_pymsg, "airpres");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airpres = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__steering__convert_from_py(field, &ros_message->steering)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // accelsets
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelsets");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__accel_sets__convert_from_py(field, &ros_message->accelsets)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object
    PyObject * field = PyObject_GetAttrString(_pymsg, "object");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__object__convert_from_py(field, &ros_message->object)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fullpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "fullpos");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__full_position_vector__convert_from_py(field, &ros_message->fullpos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // throttlepos
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttlepos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttlepos = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // speedheadc
    PyObject * field = PyObject_GetAttrString(_pymsg, "speedheadc");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__speedand_headingand_throttle_confidence__convert_from_py(field, &ros_message->speedheadc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speedc
    PyObject * field = PyObject_GetAttrString(_pymsg, "speedc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speedc = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // vehicledata
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicledata");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_data__convert_from_py(field, &ros_message->vehicledata)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicleident
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicleident");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__vehicle_ident__convert_from_py(field, &ros_message->vehicleident)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // j1939data
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1939data");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__j1939data__convert_from_py(field, &ros_message->j1939data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // weatherreport
    PyObject * field = PyObject_GetAttrString(_pymsg, "weatherreport");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__weather_report__convert_from_py(field, &ros_message->weatherreport)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gnssstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnssstatus");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gnssstatus, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__VehicleStatus * ros_message = (v2x_msg__msg__VehicleStatus *)raw_ros_message;
  {  // lights
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lights.data,
      strlen(ros_message->lights.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lightbar
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lightbar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lightbar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wipers
    PyObject * field = NULL;
    field = v2x_msg__msg__wiper_set__convert_to_py(&ros_message->wipers);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wipers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brakestatus
    PyObject * field = NULL;
    field = v2x_msg__msg__brake_system_status__convert_to_py(&ros_message->brakestatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadfriction
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->roadfriction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roadfriction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sundata
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sundata);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sundata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raindata
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->raindata);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raindata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airtemp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->airtemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airtemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airpres
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->airpres);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airpres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = v2x_msg__msg__steering__convert_to_py(&ros_message->steering);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelsets
    PyObject * field = NULL;
    field = v2x_msg__msg__accel_sets__convert_to_py(&ros_message->accelsets);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelsets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object
    PyObject * field = NULL;
    field = v2x_msg__msg__object__convert_to_py(&ros_message->object);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fullpos
    PyObject * field = NULL;
    field = v2x_msg__msg__full_position_vector__convert_to_py(&ros_message->fullpos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fullpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttlepos
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->throttlepos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttlepos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speedheadc
    PyObject * field = NULL;
    field = v2x_msg__msg__speedand_headingand_throttle_confidence__convert_to_py(&ros_message->speedheadc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speedheadc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speedc
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->speedc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speedc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicledata
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_data__convert_to_py(&ros_message->vehicledata);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicledata", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicleident
    PyObject * field = NULL;
    field = v2x_msg__msg__vehicle_ident__convert_to_py(&ros_message->vehicleident);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicleident", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1939data
    PyObject * field = NULL;
    field = v2x_msg__msg__j1939data__convert_to_py(&ros_message->j1939data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1939data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weatherreport
    PyObject * field = NULL;
    field = v2x_msg__msg__weather_report__convert_to_py(&ros_message->weatherreport);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "weatherreport", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnssstatus
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gnssstatus.data,
      strlen(ros_message->gnssstatus.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnssstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
