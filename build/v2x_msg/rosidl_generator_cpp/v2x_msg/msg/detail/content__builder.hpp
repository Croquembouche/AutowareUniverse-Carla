// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONTENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CONTENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/content__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Content_exitservice
{
public:
  explicit Init_Content_exitservice(::v2x_msg::msg::Content & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Content exitservice(::v2x_msg::msg::Content::_exitservice_type arg)
  {
    msg_.exitservice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Content msg_;
};

class Init_Content_speedlimit
{
public:
  explicit Init_Content_speedlimit(::v2x_msg::msg::Content & msg)
  : msg_(msg)
  {}
  Init_Content_exitservice speedlimit(::v2x_msg::msg::Content::_speedlimit_type arg)
  {
    msg_.speedlimit = std::move(arg);
    return Init_Content_exitservice(msg_);
  }

private:
  ::v2x_msg::msg::Content msg_;
};

class Init_Content_genericsign
{
public:
  explicit Init_Content_genericsign(::v2x_msg::msg::Content & msg)
  : msg_(msg)
  {}
  Init_Content_speedlimit genericsign(::v2x_msg::msg::Content::_genericsign_type arg)
  {
    msg_.genericsign = std::move(arg);
    return Init_Content_speedlimit(msg_);
  }

private:
  ::v2x_msg::msg::Content msg_;
};

class Init_Content_workzone
{
public:
  explicit Init_Content_workzone(::v2x_msg::msg::Content & msg)
  : msg_(msg)
  {}
  Init_Content_genericsign workzone(::v2x_msg::msg::Content::_workzone_type arg)
  {
    msg_.workzone = std::move(arg);
    return Init_Content_genericsign(msg_);
  }

private:
  ::v2x_msg::msg::Content msg_;
};

class Init_Content_advisory
{
public:
  Init_Content_advisory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Content_workzone advisory(::v2x_msg::msg::Content::_advisory_type arg)
  {
    msg_.advisory = std::move(arg);
    return Init_Content_workzone(msg_);
  }

private:
  ::v2x_msg::msg::Content msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Content>()
{
  return v2x_msg::msg::builder::Init_Content_advisory();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONTENT__BUILDER_HPP_
