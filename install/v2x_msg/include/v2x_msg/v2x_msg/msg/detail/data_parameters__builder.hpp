// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/data_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_DataParameters_geoidused
{
public:
  explicit Init_DataParameters_geoidused(::v2x_msg::msg::DataParameters & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::DataParameters geoidused(::v2x_msg::msg::DataParameters::_geoidused_type arg)
  {
    msg_.geoidused = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::DataParameters msg_;
};

class Init_DataParameters_lastcheckeddate
{
public:
  explicit Init_DataParameters_lastcheckeddate(::v2x_msg::msg::DataParameters & msg)
  : msg_(msg)
  {}
  Init_DataParameters_geoidused lastcheckeddate(::v2x_msg::msg::DataParameters::_lastcheckeddate_type arg)
  {
    msg_.lastcheckeddate = std::move(arg);
    return Init_DataParameters_geoidused(msg_);
  }

private:
  ::v2x_msg::msg::DataParameters msg_;
};

class Init_DataParameters_processagency
{
public:
  explicit Init_DataParameters_processagency(::v2x_msg::msg::DataParameters & msg)
  : msg_(msg)
  {}
  Init_DataParameters_lastcheckeddate processagency(::v2x_msg::msg::DataParameters::_processagency_type arg)
  {
    msg_.processagency = std::move(arg);
    return Init_DataParameters_lastcheckeddate(msg_);
  }

private:
  ::v2x_msg::msg::DataParameters msg_;
};

class Init_DataParameters_processmethod
{
public:
  Init_DataParameters_processmethod()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataParameters_processagency processmethod(::v2x_msg::msg::DataParameters::_processmethod_type arg)
  {
    msg_.processmethod = std::move(arg);
    return Init_DataParameters_processagency(msg_);
  }

private:
  ::v2x_msg::msg::DataParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::DataParameters>()
{
  return v2x_msg::msg::builder::Init_DataParameters_processmethod();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__BUILDER_HPP_
