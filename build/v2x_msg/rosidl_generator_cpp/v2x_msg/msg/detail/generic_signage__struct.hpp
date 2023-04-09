// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/GenericSignage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/generic_signagecontent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__GenericSignage __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__GenericSignage __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericSignage_
{
  using Type = GenericSignage_<ContainerAllocator>;

  explicit GenericSignage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GenericSignage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _item_type =
    std::vector<v2x_msg::msg::GenericSignagecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericSignagecontent_<ContainerAllocator>>>;
  _item_type item;

  // setters for named parameter idiom
  Type & set__item(
    const std::vector<v2x_msg::msg::GenericSignagecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericSignagecontent_<ContainerAllocator>>> & _arg)
  {
    this->item = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::GenericSignage_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::GenericSignage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GenericSignage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GenericSignage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__GenericSignage
    std::shared_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__GenericSignage
    std::shared_ptr<v2x_msg::msg::GenericSignage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericSignage_ & other) const
  {
    if (this->item != other.item) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericSignage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericSignage_

// alias to use template instance with default allocator
using GenericSignage =
  v2x_msg::msg::GenericSignage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGE__STRUCT_HPP_
