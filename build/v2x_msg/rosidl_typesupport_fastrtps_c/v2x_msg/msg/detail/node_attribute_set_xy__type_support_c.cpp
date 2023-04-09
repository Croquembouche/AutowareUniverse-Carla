// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_attribute_set_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/node_attribute_set_xy__struct.h"
#include "v2x_msg/msg/detail/node_attribute_set_xy__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // disabled, enabled, localnode
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // disabled, enabled, localnode
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"  // data

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__LaneDataAttribute(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__LaneDataAttribute(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneDataAttribute)();


using _NodeAttributeSetXY__ros_msg_type = v2x_msg__msg__NodeAttributeSetXY;

static bool _NodeAttributeSetXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: localnode
  {
    size_t size = ros_message->localnode.size;
    auto array_ptr = ros_message->localnode.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: disabled
  {
    size_t size = ros_message->disabled.size;
    auto array_ptr = ros_message->disabled.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: enabled
  {
    size_t size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneDataAttribute
      )()->data);
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dwidth
  {
    cdr << ros_message->dwidth;
  }

  // Field name: delevation
  {
    cdr << ros_message->delevation;
  }

  return true;
}

static bool _NodeAttributeSetXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<_NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: localnode
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->localnode.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->localnode);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->localnode, size)) {
      fprintf(stderr, "failed to create array for field 'localnode'");
      return false;
    }
    auto array_ptr = ros_message->localnode.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: disabled
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disabled.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->disabled);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->disabled, size)) {
      fprintf(stderr, "failed to create array for field 'disabled'");
      return false;
    }
    auto array_ptr = ros_message->disabled.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: enabled
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->enabled.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->enabled);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->enabled, size)) {
      fprintf(stderr, "failed to create array for field 'enabled'");
      return false;
    }
    auto array_ptr = ros_message->enabled.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneDataAttribute
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      v2x_msg__msg__LaneDataAttribute__Sequence__fini(&ros_message->data);
    }
    if (!v2x_msg__msg__LaneDataAttribute__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dwidth
  {
    cdr >> ros_message->dwidth;
  }

  // Field name: delevation
  {
    cdr >> ros_message->delevation;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__NodeAttributeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name localnode
  {
    size_t array_size = ros_message->localnode.size;
    auto array_ptr = ros_message->localnode.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disabled
  {
    size_t array_size = ros_message->disabled.size;
    auto array_ptr = ros_message->disabled.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t array_size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__LaneDataAttribute(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dwidth
  {
    size_t item_size = sizeof(ros_message->dwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delevation
  {
    size_t item_size = sizeof(ros_message->delevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeAttributeSetXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__NodeAttributeSetXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__NodeAttributeSetXY(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: localnode
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: disabled
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: enabled
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__LaneDataAttribute(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeAttributeSetXY__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__NodeAttributeSetXY(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeAttributeSetXY = {
  "v2x_msg::msg",
  "NodeAttributeSetXY",
  _NodeAttributeSetXY__cdr_serialize,
  _NodeAttributeSetXY__cdr_deserialize,
  _NodeAttributeSetXY__get_serialized_size,
  _NodeAttributeSetXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeAttributeSetXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeAttributeSetXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeAttributeSetXY)() {
  return &_NodeAttributeSetXY__type_support;
}

#if defined(__cplusplus)
}
#endif
