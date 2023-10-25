// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PredictedObjectKinematics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_perception_msgs::msg::PredictedObjectKinematics(_init);
}

void PredictedObjectKinematics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_perception_msgs::msg::PredictedObjectKinematics *>(message_memory);
  typed_message->~PredictedObjectKinematics();
}

size_t size_function__PredictedObjectKinematics__predicted_paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::PredictedPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PredictedObjectKinematics__predicted_paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::PredictedPath> *>(untyped_member);
  return &member[index];
}

void * get_function__PredictedObjectKinematics__predicted_paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::PredictedPath> *>(untyped_member);
  return &member[index];
}

void fetch_function__PredictedObjectKinematics__predicted_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_auto_perception_msgs::msg::PredictedPath *>(
    get_const_function__PredictedObjectKinematics__predicted_paths(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_auto_perception_msgs::msg::PredictedPath *>(untyped_value);
  value = item;
}

void assign_function__PredictedObjectKinematics__predicted_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_auto_perception_msgs::msg::PredictedPath *>(
    get_function__PredictedObjectKinematics__predicted_paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_auto_perception_msgs::msg::PredictedPath *>(untyped_value);
  item = value;
}

void resize_function__PredictedObjectKinematics__predicted_paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::PredictedPath> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PredictedObjectKinematics_message_member_array[4] = {
  {
    "initial_pose_with_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::PredictedObjectKinematics, initial_pose_with_covariance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_twist_with_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TwistWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::PredictedObjectKinematics, initial_twist_with_covariance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_acceleration_with_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::AccelWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::PredictedObjectKinematics, initial_acceleration_with_covariance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "predicted_paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_perception_msgs::msg::PredictedPath>(),  // members of sub message
    true,  // is array
    100,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::PredictedObjectKinematics, predicted_paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__PredictedObjectKinematics__predicted_paths,  // size() function pointer
    get_const_function__PredictedObjectKinematics__predicted_paths,  // get_const(index) function pointer
    get_function__PredictedObjectKinematics__predicted_paths,  // get(index) function pointer
    fetch_function__PredictedObjectKinematics__predicted_paths,  // fetch(index, &value) function pointer
    assign_function__PredictedObjectKinematics__predicted_paths,  // assign(index, value) function pointer
    resize_function__PredictedObjectKinematics__predicted_paths  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PredictedObjectKinematics_message_members = {
  "autoware_auto_perception_msgs::msg",  // message namespace
  "PredictedObjectKinematics",  // message name
  4,  // number of fields
  sizeof(autoware_auto_perception_msgs::msg::PredictedObjectKinematics),
  PredictedObjectKinematics_message_member_array,  // message members
  PredictedObjectKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  PredictedObjectKinematics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PredictedObjectKinematics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PredictedObjectKinematics_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::PredictedObjectKinematics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_perception_msgs, msg, PredictedObjectKinematics)() {
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::PredictedObjectKinematics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
