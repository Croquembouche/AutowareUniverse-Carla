// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/map__struct.h"
#include "v2x_msg/msg/detail/map__functions.h"
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

#include "v2x_msg/msg/detail/data_parameters__functions.h"  // dataparameters
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"  // intersections
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"  // restrictionlist
#include "v2x_msg/msg/detail/road_segment__functions.h"  // roadsegments

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__DataParameters(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__DataParameters(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, DataParameters)();
size_t get_serialized_size_v2x_msg__msg__IntersectionGeometry(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionGeometry(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionGeometry)();
size_t get_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionClassAssignment)();
size_t get_serialized_size_v2x_msg__msg__RoadSegment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__RoadSegment(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RoadSegment)();


using _MAP__ros_msg_type = v2x_msg__msg__MAP;

static bool _MAP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MAP__ros_msg_type * ros_message = static_cast<const _MAP__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: msgissuerevision
  {
    cdr << ros_message->msgissuerevision;
  }

  // Field name: layertype
  {
    cdr << ros_message->layertype;
  }

  // Field name: layerid
  {
    cdr << ros_message->layerid;
  }

  // Field name: intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionGeometry
      )()->data);
    size_t size = ros_message->intersections.size;
    auto array_ptr = ros_message->intersections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: roadsegments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RoadSegment
      )()->data);
    size_t size = ros_message->roadsegments.size;
    auto array_ptr = ros_message->roadsegments.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dataparameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, DataParameters
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dataparameters, cdr))
    {
      return false;
    }
  }

  // Field name: restrictionlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionClassAssignment
      )()->data);
    size_t size = ros_message->restrictionlist.size;
    auto array_ptr = ros_message->restrictionlist.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MAP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MAP__ros_msg_type * ros_message = static_cast<_MAP__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: msgissuerevision
  {
    cdr >> ros_message->msgissuerevision;
  }

  // Field name: layertype
  {
    cdr >> ros_message->layertype;
  }

  // Field name: layerid
  {
    cdr >> ros_message->layerid;
  }

  // Field name: intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionGeometry
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->intersections.data) {
      v2x_msg__msg__IntersectionGeometry__Sequence__fini(&ros_message->intersections);
    }
    if (!v2x_msg__msg__IntersectionGeometry__Sequence__init(&ros_message->intersections, size)) {
      fprintf(stderr, "failed to create array for field 'intersections'");
      return false;
    }
    auto array_ptr = ros_message->intersections.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: roadsegments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RoadSegment
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->roadsegments.data) {
      v2x_msg__msg__RoadSegment__Sequence__fini(&ros_message->roadsegments);
    }
    if (!v2x_msg__msg__RoadSegment__Sequence__init(&ros_message->roadsegments, size)) {
      fprintf(stderr, "failed to create array for field 'roadsegments'");
      return false;
    }
    auto array_ptr = ros_message->roadsegments.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dataparameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, DataParameters
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dataparameters))
    {
      return false;
    }
  }

  // Field name: restrictionlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RestrictionClassAssignment
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->restrictionlist.data) {
      v2x_msg__msg__RestrictionClassAssignment__Sequence__fini(&ros_message->restrictionlist);
    }
    if (!v2x_msg__msg__RestrictionClassAssignment__Sequence__init(&ros_message->restrictionlist, size)) {
      fprintf(stderr, "failed to create array for field 'restrictionlist'");
      return false;
    }
    auto array_ptr = ros_message->restrictionlist.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__MAP(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MAP__ros_msg_type * ros_message = static_cast<const _MAP__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgissuerevision
  {
    size_t item_size = sizeof(ros_message->msgissuerevision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name layertype
  {
    size_t item_size = sizeof(ros_message->layertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name layerid
  {
    size_t item_size = sizeof(ros_message->layerid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intersections
  {
    size_t array_size = ros_message->intersections.size;
    auto array_ptr = ros_message->intersections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__IntersectionGeometry(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name roadsegments
  {
    size_t array_size = ros_message->roadsegments.size;
    auto array_ptr = ros_message->roadsegments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__RoadSegment(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dataparameters

  current_alignment += get_serialized_size_v2x_msg__msg__DataParameters(
    &(ros_message->dataparameters), current_alignment);
  // field.name restrictionlist
  {
    size_t array_size = ros_message->restrictionlist.size;
    auto array_ptr = ros_message->restrictionlist.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MAP__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__MAP(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__MAP(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msgissuerevision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: layertype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: layerid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__IntersectionGeometry(
        full_bounded, current_alignment);
    }
  }
  // member: roadsegments
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__RoadSegment(
        full_bounded, current_alignment);
    }
  }
  // member: dataparameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__DataParameters(
        full_bounded, current_alignment);
    }
  }
  // member: restrictionlist
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__RestrictionClassAssignment(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MAP__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__MAP(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MAP = {
  "v2x_msg::msg",
  "MAP",
  _MAP__cdr_serialize,
  _MAP__cdr_deserialize,
  _MAP__get_serialized_size,
  _MAP__max_serialized_size
};

static rosidl_message_type_support_t _MAP__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MAP,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, MAP)() {
  return &_MAP__type_support;
}

#if defined(__cplusplus)
}
#endif
