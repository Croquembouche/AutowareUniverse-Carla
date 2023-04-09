// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'msgid'
#include "v2x_msg/msg/detail/msg_id__struct.hpp"
// Member 'regions'
#include "v2x_msg/msg/detail/geographical_path__struct.hpp"
// Member 'content'
#include "v2x_msg/msg/detail/content__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TravelerDataFrame __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TravelerDataFrame __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TravelerDataFrame_
{
  using Type = TravelerDataFrame_<ContainerAllocator>;

  explicit TravelerDataFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msgid(_init),
    content(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->frametype = 0ll;
      this->startyear = 0ll;
      this->starttime = 0ll;
      this->durationtime = 0ll;
      this->priority = 0ll;
      this->notused1 = 0ll;
      this->notused2 = 0ll;
      this->notused3 = 0ll;
      this->url = "";
    }
  }

  explicit TravelerDataFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msgid(_alloc, _init),
    content(_alloc, _init),
    url(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->frametype = 0ll;
      this->startyear = 0ll;
      this->starttime = 0ll;
      this->durationtime = 0ll;
      this->priority = 0ll;
      this->notused1 = 0ll;
      this->notused2 = 0ll;
      this->notused3 = 0ll;
      this->url = "";
    }
  }

  // field types and members
  using _notused_type =
    int64_t;
  _notused_type notused;
  using _frametype_type =
    int64_t;
  _frametype_type frametype;
  using _msgid_type =
    v2x_msg::msg::MsgID_<ContainerAllocator>;
  _msgid_type msgid;
  using _startyear_type =
    int64_t;
  _startyear_type startyear;
  using _starttime_type =
    int64_t;
  _starttime_type starttime;
  using _durationtime_type =
    int64_t;
  _durationtime_type durationtime;
  using _priority_type =
    int64_t;
  _priority_type priority;
  using _notused1_type =
    int64_t;
  _notused1_type notused1;
  using _regions_type =
    std::vector<v2x_msg::msg::GeographicalPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GeographicalPath_<ContainerAllocator>>>;
  _regions_type regions;
  using _notused2_type =
    int64_t;
  _notused2_type notused2;
  using _notused3_type =
    int64_t;
  _notused3_type notused3;
  using _content_type =
    v2x_msg::msg::Content_<ContainerAllocator>;
  _content_type content;
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _url_type url;

  // setters for named parameter idiom
  Type & set__notused(
    const int64_t & _arg)
  {
    this->notused = _arg;
    return *this;
  }
  Type & set__frametype(
    const int64_t & _arg)
  {
    this->frametype = _arg;
    return *this;
  }
  Type & set__msgid(
    const v2x_msg::msg::MsgID_<ContainerAllocator> & _arg)
  {
    this->msgid = _arg;
    return *this;
  }
  Type & set__startyear(
    const int64_t & _arg)
  {
    this->startyear = _arg;
    return *this;
  }
  Type & set__starttime(
    const int64_t & _arg)
  {
    this->starttime = _arg;
    return *this;
  }
  Type & set__durationtime(
    const int64_t & _arg)
  {
    this->durationtime = _arg;
    return *this;
  }
  Type & set__priority(
    const int64_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__notused1(
    const int64_t & _arg)
  {
    this->notused1 = _arg;
    return *this;
  }
  Type & set__regions(
    const std::vector<v2x_msg::msg::GeographicalPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GeographicalPath_<ContainerAllocator>>> & _arg)
  {
    this->regions = _arg;
    return *this;
  }
  Type & set__notused2(
    const int64_t & _arg)
  {
    this->notused2 = _arg;
    return *this;
  }
  Type & set__notused3(
    const int64_t & _arg)
  {
    this->notused3 = _arg;
    return *this;
  }
  Type & set__content(
    const v2x_msg::msg::Content_<ContainerAllocator> & _arg)
  {
    this->content = _arg;
    return *this;
  }
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->url = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TravelerDataFrame
    std::shared_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TravelerDataFrame
    std::shared_ptr<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TravelerDataFrame_ & other) const
  {
    if (this->notused != other.notused) {
      return false;
    }
    if (this->frametype != other.frametype) {
      return false;
    }
    if (this->msgid != other.msgid) {
      return false;
    }
    if (this->startyear != other.startyear) {
      return false;
    }
    if (this->starttime != other.starttime) {
      return false;
    }
    if (this->durationtime != other.durationtime) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->notused1 != other.notused1) {
      return false;
    }
    if (this->regions != other.regions) {
      return false;
    }
    if (this->notused2 != other.notused2) {
      return false;
    }
    if (this->notused3 != other.notused3) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    if (this->url != other.url) {
      return false;
    }
    return true;
  }
  bool operator!=(const TravelerDataFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TravelerDataFrame_

// alias to use template instance with default allocator
using TravelerDataFrame =
  v2x_msg::msg::TravelerDataFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__STRUCT_HPP_
