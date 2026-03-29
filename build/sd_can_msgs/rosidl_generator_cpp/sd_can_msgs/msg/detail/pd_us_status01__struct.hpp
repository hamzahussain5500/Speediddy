// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/PdUsStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__PdUsStatus01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__PdUsStatus01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PdUsStatus01_
{
  using Type = PdUsStatus01_<ContainerAllocator>;

  explicit PdUsStatus01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pdu12_power_supply_voltage_v = 0.0;
      this->pdu12_total_current_a = 0.0;
      this->pdu48_power_supply_voltage_v = 0.0;
      this->pdu48_total_current_a = 0.0;
      this->pdu1_power_supply_voltage_v_legacy = 0.0;
      this->pdu1_total_current_a_legacy = 0.0;
      this->pdu2_power_supply_voltage_v_legacy = 0.0;
      this->pdu2_total_current_a_legacy = 0.0;
    }
  }

  explicit PdUsStatus01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pdu12_power_supply_voltage_v = 0.0;
      this->pdu12_total_current_a = 0.0;
      this->pdu48_power_supply_voltage_v = 0.0;
      this->pdu48_total_current_a = 0.0;
      this->pdu1_power_supply_voltage_v_legacy = 0.0;
      this->pdu1_total_current_a_legacy = 0.0;
      this->pdu2_power_supply_voltage_v_legacy = 0.0;
      this->pdu2_total_current_a_legacy = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pdu12_power_supply_voltage_v_type =
    double;
  _pdu12_power_supply_voltage_v_type pdu12_power_supply_voltage_v;
  using _pdu12_total_current_a_type =
    double;
  _pdu12_total_current_a_type pdu12_total_current_a;
  using _pdu48_power_supply_voltage_v_type =
    double;
  _pdu48_power_supply_voltage_v_type pdu48_power_supply_voltage_v;
  using _pdu48_total_current_a_type =
    double;
  _pdu48_total_current_a_type pdu48_total_current_a;
  using _pdu1_power_supply_voltage_v_legacy_type =
    double;
  _pdu1_power_supply_voltage_v_legacy_type pdu1_power_supply_voltage_v_legacy;
  using _pdu1_total_current_a_legacy_type =
    double;
  _pdu1_total_current_a_legacy_type pdu1_total_current_a_legacy;
  using _pdu2_power_supply_voltage_v_legacy_type =
    double;
  _pdu2_power_supply_voltage_v_legacy_type pdu2_power_supply_voltage_v_legacy;
  using _pdu2_total_current_a_legacy_type =
    double;
  _pdu2_total_current_a_legacy_type pdu2_total_current_a_legacy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pdu12_power_supply_voltage_v(
    const double & _arg)
  {
    this->pdu12_power_supply_voltage_v = _arg;
    return *this;
  }
  Type & set__pdu12_total_current_a(
    const double & _arg)
  {
    this->pdu12_total_current_a = _arg;
    return *this;
  }
  Type & set__pdu48_power_supply_voltage_v(
    const double & _arg)
  {
    this->pdu48_power_supply_voltage_v = _arg;
    return *this;
  }
  Type & set__pdu48_total_current_a(
    const double & _arg)
  {
    this->pdu48_total_current_a = _arg;
    return *this;
  }
  Type & set__pdu1_power_supply_voltage_v_legacy(
    const double & _arg)
  {
    this->pdu1_power_supply_voltage_v_legacy = _arg;
    return *this;
  }
  Type & set__pdu1_total_current_a_legacy(
    const double & _arg)
  {
    this->pdu1_total_current_a_legacy = _arg;
    return *this;
  }
  Type & set__pdu2_power_supply_voltage_v_legacy(
    const double & _arg)
  {
    this->pdu2_power_supply_voltage_v_legacy = _arg;
    return *this;
  }
  Type & set__pdu2_total_current_a_legacy(
    const double & _arg)
  {
    this->pdu2_total_current_a_legacy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__PdUsStatus01
    std::shared_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__PdUsStatus01
    std::shared_ptr<sd_can_msgs::msg::PdUsStatus01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PdUsStatus01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pdu12_power_supply_voltage_v != other.pdu12_power_supply_voltage_v) {
      return false;
    }
    if (this->pdu12_total_current_a != other.pdu12_total_current_a) {
      return false;
    }
    if (this->pdu48_power_supply_voltage_v != other.pdu48_power_supply_voltage_v) {
      return false;
    }
    if (this->pdu48_total_current_a != other.pdu48_total_current_a) {
      return false;
    }
    if (this->pdu1_power_supply_voltage_v_legacy != other.pdu1_power_supply_voltage_v_legacy) {
      return false;
    }
    if (this->pdu1_total_current_a_legacy != other.pdu1_total_current_a_legacy) {
      return false;
    }
    if (this->pdu2_power_supply_voltage_v_legacy != other.pdu2_power_supply_voltage_v_legacy) {
      return false;
    }
    if (this->pdu2_total_current_a_legacy != other.pdu2_total_current_a_legacy) {
      return false;
    }
    return true;
  }
  bool operator!=(const PdUsStatus01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PdUsStatus01_

// alias to use template instance with default allocator
using PdUsStatus01 =
  sd_can_msgs::msg::PdUsStatus01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__STRUCT_HPP_
