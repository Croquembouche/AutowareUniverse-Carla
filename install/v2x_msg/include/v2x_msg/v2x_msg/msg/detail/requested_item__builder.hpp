// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RequestedItem.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTED_ITEM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTED_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/requested_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RequestedItem_itemindex
{
public:
  Init_RequestedItem_itemindex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::RequestedItem itemindex(::v2x_msg::msg::RequestedItem::_itemindex_type arg)
  {
    msg_.itemindex = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RequestedItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RequestedItem>()
{
  return v2x_msg::msg::builder::Init_RequestedItem_itemindex();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTED_ITEM__BUILDER_HPP_
