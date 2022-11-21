// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ICA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ICA__BUILDER_HPP_

#include "v2x_msg/msg/detail/ica__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ICA_eventflag
{
public:
  explicit Init_ICA_eventflag(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ICA eventflag(::v2x_msg::msg::ICA::_eventflag_type arg)
  {
    msg_.eventflag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_lanenumber
{
public:
  explicit Init_ICA_lanenumber(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_eventflag lanenumber(::v2x_msg::msg::ICA::_lanenumber_type arg)
  {
    msg_.lanenumber = std::move(arg);
    return Init_ICA_eventflag(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_intersectionid
{
public:
  explicit Init_ICA_intersectionid(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_lanenumber intersectionid(::v2x_msg::msg::ICA::_intersectionid_type arg)
  {
    msg_.intersectionid = std::move(arg);
    return Init_ICA_lanenumber(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_pathprediction
{
public:
  explicit Init_ICA_pathprediction(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_intersectionid pathprediction(::v2x_msg::msg::ICA::_pathprediction_type arg)
  {
    msg_.pathprediction = std::move(arg);
    return Init_ICA_intersectionid(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_path
{
public:
  explicit Init_ICA_path(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_pathprediction path(::v2x_msg::msg::ICA::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ICA_pathprediction(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_partone
{
public:
  explicit Init_ICA_partone(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_path partone(::v2x_msg::msg::ICA::_partone_type arg)
  {
    msg_.partone = std::move(arg);
    return Init_ICA_path(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_timestamp
{
public:
  explicit Init_ICA_timestamp(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_partone timestamp(::v2x_msg::msg::ICA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ICA_partone(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_id
{
public:
  explicit Init_ICA_id(::v2x_msg::msg::ICA & msg)
  : msg_(msg)
  {}
  Init_ICA_timestamp id(::v2x_msg::msg::ICA::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ICA_timestamp(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

class Init_ICA_msgcnt
{
public:
  Init_ICA_msgcnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICA_id msgcnt(::v2x_msg::msg::ICA::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_ICA_id(msg_);
  }

private:
  ::v2x_msg::msg::ICA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ICA>()
{
  return v2x_msg::msg::builder::Init_ICA_msgcnt();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ICA__BUILDER_HPP_
