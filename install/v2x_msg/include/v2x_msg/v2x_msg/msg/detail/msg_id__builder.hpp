// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/MsgID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MSG_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__MSG_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/msg_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_MsgID_roadsignid
{
public:
  explicit Init_MsgID_roadsignid(::v2x_msg::msg::MsgID & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::MsgID roadsignid(::v2x_msg::msg::MsgID::_roadsignid_type arg)
  {
    msg_.roadsignid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::MsgID msg_;
};

class Init_MsgID_furtherinfoid
{
public:
  Init_MsgID_furtherinfoid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgID_roadsignid furtherinfoid(::v2x_msg::msg::MsgID::_furtherinfoid_type arg)
  {
    msg_.furtherinfoid = std::move(arg);
    return Init_MsgID_roadsignid(msg_);
  }

private:
  ::v2x_msg::msg::MsgID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::MsgID>()
{
  return v2x_msg::msg::builder::Init_MsgID_furtherinfoid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MSG_ID__BUILDER_HPP_
