// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/LaneID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ID__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__LaneID __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__LaneID __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneID_
{
  using Type = LaneID_<ContainerAllocator>;

  explicit LaneID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  explicit LaneID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::LaneID_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::LaneID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__LaneID
    std::shared_ptr<v2x_msg::msg::LaneID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__LaneID
    std::shared_ptr<v2x_msg::msg::LaneID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneID_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneID_

// alias to use template instance with default allocator
using LaneID =
  v2x_msg::msg::LaneID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_ID__STRUCT_HPP_
