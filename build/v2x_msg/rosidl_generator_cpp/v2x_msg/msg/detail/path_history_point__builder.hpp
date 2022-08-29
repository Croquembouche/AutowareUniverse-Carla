// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_

#include "v2x_msg/msg/detail/path_history_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PathHistoryPoint_heading
{
public:
  explicit Init_PathHistoryPoint_heading(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PathHistoryPoint heading(::v2x_msg::msg::PathHistoryPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_accuracy
{
public:
  explicit Init_PathHistoryPoint_accuracy(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_heading accuracy(::v2x_msg::msg::PathHistoryPoint::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_PathHistoryPoint_heading(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_speed
{
public:
  explicit Init_PathHistoryPoint_speed(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_accuracy speed(::v2x_msg::msg::PathHistoryPoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PathHistoryPoint_accuracy(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_timeoffset
{
public:
  explicit Init_PathHistoryPoint_timeoffset(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_speed timeoffset(::v2x_msg::msg::PathHistoryPoint::_timeoffset_type arg)
  {
    msg_.timeoffset = std::move(arg);
    return Init_PathHistoryPoint_speed(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_elevationoffset
{
public:
  explicit Init_PathHistoryPoint_elevationoffset(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_timeoffset elevationoffset(::v2x_msg::msg::PathHistoryPoint::_elevationoffset_type arg)
  {
    msg_.elevationoffset = std::move(arg);
    return Init_PathHistoryPoint_timeoffset(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_lonoffset
{
public:
  explicit Init_PathHistoryPoint_lonoffset(::v2x_msg::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_elevationoffset lonoffset(::v2x_msg::msg::PathHistoryPoint::_lonoffset_type arg)
  {
    msg_.lonoffset = std::move(arg);
    return Init_PathHistoryPoint_elevationoffset(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_latoffset
{
public:
  Init_PathHistoryPoint_latoffset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathHistoryPoint_lonoffset latoffset(::v2x_msg::msg::PathHistoryPoint::_latoffset_type arg)
  {
    msg_.latoffset = std::move(arg);
    return Init_PathHistoryPoint_lonoffset(msg_);
  }

private:
  ::v2x_msg::msg::PathHistoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PathHistoryPoint>()
{
  return v2x_msg::msg::builder::Init_PathHistoryPoint_latoffset();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_
