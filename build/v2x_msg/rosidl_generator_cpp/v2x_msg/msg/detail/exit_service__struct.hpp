// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ExitService.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/exit_servicecontent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ExitService __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ExitService __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExitService_
{
  using Type = ExitService_<ContainerAllocator>;

  explicit ExitService_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ExitService_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _item_type =
    std::vector<v2x_msg::msg::ExitServicecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ExitServicecontent_<ContainerAllocator>>>;
  _item_type item;

  // setters for named parameter idiom
  Type & set__item(
    const std::vector<v2x_msg::msg::ExitServicecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ExitServicecontent_<ContainerAllocator>>> & _arg)
  {
    this->item = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ExitService_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ExitService_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ExitService_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ExitService_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ExitService_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ExitService_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ExitService_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ExitService_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ExitService_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ExitService_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ExitService
    std::shared_ptr<v2x_msg::msg::ExitService_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ExitService
    std::shared_ptr<v2x_msg::msg::ExitService_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExitService_ & other) const
  {
    if (this->item != other.item) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExitService_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExitService_

// alias to use template instance with default allocator
using ExitService =
  v2x_msg::msg::ExitService_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_HPP_
