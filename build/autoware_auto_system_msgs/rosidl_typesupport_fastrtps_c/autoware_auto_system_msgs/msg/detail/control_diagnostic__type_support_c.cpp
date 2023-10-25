// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__struct.h"
#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__functions.h"
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

#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__functions.h"  // diag_header
#include "rosidl_runtime_c/string.h"  // pose_source, trajectory_source
#include "rosidl_runtime_c/string_functions.h"  // pose_source, trajectory_source

// forward declare type support functions
size_t get_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader)();


using _ControlDiagnostic__ros_msg_type = autoware_auto_system_msgs__msg__ControlDiagnostic;

static bool _ControlDiagnostic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlDiagnostic__ros_msg_type * ros_message = static_cast<const _ControlDiagnostic__ros_msg_type *>(untyped_ros_message);
  // Field name: diag_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->diag_header, cdr))
    {
      return false;
    }
  }

  // Field name: new_trajectory
  {
    cdr << (ros_message->new_trajectory ? true : false);
  }

  // Field name: trajectory_source
  {
    const rosidl_runtime_c__String * str = &ros_message->trajectory_source;
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

  // Field name: pose_source
  {
    const rosidl_runtime_c__String * str = &ros_message->pose_source;
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

  // Field name: lateral_error_m
  {
    cdr << ros_message->lateral_error_m;
  }

  // Field name: longitudinal_error_m
  {
    cdr << ros_message->longitudinal_error_m;
  }

  // Field name: velocity_error_mps
  {
    cdr << ros_message->velocity_error_mps;
  }

  // Field name: acceleration_error_mps2
  {
    cdr << ros_message->acceleration_error_mps2;
  }

  // Field name: yaw_error_rad
  {
    cdr << ros_message->yaw_error_rad;
  }

  // Field name: yaw_rate_error_rps
  {
    cdr << ros_message->yaw_rate_error_rps;
  }

  return true;
}

static bool _ControlDiagnostic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlDiagnostic__ros_msg_type * ros_message = static_cast<_ControlDiagnostic__ros_msg_type *>(untyped_ros_message);
  // Field name: diag_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->diag_header))
    {
      return false;
    }
  }

  // Field name: new_trajectory
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->new_trajectory = tmp ? true : false;
  }

  // Field name: trajectory_source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->trajectory_source.data) {
      rosidl_runtime_c__String__init(&ros_message->trajectory_source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->trajectory_source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'trajectory_source'\n");
      return false;
    }
  }

  // Field name: pose_source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pose_source.data) {
      rosidl_runtime_c__String__init(&ros_message->pose_source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pose_source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pose_source'\n");
      return false;
    }
  }

  // Field name: lateral_error_m
  {
    cdr >> ros_message->lateral_error_m;
  }

  // Field name: longitudinal_error_m
  {
    cdr >> ros_message->longitudinal_error_m;
  }

  // Field name: velocity_error_mps
  {
    cdr >> ros_message->velocity_error_mps;
  }

  // Field name: acceleration_error_mps2
  {
    cdr >> ros_message->acceleration_error_mps2;
  }

  // Field name: yaw_error_rad
  {
    cdr >> ros_message->yaw_error_rad;
  }

  // Field name: yaw_rate_error_rps
  {
    cdr >> ros_message->yaw_rate_error_rps;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t get_serialized_size_autoware_auto_system_msgs__msg__ControlDiagnostic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlDiagnostic__ros_msg_type * ros_message = static_cast<const _ControlDiagnostic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name diag_header

  current_alignment += get_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
    &(ros_message->diag_header), current_alignment);
  // field.name new_trajectory
  {
    size_t item_size = sizeof(ros_message->new_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->trajectory_source.size + 1);
  // field.name pose_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pose_source.size + 1);
  // field.name lateral_error_m
  {
    size_t item_size = sizeof(ros_message->lateral_error_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_error_m
  {
    size_t item_size = sizeof(ros_message->longitudinal_error_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_error_mps
  {
    size_t item_size = sizeof(ros_message->velocity_error_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_error_mps2
  {
    size_t item_size = sizeof(ros_message->acceleration_error_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error_rad
  {
    size_t item_size = sizeof(ros_message->yaw_error_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_error_rps
  {
    size_t item_size = sizeof(ros_message->yaw_rate_error_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlDiagnostic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_system_msgs__msg__ControlDiagnostic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t max_serialized_size_autoware_auto_system_msgs__msg__ControlDiagnostic(
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

  // member: diag_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: new_trajectory
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trajectory_source
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }
  // member: pose_source
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }
  // member: lateral_error_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longitudinal_error_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_error_mps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_error_mps2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_error_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_error_rps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlDiagnostic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_auto_system_msgs__msg__ControlDiagnostic(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlDiagnostic = {
  "autoware_auto_system_msgs::msg",
  "ControlDiagnostic",
  _ControlDiagnostic__cdr_serialize,
  _ControlDiagnostic__cdr_deserialize,
  _ControlDiagnostic__get_serialized_size,
  _ControlDiagnostic__max_serialized_size
};

static rosidl_message_type_support_t _ControlDiagnostic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlDiagnostic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, ControlDiagnostic)() {
  return &_ControlDiagnostic__type_support;
}

#if defined(__cplusplus)
}
#endif
