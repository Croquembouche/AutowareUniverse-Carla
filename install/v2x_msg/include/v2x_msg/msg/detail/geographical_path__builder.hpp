// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/GeographicalPath.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__BUILDER_HPP_

#include "v2x_msg/msg/detail/geographical_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_GeographicalPath_description
{
public:
  explicit Init_GeographicalPath_description(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::GeographicalPath description(::v2x_msg::msg::GeographicalPath::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_direction
{
public:
  explicit Init_GeographicalPath_direction(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_description direction(::v2x_msg::msg::GeographicalPath::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_GeographicalPath_description(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_closedpath
{
public:
  explicit Init_GeographicalPath_closedpath(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_direction closedpath(::v2x_msg::msg::GeographicalPath::_closedpath_type arg)
  {
    msg_.closedpath = std::move(arg);
    return Init_GeographicalPath_direction(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_directionality
{
public:
  explicit Init_GeographicalPath_directionality(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_closedpath directionality(::v2x_msg::msg::GeographicalPath::_directionality_type arg)
  {
    msg_.directionality = std::move(arg);
    return Init_GeographicalPath_closedpath(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_lanewidth
{
public:
  explicit Init_GeographicalPath_lanewidth(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_directionality lanewidth(::v2x_msg::msg::GeographicalPath::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_GeographicalPath_directionality(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_anchor
{
public:
  explicit Init_GeographicalPath_anchor(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_lanewidth anchor(::v2x_msg::msg::GeographicalPath::_anchor_type arg)
  {
    msg_.anchor = std::move(arg);
    return Init_GeographicalPath_lanewidth(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_id
{
public:
  explicit Init_GeographicalPath_id(::v2x_msg::msg::GeographicalPath & msg)
  : msg_(msg)
  {}
  Init_GeographicalPath_anchor id(::v2x_msg::msg::GeographicalPath::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GeographicalPath_anchor(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

class Init_GeographicalPath_name
{
public:
  Init_GeographicalPath_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeographicalPath_id name(::v2x_msg::msg::GeographicalPath::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GeographicalPath_id(msg_);
  }

private:
  ::v2x_msg::msg::GeographicalPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::GeographicalPath>()
{
  return v2x_msg::msg::builder::Init_GeographicalPath_name();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__BUILDER_HPP_
