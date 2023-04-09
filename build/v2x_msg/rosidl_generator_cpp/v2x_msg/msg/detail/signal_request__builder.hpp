// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/signal_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SignalRequest_outboundlane
{
public:
  explicit Init_SignalRequest_outboundlane(::v2x_msg::msg::SignalRequest & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SignalRequest outboundlane(::v2x_msg::msg::SignalRequest::_outboundlane_type arg)
  {
    msg_.outboundlane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequest msg_;
};

class Init_SignalRequest_inboundlane
{
public:
  explicit Init_SignalRequest_inboundlane(::v2x_msg::msg::SignalRequest & msg)
  : msg_(msg)
  {}
  Init_SignalRequest_outboundlane inboundlane(::v2x_msg::msg::SignalRequest::_inboundlane_type arg)
  {
    msg_.inboundlane = std::move(arg);
    return Init_SignalRequest_outboundlane(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequest msg_;
};

class Init_SignalRequest_requesttype
{
public:
  explicit Init_SignalRequest_requesttype(::v2x_msg::msg::SignalRequest & msg)
  : msg_(msg)
  {}
  Init_SignalRequest_inboundlane requesttype(::v2x_msg::msg::SignalRequest::_requesttype_type arg)
  {
    msg_.requesttype = std::move(arg);
    return Init_SignalRequest_inboundlane(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequest msg_;
};

class Init_SignalRequest_requestid
{
public:
  explicit Init_SignalRequest_requestid(::v2x_msg::msg::SignalRequest & msg)
  : msg_(msg)
  {}
  Init_SignalRequest_requesttype requestid(::v2x_msg::msg::SignalRequest::_requestid_type arg)
  {
    msg_.requestid = std::move(arg);
    return Init_SignalRequest_requesttype(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequest msg_;
};

class Init_SignalRequest_id
{
public:
  Init_SignalRequest_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalRequest_requestid id(::v2x_msg::msg::SignalRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SignalRequest_requestid(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SignalRequest>()
{
  return v2x_msg::msg::builder::Init_SignalRequest_id();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__BUILDER_HPP_
