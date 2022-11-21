// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_

#include "v2x_msg/msg/detail/offset_yaxis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_OffsetYaxis_large
{
public:
  explicit Init_OffsetYaxis_large(::v2x_msg::msg::OffsetYaxis & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::OffsetYaxis large(::v2x_msg::msg::OffsetYaxis::_large_type arg)
  {
    msg_.large = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::OffsetYaxis msg_;
};

class Init_OffsetYaxis_small
{
public:
  Init_OffsetYaxis_small()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetYaxis_large small(::v2x_msg::msg::OffsetYaxis::_small_type arg)
  {
    msg_.small = std::move(arg);
    return Init_OffsetYaxis_large(msg_);
  }

private:
  ::v2x_msg::msg::OffsetYaxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::OffsetYaxis>()
{
  return v2x_msg::msg::builder::Init_OffsetYaxis_small();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_
