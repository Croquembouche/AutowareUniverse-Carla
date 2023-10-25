// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/OffsetXaxis.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/offset_xaxis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_OffsetXaxis_large
{
public:
  explicit Init_OffsetXaxis_large(::v2x_msg::msg::OffsetXaxis & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::OffsetXaxis large(::v2x_msg::msg::OffsetXaxis::_large_type arg)
  {
    msg_.large = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::OffsetXaxis msg_;
};

class Init_OffsetXaxis_small
{
public:
  Init_OffsetXaxis_small()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetXaxis_large small(::v2x_msg::msg::OffsetXaxis::_small_type arg)
  {
    msg_.small = std::move(arg);
    return Init_OffsetXaxis_large(msg_);
  }

private:
  ::v2x_msg::msg::OffsetXaxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::OffsetXaxis>()
{
  return v2x_msg::msg::builder::Init_OffsetXaxis_small();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_
