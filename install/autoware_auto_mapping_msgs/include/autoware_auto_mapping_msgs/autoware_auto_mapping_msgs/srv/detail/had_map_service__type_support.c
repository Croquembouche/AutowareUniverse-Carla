// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__functions.h"
#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.h"


// Include directives for member types
// Member `requested_primitives`
// Member `geom_upper_bound`
// Member `geom_lower_bound`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_mapping_msgs__srv__HADMapService_Request__init(message_memory);
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_fini_function(void * message_memory)
{
  autoware_auto_mapping_msgs__srv__HADMapService_Request__fini(message_memory);
}

size_t autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__requested_primitives(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__requested_primitives(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__requested_primitives(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__requested_primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__requested_primitives(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__requested_primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__requested_primitives(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__requested_primitives(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__geom_upper_bound(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_upper_bound(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_upper_bound(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__geom_upper_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_upper_bound(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__geom_upper_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_upper_bound(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__geom_upper_bound(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__geom_lower_bound(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_lower_bound(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_lower_bound(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__geom_lower_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_lower_bound(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__geom_lower_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_lower_bound(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__geom_lower_bound(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_member_array[3] = {
  {
    "requested_primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__srv__HADMapService_Request, requested_primitives),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__requested_primitives,  // size() function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__requested_primitives,  // get_const(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__requested_primitives,  // get(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__requested_primitives,  // fetch(index, &value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__requested_primitives,  // assign(index, value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__requested_primitives  // resize(index) function pointer
  },
  {
    "geom_upper_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__srv__HADMapService_Request, geom_upper_bound),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__geom_upper_bound,  // size() function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_upper_bound,  // get_const(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_upper_bound,  // get(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__geom_upper_bound,  // fetch(index, &value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__geom_upper_bound,  // assign(index, value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__geom_upper_bound  // resize(index) function pointer
  },
  {
    "geom_lower_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__srv__HADMapService_Request, geom_lower_bound),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__size_function__HADMapService_Request__geom_lower_bound,  // size() function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_const_function__HADMapService_Request__geom_lower_bound,  // get_const(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__get_function__HADMapService_Request__geom_lower_bound,  // get(index) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__fetch_function__HADMapService_Request__geom_lower_bound,  // fetch(index, &value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__assign_function__HADMapService_Request__geom_lower_bound,  // assign(index, value) function pointer
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__resize_function__HADMapService_Request__geom_lower_bound  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_members = {
  "autoware_auto_mapping_msgs__srv",  // message namespace
  "HADMapService_Request",  // message name
  3,  // number of fields
  sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Request),
  autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_member_array,  // message members
  autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_type_support_handle = {
  0,
  &autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Request)() {
  if (!autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_type_support_handle.typesupport_identifier) {
    autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_mapping_msgs__srv__HADMapService_Request__rosidl_typesupport_introspection_c__HADMapService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__functions.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.h"


// Include directives for member types
// Member `map`
#include "autoware_auto_mapping_msgs/msg/had_map_bin.h"
// Member `map`
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_mapping_msgs__srv__HADMapService_Response__init(message_memory);
}

void autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_fini_function(void * message_memory)
{
  autoware_auto_mapping_msgs__srv__HADMapService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_member_array[2] = {
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__srv__HADMapService_Response, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "answer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs__srv__HADMapService_Response, answer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_members = {
  "autoware_auto_mapping_msgs__srv",  // message namespace
  "HADMapService_Response",  // message name
  2,  // number of fields
  sizeof(autoware_auto_mapping_msgs__srv__HADMapService_Response),
  autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_member_array,  // message members
  autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_type_support_handle = {
  0,
  &autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Response)() {
  autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, msg, HADMapBin)();
  if (!autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_type_support_handle.typesupport_identifier) {
    autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_mapping_msgs__srv__HADMapService_Response__rosidl_typesupport_introspection_c__HADMapService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_auto_mapping_msgs/srv/detail/had_map_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_members = {
  "autoware_auto_mapping_msgs__srv",  // service namespace
  "HADMapService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_Request_message_type_support_handle,
  NULL  // response message
  // autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_type_support_handle = {
  0,
  &autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_mapping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService)() {
  if (!autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_type_support_handle.typesupport_identifier) {
    autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_mapping_msgs, srv, HADMapService_Response)()->data;
  }

  return &autoware_auto_mapping_msgs__srv__detail__had_map_service__rosidl_typesupport_introspection_c__HADMapService_service_type_support_handle;
}
