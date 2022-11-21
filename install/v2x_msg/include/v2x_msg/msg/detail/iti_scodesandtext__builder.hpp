// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ITIScodesandtext.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__BUILDER_HPP_

#include "v2x_msg/msg/detail/iti_scodesandtext__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ITIScodesandtext_item
{
public:
  Init_ITIScodesandtext_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::ITIScodesandtext item(::v2x_msg::msg::ITIScodesandtext::_item_type arg)
  {
    msg_.item = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ITIScodesandtext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ITIScodesandtext>()
{
  return v2x_msg::msg::builder::Init_ITIScodesandtext_item();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__BUILDER_HPP_
