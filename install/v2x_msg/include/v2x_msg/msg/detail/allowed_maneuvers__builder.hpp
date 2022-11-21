// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_

#include "v2x_msg/msg/detail/allowed_maneuvers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AllowedManeuvers_reserved1
{
public:
  explicit Init_AllowedManeuvers_reserved1(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AllowedManeuvers reserved1(::v2x_msg::msg::AllowedManeuvers::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_caution
{
public:
  explicit Init_AllowedManeuvers_caution(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_reserved1 caution(::v2x_msg::msg::AllowedManeuvers::_caution_type arg)
  {
    msg_.caution = std::move(arg);
    return Init_AllowedManeuvers_reserved1(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_gowithhalt
{
public:
  explicit Init_AllowedManeuvers_gowithhalt(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_caution gowithhalt(::v2x_msg::msg::AllowedManeuvers::_gowithhalt_type arg)
  {
    msg_.gowithhalt = std::move(arg);
    return Init_AllowedManeuvers_caution(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_yieldallwaysrequired
{
public:
  explicit Init_AllowedManeuvers_yieldallwaysrequired(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_gowithhalt yieldallwaysrequired(::v2x_msg::msg::AllowedManeuvers::_yieldallwaysrequired_type arg)
  {
    msg_.yieldallwaysrequired = std::move(arg);
    return Init_AllowedManeuvers_gowithhalt(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuvernostoppingallowed
{
public:
  explicit Init_AllowedManeuvers_maneuvernostoppingallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_yieldallwaysrequired maneuvernostoppingallowed(::v2x_msg::msg::AllowedManeuvers::_maneuvernostoppingallowed_type arg)
  {
    msg_.maneuvernostoppingallowed = std::move(arg);
    return Init_AllowedManeuvers_yieldallwaysrequired(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuverlanechangeallowed
{
public:
  explicit Init_AllowedManeuvers_maneuverlanechangeallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneuvernostoppingallowed maneuverlanechangeallowed(::v2x_msg::msg::AllowedManeuvers::_maneuverlanechangeallowed_type arg)
  {
    msg_.maneuverlanechangeallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuvernostoppingallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneverrightturnonredallowed
{
public:
  explicit Init_AllowedManeuvers_maneverrightturnonredallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneuverlanechangeallowed maneverrightturnonredallowed(::v2x_msg::msg::AllowedManeuvers::_maneverrightturnonredallowed_type arg)
  {
    msg_.maneverrightturnonredallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuverlanechangeallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuverleftturnonredallowed
{
public:
  explicit Init_AllowedManeuvers_maneuverleftturnonredallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneverrightturnonredallowed maneuverleftturnonredallowed(::v2x_msg::msg::AllowedManeuvers::_maneuverleftturnonredallowed_type arg)
  {
    msg_.maneuverleftturnonredallowed = std::move(arg);
    return Init_AllowedManeuvers_maneverrightturnonredallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuveruturnallowed
{
public:
  explicit Init_AllowedManeuvers_maneuveruturnallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneuverleftturnonredallowed maneuveruturnallowed(::v2x_msg::msg::AllowedManeuvers::_maneuveruturnallowed_type arg)
  {
    msg_.maneuveruturnallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuverleftturnonredallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuverrightallowed
{
public:
  explicit Init_AllowedManeuvers_maneuverrightallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneuveruturnallowed maneuverrightallowed(::v2x_msg::msg::AllowedManeuvers::_maneuverrightallowed_type arg)
  {
    msg_.maneuverrightallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuveruturnallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuverleftallowed
{
public:
  explicit Init_AllowedManeuvers_maneuverleftallowed(::v2x_msg::msg::AllowedManeuvers & msg)
  : msg_(msg)
  {}
  Init_AllowedManeuvers_maneuverrightallowed maneuverleftallowed(::v2x_msg::msg::AllowedManeuvers::_maneuverleftallowed_type arg)
  {
    msg_.maneuverleftallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuverrightallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

class Init_AllowedManeuvers_maneuverstraightallowed
{
public:
  Init_AllowedManeuvers_maneuverstraightallowed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllowedManeuvers_maneuverleftallowed maneuverstraightallowed(::v2x_msg::msg::AllowedManeuvers::_maneuverstraightallowed_type arg)
  {
    msg_.maneuverstraightallowed = std::move(arg);
    return Init_AllowedManeuvers_maneuverleftallowed(msg_);
  }

private:
  ::v2x_msg::msg::AllowedManeuvers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AllowedManeuvers>()
{
  return v2x_msg::msg::builder::Init_AllowedManeuvers_maneuverstraightallowed();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_
