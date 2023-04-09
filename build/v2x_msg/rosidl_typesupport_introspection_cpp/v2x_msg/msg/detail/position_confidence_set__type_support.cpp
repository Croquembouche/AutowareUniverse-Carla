// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/position_confidence_set__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PositionConfidenceSet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::PositionConfidenceSet(_init);
}

void PositionConfidenceSet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::PositionConfidenceSet *>(message_memory);
  typed_message->~PositionConfidenceSet();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionConfidenceSet_message_member_array[2] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::PositionConfidenceSet, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elevation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::PositionConfidenceSet, elevation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionConfidenceSet_message_members = {
  "v2x_msg::msg",  // message namespace
  "PositionConfidenceSet",  // message name
  2,  // number of fields
  sizeof(v2x_msg::msg::PositionConfidenceSet),
  PositionConfidenceSet_message_member_array,  // message members
  PositionConfidenceSet_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionConfidenceSet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionConfidenceSet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionConfidenceSet_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::PositionConfidenceSet>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::PositionConfidenceSet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, PositionConfidenceSet)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::PositionConfidenceSet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
