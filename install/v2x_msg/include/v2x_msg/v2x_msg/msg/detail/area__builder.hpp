// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AREA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Area_regionpointset
{
public:
  explicit Init_Area_regionpointset(::v2x_msg::msg::Area & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Area regionpointset(::v2x_msg::msg::Area::_regionpointset_type arg)
  {
    msg_.regionpointset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Area msg_;
};

class Init_Area_cirle
{
public:
  explicit Init_Area_cirle(::v2x_msg::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_regionpointset cirle(::v2x_msg::msg::Area::_cirle_type arg)
  {
    msg_.cirle = std::move(arg);
    return Init_Area_regionpointset(msg_);
  }

private:
  ::v2x_msg::msg::Area msg_;
};

class Init_Area_shapepointset
{
public:
  Init_Area_shapepointset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_cirle shapepointset(::v2x_msg::msg::Area::_shapepointset_type arg)
  {
    msg_.shapepointset = std::move(arg);
    return Init_Area_cirle(msg_);
  }

private:
  ::v2x_msg::msg::Area msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Area>()
{
  return v2x_msg::msg::builder::Init_Area_shapepointset();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__AREA__BUILDER_HPP_
