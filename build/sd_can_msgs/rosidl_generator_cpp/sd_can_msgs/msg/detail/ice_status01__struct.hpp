// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__ICEStatus01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__ICEStatus01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEStatus01_
{
  using Type = ICEStatus01_<ContainerAllocator>;

  explicit ICEStatus01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ice_actual_gear = 0.0;
      this->ice_target_gear_ack = 0.0;
      this->ice_actual_throttle = 0.0;
      this->ice_target_throttle_ack = 0.0;
      this->ice_push_to_pass_req = 0.0;
      this->ice_push_to_pass_ack = 0.0;
      this->ice_water_press_k_pa = 0.0;
      this->ice_available_fuel_l = 0.0;
      this->ice_downshift_available = 0.0;
    }
  }

  explicit ICEStatus01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ice_actual_gear = 0.0;
      this->ice_target_gear_ack = 0.0;
      this->ice_actual_throttle = 0.0;
      this->ice_target_throttle_ack = 0.0;
      this->ice_push_to_pass_req = 0.0;
      this->ice_push_to_pass_ack = 0.0;
      this->ice_water_press_k_pa = 0.0;
      this->ice_available_fuel_l = 0.0;
      this->ice_downshift_available = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ice_actual_gear_type =
    double;
  _ice_actual_gear_type ice_actual_gear;
  using _ice_target_gear_ack_type =
    double;
  _ice_target_gear_ack_type ice_target_gear_ack;
  using _ice_actual_throttle_type =
    double;
  _ice_actual_throttle_type ice_actual_throttle;
  using _ice_target_throttle_ack_type =
    double;
  _ice_target_throttle_ack_type ice_target_throttle_ack;
  using _ice_push_to_pass_req_type =
    double;
  _ice_push_to_pass_req_type ice_push_to_pass_req;
  using _ice_push_to_pass_ack_type =
    double;
  _ice_push_to_pass_ack_type ice_push_to_pass_ack;
  using _ice_water_press_k_pa_type =
    double;
  _ice_water_press_k_pa_type ice_water_press_k_pa;
  using _ice_available_fuel_l_type =
    double;
  _ice_available_fuel_l_type ice_available_fuel_l;
  using _ice_downshift_available_type =
    double;
  _ice_downshift_available_type ice_downshift_available;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ice_actual_gear(
    const double & _arg)
  {
    this->ice_actual_gear = _arg;
    return *this;
  }
  Type & set__ice_target_gear_ack(
    const double & _arg)
  {
    this->ice_target_gear_ack = _arg;
    return *this;
  }
  Type & set__ice_actual_throttle(
    const double & _arg)
  {
    this->ice_actual_throttle = _arg;
    return *this;
  }
  Type & set__ice_target_throttle_ack(
    const double & _arg)
  {
    this->ice_target_throttle_ack = _arg;
    return *this;
  }
  Type & set__ice_push_to_pass_req(
    const double & _arg)
  {
    this->ice_push_to_pass_req = _arg;
    return *this;
  }
  Type & set__ice_push_to_pass_ack(
    const double & _arg)
  {
    this->ice_push_to_pass_ack = _arg;
    return *this;
  }
  Type & set__ice_water_press_k_pa(
    const double & _arg)
  {
    this->ice_water_press_k_pa = _arg;
    return *this;
  }
  Type & set__ice_available_fuel_l(
    const double & _arg)
  {
    this->ice_available_fuel_l = _arg;
    return *this;
  }
  Type & set__ice_downshift_available(
    const double & _arg)
  {
    this->ice_downshift_available = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__ICEStatus01
    std::shared_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__ICEStatus01
    std::shared_ptr<sd_can_msgs::msg::ICEStatus01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEStatus01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ice_actual_gear != other.ice_actual_gear) {
      return false;
    }
    if (this->ice_target_gear_ack != other.ice_target_gear_ack) {
      return false;
    }
    if (this->ice_actual_throttle != other.ice_actual_throttle) {
      return false;
    }
    if (this->ice_target_throttle_ack != other.ice_target_throttle_ack) {
      return false;
    }
    if (this->ice_push_to_pass_req != other.ice_push_to_pass_req) {
      return false;
    }
    if (this->ice_push_to_pass_ack != other.ice_push_to_pass_ack) {
      return false;
    }
    if (this->ice_water_press_k_pa != other.ice_water_press_k_pa) {
      return false;
    }
    if (this->ice_available_fuel_l != other.ice_available_fuel_l) {
      return false;
    }
    if (this->ice_downshift_available != other.ice_downshift_available) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEStatus01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEStatus01_

// alias to use template instance with default allocator
using ICEStatus01 =
  sd_can_msgs::msg::ICEStatus01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_HPP_
