// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/vehicle_classification__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/vehicle_classification__struct.h"
#include "v2x_msg/msg/detail/vehicle_classification__functions.h"
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


// forward declare type support functions


using _VehicleClassification__ros_msg_type = v2x_msg__msg__VehicleClassification;

static bool _VehicleClassification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleClassification__ros_msg_type * ros_message = static_cast<const _VehicleClassification__ros_msg_type *>(untyped_ros_message);
  // Field name: keytype
  {
    cdr << ros_message->keytype;
  }

  // Field name: role
  {
    cdr << ros_message->role;
  }

  // Field name: iso3883
  {
    cdr << ros_message->iso3883;
  }

  // Field name: hpmstype
  {
    cdr << ros_message->hpmstype;
  }

  // Field name: vehicletype
  {
    cdr << ros_message->vehicletype;
  }

  // Field name: responseequip
  {
    cdr << ros_message->responseequip;
  }

  // Field name: respondertype
  {
    cdr << ros_message->respondertype;
  }

  // Field name: fueltype
  {
    cdr << ros_message->fueltype;
  }

  return true;
}

static bool _VehicleClassification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleClassification__ros_msg_type * ros_message = static_cast<_VehicleClassification__ros_msg_type *>(untyped_ros_message);
  // Field name: keytype
  {
    cdr >> ros_message->keytype;
  }

  // Field name: role
  {
    cdr >> ros_message->role;
  }

  // Field name: iso3883
  {
    cdr >> ros_message->iso3883;
  }

  // Field name: hpmstype
  {
    cdr >> ros_message->hpmstype;
  }

  // Field name: vehicletype
  {
    cdr >> ros_message->vehicletype;
  }

  // Field name: responseequip
  {
    cdr >> ros_message->responseequip;
  }

  // Field name: respondertype
  {
    cdr >> ros_message->respondertype;
  }

  // Field name: fueltype
  {
    cdr >> ros_message->fueltype;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__VehicleClassification(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleClassification__ros_msg_type * ros_message = static_cast<const _VehicleClassification__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name keytype
  {
    size_t item_size = sizeof(ros_message->keytype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name role
  {
    size_t item_size = sizeof(ros_message->role);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iso3883
  {
    size_t item_size = sizeof(ros_message->iso3883);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hpmstype
  {
    size_t item_size = sizeof(ros_message->hpmstype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicletype
  {
    size_t item_size = sizeof(ros_message->vehicletype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name responseequip
  {
    size_t item_size = sizeof(ros_message->responseequip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name respondertype
  {
    size_t item_size = sizeof(ros_message->respondertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fueltype
  {
    size_t item_size = sizeof(ros_message->fueltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleClassification__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__VehicleClassification(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__VehicleClassification(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: keytype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: role
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: iso3883
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hpmstype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehicletype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: responseequip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: respondertype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fueltype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__VehicleClassification;
    is_plain =
      (
      offsetof(DataType, fueltype) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleClassification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__VehicleClassification(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleClassification = {
  "v2x_msg::msg",
  "VehicleClassification",
  _VehicleClassification__cdr_serialize,
  _VehicleClassification__cdr_deserialize,
  _VehicleClassification__get_serialized_size,
  _VehicleClassification__max_serialized_size
};

static rosidl_message_type_support_t _VehicleClassification__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleClassification,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleClassification)() {
  return &_VehicleClassification__type_support;
}

#if defined(__cplusplus)
}
#endif
