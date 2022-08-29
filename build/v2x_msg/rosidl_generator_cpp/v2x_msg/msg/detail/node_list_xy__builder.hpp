// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_list_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeListXY_computed
{
public:
  explicit Init_NodeListXY_computed(::v2x_msg::msg::NodeListXY & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeListXY computed(::v2x_msg::msg::NodeListXY::_computed_type arg)
  {
    msg_.computed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeListXY msg_;
};

class Init_NodeListXY_nodes
{
public:
  Init_NodeListXY_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeListXY_computed nodes(::v2x_msg::msg::NodeListXY::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_NodeListXY_computed(msg_);
  }

private:
  ::v2x_msg::msg::NodeListXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeListXY>()
{
  return v2x_msg::msg::builder::Init_NodeListXY_nodes();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_
