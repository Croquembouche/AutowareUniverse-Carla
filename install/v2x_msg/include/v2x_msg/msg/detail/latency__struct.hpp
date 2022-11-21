// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Latency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Latency __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Latency __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Latency_
{
  using Type = Latency_<ContainerAllocator>;

  explicit Latency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgtime = "";
    }
  }

  explicit Latency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msgtime(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgtime = "";
    }
  }

  // field types and members
  using _msgtime_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msgtime_type msgtime;

  // setters for named parameter idiom
  Type & set__msgtime(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msgtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Latency_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Latency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Latency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Latency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Latency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Latency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Latency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Latency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Latency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Latency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Latency
    std::shared_ptr<v2x_msg::msg::Latency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Latency
    std::shared_ptr<v2x_msg::msg::Latency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Latency_ & other) const
  {
    if (this->msgtime != other.msgtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Latency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Latency_

// alias to use template instance with default allocator
using Latency =
  v2x_msg::msg::Latency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_HPP_
