// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'users'
#include "v2x_msg/msg/detail/restriction_user_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RestrictionClassAssignment __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RestrictionClassAssignment __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionClassAssignment_
{
  using Type = RestrictionClassAssignment_<ContainerAllocator>;

  explicit RestrictionClassAssignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restrictionclassid = 0ll;
    }
  }

  explicit RestrictionClassAssignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restrictionclassid = 0ll;
    }
  }

  // field types and members
  using _restrictionclassid_type =
    int64_t;
  _restrictionclassid_type restrictionclassid;
  using _users_type =
    std::vector<v2x_msg::msg::RestrictionUserType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RestrictionUserType_<ContainerAllocator>>>;
  _users_type users;

  // setters for named parameter idiom
  Type & set__restrictionclassid(
    const int64_t & _arg)
  {
    this->restrictionclassid = _arg;
    return *this;
  }
  Type & set__users(
    const std::vector<v2x_msg::msg::RestrictionUserType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RestrictionUserType_<ContainerAllocator>>> & _arg)
  {
    this->users = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RestrictionClassAssignment
    std::shared_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RestrictionClassAssignment
    std::shared_ptr<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionClassAssignment_ & other) const
  {
    if (this->restrictionclassid != other.restrictionclassid) {
      return false;
    }
    if (this->users != other.users) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionClassAssignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionClassAssignment_

// alias to use template instance with default allocator
using RestrictionClassAssignment =
  v2x_msg::msg::RestrictionClassAssignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_
