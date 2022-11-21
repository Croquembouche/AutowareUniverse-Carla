// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__OffsetYaxis __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__OffsetYaxis __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetYaxis_
{
  using Type = OffsetYaxis_<ContainerAllocator>;

  explicit OffsetYaxis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->small = 0ll;
      this->large = 0ll;
    }
  }

  explicit OffsetYaxis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->small = 0ll;
      this->large = 0ll;
    }
  }

  // field types and members
  using _small_type =
    int64_t;
  _small_type small;
  using _large_type =
    int64_t;
  _large_type large;

  // setters for named parameter idiom
  Type & set__small(
    const int64_t & _arg)
  {
    this->small = _arg;
    return *this;
  }
  Type & set__large(
    const int64_t & _arg)
  {
    this->large = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::OffsetYaxis_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::OffsetYaxis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::OffsetYaxis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::OffsetYaxis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__OffsetYaxis
    std::shared_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__OffsetYaxis
    std::shared_ptr<v2x_msg::msg::OffsetYaxis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetYaxis_ & other) const
  {
    if (this->small != other.small) {
      return false;
    }
    if (this->large != other.large) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetYaxis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetYaxis_

// alias to use template instance with default allocator
using OffsetYaxis =
  v2x_msg::msg::OffsetYaxis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_
