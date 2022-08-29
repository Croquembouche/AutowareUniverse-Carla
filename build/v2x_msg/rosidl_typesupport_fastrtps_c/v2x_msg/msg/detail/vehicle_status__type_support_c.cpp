// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/vehicle_status__struct.h"
#include "v2x_msg/msg/detail/vehicle_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // gnssstatus, lights
#include "rosidl_runtime_c/string_functions.h"  // gnssstatus, lights
#include "v2x_msg/msg/detail/accel_sets__functions.h"  // accelsets
#include "v2x_msg/msg/detail/brake_system_status__functions.h"  // brakestatus
#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // fullpos
#include "v2x_msg/msg/detail/j1939data__functions.h"  // j1939data
#include "v2x_msg/msg/detail/object__functions.h"  // object
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__functions.h"  // speedheadc
#include "v2x_msg/msg/detail/steering__functions.h"  // steering
#include "v2x_msg/msg/detail/vehicle_data__functions.h"  // vehicledata
#include "v2x_msg/msg/detail/vehicle_ident__functions.h"  // vehicleident
#include "v2x_msg/msg/detail/weather_report__functions.h"  // weatherreport
#include "v2x_msg/msg/detail/wiper_set__functions.h"  // wipers

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AccelSets(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AccelSets(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSets)();
size_t get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus)();
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)();
size_t get_serialized_size_v2x_msg__msg__J1939data(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__J1939data(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, J1939data)();
size_t get_serialized_size_v2x_msg__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Object(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Object)();
size_t get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence)();
size_t get_serialized_size_v2x_msg__msg__Steering(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Steering(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Steering)();
size_t get_serialized_size_v2x_msg__msg__VehicleData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleData)();
size_t get_serialized_size_v2x_msg__msg__VehicleIdent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleIdent(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent)();
size_t get_serialized_size_v2x_msg__msg__WeatherReport(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__WeatherReport(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, WeatherReport)();
size_t get_serialized_size_v2x_msg__msg__WiperSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__WiperSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, WiperSet)();


