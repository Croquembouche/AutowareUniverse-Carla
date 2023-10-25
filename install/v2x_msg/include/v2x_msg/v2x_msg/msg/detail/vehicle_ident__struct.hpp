// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
// Member 'vehicleclass'
#include "v2x_msg/msg/detail/vehicle_class__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleIdent __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleIdent __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleIdent_
{
  using Type = VehicleIdent_<ContainerAllocator>;

  explicit VehicleIdent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    vehicleclass(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->vin = "";
      this->ownercode = "";
      this->vehicletype = 0ll;
    }
  }

  explicit VehicleIdent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    vin(_alloc),
    ownercode(_alloc),
    id(_alloc, _init),
    vehicleclass(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->vin = "";
      this->ownercode = "";
      this->vehicletype = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _vin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vin_type vin;
  using _ownercode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ownercode_type ownercode;
  using _id_type =
    v2x_msg::msg::VehicleID_<ContainerAllocator>;
  _id_type id;
  using _vehicletype_type =
    int64_t;
  _vehicletype_type vehicletype;
  using _vehicleclass_type =
    v2x_msg::msg::VehicleClass_<ContainerAllocator>;
  _vehicleclass_type vehicleclass;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__vin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vin = _arg;
    return *this;
  }
  Type & set__ownercode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ownercode = _arg;
    return *this;
  }
  Type & set__id(
    const v2x_msg::msg::VehicleID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__vehicletype(
    const int64_t & _arg)
  {
    this->vehicletype = _arg;
    return *this;
  }
  Type & set__vehicleclass(
    const v2x_msg::msg::VehicleClass_<ContainerAllocator> & _arg)
  {
    this->vehicleclass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleIdent_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleIdent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleIdent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleIdent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleIdent
    std::shared_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleIdent
    std::shared_ptr<v2x_msg::msg::VehicleIdent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleIdent_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->vin != other.vin) {
      return false;
    }
    if (this->ownercode != other.ownercode) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->vehicletype != other.vehicletype) {
      return false;
    }
    if (this->vehicleclass != other.vehicleclass) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleIdent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleIdent_

// alias to use template instance with default allocator
using VehicleIdent =
  v2x_msg::msg::VehicleIdent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_HPP_
