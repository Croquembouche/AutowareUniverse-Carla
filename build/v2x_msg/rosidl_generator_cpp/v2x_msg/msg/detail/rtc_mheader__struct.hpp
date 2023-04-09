// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RTCMheader.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTC_MHEADER__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__RTC_MHEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'offsetset'
#include "v2x_msg/msg/detail/antenna_offset_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RTCMheader __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RTCMheader __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCMheader_
{
  using Type = RTCMheader_<ContainerAllocator>;

  explicit RTCMheader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offsetset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit RTCMheader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc),
    offsetset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _offsetset_type =
    v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>;
  _offsetset_type offsetset;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__offsetset(
    const v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> & _arg)
  {
    this->offsetset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RTCMheader_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RTCMheader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RTCMheader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RTCMheader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RTCMheader
    std::shared_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RTCMheader
    std::shared_ptr<v2x_msg::msg::RTCMheader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCMheader_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->offsetset != other.offsetset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCMheader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCMheader_

// alias to use template instance with default allocator
using RTCMheader =
  v2x_msg::msg::RTCMheader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RTC_MHEADER__STRUCT_HPP_
