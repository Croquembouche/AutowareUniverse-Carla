// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/OffsetSystem.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/offset_system__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_OffsetSystem_offset
{
public:
  explicit Init_OffsetSystem_offset(::v2x_msg::msg::OffsetSystem & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::OffsetSystem offset(::v2x_msg::msg::OffsetSystem::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::OffsetSystem msg_;
};

class Init_OffsetSystem_scale
{
public:
  Init_OffsetSystem_scale()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetSystem_offset scale(::v2x_msg::msg::OffsetSystem::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_OffsetSystem_offset(msg_);
  }

private:
  ::v2x_msg::msg::OffsetSystem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::OffsetSystem>()
{
  return v2x_msg::msg::builder::Init_OffsetSystem_scale();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__BUILDER_HPP_
