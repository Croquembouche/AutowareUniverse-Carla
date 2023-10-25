// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PDM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PDM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/pdm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PDM_dataelements
{
public:
  explicit Init_PDM_dataelements(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PDM dataelements(::v2x_msg::msg::PDM::_dataelements_type arg)
  {
    msg_.dataelements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_txinterval
{
public:
  explicit Init_PDM_txinterval(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_dataelements txinterval(::v2x_msg::msg::PDM::_txinterval_type arg)
  {
    msg_.txinterval = std::move(arg);
    return Init_PDM_dataelements(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_snapshotdistance
{
public:
  explicit Init_PDM_snapshotdistance(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_txinterval snapshotdistance(::v2x_msg::msg::PDM::_snapshotdistance_type arg)
  {
    msg_.snapshotdistance = std::move(arg);
    return Init_PDM_txinterval(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_snapshottime
{
public:
  explicit Init_PDM_snapshottime(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_snapshotdistance snapshottime(::v2x_msg::msg::PDM::_snapshottime_type arg)
  {
    msg_.snapshottime = std::move(arg);
    return Init_PDM_snapshotdistance(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_termdistance
{
public:
  explicit Init_PDM_termdistance(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_snapshottime termdistance(::v2x_msg::msg::PDM::_termdistance_type arg)
  {
    msg_.termdistance = std::move(arg);
    return Init_PDM_snapshottime(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_termtime
{
public:
  explicit Init_PDM_termtime(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_termdistance termtime(::v2x_msg::msg::PDM::_termtime_type arg)
  {
    msg_.termtime = std::move(arg);
    return Init_PDM_termdistance(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_directions
{
public:
  explicit Init_PDM_directions(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_termtime directions(::v2x_msg::msg::PDM::_directions_type arg)
  {
    msg_.directions = std::move(arg);
    return Init_PDM_termtime(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_sample
{
public:
  explicit Init_PDM_sample(::v2x_msg::msg::PDM & msg)
  : msg_(msg)
  {}
  Init_PDM_directions sample(::v2x_msg::msg::PDM::_sample_type arg)
  {
    msg_.sample = std::move(arg);
    return Init_PDM_directions(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

class Init_PDM_timestamp
{
public:
  Init_PDM_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PDM_sample timestamp(::v2x_msg::msg::PDM::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PDM_sample(msg_);
  }

private:
  ::v2x_msg::msg::PDM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PDM>()
{
  return v2x_msg::msg::builder::Init_PDM_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PDM__BUILDER_HPP_
