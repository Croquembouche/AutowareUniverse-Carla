// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_

#include "v2x_msg/msg/detail/node_offset_point_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeOffsetPointXY_nodelatlon
{
public:
  explicit Init_NodeOffsetPointXY_nodelatlon(::v2x_msg::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeOffsetPointXY nodelatlon(::v2x_msg::msg::NodeOffsetPointXY::_nodelatlon_type arg)
  {
    msg_.nodelatlon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_nodexy5
{
public:
  explicit Init_NodeOffsetPointXY_nodexy5(::v2x_msg::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_nodelatlon nodexy5(::v2x_msg::msg::NodeOffsetPointXY::_nodexy5_type arg)
  {
    msg_.nodexy5 = std::move(arg);
    return Init_NodeOffsetPointXY_nodelatlon(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_nodexy4
{
public:
  explicit Init_NodeOffsetPointXY_nodexy4(::v2x_msg::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_nodexy5 nodexy4(::v2x_msg::msg::NodeOffsetPointXY::_nodexy4_type arg)
  {
    msg_.nodexy4 = std::move(arg);
    return Init_NodeOffsetPointXY_nodexy5(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_nodexy3
{
public:
  explicit Init_NodeOffsetPointXY_nodexy3(::v2x_msg::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_nodexy4 nodexy3(::v2x_msg::msg::NodeOffsetPointXY::_nodexy3_type arg)
  {
    msg_.nodexy3 = std::move(arg);
    return Init_NodeOffsetPointXY_nodexy4(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_nodexy2
{
public:
  explicit Init_NodeOffsetPointXY_nodexy2(::v2x_msg::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_nodexy3 nodexy2(::v2x_msg::msg::NodeOffsetPointXY::_nodexy2_type arg)
  {
    msg_.nodexy2 = std::move(arg);
    return Init_NodeOffsetPointXY_nodexy3(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_nodexy1
{
public:
  Init_NodeOffsetPointXY_nodexy1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeOffsetPointXY_nodexy2 nodexy1(::v2x_msg::msg::NodeOffsetPointXY::_nodexy1_type arg)
  {
    msg_.nodexy1 = std::move(arg);
    return Init_NodeOffsetPointXY_nodexy2(msg_);
  }

private:
  ::v2x_msg::msg::NodeOffsetPointXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeOffsetPointXY>()
{
  return v2x_msg::msg::builder::Init_NodeOffsetPointXY_nodexy1();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
