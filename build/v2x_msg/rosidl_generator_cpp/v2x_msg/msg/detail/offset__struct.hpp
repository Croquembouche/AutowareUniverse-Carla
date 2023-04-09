// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'xy'
#include "v2x_msg/msg/detail/node_list_xy__struct.hpp"
// Member 'nodes'
#include "v2x_msg/msg/detail/node_ll__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Offset __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Offset __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Offset_
{
  using Type = Offset_<ContainerAllocator>;

  explicit Offset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xy(_init)
  {
    (void)_init;
  }

  explicit Offset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xy(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _xy_type =
    v2x_msg::msg::NodeListXY_<ContainerAllocator>;
  _xy_type xy;
  using _nodes_type =
    std::vector<v2x_msg::msg::NodeLL_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeLL_<ContainerAllocator>>>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__xy(
    const v2x_msg::msg::NodeListXY_<ContainerAllocator> & _arg)
  {
    this->xy = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<v2x_msg::msg::NodeLL_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeLL_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Offset_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Offset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Offset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Offset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Offset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Offset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Offset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Offset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Offset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Offset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Offset
    std::shared_ptr<v2x_msg::msg::Offset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Offset
    std::shared_ptr<v2x_msg::msg::Offset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Offset_ & other) const
  {
    if (this->xy != other.xy) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Offset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Offset_

// alias to use template instance with default allocator
using Offset =
  v2x_msg::msg::Offset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_HPP_
