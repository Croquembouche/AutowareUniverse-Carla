// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "v2x_msg/msg/detail/lane_data_attribute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeAttributeSetXY __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeAttributeSetXY __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeAttributeSetXY_
{
  using Type = NodeAttributeSetXY_<ContainerAllocator>;

  explicit NodeAttributeSetXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dwidth = 0ll;
      this->delevation = 0ll;
    }
  }

  explicit NodeAttributeSetXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dwidth = 0ll;
      this->delevation = 0ll;
    }
  }

  // field types and members
  using _localnode_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _localnode_type localnode;
  using _disabled_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _disabled_type disabled;
  using _enabled_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _enabled_type enabled;
  using _data_type =
    std::vector<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>>;
  _data_type data;
  using _dwidth_type =
    int64_t;
  _dwidth_type dwidth;
  using _delevation_type =
    int64_t;
  _delevation_type delevation;

  // setters for named parameter idiom
  Type & set__localnode(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->localnode = _arg;
    return *this;
  }
  Type & set__disabled(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->disabled = _arg;
    return *this;
  }
  Type & set__enabled(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__dwidth(
    const int64_t & _arg)
  {
    this->dwidth = _arg;
    return *this;
  }
  Type & set__delevation(
    const int64_t & _arg)
  {
    this->delevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeAttributeSetXY
    std::shared_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeAttributeSetXY
    std::shared_ptr<v2x_msg::msg::NodeAttributeSetXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeAttributeSetXY_ & other) const
  {
    if (this->localnode != other.localnode) {
      return false;
    }
    if (this->disabled != other.disabled) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->dwidth != other.dwidth) {
      return false;
    }
    if (this->delevation != other.delevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeAttributeSetXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeAttributeSetXY_

// alias to use template instance with default allocator
using NodeAttributeSetXY =
  v2x_msg::msg::NodeAttributeSetXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_
