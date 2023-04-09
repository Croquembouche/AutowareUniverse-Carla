// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EVA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__EVA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/eva__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_EVA_respondertype
{
public:
  explicit Init_EVA_respondertype(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::EVA respondertype(::v2x_msg::msg::EVA::_respondertype_type arg)
  {
    msg_.respondertype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_responseequip
{
public:
  explicit Init_EVA_responseequip(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_respondertype responseequip(::v2x_msg::msg::EVA::_responseequip_type arg)
  {
    msg_.responseequip = std::move(arg);
    return Init_EVA_respondertype(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_vehicletype
{
public:
  explicit Init_EVA_vehicletype(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_responseequip vehicletype(::v2x_msg::msg::EVA::_vehicletype_type arg)
  {
    msg_.vehicletype = std::move(arg);
    return Init_EVA_responseequip(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_basictype
{
public:
  explicit Init_EVA_basictype(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_vehicletype basictype(::v2x_msg::msg::EVA::_basictype_type arg)
  {
    msg_.basictype = std::move(arg);
    return Init_EVA_vehicletype(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_mass
{
public:
  explicit Init_EVA_mass(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_basictype mass(::v2x_msg::msg::EVA::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_EVA_basictype(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_details
{
public:
  explicit Init_EVA_details(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_mass details(::v2x_msg::msg::EVA::_details_type arg)
  {
    msg_.details = std::move(arg);
    return Init_EVA_mass(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_responsetype
{
public:
  explicit Init_EVA_responsetype(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_details responsetype(::v2x_msg::msg::EVA::_responsetype_type arg)
  {
    msg_.responsetype = std::move(arg);
    return Init_EVA_details(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_rsamsg
{
public:
  explicit Init_EVA_rsamsg(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_responsetype rsamsg(::v2x_msg::msg::EVA::_rsamsg_type arg)
  {
    msg_.rsamsg = std::move(arg);
    return Init_EVA_responsetype(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_id
{
public:
  explicit Init_EVA_id(::v2x_msg::msg::EVA & msg)
  : msg_(msg)
  {}
  Init_EVA_rsamsg id(::v2x_msg::msg::EVA::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EVA_rsamsg(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

class Init_EVA_timestamp
{
public:
  Init_EVA_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EVA_id timestamp(::v2x_msg::msg::EVA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EVA_id(msg_);
  }

private:
  ::v2x_msg::msg::EVA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::EVA>()
{
  return v2x_msg::msg::builder::Init_EVA_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EVA__BUILDER_HPP_
