// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
// Member 'type'
#include "v2x_msg/msg/detail/requestor_type__struct.hpp"
// Member 'position'
#include "v2x_msg/msg/detail/requestor_position_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RequestorDescription __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RequestorDescription __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestorDescription_
{
  using Type = RequestorDescription_<ContainerAllocator>;

  explicit RequestorDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    type(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->routename = "";
      this->transitstatus = "";
      this->transitoccupancy = 0ll;
      this->transitschedule = 0ll;
    }
  }

  explicit RequestorDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    type(_alloc, _init),
    position(_alloc, _init),
    name(_alloc),
    routename(_alloc),
    transitstatus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->routename = "";
      this->transitstatus = "";
      this->transitoccupancy = 0ll;
      this->transitschedule = 0ll;
    }
  }

  // field types and members
  using _id_type =
    v2x_msg::msg::VehicleID_<ContainerAllocator>;
  _id_type id;
  using _type_type =
    v2x_msg::msg::RequestorType_<ContainerAllocator>;
  _type_type type;
  using _position_type =
    v2x_msg::msg::RequestorPositionVector_<ContainerAllocator>;
  _position_type position;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _routename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _routename_type routename;
  using _transitstatus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _transitstatus_type transitstatus;
  using _transitoccupancy_type =
    int64_t;
  _transitoccupancy_type transitoccupancy;
  using _transitschedule_type =
    int64_t;
  _transitschedule_type transitschedule;

  // setters for named parameter idiom
  Type & set__id(
    const v2x_msg::msg::VehicleID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const v2x_msg::msg::RequestorType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__position(
    const v2x_msg::msg::RequestorPositionVector_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__routename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->routename = _arg;
    return *this;
  }
  Type & set__transitstatus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->transitstatus = _arg;
    return *this;
  }
  Type & set__transitoccupancy(
    const int64_t & _arg)
  {
    this->transitoccupancy = _arg;
    return *this;
  }
  Type & set__transitschedule(
    const int64_t & _arg)
  {
    this->transitschedule = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RequestorDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RequestorDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RequestorDescription
    std::shared_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RequestorDescription
    std::shared_ptr<v2x_msg::msg::RequestorDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestorDescription_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->routename != other.routename) {
      return false;
    }
    if (this->transitstatus != other.transitstatus) {
      return false;
    }
    if (this->transitoccupancy != other.transitoccupancy) {
      return false;
    }
    if (this->transitschedule != other.transitschedule) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestorDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestorDescription_

// alias to use template instance with default allocator
using RequestorDescription =
  v2x_msg::msg::RequestorDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_HPP_
