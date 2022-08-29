// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_

#include "v2x_msg/msg/detail/path_history__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PathHistory_crumbdata
{
public:
  explicit Init_PathHistory_crumbdata(::v2x_msg::msg::PathHistory & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PathHistory crumbdata(::v2x_msg::msg::PathHistory::_crumbdata_type arg)
  {
    msg_.crumbdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PathHistory msg_;
};

class Init_PathHistory_currgnssstatus
{
public:
  explicit Init_PathHistory_currgnssstatus(::v2x_msg::msg::PathHistory & msg)
  : msg_(msg)
  {}
  Init_PathHistory_crumbdata currgnssstatus(::v2x_msg::msg::PathHistory::_currgnssstatus_type arg)
  {
    msg_.currgnssstatus = std::move(arg);
    return Init_PathHistory_crumbdata(msg_);
  }

private:
  ::v2x_msg::msg::PathHistory msg_;
};

class Init_PathHistory_initialposition
{
public:
  Init_PathHistory_initialposition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathHistory_currgnssstatus initialposition(::v2x_msg::msg::PathHistory::_initialposition_type arg)
  {
    msg_.initialposition = std::move(arg);
    return Init_PathHistory_currgnssstatus(msg_);
  }

private:
  ::v2x_msg::msg::PathHistory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PathHistory>()
{
  return v2x_msg::msg::builder::Init_PathHistory_initialposition();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_
