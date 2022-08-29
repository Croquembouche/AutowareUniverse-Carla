// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nodes'
#include "v2x_msg/msg/detail/node_xy__struct.hpp"
// Member 'computed'
#include "v2x_msg/msg/detail/computed_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeListXY __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeListXY __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeListXY_
{
  using Type = NodeListXY_<ContainerAllocator>;

  explicit NodeListXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : computed(_init)
  {
    (void)_init;
  }

  explicit NodeListXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : computed(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nodes_type =
    std::vector<v2x_msg::msg::NodeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeXY_<ContainerAllocator>>>;
  _nodes_type nodes;
  using _computed_type =
    v2x_msg::msg::ComputedLane_<ContainerAllocator>;
  _computed_type computed;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<v2x_msg::msg::NodeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeXY_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__computed(
    const v2x_msg::msg::ComputedLane_<ContainerAllocator> & _arg)
  {
    this->computed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeListXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeListXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeListXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeListXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeListXY
    std::shared_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeListXY
    std::shared_ptr<v2x_msg::msg::NodeListXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeListXY_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->computed != other.computed) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeListXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeListXY_

// alias to use template instance with default allocator
using NodeListXY =
  v2x_msg::msg::NodeListXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_
