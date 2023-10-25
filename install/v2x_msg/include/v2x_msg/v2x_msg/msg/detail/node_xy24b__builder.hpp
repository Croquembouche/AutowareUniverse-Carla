// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/node_xy24b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeXY24b_y
{
public:
  explicit Init_NodeXY24b_y(::v2x_msg::msg::NodeXY24b & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeXY24b y(::v2x_msg::msg::NodeXY24b::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeXY24b msg_;
};

class Init_NodeXY24b_x
{
public:
  Init_NodeXY24b_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY24b_y x(::v2x_msg::msg::NodeXY24b::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeXY24b_y(msg_);
  }

private:
  ::v2x_msg::msg::NodeXY24b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeXY24b>()
{
  return v2x_msg::msg::builder::Init_NodeXY24b_x();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_
