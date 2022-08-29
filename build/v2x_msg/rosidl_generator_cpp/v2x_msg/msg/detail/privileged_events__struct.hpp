// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PrivilegedEvents __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PrivilegedEvents __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrivilegedEvents_
{
  using Type = PrivilegedEvents_<ContainerAllocator>;

  explicit PrivilegedEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->event = "";
    }
  }

  explicit PrivilegedEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->notused = 0ll;
      this->event = "";
    }
  }

  // field types and members
  using _notused_type =
    int64_t;
  _notused_type notused;
  using _event_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type event;

  // setters for named parameter idiom
  Type & set__notused(
    const int64_t & _arg)
  {
    this->notused = _arg;
    return *this;
  }
  Type & set__event(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PrivilegedEvents
    std::shared_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PrivilegedEvents
    std::shared_ptr<v2x_msg::msg::PrivilegedEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrivilegedEvents_ & other) const
  {
    if (this->notused != other.notused) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrivilegedEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrivilegedEvents_

// alias to use template instance with default allocator
using PrivilegedEvents =
  v2x_msg::msg::PrivilegedEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_
