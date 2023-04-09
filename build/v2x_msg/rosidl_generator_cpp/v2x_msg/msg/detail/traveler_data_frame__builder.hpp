// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/traveler_data_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TravelerDataFrame_url
{
public:
  explicit Init_TravelerDataFrame_url(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TravelerDataFrame url(::v2x_msg::msg::TravelerDataFrame::_url_type arg)
  {
    msg_.url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_content
{
public:
  explicit Init_TravelerDataFrame_content(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_url content(::v2x_msg::msg::TravelerDataFrame::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_TravelerDataFrame_url(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_notused3
{
public:
  explicit Init_TravelerDataFrame_notused3(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_content notused3(::v2x_msg::msg::TravelerDataFrame::_notused3_type arg)
  {
    msg_.notused3 = std::move(arg);
    return Init_TravelerDataFrame_content(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_notused2
{
public:
  explicit Init_TravelerDataFrame_notused2(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_notused3 notused2(::v2x_msg::msg::TravelerDataFrame::_notused2_type arg)
  {
    msg_.notused2 = std::move(arg);
    return Init_TravelerDataFrame_notused3(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_regions
{
public:
  explicit Init_TravelerDataFrame_regions(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_notused2 regions(::v2x_msg::msg::TravelerDataFrame::_regions_type arg)
  {
    msg_.regions = std::move(arg);
    return Init_TravelerDataFrame_notused2(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_notused1
{
public:
  explicit Init_TravelerDataFrame_notused1(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_regions notused1(::v2x_msg::msg::TravelerDataFrame::_notused1_type arg)
  {
    msg_.notused1 = std::move(arg);
    return Init_TravelerDataFrame_regions(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_priority
{
public:
  explicit Init_TravelerDataFrame_priority(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_notused1 priority(::v2x_msg::msg::TravelerDataFrame::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_TravelerDataFrame_notused1(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_durationtime
{
public:
  explicit Init_TravelerDataFrame_durationtime(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_priority durationtime(::v2x_msg::msg::TravelerDataFrame::_durationtime_type arg)
  {
    msg_.durationtime = std::move(arg);
    return Init_TravelerDataFrame_priority(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_starttime
{
public:
  explicit Init_TravelerDataFrame_starttime(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_durationtime starttime(::v2x_msg::msg::TravelerDataFrame::_starttime_type arg)
  {
    msg_.starttime = std::move(arg);
    return Init_TravelerDataFrame_durationtime(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_startyear
{
public:
  explicit Init_TravelerDataFrame_startyear(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_starttime startyear(::v2x_msg::msg::TravelerDataFrame::_startyear_type arg)
  {
    msg_.startyear = std::move(arg);
    return Init_TravelerDataFrame_starttime(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_msgid
{
public:
  explicit Init_TravelerDataFrame_msgid(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_startyear msgid(::v2x_msg::msg::TravelerDataFrame::_msgid_type arg)
  {
    msg_.msgid = std::move(arg);
    return Init_TravelerDataFrame_startyear(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_frametype
{
public:
  explicit Init_TravelerDataFrame_frametype(::v2x_msg::msg::TravelerDataFrame & msg)
  : msg_(msg)
  {}
  Init_TravelerDataFrame_msgid frametype(::v2x_msg::msg::TravelerDataFrame::_frametype_type arg)
  {
    msg_.frametype = std::move(arg);
    return Init_TravelerDataFrame_msgid(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

class Init_TravelerDataFrame_notused
{
public:
  Init_TravelerDataFrame_notused()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TravelerDataFrame_frametype notused(::v2x_msg::msg::TravelerDataFrame::_notused_type arg)
  {
    msg_.notused = std::move(arg);
    return Init_TravelerDataFrame_frametype(msg_);
  }

private:
  ::v2x_msg::msg::TravelerDataFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TravelerDataFrame>()
{
  return v2x_msg::msg::builder::Init_TravelerDataFrame_notused();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__BUILDER_HPP_
