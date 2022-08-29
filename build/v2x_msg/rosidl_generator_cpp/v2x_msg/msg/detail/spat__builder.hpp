// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPAT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SPAT__BUILDER_HPP_

#include "v2x_msg/msg/detail/spat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SPAT_intersections
{
public:
  explicit Init_SPAT_intersections(::v2x_msg::msg::SPAT & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SPAT intersections(::v2x_msg::msg::SPAT::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SPAT msg_;
};

class Init_SPAT_name
{
public:
  explicit Init_SPAT_name(::v2x_msg::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_intersections name(::v2x_msg::msg::SPAT::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SPAT_intersections(msg_);
  }

private:
  ::v2x_msg::msg::SPAT msg_;
};

class Init_SPAT_timestamp
{
public:
  Init_SPAT_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SPAT_name timestamp(::v2x_msg::msg::SPAT::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SPAT_name(msg_);
  }

private:
  ::v2x_msg::msg::SPAT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SPAT>()
{
  return v2x_msg::msg::builder::Init_SPAT_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPAT__BUILDER_HPP_
