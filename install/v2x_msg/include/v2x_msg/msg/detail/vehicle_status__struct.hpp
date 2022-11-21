// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'wipers'
#include "v2x_msg/msg/detail/wiper_set__struct.hpp"
// Member 'brakestatus'
#include "v2x_msg/msg/detail/brake_system_status__struct.hpp"
// Member 'steering'
#include "v2x_msg/msg/detail/steering__struct.hpp"
// Member 'accelsets'
#include "v2x_msg/msg/detail/accel_sets__struct.hpp"
// Member 'object'
#include "v2x_msg/msg/detail/object__struct.hpp"
// Member 'fullpos'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
// Member 'speedheadc'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
// Member 'vehicledata'
#include "v2x_msg/msg/detail/vehicle_data__struct.hpp"
// Member 'vehicleident'
#include "v2x_msg/msg/detail/vehicle_ident__struct.hpp"
// Member 'j1939data'
#include "v2x_msg/msg/detail/j1939data__struct.hpp"
// Member 'weatherreport'
#include "v2x_msg/msg/detail/weather_report__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleStatus __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wipers(_init),
    brakestatus(_init),
    steering(_init),
    accelsets(_init),
    object(_init),
    fullpos(_init),
    speedheadc(_init),
    vehicledata(_init),
    vehicleident(_init),
    j1939data(_init),
    weatherreport(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lights = "";
      this->lightbar = 0ll;
      this->roadfriction = 0ll;
      this->sundata = 0ll;
      this->raindata = 0ll;
      this->airtemp = 0ll;
      this->airpres = 0ll;
      this->throttlepos = 0ll;
      this->speedc = 0ll;
      this->gnssstatus = "";
    }
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lights(_alloc),
    wipers(_alloc, _init),
    brakestatus(_alloc, _init),
    steering(_alloc, _init),
    accelsets(_alloc, _init),
    object(_alloc, _init),
    fullpos(_alloc, _init),
    speedheadc(_alloc, _init),
    vehicledata(_alloc, _init),
    vehicleident(_alloc, _init),
    j1939data(_alloc, _init),
    weatherreport(_alloc, _init),
    gnssstatus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lights = "";
      this->lightbar = 0ll;
      this->roadfriction = 0ll;
      this->sundata = 0ll;
      this->raindata = 0ll;
      this->airtemp = 0ll;
      this->airpres = 0ll;
      this->throttlepos = 0ll;
      this->speedc = 0ll;
      this->gnssstatus = "";
    }
  }

  // field types and members
  using _lights_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lights_type lights;
  using _lightbar_type =
    int64_t;
  _lightbar_type lightbar;
  using _wipers_type =
    v2x_msg::msg::WiperSet_<ContainerAllocator>;
  _wipers_type wipers;
  using _brakestatus_type =
    v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>;
  _brakestatus_type brakestatus;
  using _roadfriction_type =
    int64_t;
  _roadfriction_type roadfriction;
  using _sundata_type =
    int64_t;
  _sundata_type sundata;
  using _raindata_type =
    int64_t;
  _raindata_type raindata;
  using _airtemp_type =
    int64_t;
  _airtemp_type airtemp;
  using _airpres_type =
    int64_t;
  _airpres_type airpres;
  using _steering_type =
    v2x_msg::msg::Steering_<ContainerAllocator>;
  _steering_type steering;
  using _accelsets_type =
    v2x_msg::msg::AccelSets_<ContainerAllocator>;
  _accelsets_type accelsets;
  using _object_type =
    v2x_msg::msg::Object_<ContainerAllocator>;
  _object_type object;
  using _fullpos_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _fullpos_type fullpos;
  using _throttlepos_type =
    int64_t;
  _throttlepos_type throttlepos;
  using _speedheadc_type =
    v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;
  _speedheadc_type speedheadc;
  using _speedc_type =
    int64_t;
  _speedc_type speedc;
  using _vehicledata_type =
    v2x_msg::msg::VehicleData_<ContainerAllocator>;
  _vehicledata_type vehicledata;
  using _vehicleident_type =
    v2x_msg::msg::VehicleIdent_<ContainerAllocator>;
  _vehicleident_type vehicleident;
  using _j1939data_type =
    v2x_msg::msg::J1939data_<ContainerAllocator>;
  _j1939data_type j1939data;
  using _weatherreport_type =
    v2x_msg::msg::WeatherReport_<ContainerAllocator>;
  _weatherreport_type weatherreport;
  using _gnssstatus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gnssstatus_type gnssstatus;

  // setters for named parameter idiom
  Type & set__lights(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lights = _arg;
    return *this;
  }
  Type & set__lightbar(
    const int64_t & _arg)
  {
    this->lightbar = _arg;
    return *this;
  }
  Type & set__wipers(
    const v2x_msg::msg::WiperSet_<ContainerAllocator> & _arg)
  {
    this->wipers = _arg;
    return *this;
  }
  Type & set__brakestatus(
    const v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> & _arg)
  {
    this->brakestatus = _arg;
    return *this;
  }
  Type & set__roadfriction(
    const int64_t & _arg)
  {
    this->roadfriction = _arg;
    return *this;
  }
  Type & set__sundata(
    const int64_t & _arg)
  {
    this->sundata = _arg;
    return *this;
  }
  Type & set__raindata(
    const int64_t & _arg)
  {
    this->raindata = _arg;
    return *this;
  }
  Type & set__airtemp(
    const int64_t & _arg)
  {
    this->airtemp = _arg;
    return *this;
  }
  Type & set__airpres(
    const int64_t & _arg)
  {
    this->airpres = _arg;
    return *this;
  }
  Type & set__steering(
    const v2x_msg::msg::Steering_<ContainerAllocator> & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__accelsets(
    const v2x_msg::msg::AccelSets_<ContainerAllocator> & _arg)
  {
    this->accelsets = _arg;
    return *this;
  }
  Type & set__object(
    const v2x_msg::msg::Object_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__fullpos(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->fullpos = _arg;
    return *this;
  }
  Type & set__throttlepos(
    const int64_t & _arg)
  {
    this->throttlepos = _arg;
    return *this;
  }
  Type & set__speedheadc(
    const v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> & _arg)
  {
    this->speedheadc = _arg;
    return *this;
  }
  Type & set__speedc(
    const int64_t & _arg)
  {
    this->speedc = _arg;
    return *this;
  }
  Type & set__vehicledata(
    const v2x_msg::msg::VehicleData_<ContainerAllocator> & _arg)
  {
    this->vehicledata = _arg;
    return *this;
  }
  Type & set__vehicleident(
    const v2x_msg::msg::VehicleIdent_<ContainerAllocator> & _arg)
  {
    this->vehicleident = _arg;
    return *this;
  }
  Type & set__j1939data(
    const v2x_msg::msg::J1939data_<ContainerAllocator> & _arg)
  {
    this->j1939data = _arg;
    return *this;
  }
  Type & set__weatherreport(
    const v2x_msg::msg::WeatherReport_<ContainerAllocator> & _arg)
  {
    this->weatherreport = _arg;
    return *this;
  }
  Type & set__gnssstatus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gnssstatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleStatus
    std::shared_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleStatus
    std::shared_ptr<v2x_msg::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->lights != other.lights) {
      return false;
    }
    if (this->lightbar != other.lightbar) {
      return false;
    }
    if (this->wipers != other.wipers) {
      return false;
    }
    if (this->brakestatus != other.brakestatus) {
      return false;
    }
    if (this->roadfriction != other.roadfriction) {
      return false;
    }
    if (this->sundata != other.sundata) {
      return false;
    }
    if (this->raindata != other.raindata) {
      return false;
    }
    if (this->airtemp != other.airtemp) {
      return false;
    }
    if (this->airpres != other.airpres) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->accelsets != other.accelsets) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->fullpos != other.fullpos) {
      return false;
    }
    if (this->throttlepos != other.throttlepos) {
      return false;
    }
    if (this->speedheadc != other.speedheadc) {
      return false;
    }
    if (this->speedc != other.speedc) {
      return false;
    }
    if (this->vehicledata != other.vehicledata) {
      return false;
    }
    if (this->vehicleident != other.vehicleident) {
      return false;
    }
    if (this->j1939data != other.j1939data) {
      return false;
    }
    if (this->weatherreport != other.weatherreport) {
      return false;
    }
    if (this->gnssstatus != other.gnssstatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatus_

// alias to use template instance with default allocator
using VehicleStatus =
  v2x_msg::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
