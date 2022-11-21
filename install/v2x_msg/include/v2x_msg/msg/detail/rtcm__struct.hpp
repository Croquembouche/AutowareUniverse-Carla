// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTCM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__RTCM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'anchorpoint'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
// Member 'rtcmheader'
#include "v2x_msg/msg/detail/rtc_mheader__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RTCM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RTCM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCM_
{
  using Type = RTCM_<ContainerAllocator>;

  explicit RTCM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : anchorpoint(_init),
    rtcmheader(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->rev = 0ll;
      this->timestamp = 0ll;
    }
  }

  explicit RTCM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : anchorpoint(_alloc, _init),
    rtcmheader(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->rev = 0ll;
      this->timestamp = 0ll;
    }
  }

  // field types and members
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _rev_type =
    int64_t;
  _rev_type rev;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _anchorpoint_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _anchorpoint_type anchorpoint;
  using _rtcmheader_type =
    v2x_msg::msg::RTCMheader_<ContainerAllocator>;
  _rtcmheader_type rtcmheader;
  using _msgs_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _msgs_type msgs;

  // setters for named parameter idiom
  Type & set__msgcnt(
    const int64_t & _arg)
  {
    this->msgcnt = _arg;
    return *this;
  }
  Type & set__rev(
    const int64_t & _arg)
  {
    this->rev = _arg;
    return *this;
  }
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__anchorpoint(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->anchorpoint = _arg;
    return *this;
  }
  Type & set__rtcmheader(
    const v2x_msg::msg::RTCMheader_<ContainerAllocator> & _arg)
  {
    this->rtcmheader = _arg;
    return *this;
  }
  Type & set__msgs(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->msgs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RTCM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RTCM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RTCM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RTCM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RTCM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RTCM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RTCM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RTCM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RTCM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RTCM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RTCM
    std::shared_ptr<v2x_msg::msg::RTCM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RTCM
    std::shared_ptr<v2x_msg::msg::RTCM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCM_ & other) const
  {
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->anchorpoint != other.anchorpoint) {
      return false;
    }
    if (this->rtcmheader != other.rtcmheader) {
      return false;
    }
    if (this->msgs != other.msgs) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCM_

// alias to use template instance with default allocator
using RTCM =
  v2x_msg::msg::RTCM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RTCM__STRUCT_HPP_
