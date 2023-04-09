// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/signal_requester_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SignalRequesterInfo_typedata
{
public:
  explicit Init_SignalRequesterInfo_typedata(::v2x_msg::msg::SignalRequesterInfo & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SignalRequesterInfo typedata(::v2x_msg::msg::SignalRequesterInfo::_typedata_type arg)
  {
    msg_.typedata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequesterInfo msg_;
};

class Init_SignalRequesterInfo_basicvehiclerole
{
public:
  explicit Init_SignalRequesterInfo_basicvehiclerole(::v2x_msg::msg::SignalRequesterInfo & msg)
  : msg_(msg)
  {}
  Init_SignalRequesterInfo_typedata basicvehiclerole(::v2x_msg::msg::SignalRequesterInfo::_basicvehiclerole_type arg)
  {
    msg_.basicvehiclerole = std::move(arg);
    return Init_SignalRequesterInfo_typedata(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequesterInfo msg_;
};

class Init_SignalRequesterInfo_sequencenumber
{
public:
  explicit Init_SignalRequesterInfo_sequencenumber(::v2x_msg::msg::SignalRequesterInfo & msg)
  : msg_(msg)
  {}
  Init_SignalRequesterInfo_basicvehiclerole sequencenumber(::v2x_msg::msg::SignalRequesterInfo::_sequencenumber_type arg)
  {
    msg_.sequencenumber = std::move(arg);
    return Init_SignalRequesterInfo_basicvehiclerole(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequesterInfo msg_;
};

class Init_SignalRequesterInfo_request
{
public:
  explicit Init_SignalRequesterInfo_request(::v2x_msg::msg::SignalRequesterInfo & msg)
  : msg_(msg)
  {}
  Init_SignalRequesterInfo_sequencenumber request(::v2x_msg::msg::SignalRequesterInfo::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SignalRequesterInfo_sequencenumber(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequesterInfo msg_;
};

class Init_SignalRequesterInfo_id
{
public:
  Init_SignalRequesterInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalRequesterInfo_request id(::v2x_msg::msg::SignalRequesterInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SignalRequesterInfo_request(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequesterInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SignalRequesterInfo>()
{
  return v2x_msg::msg::builder::Init_SignalRequesterInfo_id();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__BUILDER_HPP_
