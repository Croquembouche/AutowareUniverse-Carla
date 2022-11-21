// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_

#include "v2x_msg/msg/detail/description__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Description_oldregion
{
public:
  explicit Init_Description_oldregion(::v2x_msg::msg::Description & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Description oldregion(::v2x_msg::msg::Description::_oldregion_type arg)
  {
    msg_.oldregion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Description msg_;
};

class Init_Description_geometry
{
public:
  explicit Init_Description_geometry(::v2x_msg::msg::Description & msg)
  : msg_(msg)
  {}
  Init_Description_oldregion geometry(::v2x_msg::msg::Description::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_Description_oldregion(msg_);
  }

private:
  ::v2x_msg::msg::Description msg_;
};

class Init_Description_path
{
public:
  Init_Description_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Description_geometry path(::v2x_msg::msg::Description::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Description_geometry(msg_);
  }

private:
  ::v2x_msg::msg::Description msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Description>()
{
  return v2x_msg::msg::builder::Init_Description_path();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_
