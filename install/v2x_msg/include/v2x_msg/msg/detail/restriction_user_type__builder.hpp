// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_

#include "v2x_msg/msg/detail/restriction_user_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RestrictionUserType_basictype
{
public:
  Init_RestrictionUserType_basictype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::RestrictionUserType basictype(::v2x_msg::msg::RestrictionUserType::_basictype_type arg)
  {
    msg_.basictype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RestrictionUserType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RestrictionUserType>()
{
  return v2x_msg::msg::builder::Init_RestrictionUserType_basictype();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_