using _VehicleStatus__ros_msg_type = v2x_msg__msg__VehicleStatus;

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lights
  {
    const rosidl_runtime_c__String * str = &ros_message->lights;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lightbar
  {
    cdr << ros_message->lightbar;
  }

  // Field name: wipers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WiperSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wipers, cdr))
    {
      return false;
    }
  }

  // Field name: brakestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brakestatus, cdr))
    {
      return false;
    }
  }

  // Field name: roadfriction
  {
    cdr << ros_message->roadfriction;
  }

  // Field name: sundata
  {
    cdr << ros_message->sundata;
  }

  // Field name: raindata
  {
    cdr << ros_message->raindata;
  }

  // Field name: airtemp
  {
    cdr << ros_message->airtemp;
  }

  // Field name: airpres
  {
    cdr << ros_message->airpres;
  }

  // Field name: steering
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Steering
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering, cdr))
    {
      return false;
    }
  }

  // Field name: accelsets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSets
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accelsets, cdr))
    {
      return false;
    }
  }

  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object, cdr))
    {
      return false;
    }
  }

  // Field name: fullpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fullpos, cdr))
    {
      return false;
    }
  }

  // Field name: throttlepos
  {
    cdr << ros_message->throttlepos;
  }

  // Field name: speedheadc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speedheadc, cdr))
    {
      return false;
    }
  }

  // Field name: speedc
  {
    cdr << ros_message->speedc;
  }

  // Field name: vehicledata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicledata, cdr))
    {
      return false;
    }
  }

  // Field name: vehicleident
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicleident, cdr))
    {
      return false;
    }
  }

  // Field name: j1939data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, J1939data
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->j1939data, cdr))
    {
      return false;
    }
  }

  // Field name: weatherreport
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WeatherReport
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->weatherreport, cdr))
    {
      return false;
    }
  }

  // Field name: gnssstatus
  {
    const rosidl_runtime_c__String * str = &ros_message->gnssstatus;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatus__ros_msg_type * ros_message = static_cast<_VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lights
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lights.data) {
      rosidl_runtime_c__String__init(&ros_message->lights);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lights,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lights'\n");
      return false;
    }
  }

  // Field name: lightbar
  {
    cdr >> ros_message->lightbar;
  }

  // Field name: wipers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WiperSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wipers))
    {
      return false;
    }
  }

  // Field name: brakestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brakestatus))
    {
      return false;
    }
  }

  // Field name: roadfriction
  {
    cdr >> ros_message->roadfriction;
  }

  // Field name: sundata
  {
    cdr >> ros_message->sundata;
  }

  // Field name: raindata
  {
    cdr >> ros_message->raindata;
  }

  // Field name: airtemp
  {
    cdr >> ros_message->airtemp;
  }

  // Field name: airpres
  {
    cdr >> ros_message->airpres;
  }

  // Field name: steering
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Steering
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering))
    {
      return false;
    }
  }

  // Field name: accelsets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelSets
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accelsets))
    {
      return false;
    }
  }

  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object))
    {
      return false;
    }
  }

  // Field name: fullpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fullpos))
    {
      return false;
    }
  }

  // Field name: throttlepos
  {
    cdr >> ros_message->throttlepos;
  }

  // Field name: speedheadc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speedheadc))
    {
      return false;
    }
  }

  // Field name: speedc
  {
    cdr >> ros_message->speedc;
  }

  // Field name: vehicledata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicledata))
    {
      return false;
    }
  }

  // Field name: vehicleident
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicleident))
    {
      return false;
    }
  }

  // Field name: j1939data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, J1939data
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->j1939data))
    {
      return false;
    }
  }

  // Field name: weatherreport
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WeatherReport
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->weatherreport))
    {
      return false;
    }
  }

  // Field name: gnssstatus
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gnssstatus.data) {
      rosidl_runtime_c__String__init(&ros_message->gnssstatus);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gnssstatus,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gnssstatus'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__VehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lights
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lights.size + 1);
  // field.name lightbar
  {
    size_t item_size = sizeof(ros_message->lightbar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wipers

  current_alignment += get_serialized_size_v2x_msg__msg__WiperSet(
    &(ros_message->wipers), current_alignment);
  // field.name brakestatus

  current_alignment += get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
    &(ros_message->brakestatus), current_alignment);
  // field.name roadfriction
  {
    size_t item_size = sizeof(ros_message->roadfriction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sundata
  {
    size_t item_size = sizeof(ros_message->sundata);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raindata
  {
    size_t item_size = sizeof(ros_message->raindata);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airtemp
  {
    size_t item_size = sizeof(ros_message->airtemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airpres
  {
    size_t item_size = sizeof(ros_message->airpres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering

  current_alignment += get_serialized_size_v2x_msg__msg__Steering(
    &(ros_message->steering), current_alignment);
  // field.name accelsets

  current_alignment += get_serialized_size_v2x_msg__msg__AccelSets(
    &(ros_message->accelsets), current_alignment);
  // field.name object

  current_alignment += get_serialized_size_v2x_msg__msg__Object(
    &(ros_message->object), current_alignment);
  // field.name fullpos

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->fullpos), current_alignment);
  // field.name throttlepos
  {
    size_t item_size = sizeof(ros_message->throttlepos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speedheadc

  current_alignment += get_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
    &(ros_message->speedheadc), current_alignment);
  // field.name speedc
  {
    size_t item_size = sizeof(ros_message->speedc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicledata

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleData(
    &(ros_message->vehicledata), current_alignment);
  // field.name vehicleident

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleIdent(
    &(ros_message->vehicleident), current_alignment);
  // field.name j1939data

  current_alignment += get_serialized_size_v2x_msg__msg__J1939data(
    &(ros_message->j1939data), current_alignment);
  // field.name weatherreport

  current_alignment += get_serialized_size_v2x_msg__msg__WeatherReport(
    &(ros_message->weatherreport), current_alignment);
  // field.name gnssstatus
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gnssstatus.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__VehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__VehicleStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lights
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lightbar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wipers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__WiperSet(
        full_bounded, current_alignment);
    }
  }
  // member: brakestatus
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
        full_bounded, current_alignment);
    }
  }
  // member: roadfriction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sundata
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: raindata
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: airtemp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: airpres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Steering(
        full_bounded, current_alignment);
    }
  }
  // member: accelsets
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AccelSets(
        full_bounded, current_alignment);
    }
  }
  // member: object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: fullpos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__FullPositionVector(
        full_bounded, current_alignment);
    }
  }
  // member: throttlepos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speedheadc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__SpeedandHeadingandThrottleConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: speedc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehicledata
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__VehicleData(
        full_bounded, current_alignment);
    }
  }
  // member: vehicleident
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__VehicleIdent(
        full_bounded, current_alignment);
    }
  }
  // member: j1939data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__J1939data(
        full_bounded, current_alignment);
    }
  }
  // member: weatherreport
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__WeatherReport(
        full_bounded, current_alignment);
    }
  }
  // member: gnssstatus
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__VehicleStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStatus = {
  "v2x_msg::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleStatus)() {
  return &_VehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
