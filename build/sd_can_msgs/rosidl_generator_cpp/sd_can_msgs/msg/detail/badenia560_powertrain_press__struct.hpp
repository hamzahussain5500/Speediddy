// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainPress.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainPress __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainPress __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560PowertrainPress_
{
  using Type = Badenia560PowertrainPress_<ContainerAllocator>;

  explicit Badenia560PowertrainPress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_pushrod_strain_fl = 0.0;
      this->m_pushrod_strain_fr = 0.0;
      this->engine_oil_pressure = 0.0;
      this->coolant_pressure = 0.0;
      this->fuel_press_direct = 0.0;
      this->boost_pressure = 0.0;
    }
  }

  explicit Badenia560PowertrainPress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_pushrod_strain_fl = 0.0;
      this->m_pushrod_strain_fr = 0.0;
      this->engine_oil_pressure = 0.0;
      this->coolant_pressure = 0.0;
      this->fuel_press_direct = 0.0;
      this->boost_pressure = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _m_pushrod_strain_fl_type =
    double;
  _m_pushrod_strain_fl_type m_pushrod_strain_fl;
  using _m_pushrod_strain_fr_type =
    double;
  _m_pushrod_strain_fr_type m_pushrod_strain_fr;
  using _engine_oil_pressure_type =
    double;
  _engine_oil_pressure_type engine_oil_pressure;
  using _coolant_pressure_type =
    double;
  _coolant_pressure_type coolant_pressure;
  using _fuel_press_direct_type =
    double;
  _fuel_press_direct_type fuel_press_direct;
  using _boost_pressure_type =
    double;
  _boost_pressure_type boost_pressure;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__m_pushrod_strain_fl(
    const double & _arg)
  {
    this->m_pushrod_strain_fl = _arg;
    return *this;
  }
  Type & set__m_pushrod_strain_fr(
    const double & _arg)
  {
    this->m_pushrod_strain_fr = _arg;
    return *this;
  }
  Type & set__engine_oil_pressure(
    const double & _arg)
  {
    this->engine_oil_pressure = _arg;
    return *this;
  }
  Type & set__coolant_pressure(
    const double & _arg)
  {
    this->coolant_pressure = _arg;
    return *this;
  }
  Type & set__fuel_press_direct(
    const double & _arg)
  {
    this->fuel_press_direct = _arg;
    return *this;
  }
  Type & set__boost_pressure(
    const double & _arg)
  {
    this->boost_pressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainPress
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainPress
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainPress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560PowertrainPress_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->m_pushrod_strain_fl != other.m_pushrod_strain_fl) {
      return false;
    }
    if (this->m_pushrod_strain_fr != other.m_pushrod_strain_fr) {
      return false;
    }
    if (this->engine_oil_pressure != other.engine_oil_pressure) {
      return false;
    }
    if (this->coolant_pressure != other.coolant_pressure) {
      return false;
    }
    if (this->fuel_press_direct != other.fuel_press_direct) {
      return false;
    }
    if (this->boost_pressure != other.boost_pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560PowertrainPress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560PowertrainPress_

// alias to use template instance with default allocator
using Badenia560PowertrainPress =
  sd_can_msgs::msg::Badenia560PowertrainPress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__STRUCT_HPP_
