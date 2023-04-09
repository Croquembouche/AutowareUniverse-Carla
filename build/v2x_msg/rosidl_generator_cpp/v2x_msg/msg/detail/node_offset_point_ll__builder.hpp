// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/node_offset_point_ll__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeOffsetPointLL_nodelatlon
{
public:
  explicit Init_NodeOffsetPointLL_nodelatlon(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeOffsetPointLL nodelatlon(::v2x_msg::msg::NodeOffsetPointLL::_nodelatlon_type arg)
  {
    msg_.nodelatlon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell6
{
public:
  explicit Init_NodeOffsetPointLL_nodell6(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointLL_nodelatlon nodell6(::v2x_msg::msg::NodeOffsetPointLL::_nodell6_type arg)
  {
    msg_.nodell6 = std::move(arg);
    return Init_NodeOffsetPointLL_nodelatlon(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell5
{
public:
  explicit Init_NodeOffsetPointLL_nodell5(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointLL_nodell6 nodell5(::v2x_msg::msg::NodeOffsetPointLL::_nodell5_type arg)
  {
    msg_.nodell5 = std::move(arg);
    return Init_NodeOffsetPointLL_nodell6(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell4
{
public:
  explicit Init_NodeOffsetPointLL_nodell4(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointLL_nodell5 nodell4(::v2x_msg::msg::NodeOffsetPointLL::_nodell4_type arg)
  {
    msg_.nodell4 = std::move(arg);
    return Init_NodeOffsetPointLL_nodell5(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell3
{
public:
  explicit Init_NodeOffsetPointLL_nodell3(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointLL_nodell4 nodell3(::v2x_msg::msg::NodeOffsetPointLL::_nodell3_type arg)
  {
    msg_.nodell3 = std::move(arg);
    return Init_NodeOffsetPointLL_nodell4(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell2
{
public:
  explicit Init_NodeOffsetPointLL_nodell2(::v2x_msg::msg::NodeOffsetPointLL & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointLL_nodell3 nodell2(::v2x_msg::msg::NodeOffsetPointLL::_nodell2_type arg)
  {
    msg_.nodell2 = std::move(arg);
    return Init_NodeOffsetPointLL_nodell3(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

class Init_NodeOffsetPointLL_nodell1
{
public:
  Init_NodeOffsetPointLL_nodell1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeOffsetPointLL_nodell2 nodell1(::v2x_msg::msg::NodeOffsetPointLL::_nodell1_type arg)
  {
    msg_.nodell1 = std::move(arg);
    return Init_NodeOffsetPointLL_nodell2(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointLL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeOffsetPointLL>()
{
  return v2x_msg::msg::builder::Init_NodeOffsetPointLL_nodell1();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__BUILDER_HPP_
