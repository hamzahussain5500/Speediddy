// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/BSURanges02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__BSURanges02 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__BSURanges02 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSURanges02_
{
  using Type = BSURanges02_<ContainerAllocator>;

  explicit BSURanges02_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->psa_min_angle_rad = 0.0;
      this->psa_max_angle_rad = 0.0;
      this->psa_min_angle_speed_rad_s = 0.0;
      this->psa_max_angle_speed_rad_s = 0.0;
      this->psa_min_torque_m_nm = 0.0;
      this->psa_max_torque_m_nm = 0.0;
    }
  }

  explicit BSURanges02_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->psa_min_angle_rad = 0.0;
      this->psa_max_angle_rad = 0.0;
      this->psa_min_angle_speed_rad_s = 0.0;
      this->psa_max_angle_speed_rad_s = 0.0;
      this->psa_min_torque_m_nm = 0.0;
      this->psa_max_torque_m_nm = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _psa_min_angle_rad_type =
    double;
  _psa_min_angle_rad_type psa_min_angle_rad;
  using _psa_max_angle_rad_type =
    double;
  _psa_max_angle_rad_type psa_max_angle_rad;
  using _psa_min_angle_speed_rad_s_type =
    double;
  _psa_min_angle_speed_rad_s_type psa_min_angle_speed_rad_s;
  using _psa_max_angle_speed_rad_s_type =
    double;
  _psa_max_angle_speed_rad_s_type psa_max_angle_speed_rad_s;
  using _psa_min_torque_m_nm_type =
    double;
  _psa_min_torque_m_nm_type psa_min_torque_m_nm;
  using _psa_max_torque_m_nm_type =
    double;
  _psa_max_torque_m_nm_type psa_max_torque_m_nm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__psa_min_angle_rad(
    const double & _arg)
  {
    this->psa_min_angle_rad = _arg;
    return *this;
  }
  Type & set__psa_max_angle_rad(
    const double & _arg)
  {
    this->psa_max_angle_rad = _arg;
    return *this;
  }
  Type & set__psa_min_angle_speed_rad_s(
    const double & _arg)
  {
    this->psa_min_angle_speed_rad_s = _arg;
    return *this;
  }
  Type & set__psa_max_angle_speed_rad_s(
    const double & _arg)
  {
    this->psa_max_angle_speed_rad_s = _arg;
    return *this;
  }
  Type & set__psa_min_torque_m_nm(
    const double & _arg)
  {
    this->psa_min_torque_m_nm = _arg;
    return *this;
  }
  Type & set__psa_max_torque_m_nm(
    const double & _arg)
  {
    this->psa_max_torque_m_nm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::BSURanges02_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::BSURanges02_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSURanges02_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSURanges02_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__BSURanges02
    std::shared_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__BSURanges02
    std::shared_ptr<sd_can_msgs::msg::BSURanges02_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSURanges02_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->psa_min_angle_rad != other.psa_min_angle_rad) {
      return false;
    }
    if (this->psa_max_angle_rad != other.psa_max_angle_rad) {
      return false;
    }
    if (this->psa_min_angle_speed_rad_s != other.psa_min_angle_speed_rad_s) {
      return false;
    }
    if (this->psa_max_angle_speed_rad_s != other.psa_max_angle_speed_rad_s) {
      return false;
    }
    if (this->psa_min_torque_m_nm != other.psa_min_torque_m_nm) {
      return false;
    }
    if (this->psa_max_torque_m_nm != other.psa_max_torque_m_nm) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSURanges02_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSURanges02_

// alias to use template instance with default allocator
using BSURanges02 =
  sd_can_msgs::msg::BSURanges02_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__STRUCT_HPP_
