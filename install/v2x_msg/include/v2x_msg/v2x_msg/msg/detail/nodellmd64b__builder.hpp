// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Nodellmd64b.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODELLMD64B__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NODELLMD64B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/nodellmd64b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Nodellmd64b_latitude
{
public:
  explicit Init_Nodellmd64b_latitude(::v2x_msg::msg::Nodellmd64b & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Nodellmd64b latitude(::v2x_msg::msg::Nodellmd64b::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Nodellmd64b msg_;
};

class Init_Nodellmd64b_longitude
{
public:
  Init_Nodellmd64b_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nodellmd64b_latitude longitude(::v2x_msg::msg::Nodellmd64b::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Nodellmd64b_latitude(msg_);
  }

private:
  ::v2x_msg::msg::Nodellmd64b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Nodellmd64b>()
{
  return v2x_msg::msg::builder::Init_Nodellmd64b_longitude();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODELLMD64B__BUILDER_HPP_
