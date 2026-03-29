// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/CbaStatusRl.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__CbaStatusRl __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__CbaStatusRl __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CbaStatusRl_
{
  using Type = CbaStatusRl_<ContainerAllocator>;

  explicit CbaStatusRl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_actual_pressure_rl_pa = 0.0;
      this->cba_actual_pressure_rl = 0.0;
      this->cba_target_pressure_rl_ack = 0.0;
      this->cba_actual_current_rl_a = 0.0;
      this->cba_voltage_rl_v = 0.0;
    }
  }

  explicit CbaStatusRl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_actual_pressure_rl_pa = 0.0;
      this->cba_actual_pressure_rl = 0.0;
      this->cba_target_pressure_rl_ack = 0.0;
      this->cba_actual_current_rl_a = 0.0;
      this->cba_voltage_rl_v = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cba_actual_pressure_rl_pa_type =
    double;
  _cba_actual_pressure_rl_pa_type cba_actual_pressure_rl_pa;
  using _cba_actual_pressure_rl_type =
    double;
  _cba_actual_pressure_rl_type cba_actual_pressure_rl;
  using _cba_target_pressure_rl_ack_type =
    double;
  _cba_target_pressure_rl_ack_type cba_target_pressure_rl_ack;
  using _cba_actual_current_rl_a_type =
    double;
  _cba_actual_current_rl_a_type cba_actual_current_rl_a;
  using _cba_voltage_rl_v_type =
    double;
  _cba_voltage_rl_v_type cba_voltage_rl_v;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_rl_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_rl_pa = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_rl(
    const double & _arg)
  {
    this->cba_actual_pressure_rl = _arg;
    return *this;
  }
  Type & set__cba_target_pressure_rl_ack(
    const double & _arg)
  {
    this->cba_target_pressure_rl_ack = _arg;
    return *this;
  }
  Type & set__cba_actual_current_rl_a(
    const double & _arg)
  {
    this->cba_actual_current_rl_a = _arg;
    return *this;
  }
  Type & set__cba_voltage_rl_v(
    const double & _arg)
  {
    this->cba_voltage_rl_v = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__CbaStatusRl
    std::shared_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__CbaStatusRl
    std::shared_ptr<sd_can_msgs::msg::CbaStatusRl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CbaStatusRl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cba_actual_pressure_rl_pa != other.cba_actual_pressure_rl_pa) {
      return false;
    }
    if (this->cba_actual_pressure_rl != other.cba_actual_pressure_rl) {
      return false;
    }
    if (this->cba_target_pressure_rl_ack != other.cba_target_pressure_rl_ack) {
      return false;
    }
    if (this->cba_actual_current_rl_a != other.cba_actual_current_rl_a) {
      return false;
    }
    if (this->cba_voltage_rl_v != other.cba_voltage_rl_v) {
      return false;
    }
    return true;
  }
  bool operator!=(const CbaStatusRl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CbaStatusRl_

// alias to use template instance with default allocator
using CbaStatusRl =
  sd_can_msgs::msg::CbaStatusRl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_RL__STRUCT_HPP_
