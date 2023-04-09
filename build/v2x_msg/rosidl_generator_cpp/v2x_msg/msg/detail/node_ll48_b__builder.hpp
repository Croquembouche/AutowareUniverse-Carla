// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NodeLL48B.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL48_B__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL48_B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/node_ll48_b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NodeLL48B_lat
{
public:
  explicit Init_NodeLL48B_lat(::v2x_msg::msg::NodeLL48B & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NodeLL48B lat(::v2x_msg::msg::NodeLL48B::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL48B msg_;
};

class Init_NodeLL48B_lon
{
public:
  Init_NodeLL48B_lon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeLL48B_lat lon(::v2x_msg::msg::NodeLL48B::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_NodeLL48B_lat(msg_);
  }

private:
  ::v2x_msg::msg::NodeLL48B msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NodeLL48B>()
{
  return v2x_msg::msg::builder::Init_NodeLL48B_lon();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL48_B__BUILDER_HPP_
