// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/CbaStatusFl.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__CbaStatusFl __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__CbaStatusFl __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CbaStatusFl_
{
  using Type = CbaStatusFl_<ContainerAllocator>;

  explicit CbaStatusFl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_actual_pressure_fl_pa = 0.0;
      this->cba_actual_pressure_fl = 0.0;
      this->cba_target_pressure_fl_ack = 0.0;
      this->cba_actual_current_fl_a = 0.0;
      this->cba_voltage_fl_v = 0.0;
    }
  }

  explicit CbaStatusFl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_actual_pressure_fl_pa = 0.0;
      this->cba_actual_pressure_fl = 0.0;
      this->cba_target_pressure_fl_ack = 0.0;
      this->cba_actual_current_fl_a = 0.0;
      this->cba_voltage_fl_v = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cba_actual_pressure_fl_pa_type =
    double;
  _cba_actual_pressure_fl_pa_type cba_actual_pressure_fl_pa;
  using _cba_actual_pressure_fl_type =
    double;
  _cba_actual_pressure_fl_type cba_actual_pressure_fl;
  using _cba_target_pressure_fl_ack_type =
    double;
  _cba_target_pressure_fl_ack_type cba_target_pressure_fl_ack;
  using _cba_actual_current_fl_a_type =
    double;
  _cba_actual_current_fl_a_type cba_actual_current_fl_a;
  using _cba_voltage_fl_v_type =
    double;
  _cba_voltage_fl_v_type cba_voltage_fl_v;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_fl_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_fl_pa = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_fl(
    const double & _arg)
  {
    this->cba_actual_pressure_fl = _arg;
    return *this;
  }
  Type & set__cba_target_pressure_fl_ack(
    const double & _arg)
  {
    this->cba_target_pressure_fl_ack = _arg;
    return *this;
  }
  Type & set__cba_actual_current_fl_a(
    const double & _arg)
  {
    this->cba_actual_current_fl_a = _arg;
    return *this;
  }
  Type & set__cba_voltage_fl_v(
    const double & _arg)
  {
    this->cba_voltage_fl_v = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__CbaStatusFl
    std::shared_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__CbaStatusFl
    std::shared_ptr<sd_can_msgs::msg::CbaStatusFl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CbaStatusFl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cba_actual_pressure_fl_pa != other.cba_actual_pressure_fl_pa) {
      return false;
    }
    if (this->cba_actual_pressure_fl != other.cba_actual_pressure_fl) {
      return false;
    }
    if (this->cba_target_pressure_fl_ack != other.cba_target_pressure_fl_ack) {
      return false;
    }
    if (this->cba_actual_current_fl_a != other.cba_actual_current_fl_a) {
      return false;
    }
    if (this->cba_voltage_fl_v != other.cba_voltage_fl_v) {
      return false;
    }
    return true;
  }
  bool operator!=(const CbaStatusFl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CbaStatusFl_

// alias to use template instance with default allocator
using CbaStatusFl =
  sd_can_msgs::msg::CbaStatusFl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__STRUCT_HPP_
