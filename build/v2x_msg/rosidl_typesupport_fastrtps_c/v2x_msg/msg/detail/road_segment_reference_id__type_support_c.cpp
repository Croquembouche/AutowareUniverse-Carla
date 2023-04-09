// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/road_segment_reference_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/road_segment_reference_id__struct.h"
#include "v2x_msg/msg/detail/road_segment_reference_id__functions.h"
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


using _RoadSegmentReferenceID__ros_msg_type = v2x_msg__msg__RoadSegmentReferenceID;

static bool _RoadSegmentReferenceID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadSegmentReferenceID__ros_msg_type * ros_message = static_cast<const _RoadSegmentReferenceID__ros_msg_type *>(untyped_ros_message);
  // Field name: roadregulatorid
  {
    cdr << ros_message->roadregulatorid;
  }

  // Field name: roadsegmentid
  {
    cdr << ros_message->roadsegmentid;
  }

  return true;
}

static bool _RoadSegmentReferenceID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadSegmentReferenceID__ros_msg_type * ros_message = static_cast<_RoadSegmentReferenceID__ros_msg_type *>(untyped_ros_message);
  // Field name: roadregulatorid
  {
    cdr >> ros_message->roadregulatorid;
  }

  // Field name: roadsegmentid
  {
    cdr >> ros_message->roadsegmentid;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__RoadSegmentReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadSegmentReferenceID__ros_msg_type * ros_message = static_cast<const _RoadSegmentReferenceID__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roadregulatorid
  {
    size_t item_size = sizeof(ros_message->roadregulatorid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roadsegmentid
  {
    size_t item_size = sizeof(ros_message->roadsegmentid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadSegmentReferenceID__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__RoadSegmentReferenceID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__RoadSegmentReferenceID(
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

  // member: roadregulatorid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roadsegmentid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadSegmentReferenceID__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__RoadSegmentReferenceID(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoadSegmentReferenceID = {
  "v2x_msg::msg",
  "RoadSegmentReferenceID",
  _RoadSegmentReferenceID__cdr_serialize,
  _RoadSegmentReferenceID__cdr_deserialize,
  _RoadSegmentReferenceID__get_serialized_size,
  _RoadSegmentReferenceID__max_serialized_size
};

static rosidl_message_type_support_t _RoadSegmentReferenceID__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadSegmentReferenceID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RoadSegmentReferenceID)() {
  return &_RoadSegmentReferenceID__type_support;
}

#if defined(__cplusplus)
}
#endif
