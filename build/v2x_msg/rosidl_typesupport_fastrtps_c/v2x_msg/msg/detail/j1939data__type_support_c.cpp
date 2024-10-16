// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/j1939data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/j1939data__struct.h"
#include "v2x_msg/msg/detail/j1939data__functions.h"
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

#include "v2x_msg/msg/detail/axle_weight__functions.h"  // axles
#include "v2x_msg/msg/detail/tire_data__functions.h"  // tires

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AxleWeight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AxleWeight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AxleWeight)();
size_t get_serialized_size_v2x_msg__msg__TireData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__TireData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TireData)();


using _J1939data__ros_msg_type = v2x_msg__msg__J1939data;

static bool _J1939data__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _J1939data__ros_msg_type * ros_message = static_cast<const _J1939data__ros_msg_type *>(untyped_ros_message);
  // Field name: tires
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TireData
      )()->data);
    size_t size = ros_message->tires.size;
    auto array_ptr = ros_message->tires.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: axles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AxleWeight
      )()->data);
    size_t size = ros_message->axles.size;
    auto array_ptr = ros_message->axles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: trailerweight
  {
    cdr << ros_message->trailerweight;
  }

  // Field name: cargoweight
  {
    cdr << ros_message->cargoweight;
  }

  // Field name: steeringaxletemperture
  {
    cdr << ros_message->steeringaxletemperture;
  }

  // Field name: driveaxlelocation
  {
    cdr << ros_message->driveaxlelocation;
  }

  // Field name: driveaxleliftairpressure
  {
    cdr << ros_message->driveaxleliftairpressure;
  }

  // Field name: driveaxletemperature
  {
    cdr << ros_message->driveaxletemperature;
  }

  // Field name: driveaxlelubpressure
  {
    cdr << ros_message->driveaxlelubpressure;
  }

  // Field name: steeringaxlelubepressure
  {
    cdr << ros_message->steeringaxlelubepressure;
  }

  return true;
}

static bool _J1939data__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _J1939data__ros_msg_type * ros_message = static_cast<_J1939data__ros_msg_type *>(untyped_ros_message);
  // Field name: tires
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TireData
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tires.data) {
      v2x_msg__msg__TireData__Sequence__fini(&ros_message->tires);
    }
    if (!v2x_msg__msg__TireData__Sequence__init(&ros_message->tires, size)) {
      fprintf(stderr, "failed to create array for field 'tires'");
      return false;
    }
    auto array_ptr = ros_message->tires.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: axles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AxleWeight
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->axles.data) {
      v2x_msg__msg__AxleWeight__Sequence__fini(&ros_message->axles);
    }
    if (!v2x_msg__msg__AxleWeight__Sequence__init(&ros_message->axles, size)) {
      fprintf(stderr, "failed to create array for field 'axles'");
      return false;
    }
    auto array_ptr = ros_message->axles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: trailerweight
  {
    cdr >> ros_message->trailerweight;
  }

  // Field name: cargoweight
  {
    cdr >> ros_message->cargoweight;
  }

  // Field name: steeringaxletemperture
  {
    cdr >> ros_message->steeringaxletemperture;
  }

  // Field name: driveaxlelocation
  {
    cdr >> ros_message->driveaxlelocation;
  }

  // Field name: driveaxleliftairpressure
  {
    cdr >> ros_message->driveaxleliftairpressure;
  }

  // Field name: driveaxletemperature
  {
    cdr >> ros_message->driveaxletemperature;
  }

  // Field name: driveaxlelubpressure
  {
    cdr >> ros_message->driveaxlelubpressure;
  }

  // Field name: steeringaxlelubepressure
  {
    cdr >> ros_message->steeringaxlelubepressure;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__J1939data(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _J1939data__ros_msg_type * ros_message = static_cast<const _J1939data__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tires
  {
    size_t array_size = ros_message->tires.size;
    auto array_ptr = ros_message->tires.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__TireData(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name axles
  {
    size_t array_size = ros_message->axles.size;
    auto array_ptr = ros_message->axles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__AxleWeight(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name trailerweight
  {
    size_t item_size = sizeof(ros_message->trailerweight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cargoweight
  {
    size_t item_size = sizeof(ros_message->cargoweight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steeringaxletemperture
  {
    size_t item_size = sizeof(ros_message->steeringaxletemperture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driveaxlelocation
  {
    size_t item_size = sizeof(ros_message->driveaxlelocation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driveaxleliftairpressure
  {
    size_t item_size = sizeof(ros_message->driveaxleliftairpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driveaxletemperature
  {
    size_t item_size = sizeof(ros_message->driveaxletemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driveaxlelubpressure
  {
    size_t item_size = sizeof(ros_message->driveaxlelubpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steeringaxlelubepressure
  {
    size_t item_size = sizeof(ros_message->steeringaxlelubepressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _J1939data__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__J1939data(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__J1939data(
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

  // member: tires
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__TireData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: axles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__AxleWeight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trailerweight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cargoweight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steeringaxletemperture
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driveaxlelocation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driveaxleliftairpressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driveaxletemperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driveaxlelubpressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steeringaxlelubepressure
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
    using DataType = v2x_msg__msg__J1939data;
    is_plain =
      (
      offsetof(DataType, steeringaxlelubepressure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _J1939data__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__J1939data(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_J1939data = {
  "v2x_msg::msg",
  "J1939data",
  _J1939data__cdr_serialize,
  _J1939data__cdr_deserialize,
  _J1939data__get_serialized_size,
  _J1939data__max_serialized_size
};

static rosidl_message_type_support_t _J1939data__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_J1939data,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, J1939data)() {
  return &_J1939data__type_support;
}

#if defined(__cplusplus)
}
#endif
