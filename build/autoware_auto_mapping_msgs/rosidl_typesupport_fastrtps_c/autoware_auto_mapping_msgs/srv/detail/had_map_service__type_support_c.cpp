// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.h"
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // geom_lower_bound, geom_upper_bound, requested_primitives
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // geom_lower_bound, geom_upper_bound, requested_primitives

// forward declare type support functions


using _HADMapService_Request__ros_msg_type = autoware_auto_mapping_msgs__srv__HADMapService_Request;

static bool _HADMapService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HADMapService_Request__ros_msg_type * ros_message = static_cast<const _HADMapService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requested_primitives
  {
    size_t size = ros_message->requested_primitives.size;
    auto array_ptr = ros_message->requested_primitives.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: geom_upper_bound
  {
    size_t size = ros_message->geom_upper_bound.size;
    auto array_ptr = ros_message->geom_upper_bound.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: geom_lower_bound
  {
    size_t size = ros_message->geom_lower_bound.size;
    auto array_ptr = ros_message->geom_lower_bound.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _HADMapService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HADMapService_Request__ros_msg_type * ros_message = static_cast<_HADMapService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requested_primitives
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->requested_primitives.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->requested_primitives);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->requested_primitives, size)) {
      fprintf(stderr, "failed to create array for field 'requested_primitives'");
      return false;
    }
    auto array_ptr = ros_message->requested_primitives.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: geom_upper_bound
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->geom_upper_bound.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->geom_upper_bound);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->geom_upper_bound, size)) {
      fprintf(stderr, "failed to create array for field 'geom_upper_bound'");
      return false;
    }
    auto array_ptr = ros_message->geom_upper_bound.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: geom_lower_bound
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->geom_lower_bound.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->geom_lower_bound);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->geom_lower_bound, size)) {
      fprintf(stderr, "failed to create array for field 'geom_lower_bound'");
      return false;
    }
    auto array_ptr = ros_message->geom_lower_bound.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_mapping_msgs
size_t get_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HADMapService_Request__ros_msg_type * ros_message = static_cast<const _HADMapService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name requested_primitives
  {
    size_t array_size = ros_message->requested_primitives.size;
    auto array_ptr = ros_message->requested_primitives.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geom_upper_bound
  {
    size_t array_size = ros_message->geom_upper_bound.size;
    auto array_ptr = ros_message->geom_upper_bound.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geom_lower_bound
  {
    size_t array_size = ros_message->geom_lower_bound.size;
    auto array_ptr = ros_message->geom_lower_bound.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HADMapService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_mapping_msgs
size_t max_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Request(
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

  // member: requested_primitives
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: geom_upper_bound
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: geom_lower_bound
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HADMapService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HADMapService_Request = {
  "autoware_auto_mapping_msgs::srv",
  "HADMapService_Request",
  _HADMapService_Request__cdr_serialize,
  _HADMapService_Request__cdr_deserialize,
  _HADMapService_Request__get_serialized_size,
  _HADMapService_Request__max_serialized_size
};

static rosidl_message_type_support_t _HADMapService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HADMapService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, srv, HADMapService_Request)() {
  return &_HADMapService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__functions.h"  // map

// forward declare type support functions
size_t get_serialized_size_autoware_auto_mapping_msgs__msg__HADMapBin(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_mapping_msgs__msg__HADMapBin(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, msg, HADMapBin)();


using _HADMapService_Response__ros_msg_type = autoware_auto_mapping_msgs__srv__HADMapService_Response;

static bool _HADMapService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HADMapService_Response__ros_msg_type * ros_message = static_cast<const _HADMapService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, msg, HADMapBin
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map, cdr))
    {
      return false;
    }
  }

  // Field name: answer
  {
    cdr << ros_message->answer;
  }

  return true;
}

static bool _HADMapService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HADMapService_Response__ros_msg_type * ros_message = static_cast<_HADMapService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, msg, HADMapBin
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map))
    {
      return false;
    }
  }

  // Field name: answer
  {
    cdr >> ros_message->answer;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_mapping_msgs
size_t get_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HADMapService_Response__ros_msg_type * ros_message = static_cast<const _HADMapService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map

  current_alignment += get_serialized_size_autoware_auto_mapping_msgs__msg__HADMapBin(
    &(ros_message->map), current_alignment);
  // field.name answer
  {
    size_t item_size = sizeof(ros_message->answer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HADMapService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_mapping_msgs
size_t max_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Response(
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

  // member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_auto_mapping_msgs__msg__HADMapBin(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: answer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HADMapService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_auto_mapping_msgs__srv__HADMapService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HADMapService_Response = {
  "autoware_auto_mapping_msgs::srv",
  "HADMapService_Response",
  _HADMapService_Response__cdr_serialize,
  _HADMapService_Response__cdr_deserialize,
  _HADMapService_Response__get_serialized_size,
  _HADMapService_Response__max_serialized_size
};

static rosidl_message_type_support_t _HADMapService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HADMapService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, srv, HADMapService_Response)() {
  return &_HADMapService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_mapping_msgs/srv/had_map_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t HADMapService__callbacks = {
  "autoware_auto_mapping_msgs::srv",
  "HADMapService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, srv, HADMapService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, srv, HADMapService_Response)(),
};

static rosidl_service_type_support_t HADMapService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &HADMapService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_mapping_msgs, srv, HADMapService)() {
  return &HADMapService__handle;
}

#if defined(__cplusplus)
}
#endif
