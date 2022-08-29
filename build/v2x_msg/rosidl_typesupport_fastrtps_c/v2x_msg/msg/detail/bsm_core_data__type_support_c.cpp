// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/bsm_core_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/bsm_core_data__struct.h"
#include "v2x_msg/msg/detail/bsm_core_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id
#include "v2x_msg/msg/detail/acceleration_set4_way__functions.h"  // accelset
#include "v2x_msg/msg/detail/brake_system_status__functions.h"  // brakes
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"  // accuracy
#include "v2x_msg/msg/detail/vehicle_size__functions.h"  // size

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way)();
size_t get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus)();
size_t get_serialized_size_v2x_msg__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy)();
size_t get_serialized_size_v2x_msg__msg__VehicleSize(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleSize(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSize)();


using _BSMCoreData__ros_msg_type = v2x_msg__msg__BSMCoreData;

static bool _BSMCoreData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BSMCoreData__ros_msg_type * ros_message = static_cast<const _BSMCoreData__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr << ros_message->msgcnt;
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: secmark
  {
    cdr << ros_message->secmark;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: elev
  {
    cdr << ros_message->elev;
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: transmission
  {
    cdr << ros_message->transmission;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: accelset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accelset, cdr))
    {
      return false;
    }
  }

  // Field name: brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brakes, cdr))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->size, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BSMCoreData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BSMCoreData__ros_msg_type * ros_message = static_cast<_BSMCoreData__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr >> ros_message->msgcnt;
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: secmark
  {
    cdr >> ros_message->secmark;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: elev
  {
    cdr >> ros_message->elev;
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accuracy))
    {
      return false;
    }
  }

  // Field name: transmission
  {
    cdr >> ros_message->transmission;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: accelset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accelset))
    {
      return false;
    }
  }

  // Field name: brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brakes))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->size))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__BSMCoreData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BSMCoreData__ros_msg_type * ros_message = static_cast<const _BSMCoreData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msgcnt
  {
    size_t item_size = sizeof(ros_message->msgcnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name secmark
  {
    size_t item_size = sizeof(ros_message->secmark);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elev
  {
    size_t item_size = sizeof(ros_message->elev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accuracy

  current_alignment += get_serialized_size_v2x_msg__msg__PositionalAccuracy(
    &(ros_message->accuracy), current_alignment);
  // field.name transmission
  {
    size_t item_size = sizeof(ros_message->transmission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelset

  current_alignment += get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
    &(ros_message->accelset), current_alignment);
  // field.name brakes

  current_alignment += get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
    &(ros_message->brakes), current_alignment);
  // field.name size

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleSize(
    &(ros_message->size), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BSMCoreData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__BSMCoreData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__BSMCoreData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msgcnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: secmark
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: transmission
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accelset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
        full_bounded, current_alignment);
    }
  }
  // member: brakes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
        full_bounded, current_alignment);
    }
  }
  // member: size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__VehicleSize(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BSMCoreData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__BSMCoreData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BSMCoreData = {
  "v2x_msg::msg",
  "BSMCoreData",
  _BSMCoreData__cdr_serialize,
  _BSMCoreData__cdr_deserialize,
  _BSMCoreData__get_serialized_size,
  _BSMCoreData__max_serialized_size
};

static rosidl_message_type_support_t _BSMCoreData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BSMCoreData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, BSMCoreData)() {
  return &_BSMCoreData__type_support;
}

#if defined(__cplusplus)
}
#endif
