// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/generic_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/generic_lane__struct.h"
#include "v2x_msg/msg/detail/generic_lane__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // overlays
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // overlays
#include "rosidl_runtime_c/string.h"  // maneuvers, name
#include "rosidl_runtime_c/string_functions.h"  // maneuvers, name
#include "v2x_msg/msg/detail/connection__functions.h"  // connectsto
#include "v2x_msg/msg/detail/lane_attributes__functions.h"  // laneattributes
#include "v2x_msg/msg/detail/node_list_xy__functions.h"  // nodelist

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Connection(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Connection)();
size_t get_serialized_size_v2x_msg__msg__LaneAttributes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__LaneAttributes(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneAttributes)();
size_t get_serialized_size_v2x_msg__msg__NodeListXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeListXY(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY)();


using _GenericLane__ros_msg_type = v2x_msg__msg__GenericLane;

static bool _GenericLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid
  {
    cdr << ros_message->laneid;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: ingressapproach
  {
    cdr << ros_message->ingressapproach;
  }

  // Field name: egressapproach
  {
    cdr << ros_message->egressapproach;
  }

  // Field name: laneattributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneAttributes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->laneattributes, cdr))
    {
      return false;
    }
  }

  // Field name: maneuvers
  {
    const rosidl_runtime_c__String * str = &ros_message->maneuvers;
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

  // Field name: nodelist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY
      )()->data);
    size_t size = ros_message->nodelist.size;
    auto array_ptr = ros_message->nodelist.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: connectsto
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Connection
      )()->data);
    size_t size = ros_message->connectsto.size;
    auto array_ptr = ros_message->connectsto.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: overlays
  {
    size_t size = ros_message->overlays.size;
    auto array_ptr = ros_message->overlays.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GenericLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenericLane__ros_msg_type * ros_message = static_cast<_GenericLane__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid
  {
    cdr >> ros_message->laneid;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: ingressapproach
  {
    cdr >> ros_message->ingressapproach;
  }

  // Field name: egressapproach
  {
    cdr >> ros_message->egressapproach;
  }

  // Field name: laneattributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneAttributes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->laneattributes))
    {
      return false;
    }
  }

  // Field name: maneuvers
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->maneuvers.data) {
      rosidl_runtime_c__String__init(&ros_message->maneuvers);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->maneuvers,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'maneuvers'\n");
      return false;
    }
  }

  // Field name: nodelist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nodelist.data) {
      v2x_msg__msg__NodeListXY__Sequence__fini(&ros_message->nodelist);
    }
    if (!v2x_msg__msg__NodeListXY__Sequence__init(&ros_message->nodelist, size)) {
      fprintf(stderr, "failed to create array for field 'nodelist'");
      return false;
    }
    auto array_ptr = ros_message->nodelist.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: connectsto
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Connection
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->connectsto.data) {
      v2x_msg__msg__Connection__Sequence__fini(&ros_message->connectsto);
    }
    if (!v2x_msg__msg__Connection__Sequence__init(&ros_message->connectsto, size)) {
      fprintf(stderr, "failed to create array for field 'connectsto'");
      return false;
    }
    auto array_ptr = ros_message->connectsto.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: overlays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->overlays.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->overlays);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->overlays, size)) {
      fprintf(stderr, "failed to create array for field 'overlays'");
      return false;
    }
    auto array_ptr = ros_message->overlays.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laneid
  {
    size_t item_size = sizeof(ros_message->laneid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name ingressapproach
  {
    size_t item_size = sizeof(ros_message->ingressapproach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name egressapproach
  {
    size_t item_size = sizeof(ros_message->egressapproach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laneattributes

  current_alignment += get_serialized_size_v2x_msg__msg__LaneAttributes(
    &(ros_message->laneattributes), current_alignment);
  // field.name maneuvers
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->maneuvers.size + 1);
  // field.name nodelist
  {
    size_t array_size = ros_message->nodelist.size;
    auto array_ptr = ros_message->nodelist.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__NodeListXY(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name connectsto
  {
    size_t array_size = ros_message->connectsto.size;
    auto array_ptr = ros_message->connectsto.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__Connection(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name overlays
  {
    size_t array_size = ros_message->overlays.size;
    auto array_ptr = ros_message->overlays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GenericLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__GenericLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__GenericLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: laneid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ingressapproach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: egressapproach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: laneattributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__LaneAttributes(
        full_bounded, current_alignment);
    }
  }
  // member: maneuvers
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: nodelist
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeListXY(
        full_bounded, current_alignment);
    }
  }
  // member: connectsto
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Connection(
        full_bounded, current_alignment);
    }
  }
  // member: overlays
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GenericLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__GenericLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GenericLane = {
  "v2x_msg::msg",
  "GenericLane",
  _GenericLane__cdr_serialize,
  _GenericLane__cdr_deserialize,
  _GenericLane__get_serialized_size,
  _GenericLane__max_serialized_size
};

static rosidl_message_type_support_t _GenericLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenericLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, GenericLane)() {
  return &_GenericLane__type_support;
}

#if defined(__cplusplus)
}
#endif
