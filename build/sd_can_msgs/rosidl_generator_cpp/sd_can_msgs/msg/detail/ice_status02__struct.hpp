// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/ICEStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__ICEStatus02 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__ICEStatus02 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEStatus02_
{
  using Type = ICEStatus02_<ContainerAllocator>;

  explicit ICEStatus02_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ice_oil_temp_deg_c = 0.0;
      this->ice_engine_speed_rpm = 0.0;
      this->ice_fuel_press_k_pa = 0.0;
      this->ice_water_temp_deg_c = 0.0;
      this->ice_oil_press_k_pa = 0.0;
    }
  }

  explicit ICEStatus02_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ice_oil_temp_deg_c = 0.0;
      this->ice_engine_speed_rpm = 0.0;
      this->ice_fuel_press_k_pa = 0.0;
      this->ice_water_temp_deg_c = 0.0;
      this->ice_oil_press_k_pa = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ice_oil_temp_deg_c_type =
    double;
  _ice_oil_temp_deg_c_type ice_oil_temp_deg_c;
  using _ice_engine_speed_rpm_type =
    double;
  _ice_engine_speed_rpm_type ice_engine_speed_rpm;
  using _ice_fuel_press_k_pa_type =
    double;
  _ice_fuel_press_k_pa_type ice_fuel_press_k_pa;
  using _ice_water_temp_deg_c_type =
    double;
  _ice_water_temp_deg_c_type ice_water_temp_deg_c;
  using _ice_oil_press_k_pa_type =
    double;
  _ice_oil_press_k_pa_type ice_oil_press_k_pa;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ice_oil_temp_deg_c(
    const double & _arg)
  {
    this->ice_oil_temp_deg_c = _arg;
    return *this;
  }
  Type & set__ice_engine_speed_rpm(
    const double & _arg)
  {
    this->ice_engine_speed_rpm = _arg;
    return *this;
  }
  Type & set__ice_fuel_press_k_pa(
    const double & _arg)
  {
    this->ice_fuel_press_k_pa = _arg;
    return *this;
  }
  Type & set__ice_water_temp_deg_c(
    const double & _arg)
  {
    this->ice_water_temp_deg_c = _arg;
    return *this;
  }
  Type & set__ice_oil_press_k_pa(
    const double & _arg)
  {
    this->ice_oil_press_k_pa = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__ICEStatus02
    std::shared_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__ICEStatus02
    std::shared_ptr<sd_can_msgs::msg::ICEStatus02_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEStatus02_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ice_oil_temp_deg_c != other.ice_oil_temp_deg_c) {
      return false;
    }
    if (this->ice_engine_speed_rpm != other.ice_engine_speed_rpm) {
      return false;
    }
    if (this->ice_fuel_press_k_pa != other.ice_fuel_press_k_pa) {
      return false;
    }
    if (this->ice_water_temp_deg_c != other.ice_water_temp_deg_c) {
      return false;
    }
    if (this->ice_oil_press_k_pa != other.ice_oil_press_k_pa) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEStatus02_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEStatus02_

// alias to use template instance with default allocator
using ICEStatus02 =
  sd_can_msgs::msg::ICEStatus02_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_HPP_
