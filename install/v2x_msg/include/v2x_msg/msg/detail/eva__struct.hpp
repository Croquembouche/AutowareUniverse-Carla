// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EVA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__EVA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'rsamsg'
#include "v2x_msg/msg/detail/rsa__struct.hpp"
// Member 'details'
#include "v2x_msg/msg/detail/emergency_details__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__EVA __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__EVA __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EVA_
{
  using Type = EVA_<ContainerAllocator>;

  explicit EVA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rsamsg(_init),
    details(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->id = "";
      this->responsetype = 0ll;
      this->mass = 0ll;
      this->basictype = 0ll;
      this->vehicletype = 0ll;
      this->responseequip = 0ll;
      this->respondertype = 0ll;
    }
  }

  explicit EVA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    rsamsg(_alloc, _init),
    details(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->id = "";
      this->responsetype = 0ll;
      this->mass = 0ll;
      this->basictype = 0ll;
      this->vehicletype = 0ll;
      this->responseequip = 0ll;
      this->respondertype = 0ll;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _rsamsg_type =
    v2x_msg::msg::RSA_<ContainerAllocator>;
  _rsamsg_type rsamsg;
  using _responsetype_type =
    int64_t;
  _responsetype_type responsetype;
  using _details_type =
    v2x_msg::msg::EmergencyDetails_<ContainerAllocator>;
  _details_type details;
  using _mass_type =
    int64_t;
  _mass_type mass;
  using _basictype_type =
    int64_t;
  _basictype_type basictype;
  using _vehicletype_type =
    int64_t;
  _vehicletype_type vehicletype;
  using _responseequip_type =
    int64_t;
  _responseequip_type responseequip;
  using _respondertype_type =
    int64_t;
  _respondertype_type respondertype;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__rsamsg(
    const v2x_msg::msg::RSA_<ContainerAllocator> & _arg)
  {
    this->rsamsg = _arg;
    return *this;
  }
  Type & set__responsetype(
    const int64_t & _arg)
  {
    this->responsetype = _arg;
    return *this;
  }
  Type & set__details(
    const v2x_msg::msg::EmergencyDetails_<ContainerAllocator> & _arg)
  {
    this->details = _arg;
    return *this;
  }
  Type & set__mass(
    const int64_t & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__basictype(
    const int64_t & _arg)
  {
    this->basictype = _arg;
    return *this;
  }
  Type & set__vehicletype(
    const int64_t & _arg)
  {
    this->vehicletype = _arg;
    return *this;
  }
  Type & set__responseequip(
    const int64_t & _arg)
  {
    this->responseequip = _arg;
    return *this;
  }
  Type & set__respondertype(
    const int64_t & _arg)
  {
    this->respondertype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::EVA_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::EVA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::EVA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::EVA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::EVA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::EVA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::EVA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::EVA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::EVA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::EVA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__EVA
    std::shared_ptr<v2x_msg::msg::EVA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__EVA
    std::shared_ptr<v2x_msg::msg::EVA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EVA_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->rsamsg != other.rsamsg) {
      return false;
    }
    if (this->responsetype != other.responsetype) {
      return false;
    }
    if (this->details != other.details) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->basictype != other.basictype) {
      return false;
    }
    if (this->vehicletype != other.vehicletype) {
      return false;
    }
    if (this->responseequip != other.responseequip) {
      return false;
    }
    if (this->respondertype != other.respondertype) {
      return false;
    }
    return true;
  }
  bool operator!=(const EVA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EVA_

// alias to use template instance with default allocator
using EVA =
  v2x_msg::msg::EVA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EVA__STRUCT_HPP_
