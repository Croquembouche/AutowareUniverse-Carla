// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/antenna_offset_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AntennaOffsetSet_antoffsetz
{
public:
  explicit Init_AntennaOffsetSet_antoffsetz(::v2x_msg::msg::AntennaOffsetSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AntennaOffsetSet antoffsetz(::v2x_msg::msg::AntennaOffsetSet::_antoffsetz_type arg)
  {
    msg_.antoffsetz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AntennaOffsetSet msg_;
};

class Init_AntennaOffsetSet_antoffsety
{
public:
  explicit Init_AntennaOffsetSet_antoffsety(::v2x_msg::msg::AntennaOffsetSet & msg)
  : msg_(msg)
  {}
  Init_AntennaOffsetSet_antoffsetz antoffsety(::v2x_msg::msg::AntennaOffsetSet::_antoffsety_type arg)
  {
    msg_.antoffsety = std::move(arg);
    return Init_AntennaOffsetSet_antoffsetz(msg_);
  }

private:
  ::v2x_msg::msg::AntennaOffsetSet msg_;
};

class Init_AntennaOffsetSet_antoffsetx
{
public:
  Init_AntennaOffsetSet_antoffsetx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AntennaOffsetSet_antoffsety antoffsetx(::v2x_msg::msg::AntennaOffsetSet::_antoffsetx_type arg)
  {
    msg_.antoffsetx = std::move(arg);
    return Init_AntennaOffsetSet_antoffsety(msg_);
  }

private:
  ::v2x_msg::msg::AntennaOffsetSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AntennaOffsetSet>()
{
  return v2x_msg::msg::builder::Init_AntennaOffsetSet_antoffsetx();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__BUILDER_HPP_
