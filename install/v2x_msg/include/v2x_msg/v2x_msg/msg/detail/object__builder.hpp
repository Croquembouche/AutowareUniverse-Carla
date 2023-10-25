// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Object_datetime
{
public:
  explicit Init_Object_datetime(::v2x_msg::msg::Object & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Object datetime(::v2x_msg::msg::Object::_datetime_type arg)
  {
    msg_.datetime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Object msg_;
};

class Init_Object_obdirect
{
public:
  explicit Init_Object_obdirect(::v2x_msg::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_datetime obdirect(::v2x_msg::msg::Object::_obdirect_type arg)
  {
    msg_.obdirect = std::move(arg);
    return Init_Object_datetime(msg_);
  }

private:
  ::v2x_msg::msg::Object msg_;
};

class Init_Object_obdist
{
public:
  Init_Object_obdist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_obdirect obdist(::v2x_msg::msg::Object::_obdist_type arg)
  {
    msg_.obdist = std::move(arg);
    return Init_Object_obdirect(msg_);
  }

private:
  ::v2x_msg::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Object>()
{
  return v2x_msg::msg::builder::Init_Object_obdist();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OBJECT__BUILDER_HPP_
