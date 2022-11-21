// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__BUILDER_HPP_

#include "v2x_msg/msg/detail/confidence_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ConfidenceSet_throttleconfidence
{
public:
  explicit Init_ConfidenceSet_throttleconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ConfidenceSet throttleconfidence(::v2x_msg::msg::ConfidenceSet::_throttleconfidence_type arg)
  {
    msg_.throttleconfidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_headingconfidence
{
public:
  explicit Init_ConfidenceSet_headingconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  Init_ConfidenceSet_throttleconfidence headingconfidence(::v2x_msg::msg::ConfidenceSet::_headingconfidence_type arg)
  {
    msg_.headingconfidence = std::move(arg);
    return Init_ConfidenceSet_throttleconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_steerconfidence
{
public:
  explicit Init_ConfidenceSet_steerconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  Init_ConfidenceSet_headingconfidence steerconfidence(::v2x_msg::msg::ConfidenceSet::_steerconfidence_type arg)
  {
    msg_.steerconfidence = std::move(arg);
    return Init_ConfidenceSet_headingconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_posconfidence
{
public:
  explicit Init_ConfidenceSet_posconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  Init_ConfidenceSet_steerconfidence posconfidence(::v2x_msg::msg::ConfidenceSet::_posconfidence_type arg)
  {
    msg_.posconfidence = std::move(arg);
    return Init_ConfidenceSet_steerconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_timeconfidence
{
public:
  explicit Init_ConfidenceSet_timeconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  Init_ConfidenceSet_posconfidence timeconfidence(::v2x_msg::msg::ConfidenceSet::_timeconfidence_type arg)
  {
    msg_.timeconfidence = std::move(arg);
    return Init_ConfidenceSet_posconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_speedconfidence
{
public:
  explicit Init_ConfidenceSet_speedconfidence(::v2x_msg::msg::ConfidenceSet & msg)
  : msg_(msg)
  {}
  Init_ConfidenceSet_timeconfidence speedconfidence(::v2x_msg::msg::ConfidenceSet::_speedconfidence_type arg)
  {
    msg_.speedconfidence = std::move(arg);
    return Init_ConfidenceSet_timeconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

class Init_ConfidenceSet_accelconfidence
{
public:
  Init_ConfidenceSet_accelconfidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfidenceSet_speedconfidence accelconfidence(::v2x_msg::msg::ConfidenceSet::_accelconfidence_type arg)
  {
    msg_.accelconfidence = std::move(arg);
    return Init_ConfidenceSet_speedconfidence(msg_);
  }

private:
  ::v2x_msg::msg::ConfidenceSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ConfidenceSet>()
{
  return v2x_msg::msg::builder::Init_ConfidenceSet_accelconfidence();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__BUILDER_HPP_
