// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__HLMsg01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg01_
{
  using Type = HLMsg01_<ContainerAllocator>;

  explicit HLMsg01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_01 = 0;
      this->hl_target_pressure_rr = 0.0;
      this->hl_target_pressure_rl = 0.0;
      this->hl_target_pressure_fr = 0.0;
      this->hl_target_pressure_fl = 0.0;
      this->hl_target_gear = 0;
      this->hl_target_throttle = 0.0;
    }
  }

  explicit HLMsg01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_01 = 0;
      this->hl_target_pressure_rr = 0.0;
      this->hl_target_pressure_rl = 0.0;
      this->hl_target_pressure_fr = 0.0;
      this->hl_target_pressure_fl = 0.0;
      this->hl_target_gear = 0;
      this->hl_target_throttle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hl_alive_01_type =
    uint8_t;
  _hl_alive_01_type hl_alive_01;
  using _hl_target_pressure_rr_type =
    double;
  _hl_target_pressure_rr_type hl_target_pressure_rr;
  using _hl_target_pressure_rl_type =
    double;
  _hl_target_pressure_rl_type hl_target_pressure_rl;
  using _hl_target_pressure_fr_type =
    double;
  _hl_target_pressure_fr_type hl_target_pressure_fr;
  using _hl_target_pressure_fl_type =
    double;
  _hl_target_pressure_fl_type hl_target_pressure_fl;
  using _hl_target_gear_type =
    uint8_t;
  _hl_target_gear_type hl_target_gear;
  using _hl_target_throttle_type =
    double;
  _hl_target_throttle_type hl_target_throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hl_alive_01(
    const uint8_t & _arg)
  {
    this->hl_alive_01 = _arg;
    return *this;
  }
  Type & set__hl_target_pressure_rr(
    const double & _arg)
  {
    this->hl_target_pressure_rr = _arg;
    return *this;
  }
  Type & set__hl_target_pressure_rl(
    const double & _arg)
  {
    this->hl_target_pressure_rl = _arg;
    return *this;
  }
  Type & set__hl_target_pressure_fr(
    const double & _arg)
  {
    this->hl_target_pressure_fr = _arg;
    return *this;
  }
  Type & set__hl_target_pressure_fl(
    const double & _arg)
  {
    this->hl_target_pressure_fl = _arg;
    return *this;
  }
  Type & set__hl_target_gear(
    const uint8_t & _arg)
  {
    this->hl_target_gear = _arg;
    return *this;
  }
  Type & set__hl_target_throttle(
    const double & _arg)
  {
    this->hl_target_throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg01
    std::shared_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg01
    std::shared_ptr<sd_can_msgs::msg::HLMsg01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hl_alive_01 != other.hl_alive_01) {
      return false;
    }
    if (this->hl_target_pressure_rr != other.hl_target_pressure_rr) {
      return false;
    }
    if (this->hl_target_pressure_rl != other.hl_target_pressure_rl) {
      return false;
    }
    if (this->hl_target_pressure_fr != other.hl_target_pressure_fr) {
      return false;
    }
    if (this->hl_target_pressure_fl != other.hl_target_pressure_fl) {
      return false;
    }
    if (this->hl_target_gear != other.hl_target_gear) {
      return false;
    }
    if (this->hl_target_throttle != other.hl_target_throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg01_

// alias to use template instance with default allocator
using HLMsg01 =
  sd_can_msgs::msg::HLMsg01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG01__STRUCT_HPP_
