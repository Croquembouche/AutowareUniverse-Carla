// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_mapping_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MapPrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_mapping_msgs::msg::MapPrimitive(_init);
}

void MapPrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_mapping_msgs::msg::MapPrimitive *>(message_memory);
  typed_message->~MapPrimitive();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapPrimitive_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::msg::MapPrimitive, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "primitive_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_mapping_msgs::msg::MapPrimitive, primitive_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapPrimitive_message_members = {
  "autoware_auto_mapping_msgs::msg",  // message namespace
  "MapPrimitive",  // message name
  2,  // number of fields
  sizeof(autoware_auto_mapping_msgs::msg::MapPrimitive),
  MapPrimitive_message_member_array,  // message members
  MapPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  MapPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapPrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapPrimitive_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_mapping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_mapping_msgs::msg::MapPrimitive>()
{
  return &::autoware_auto_mapping_msgs::msg::rosidl_typesupport_introspection_cpp::MapPrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_mapping_msgs, msg, MapPrimitive)() {
  return &::autoware_auto_mapping_msgs::msg::rosidl_typesupport_introspection_cpp::MapPrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
