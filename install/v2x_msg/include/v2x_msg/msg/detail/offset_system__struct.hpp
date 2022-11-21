// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/OffsetSystem.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'offset'
#include "v2x_msg/msg/detail/offset__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__OffsetSystem __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__OffsetSystem __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetSystem_
{
  using Type = OffsetSystem_<ContainerAllocator>;

  explicit OffsetSystem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale = 0ll;
    }
  }

  explicit OffsetSystem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale = 0ll;
    }
  }

  // field types and members
  using _scale_type =
    int64_t;
  _scale_type scale;
  using _offset_type =
    v2x_msg::msg::Offset_<ContainerAllocator>;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__scale(
    const int64_t & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__offset(
    const v2x_msg::msg::Offset_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::OffsetSystem_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::OffsetSystem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::OffsetSystem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::OffsetSystem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__OffsetSystem
    std::shared_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__OffsetSystem
    std::shared_ptr<v2x_msg::msg::OffsetSystem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetSystem_ & other) const
  {
    if (this->scale != other.scale) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetSystem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetSystem_

// alias to use template instance with default allocator
using OffsetSystem =
  v2x_msg::msg::OffsetSystem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_HPP_
