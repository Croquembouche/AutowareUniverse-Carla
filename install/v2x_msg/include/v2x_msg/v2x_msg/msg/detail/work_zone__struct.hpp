// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/WorkZone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/work_zonecontent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__WorkZone __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__WorkZone __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorkZone_
{
  using Type = WorkZone_<ContainerAllocator>;

  explicit WorkZone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WorkZone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _item_type =
    std::vector<v2x_msg::msg::WorkZonecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::WorkZonecontent_<ContainerAllocator>>>;
  _item_type item;

  // setters for named parameter idiom
  Type & set__item(
    const std::vector<v2x_msg::msg::WorkZonecontent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::WorkZonecontent_<ContainerAllocator>>> & _arg)
  {
    this->item = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::WorkZone_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::WorkZone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WorkZone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WorkZone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__WorkZone
    std::shared_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__WorkZone
    std::shared_ptr<v2x_msg::msg::WorkZone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorkZone_ & other) const
  {
    if (this->item != other.item) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorkZone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorkZone_

// alias to use template instance with default allocator
using WorkZone =
  v2x_msg::msg::WorkZone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_HPP_
