// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PSM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PSM__BUILDER_HPP_

#include "v2x_msg/msg/detail/psm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PSM_animaltype
{
public:
  explicit Init_PSM_animaltype(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PSM animaltype(::v2x_msg::msg::PSM::_animaltype_type arg)
  {
    msg_.animaltype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_attachmentradius
{
public:
  explicit Init_PSM_attachmentradius(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_animaltype attachmentradius(::v2x_msg::msg::PSM::_attachmentradius_type arg)
  {
    msg_.attachmentradius = std::move(arg);
    return Init_PSM_animaltype(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_attachment
{
public:
  explicit Init_PSM_attachment(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachmentradius attachment(::v2x_msg::msg::PSM::_attachment_type arg)
  {
    msg_.attachment = std::move(arg);
    return Init_PSM_attachmentradius(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_sizing
{
public:
  explicit Init_PSM_sizing(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachment sizing(::v2x_msg::msg::PSM::_sizing_type arg)
  {
    msg_.sizing = std::move(arg);
    return Init_PSM_attachment(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_assisttype
{
public:
  explicit Init_PSM_assisttype(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_sizing assisttype(::v2x_msg::msg::PSM::_assisttype_type arg)
  {
    msg_.assisttype = std::move(arg);
    return Init_PSM_sizing(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_activitysubtype
{
public:
  explicit Init_PSM_activitysubtype(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_assisttype activitysubtype(::v2x_msg::msg::PSM::_activitysubtype_type arg)
  {
    msg_.activitysubtype = std::move(arg);
    return Init_PSM_assisttype(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_activitytype
{
public:
  explicit Init_PSM_activitytype(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activitysubtype activitytype(::v2x_msg::msg::PSM::_activitytype_type arg)
  {
    msg_.activitytype = std::move(arg);
    return Init_PSM_activitysubtype(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_eventrespondertype
{
public:
  explicit Init_PSM_eventrespondertype(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activitytype eventrespondertype(::v2x_msg::msg::PSM::_eventrespondertype_type arg)
  {
    msg_.eventrespondertype = std::move(arg);
    return Init_PSM_activitytype(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_clusterradius
{
public:
  explicit Init_PSM_clusterradius(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_eventrespondertype clusterradius(::v2x_msg::msg::PSM::_clusterradius_type arg)
  {
    msg_.clusterradius = std::move(arg);
    return Init_PSM_eventrespondertype(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_clustersize
{
public:
  explicit Init_PSM_clustersize(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_clusterradius clustersize(::v2x_msg::msg::PSM::_clustersize_type arg)
  {
    msg_.clustersize = std::move(arg);
    return Init_PSM_clusterradius(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_crossstate
{
public:
  explicit Init_PSM_crossstate(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_clustersize crossstate(::v2x_msg::msg::PSM::_crossstate_type arg)
  {
    msg_.crossstate = std::move(arg);
    return Init_PSM_clustersize(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_crossrequest
{
public:
  explicit Init_PSM_crossrequest(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_crossstate crossrequest(::v2x_msg::msg::PSM::_crossrequest_type arg)
  {
    msg_.crossrequest = std::move(arg);
    return Init_PSM_crossstate(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_usestate
{
public:
  explicit Init_PSM_usestate(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_crossrequest usestate(::v2x_msg::msg::PSM::_usestate_type arg)
  {
    msg_.usestate = std::move(arg);
    return Init_PSM_crossrequest(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_propulsion
{
public:
  explicit Init_PSM_propulsion(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_usestate propulsion(::v2x_msg::msg::PSM::_propulsion_type arg)
  {
    msg_.propulsion = std::move(arg);
    return Init_PSM_usestate(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_pathprediction
{
public:
  explicit Init_PSM_pathprediction(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_propulsion pathprediction(::v2x_msg::msg::PSM::_pathprediction_type arg)
  {
    msg_.pathprediction = std::move(arg);
    return Init_PSM_propulsion(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_pathhistory
{
public:
  explicit Init_PSM_pathhistory(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_pathprediction pathhistory(::v2x_msg::msg::PSM::_pathhistory_type arg)
  {
    msg_.pathhistory = std::move(arg);
    return Init_PSM_pathprediction(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_accelset
{
public:
  explicit Init_PSM_accelset(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_pathhistory accelset(::v2x_msg::msg::PSM::_accelset_type arg)
  {
    msg_.accelset = std::move(arg);
    return Init_PSM_pathhistory(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_heading
{
public:
  explicit Init_PSM_heading(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accelset heading(::v2x_msg::msg::PSM::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_PSM_accelset(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_speed
{
public:
  explicit Init_PSM_speed(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_heading speed(::v2x_msg::msg::PSM::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PSM_heading(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_accuracy
{
public:
  explicit Init_PSM_accuracy(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_speed accuracy(::v2x_msg::msg::PSM::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_PSM_speed(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_position
{
public:
  explicit Init_PSM_position(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accuracy position(::v2x_msg::msg::PSM::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PSM_accuracy(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_id
{
public:
  explicit Init_PSM_id(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_position id(::v2x_msg::msg::PSM::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PSM_position(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_msgcnt
{
public:
  explicit Init_PSM_msgcnt(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_id msgcnt(::v2x_msg::msg::PSM::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_PSM_id(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_secmark
{
public:
  explicit Init_PSM_secmark(::v2x_msg::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_msgcnt secmark(::v2x_msg::msg::PSM::_secmark_type arg)
  {
    msg_.secmark = std::move(arg);
    return Init_PSM_msgcnt(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

class Init_PSM_basictype
{
public:
  Init_PSM_basictype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PSM_secmark basictype(::v2x_msg::msg::PSM::_basictype_type arg)
  {
    msg_.basictype = std::move(arg);
    return Init_PSM_secmark(msg_);
  }

private:
  ::v2x_msg::msg::PSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PSM>()
{
  return v2x_msg::msg::builder::Init_PSM_basictype();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PSM__BUILDER_HPP_
