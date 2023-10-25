// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__LaneAttributes __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__LaneAttributes __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAttributes_
{
  using Type = LaneAttributes_<ContainerAllocator>;

  explicit LaneAttributes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->directionaluse = "";
      this->sharedwith = "";
      this->lanetype = 0ll;
    }
  }

  explicit LaneAttributes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : directionaluse(_alloc),
    sharedwith(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->directionaluse = "";
      this->sharedwith = "";
      this->lanetype = 0ll;
    }
  }

  // field types and members
  using _directionaluse_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _directionaluse_type directionaluse;
  using _sharedwith_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sharedwith_type sharedwith;
  using _lanetype_type =
    int64_t;
  _lanetype_type lanetype;

  // setters for named parameter idiom
  Type & set__directionaluse(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->directionaluse = _arg;
    return *this;
  }
  Type & set__sharedwith(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sharedwith = _arg;
    return *this;
  }
  Type & set__lanetype(
    const int64_t & _arg)
  {
    this->lanetype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::LaneAttributes_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::LaneAttributes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneAttributes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneAttributes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__LaneAttributes
    std::shared_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__LaneAttributes
    std::shared_ptr<v2x_msg::msg::LaneAttributes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAttributes_ & other) const
  {
    if (this->directionaluse != other.directionaluse) {
      return false;
    }
    if (this->sharedwith != other.sharedwith) {
      return false;
    }
    if (this->lanetype != other.lanetype) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAttributes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAttributes_

// alias to use template instance with default allocator
using LaneAttributes =
  v2x_msg::msg::LaneAttributes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_
