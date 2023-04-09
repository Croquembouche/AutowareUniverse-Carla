// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PVD__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PVD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/pvd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PVD_snapshots
{
public:
  explicit Init_PVD_snapshots(::v2x_msg::msg::PVD & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PVD snapshots(::v2x_msg::msg::PVD::_snapshots_type arg)
  {
    msg_.snapshots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

class Init_PVD_vehicletype
{
public:
  explicit Init_PVD_vehicletype(::v2x_msg::msg::PVD & msg)
  : msg_(msg)
  {}
  Init_PVD_snapshots vehicletype(::v2x_msg::msg::PVD::_vehicletype_type arg)
  {
    msg_.vehicletype = std::move(arg);
    return Init_PVD_snapshots(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

class Init_PVD_startvector
{
public:
  explicit Init_PVD_startvector(::v2x_msg::msg::PVD & msg)
  : msg_(msg)
  {}
  Init_PVD_vehicletype startvector(::v2x_msg::msg::PVD::_startvector_type arg)
  {
    msg_.startvector = std::move(arg);
    return Init_PVD_vehicletype(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

class Init_PVD_probeid
{
public:
  explicit Init_PVD_probeid(::v2x_msg::msg::PVD & msg)
  : msg_(msg)
  {}
  Init_PVD_startvector probeid(::v2x_msg::msg::PVD::_probeid_type arg)
  {
    msg_.probeid = std::move(arg);
    return Init_PVD_startvector(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

class Init_PVD_segnum
{
public:
  explicit Init_PVD_segnum(::v2x_msg::msg::PVD & msg)
  : msg_(msg)
  {}
  Init_PVD_probeid segnum(::v2x_msg::msg::PVD::_segnum_type arg)
  {
    msg_.segnum = std::move(arg);
    return Init_PVD_probeid(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

class Init_PVD_timstamp
{
public:
  Init_PVD_timstamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PVD_segnum timstamp(::v2x_msg::msg::PVD::_timstamp_type arg)
  {
    msg_.timstamp = std::move(arg);
    return Init_PVD_segnum(msg_);
  }

private:
  ::v2x_msg::msg::PVD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PVD>()
{
  return v2x_msg::msg::builder::Init_PVD_timstamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PVD__BUILDER_HPP_
