// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET__BUILDER_HPP_

#include "v2x_msg/msg/detail/offset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Offset_nodes
{
public:
  explicit Init_Offset_nodes(::v2x_msg::msg::Offset & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Offset nodes(::v2x_msg::msg::Offset::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Offset msg_;
};

class Init_Offset_xy
{
public:
  Init_Offset_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offset_nodes xy(::v2x_msg::msg::Offset::_xy_type arg)
  {
    msg_.xy = std::move(arg);
    return Init_Offset_nodes(msg_);
  }

private:
  ::v2x_msg::msg::Offset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Offset>()
{
  return v2x_msg::msg::builder::Init_Offset_xy();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET__BUILDER_HPP_
