// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticHeader_iterations
{
public:
  explicit Init_DiagnosticHeader_iterations(::autoware_auto_system_msgs::msg::DiagnosticHeader & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::DiagnosticHeader iterations(::autoware_auto_system_msgs::msg::DiagnosticHeader::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DiagnosticHeader msg_;
};

class Init_DiagnosticHeader_runtime
{
public:
  explicit Init_DiagnosticHeader_runtime(::autoware_auto_system_msgs::msg::DiagnosticHeader & msg)
  : msg_(msg)
  {}
  Init_DiagnosticHeader_iterations runtime(::autoware_auto_system_msgs::msg::DiagnosticHeader::_runtime_type arg)
  {
    msg_.runtime = std::move(arg);
    return Init_DiagnosticHeader_iterations(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DiagnosticHeader msg_;
};

class Init_DiagnosticHeader_computation_start
{
public:
  explicit Init_DiagnosticHeader_computation_start(::autoware_auto_system_msgs::msg::DiagnosticHeader & msg)
  : msg_(msg)
  {}
  Init_DiagnosticHeader_runtime computation_start(::autoware_auto_system_msgs::msg::DiagnosticHeader::_computation_start_type arg)
  {
    msg_.computation_start = std::move(arg);
    return Init_DiagnosticHeader_runtime(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DiagnosticHeader msg_;
};

class Init_DiagnosticHeader_data_stamp
{
public:
  explicit Init_DiagnosticHeader_data_stamp(::autoware_auto_system_msgs::msg::DiagnosticHeader & msg)
  : msg_(msg)
  {}
  Init_DiagnosticHeader_computation_start data_stamp(::autoware_auto_system_msgs::msg::DiagnosticHeader::_data_stamp_type arg)
  {
    msg_.data_stamp = std::move(arg);
    return Init_DiagnosticHeader_computation_start(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DiagnosticHeader msg_;
};

class Init_DiagnosticHeader_name
{
public:
  Init_DiagnosticHeader_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticHeader_data_stamp name(::autoware_auto_system_msgs::msg::DiagnosticHeader::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DiagnosticHeader_data_stamp(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DiagnosticHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::DiagnosticHeader>()
{
  return autoware_auto_system_msgs::msg::builder::Init_DiagnosticHeader_name();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__BUILDER_HPP_
