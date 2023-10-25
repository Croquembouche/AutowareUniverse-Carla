// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Snapshot_dataset
{
public:
  explicit Init_Snapshot_dataset(::v2x_msg::msg::Snapshot & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Snapshot dataset(::v2x_msg::msg::Snapshot::_dataset_type arg)
  {
    msg_.dataset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Snapshot msg_;
};

class Init_Snapshot_safetyext
{
public:
  explicit Init_Snapshot_safetyext(::v2x_msg::msg::Snapshot & msg)
  : msg_(msg)
  {}
  Init_Snapshot_dataset safetyext(::v2x_msg::msg::Snapshot::_safetyext_type arg)
  {
    msg_.safetyext = std::move(arg);
    return Init_Snapshot_dataset(msg_);
  }

private:
  ::v2x_msg::msg::Snapshot msg_;
};

class Init_Snapshot_theposition
{
public:
  Init_Snapshot_theposition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Snapshot_safetyext theposition(::v2x_msg::msg::Snapshot::_theposition_type arg)
  {
    msg_.theposition = std::move(arg);
    return Init_Snapshot_safetyext(msg_);
  }

private:
  ::v2x_msg::msg::Snapshot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Snapshot>()
{
  return v2x_msg::msg::builder::Init_Snapshot_theposition();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT__BUILDER_HPP_
