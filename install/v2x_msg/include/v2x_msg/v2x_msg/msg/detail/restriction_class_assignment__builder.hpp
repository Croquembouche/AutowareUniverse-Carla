// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/restriction_class_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RestrictionClassAssignment_users
{
public:
  explicit Init_RestrictionClassAssignment_users(::v2x_msg::msg::RestrictionClassAssignment & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RestrictionClassAssignment users(::v2x_msg::msg::RestrictionClassAssignment::_users_type arg)
  {
    msg_.users = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RestrictionClassAssignment msg_;
};

class Init_RestrictionClassAssignment_restrictionclassid
{
public:
  Init_RestrictionClassAssignment_restrictionclassid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestrictionClassAssignment_users restrictionclassid(::v2x_msg::msg::RestrictionClassAssignment::_restrictionclassid_type arg)
  {
    msg_.restrictionclassid = std::move(arg);
    return Init_RestrictionClassAssignment_users(msg_);
  }

private:
  ::v2x_msg::msg::RestrictionClassAssignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RestrictionClassAssignment>()
{
  return v2x_msg::msg::builder::Init_RestrictionClassAssignment_restrictionclassid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_
