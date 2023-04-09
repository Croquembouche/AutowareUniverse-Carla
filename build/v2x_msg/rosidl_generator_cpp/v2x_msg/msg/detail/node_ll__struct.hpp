// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'delta'
#include "v2x_msg/msg/detail/node_offset_point_ll__struct.hpp"
// Member 'attributes'
#include "v2x_msg/msg/detail/node_attribute_set_ll__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeLL __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeLL __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeLL_
{
  using Type = NodeLL_<ContainerAllocator>;

  explicit NodeLL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta(_init),
    attributes(_init)
  {
    (void)_init;
  }

  explicit NodeLL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta(_alloc, _init),
    attributes(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _delta_type =
    v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator>;
  _delta_type delta;
  using _attributes_type =
    v2x_msg::msg::NodeAttributeSetLL_<ContainerAllocator>;
  _attributes_type attributes;

  // setters for named parameter idiom
  Type & set__delta(
    const v2x_msg::msg::NodeOffsetPointLL_<ContainerAllocator> & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__attributes(
    const v2x_msg::msg::NodeAttributeSetLL_<ContainerAllocator> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeLL_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeLL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeLL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeLL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeLL
    std::shared_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeLL
    std::shared_ptr<v2x_msg::msg::NodeLL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeLL_ & other) const
  {
    if (this->delta != other.delta) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeLL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeLL_

// alias to use template instance with default allocator
using NodeLL =
  v2x_msg::msg::NodeLL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL__STRUCT_HPP_
