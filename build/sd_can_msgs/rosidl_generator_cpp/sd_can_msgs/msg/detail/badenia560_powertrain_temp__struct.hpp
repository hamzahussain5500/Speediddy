// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainTemp __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainTemp __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560PowertrainTemp_
{
  using Type = Badenia560PowertrainTemp_<ContainerAllocator>;

  explicit Badenia560PowertrainTemp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_pushrod_strain_rl = 0.0;
      this->m_pushrod_strain_rr = 0.0;
      this->bsu_prefill_diag = 0;
      this->engine_oil_temperature = 0.0;
      this->coolant_temperature = 0.0;
      this->gear_box_oil_temp = 0.0;
    }
  }

  explicit Badenia560PowertrainTemp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_pushrod_strain_rl = 0.0;
      this->m_pushrod_strain_rr = 0.0;
      this->bsu_prefill_diag = 0;
      this->engine_oil_temperature = 0.0;
      this->coolant_temperature = 0.0;
      this->gear_box_oil_temp = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _m_pushrod_strain_rl_type =
    double;
  _m_pushrod_strain_rl_type m_pushrod_strain_rl;
  using _m_pushrod_strain_rr_type =
    double;
  _m_pushrod_strain_rr_type m_pushrod_strain_rr;
  using _bsu_prefill_diag_type =
    uint8_t;
  _bsu_prefill_diag_type bsu_prefill_diag;
  using _engine_oil_temperature_type =
    double;
  _engine_oil_temperature_type engine_oil_temperature;
  using _coolant_temperature_type =
    double;
  _coolant_temperature_type coolant_temperature;
  using _gear_box_oil_temp_type =
    double;
  _gear_box_oil_temp_type gear_box_oil_temp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__m_pushrod_strain_rl(
    const double & _arg)
  {
    this->m_pushrod_strain_rl = _arg;
    return *this;
  }
  Type & set__m_pushrod_strain_rr(
    const double & _arg)
  {
    this->m_pushrod_strain_rr = _arg;
    return *this;
  }
  Type & set__bsu_prefill_diag(
    const uint8_t & _arg)
  {
    this->bsu_prefill_diag = _arg;
    return *this;
  }
  Type & set__engine_oil_temperature(
    const double & _arg)
  {
    this->engine_oil_temperature = _arg;
    return *this;
  }
  Type & set__coolant_temperature(
    const double & _arg)
  {
    this->coolant_temperature = _arg;
    return *this;
  }
  Type & set__gear_box_oil_temp(
    const double & _arg)
  {
    this->gear_box_oil_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainTemp
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainTemp
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainTemp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560PowertrainTemp_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->m_pushrod_strain_rl != other.m_pushrod_strain_rl) {
      return false;
    }
    if (this->m_pushrod_strain_rr != other.m_pushrod_strain_rr) {
      return false;
    }
    if (this->bsu_prefill_diag != other.bsu_prefill_diag) {
      return false;
    }
    if (this->engine_oil_temperature != other.engine_oil_temperature) {
      return false;
    }
    if (this->coolant_temperature != other.coolant_temperature) {
      return false;
    }
    if (this->gear_box_oil_temp != other.gear_box_oil_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560PowertrainTemp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560PowertrainTemp_

// alias to use template instance with default allocator
using Badenia560PowertrainTemp =
  sd_can_msgs::msg::Badenia560PowertrainTemp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__STRUCT_HPP_
