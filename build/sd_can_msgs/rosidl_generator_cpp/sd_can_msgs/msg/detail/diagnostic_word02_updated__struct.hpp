// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Updated __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Updated __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticWord02Updated_
{
  using Type = DiagnosticWord02Updated_<ContainerAllocator>;

  explicit DiagnosticWord02Updated_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_force_race_mode = 0;
      this->rc_beacon_time_out = 0;
      this->display_timeout_error = 0;
      this->rm_red_flag = 0;
      this->rm_safe_stop = 0;
      this->display_counter_error = 0;
      this->cba_em_brake_sat_not_received = 0;
      this->cba_sat_values_not_received = 0;
      this->ice_oil_temp_start_limit_not_rec = 0;
      this->ml_stop_brake_sat_not_received = 0;
      this->psa_sat_values_not_received = 0;
      this->limp_sat_values_not_received = 0;
      this->fan_car_speed_max_value_not_rec = 0;
      this->fan_car_speed_min_value_not_rec = 0;
      this->fan_water_temp_max_value_not_rec = 0;
      this->fan_water_temp_min_value_not_rec = 0;
      this->heater_oil_temp_max_value_not_rec = 0;
      this->ice_fuel_pres_start_limit_not_rec = 0;
      this->ice_oil_temp_by_pass_not_received = 0;
    }
  }

  explicit DiagnosticWord02Updated_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_force_race_mode = 0;
      this->rc_beacon_time_out = 0;
      this->display_timeout_error = 0;
      this->rm_red_flag = 0;
      this->rm_safe_stop = 0;
      this->display_counter_error = 0;
      this->cba_em_brake_sat_not_received = 0;
      this->cba_sat_values_not_received = 0;
      this->ice_oil_temp_start_limit_not_rec = 0;
      this->ml_stop_brake_sat_not_received = 0;
      this->psa_sat_values_not_received = 0;
      this->limp_sat_values_not_received = 0;
      this->fan_car_speed_max_value_not_rec = 0;
      this->fan_car_speed_min_value_not_rec = 0;
      this->fan_water_temp_max_value_not_rec = 0;
      this->fan_water_temp_min_value_not_rec = 0;
      this->heater_oil_temp_max_value_not_rec = 0;
      this->ice_fuel_pres_start_limit_not_rec = 0;
      this->ice_oil_temp_by_pass_not_received = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rc_force_race_mode_type =
    uint8_t;
  _rc_force_race_mode_type rc_force_race_mode;
  using _rc_beacon_time_out_type =
    uint8_t;
  _rc_beacon_time_out_type rc_beacon_time_out;
  using _display_timeout_error_type =
    uint8_t;
  _display_timeout_error_type display_timeout_error;
  using _rm_red_flag_type =
    uint8_t;
  _rm_red_flag_type rm_red_flag;
  using _rm_safe_stop_type =
    uint8_t;
  _rm_safe_stop_type rm_safe_stop;
  using _display_counter_error_type =
    uint8_t;
  _display_counter_error_type display_counter_error;
  using _cba_em_brake_sat_not_received_type =
    uint8_t;
  _cba_em_brake_sat_not_received_type cba_em_brake_sat_not_received;
  using _cba_sat_values_not_received_type =
    uint8_t;
  _cba_sat_values_not_received_type cba_sat_values_not_received;
  using _ice_oil_temp_start_limit_not_rec_type =
    uint8_t;
  _ice_oil_temp_start_limit_not_rec_type ice_oil_temp_start_limit_not_rec;
  using _ml_stop_brake_sat_not_received_type =
    uint8_t;
  _ml_stop_brake_sat_not_received_type ml_stop_brake_sat_not_received;
  using _psa_sat_values_not_received_type =
    uint8_t;
  _psa_sat_values_not_received_type psa_sat_values_not_received;
  using _limp_sat_values_not_received_type =
    uint8_t;
  _limp_sat_values_not_received_type limp_sat_values_not_received;
  using _fan_car_speed_max_value_not_rec_type =
    uint8_t;
  _fan_car_speed_max_value_not_rec_type fan_car_speed_max_value_not_rec;
  using _fan_car_speed_min_value_not_rec_type =
    uint8_t;
  _fan_car_speed_min_value_not_rec_type fan_car_speed_min_value_not_rec;
  using _fan_water_temp_max_value_not_rec_type =
    uint8_t;
  _fan_water_temp_max_value_not_rec_type fan_water_temp_max_value_not_rec;
  using _fan_water_temp_min_value_not_rec_type =
    uint8_t;
  _fan_water_temp_min_value_not_rec_type fan_water_temp_min_value_not_rec;
  using _heater_oil_temp_max_value_not_rec_type =
    uint8_t;
  _heater_oil_temp_max_value_not_rec_type heater_oil_temp_max_value_not_rec;
  using _ice_fuel_pres_start_limit_not_rec_type =
    uint8_t;
  _ice_fuel_pres_start_limit_not_rec_type ice_fuel_pres_start_limit_not_rec;
  using _ice_oil_temp_by_pass_not_received_type =
    uint8_t;
  _ice_oil_temp_by_pass_not_received_type ice_oil_temp_by_pass_not_received;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rc_force_race_mode(
    const uint8_t & _arg)
  {
    this->rc_force_race_mode = _arg;
    return *this;
  }
  Type & set__rc_beacon_time_out(
    const uint8_t & _arg)
  {
    this->rc_beacon_time_out = _arg;
    return *this;
  }
  Type & set__display_timeout_error(
    const uint8_t & _arg)
  {
    this->display_timeout_error = _arg;
    return *this;
  }
  Type & set__rm_red_flag(
    const uint8_t & _arg)
  {
    this->rm_red_flag = _arg;
    return *this;
  }
  Type & set__rm_safe_stop(
    const uint8_t & _arg)
  {
    this->rm_safe_stop = _arg;
    return *this;
  }
  Type & set__display_counter_error(
    const uint8_t & _arg)
  {
    this->display_counter_error = _arg;
    return *this;
  }
  Type & set__cba_em_brake_sat_not_received(
    const uint8_t & _arg)
  {
    this->cba_em_brake_sat_not_received = _arg;
    return *this;
  }
  Type & set__cba_sat_values_not_received(
    const uint8_t & _arg)
  {
    this->cba_sat_values_not_received = _arg;
    return *this;
  }
  Type & set__ice_oil_temp_start_limit_not_rec(
    const uint8_t & _arg)
  {
    this->ice_oil_temp_start_limit_not_rec = _arg;
    return *this;
  }
  Type & set__ml_stop_brake_sat_not_received(
    const uint8_t & _arg)
  {
    this->ml_stop_brake_sat_not_received = _arg;
    return *this;
  }
  Type & set__psa_sat_values_not_received(
    const uint8_t & _arg)
  {
    this->psa_sat_values_not_received = _arg;
    return *this;
  }
  Type & set__limp_sat_values_not_received(
    const uint8_t & _arg)
  {
    this->limp_sat_values_not_received = _arg;
    return *this;
  }
  Type & set__fan_car_speed_max_value_not_rec(
    const uint8_t & _arg)
  {
    this->fan_car_speed_max_value_not_rec = _arg;
    return *this;
  }
  Type & set__fan_car_speed_min_value_not_rec(
    const uint8_t & _arg)
  {
    this->fan_car_speed_min_value_not_rec = _arg;
    return *this;
  }
  Type & set__fan_water_temp_max_value_not_rec(
    const uint8_t & _arg)
  {
    this->fan_water_temp_max_value_not_rec = _arg;
    return *this;
  }
  Type & set__fan_water_temp_min_value_not_rec(
    const uint8_t & _arg)
  {
    this->fan_water_temp_min_value_not_rec = _arg;
    return *this;
  }
  Type & set__heater_oil_temp_max_value_not_rec(
    const uint8_t & _arg)
  {
    this->heater_oil_temp_max_value_not_rec = _arg;
    return *this;
  }
  Type & set__ice_fuel_pres_start_limit_not_rec(
    const uint8_t & _arg)
  {
    this->ice_fuel_pres_start_limit_not_rec = _arg;
    return *this;
  }
  Type & set__ice_oil_temp_by_pass_not_received(
    const uint8_t & _arg)
  {
    this->ice_oil_temp_by_pass_not_received = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Updated
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Updated
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Updated_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticWord02Updated_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rc_force_race_mode != other.rc_force_race_mode) {
      return false;
    }
    if (this->rc_beacon_time_out != other.rc_beacon_time_out) {
      return false;
    }
    if (this->display_timeout_error != other.display_timeout_error) {
      return false;
    }
    if (this->rm_red_flag != other.rm_red_flag) {
      return false;
    }
    if (this->rm_safe_stop != other.rm_safe_stop) {
      return false;
    }
    if (this->display_counter_error != other.display_counter_error) {
      return false;
    }
    if (this->cba_em_brake_sat_not_received != other.cba_em_brake_sat_not_received) {
      return false;
    }
    if (this->cba_sat_values_not_received != other.cba_sat_values_not_received) {
      return false;
    }
    if (this->ice_oil_temp_start_limit_not_rec != other.ice_oil_temp_start_limit_not_rec) {
      return false;
    }
    if (this->ml_stop_brake_sat_not_received != other.ml_stop_brake_sat_not_received) {
      return false;
    }
    if (this->psa_sat_values_not_received != other.psa_sat_values_not_received) {
      return false;
    }
    if (this->limp_sat_values_not_received != other.limp_sat_values_not_received) {
      return false;
    }
    if (this->fan_car_speed_max_value_not_rec != other.fan_car_speed_max_value_not_rec) {
      return false;
    }
    if (this->fan_car_speed_min_value_not_rec != other.fan_car_speed_min_value_not_rec) {
      return false;
    }
    if (this->fan_water_temp_max_value_not_rec != other.fan_water_temp_max_value_not_rec) {
      return false;
    }
    if (this->fan_water_temp_min_value_not_rec != other.fan_water_temp_min_value_not_rec) {
      return false;
    }
    if (this->heater_oil_temp_max_value_not_rec != other.heater_oil_temp_max_value_not_rec) {
      return false;
    }
    if (this->ice_fuel_pres_start_limit_not_rec != other.ice_fuel_pres_start_limit_not_rec) {
      return false;
    }
    if (this->ice_oil_temp_by_pass_not_received != other.ice_oil_temp_by_pass_not_received) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticWord02Updated_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticWord02Updated_

// alias to use template instance with default allocator
using DiagnosticWord02Updated =
  sd_can_msgs::msg::DiagnosticWord02Updated_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__STRUCT_HPP_
