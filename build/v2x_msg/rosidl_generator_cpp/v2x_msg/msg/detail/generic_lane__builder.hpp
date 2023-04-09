// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_GenericLane_overlays
{
public:
  explicit Init_GenericLane_overlays(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::GenericLane overlays(::v2x_msg::msg::GenericLane::_overlays_type arg)
  {
    msg_.overlays = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_connectsto
{
public:
  explicit Init_GenericLane_connectsto(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_overlays connectsto(::v2x_msg::msg::GenericLane::_connectsto_type arg)
  {
    msg_.connectsto = std::move(arg);
    return Init_GenericLane_overlays(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_nodelist
{
public:
  explicit Init_GenericLane_nodelist(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_connectsto nodelist(::v2x_msg::msg::GenericLane::_nodelist_type arg)
  {
    msg_.nodelist = std::move(arg);
    return Init_GenericLane_connectsto(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_maneuvers
{
public:
  explicit Init_GenericLane_maneuvers(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_nodelist maneuvers(::v2x_msg::msg::GenericLane::_maneuvers_type arg)
  {
    msg_.maneuvers = std::move(arg);
    return Init_GenericLane_nodelist(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_laneattributes
{
public:
  explicit Init_GenericLane_laneattributes(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_maneuvers laneattributes(::v2x_msg::msg::GenericLane::_laneattributes_type arg)
  {
    msg_.laneattributes = std::move(arg);
    return Init_GenericLane_maneuvers(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_egressapproach
{
public:
  explicit Init_GenericLane_egressapproach(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_laneattributes egressapproach(::v2x_msg::msg::GenericLane::_egressapproach_type arg)
  {
    msg_.egressapproach = std::move(arg);
    return Init_GenericLane_laneattributes(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_ingressapproach
{
public:
  explicit Init_GenericLane_ingressapproach(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_egressapproach ingressapproach(::v2x_msg::msg::GenericLane::_ingressapproach_type arg)
  {
    msg_.ingressapproach = std::move(arg);
    return Init_GenericLane_egressapproach(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_name
{
public:
  explicit Init_GenericLane_name(::v2x_msg::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_ingressapproach name(::v2x_msg::msg::GenericLane::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GenericLane_ingressapproach(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

class Init_GenericLane_laneid
{
public:
  Init_GenericLane_laneid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericLane_name laneid(::v2x_msg::msg::GenericLane::_laneid_type arg)
  {
    msg_.laneid = std::move(arg);
    return Init_GenericLane_name(msg_);
  }

private:
  ::v2x_msg::msg::GenericLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::GenericLane>()
{
  return v2x_msg::msg::builder::Init_GenericLane_laneid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
