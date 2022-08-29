// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_

#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ConnectionManeuverAssist_pedbicycledetect
{
public:
  explicit Init_ConnectionManeuverAssist_pedbicycledetect(::v2x_msg::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ConnectionManeuverAssist pedbicycledetect(::v2x_msg::msg::ConnectionManeuverAssist::_pedbicycledetect_type arg)
  {
    msg_.pedbicycledetect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_waitonstop
{
public:
  explicit Init_ConnectionManeuverAssist_waitonstop(::v2x_msg::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_pedbicycledetect waitonstop(::v2x_msg::msg::ConnectionManeuverAssist::_waitonstop_type arg)
  {
    msg_.waitonstop = std::move(arg);
    return Init_ConnectionManeuverAssist_pedbicycledetect(msg_);
  }

private:
  ::v2x_msg::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_availablestoragelength
{
public:
  explicit Init_ConnectionManeuverAssist_availablestoragelength(::v2x_msg::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_waitonstop availablestoragelength(::v2x_msg::msg::ConnectionManeuverAssist::_availablestoragelength_type arg)
  {
    msg_.availablestoragelength = std::move(arg);
    return Init_ConnectionManeuverAssist_waitonstop(msg_);
  }

private:
  ::v2x_msg::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_queuelength
{
public:
  explicit Init_ConnectionManeuverAssist_queuelength(::v2x_msg::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_availablestoragelength queuelength(::v2x_msg::msg::ConnectionManeuverAssist::_queuelength_type arg)
  {
    msg_.queuelength = std::move(arg);
    return Init_ConnectionManeuverAssist_availablestoragelength(msg_);
  }

private:
  ::v2x_msg::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_connectionid
{
public:
  Init_ConnectionManeuverAssist_connectionid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectionManeuverAssist_queuelength connectionid(::v2x_msg::msg::ConnectionManeuverAssist::_connectionid_type arg)
  {
    msg_.connectionid = std::move(arg);
    return Init_ConnectionManeuverAssist_queuelength(msg_);
  }

private:
  ::v2x_msg::msg::ConnectionManeuverAssist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ConnectionManeuverAssist>()
{
  return v2x_msg::msg::builder::Init_ConnectionManeuverAssist_connectionid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_
