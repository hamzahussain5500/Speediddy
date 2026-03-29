// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticWord02_
{
  using Type = DiagnosticWord02_<ContainerAllocator>;

  explicit DiagnosticWord02_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->psa_sat_rates_def_val = 0;
      this->bms12_soc_under_level1 = 0;
      this->bms12_soc_under_level2 = 0;
      this->bms12_temp_over_level1 = 0;
      this->bms12_temp_over_level2 = 0;
      this->bms48_soc_under_level1 = 0;
      this->bms48_soc_under_level2 = 0;
      this->bms48_temp_over_level1 = 0;
      this->bms48_temp_over_level2 = 0;
      this->badenia_counter_error = 0;
      this->badenia_timeout_error = 0;
      this->rm_em_flag = 0;
      this->ml_stop_brake_bias_def_val = 0;
      this->limp_ice_sat_values_def_val = 0;
      this->cba_sat_rates_def_val = 0;
      this->limp_cba_sat_values_def_val = 0;
      this->p2p_max_num_activation_def_val = 0;
      this->p2p_cooldown_duration_def_val = 0;
      this->p2p_active_duration_def_val = 0;
      this->rc_delta_timeout_lim_def_val = 0;
      this->hl_mlsupervisor_request = 0;
    }
  }

  explicit DiagnosticWord02_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->psa_sat_rates_def_val = 0;
      this->bms12_soc_under_level1 = 0;
      this->bms12_soc_under_level2 = 0;
      this->bms12_temp_over_level1 = 0;
      this->bms12_temp_over_level2 = 0;
      this->bms48_soc_under_level1 = 0;
      this->bms48_soc_under_level2 = 0;
      this->bms48_temp_over_level1 = 0;
      this->bms48_temp_over_level2 = 0;
      this->badenia_counter_error = 0;
      this->badenia_timeout_error = 0;
      this->rm_em_flag = 0;
      this->ml_stop_brake_bias_def_val = 0;
      this->limp_ice_sat_values_def_val = 0;
      this->cba_sat_rates_def_val = 0;
      this->limp_cba_sat_values_def_val = 0;
      this->p2p_max_num_activation_def_val = 0;
      this->p2p_cooldown_duration_def_val = 0;
      this->p2p_active_duration_def_val = 0;
      this->rc_delta_timeout_lim_def_val = 0;
      this->hl_mlsupervisor_request = 0;
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
  using _psa_sat_rates_def_val_type =
    uint8_t;
  _psa_sat_rates_def_val_type psa_sat_rates_def_val;
  using _bms12_soc_under_level1_type =
    uint8_t;
  _bms12_soc_under_level1_type bms12_soc_under_level1;
  using _bms12_soc_under_level2_type =
    uint8_t;
  _bms12_soc_under_level2_type bms12_soc_under_level2;
  using _bms12_temp_over_level1_type =
    uint8_t;
  _bms12_temp_over_level1_type bms12_temp_over_level1;
  using _bms12_temp_over_level2_type =
    uint8_t;
  _bms12_temp_over_level2_type bms12_temp_over_level2;
  using _bms48_soc_under_level1_type =
    uint8_t;
  _bms48_soc_under_level1_type bms48_soc_under_level1;
  using _bms48_soc_under_level2_type =
    uint8_t;
  _bms48_soc_under_level2_type bms48_soc_under_level2;
  using _bms48_temp_over_level1_type =
    uint8_t;
  _bms48_temp_over_level1_type bms48_temp_over_level1;
  using _bms48_temp_over_level2_type =
    uint8_t;
  _bms48_temp_over_level2_type bms48_temp_over_level2;
  using _badenia_counter_error_type =
    uint8_t;
  _badenia_counter_error_type badenia_counter_error;
  using _badenia_timeout_error_type =
    uint8_t;
  _badenia_timeout_error_type badenia_timeout_error;
  using _rm_em_flag_type =
    uint8_t;
  _rm_em_flag_type rm_em_flag;
  using _ml_stop_brake_bias_def_val_type =
    uint8_t;
  _ml_stop_brake_bias_def_val_type ml_stop_brake_bias_def_val;
  using _limp_ice_sat_values_def_val_type =
    uint8_t;
  _limp_ice_sat_values_def_val_type limp_ice_sat_values_def_val;
  using _cba_sat_rates_def_val_type =
    uint8_t;
  _cba_sat_rates_def_val_type cba_sat_rates_def_val;
  using _limp_cba_sat_values_def_val_type =
    uint8_t;
  _limp_cba_sat_values_def_val_type limp_cba_sat_values_def_val;
  using _p2p_max_num_activation_def_val_type =
    uint8_t;
  _p2p_max_num_activation_def_val_type p2p_max_num_activation_def_val;
  using _p2p_cooldown_duration_def_val_type =
    uint8_t;
  _p2p_cooldown_duration_def_val_type p2p_cooldown_duration_def_val;
  using _p2p_active_duration_def_val_type =
    uint8_t;
  _p2p_active_duration_def_val_type p2p_active_duration_def_val;
  using _rc_delta_timeout_lim_def_val_type =
    uint8_t;
  _rc_delta_timeout_lim_def_val_type rc_delta_timeout_lim_def_val;
  using _hl_mlsupervisor_request_type =
    uint8_t;
  _hl_mlsupervisor_request_type hl_mlsupervisor_request;

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
  Type & set__psa_sat_rates_def_val(
    const uint8_t & _arg)
  {
    this->psa_sat_rates_def_val = _arg;
    return *this;
  }
  Type & set__bms12_soc_under_level1(
    const uint8_t & _arg)
  {
    this->bms12_soc_under_level1 = _arg;
    return *this;
  }
  Type & set__bms12_soc_under_level2(
    const uint8_t & _arg)
  {
    this->bms12_soc_under_level2 = _arg;
    return *this;
  }
  Type & set__bms12_temp_over_level1(
    const uint8_t & _arg)
  {
    this->bms12_temp_over_level1 = _arg;
    return *this;
  }
  Type & set__bms12_temp_over_level2(
    const uint8_t & _arg)
  {
    this->bms12_temp_over_level2 = _arg;
    return *this;
  }
  Type & set__bms48_soc_under_level1(
    const uint8_t & _arg)
  {
    this->bms48_soc_under_level1 = _arg;
    return *this;
  }
  Type & set__bms48_soc_under_level2(
    const uint8_t & _arg)
  {
    this->bms48_soc_under_level2 = _arg;
    return *this;
  }
  Type & set__bms48_temp_over_level1(
    const uint8_t & _arg)
  {
    this->bms48_temp_over_level1 = _arg;
    return *this;
  }
  Type & set__bms48_temp_over_level2(
    const uint8_t & _arg)
  {
    this->bms48_temp_over_level2 = _arg;
    return *this;
  }
  Type & set__badenia_counter_error(
    const uint8_t & _arg)
  {
    this->badenia_counter_error = _arg;
    return *this;
  }
  Type & set__badenia_timeout_error(
    const uint8_t & _arg)
  {
    this->badenia_timeout_error = _arg;
    return *this;
  }
  Type & set__rm_em_flag(
    const uint8_t & _arg)
  {
    this->rm_em_flag = _arg;
    return *this;
  }
  Type & set__ml_stop_brake_bias_def_val(
    const uint8_t & _arg)
  {
    this->ml_stop_brake_bias_def_val = _arg;
    return *this;
  }
  Type & set__limp_ice_sat_values_def_val(
    const uint8_t & _arg)
  {
    this->limp_ice_sat_values_def_val = _arg;
    return *this;
  }
  Type & set__cba_sat_rates_def_val(
    const uint8_t & _arg)
  {
    this->cba_sat_rates_def_val = _arg;
    return *this;
  }
  Type & set__limp_cba_sat_values_def_val(
    const uint8_t & _arg)
  {
    this->limp_cba_sat_values_def_val = _arg;
    return *this;
  }
  Type & set__p2p_max_num_activation_def_val(
    const uint8_t & _arg)
  {
    this->p2p_max_num_activation_def_val = _arg;
    return *this;
  }
  Type & set__p2p_cooldown_duration_def_val(
    const uint8_t & _arg)
  {
    this->p2p_cooldown_duration_def_val = _arg;
    return *this;
  }
  Type & set__p2p_active_duration_def_val(
    const uint8_t & _arg)
  {
    this->p2p_active_duration_def_val = _arg;
    return *this;
  }
  Type & set__rc_delta_timeout_lim_def_val(
    const uint8_t & _arg)
  {
    this->rc_delta_timeout_lim_def_val = _arg;
    return *this;
  }
  Type & set__hl_mlsupervisor_request(
    const uint8_t & _arg)
  {
    this->hl_mlsupervisor_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticWord02_ & other) const
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
    if (this->psa_sat_rates_def_val != other.psa_sat_rates_def_val) {
      return false;
    }
    if (this->bms12_soc_under_level1 != other.bms12_soc_under_level1) {
      return false;
    }
    if (this->bms12_soc_under_level2 != other.bms12_soc_under_level2) {
      return false;
    }
    if (this->bms12_temp_over_level1 != other.bms12_temp_over_level1) {
      return false;
    }
    if (this->bms12_temp_over_level2 != other.bms12_temp_over_level2) {
      return false;
    }
    if (this->bms48_soc_under_level1 != other.bms48_soc_under_level1) {
      return false;
    }
    if (this->bms48_soc_under_level2 != other.bms48_soc_under_level2) {
      return false;
    }
    if (this->bms48_temp_over_level1 != other.bms48_temp_over_level1) {
      return false;
    }
    if (this->bms48_temp_over_level2 != other.bms48_temp_over_level2) {
      return false;
    }
    if (this->badenia_counter_error != other.badenia_counter_error) {
      return false;
    }
    if (this->badenia_timeout_error != other.badenia_timeout_error) {
      return false;
    }
    if (this->rm_em_flag != other.rm_em_flag) {
      return false;
    }
    if (this->ml_stop_brake_bias_def_val != other.ml_stop_brake_bias_def_val) {
      return false;
    }
    if (this->limp_ice_sat_values_def_val != other.limp_ice_sat_values_def_val) {
      return false;
    }
    if (this->cba_sat_rates_def_val != other.cba_sat_rates_def_val) {
      return false;
    }
    if (this->limp_cba_sat_values_def_val != other.limp_cba_sat_values_def_val) {
      return false;
    }
    if (this->p2p_max_num_activation_def_val != other.p2p_max_num_activation_def_val) {
      return false;
    }
    if (this->p2p_cooldown_duration_def_val != other.p2p_cooldown_duration_def_val) {
      return false;
    }
    if (this->p2p_active_duration_def_val != other.p2p_active_duration_def_val) {
      return false;
    }
    if (this->rc_delta_timeout_lim_def_val != other.rc_delta_timeout_lim_def_val) {
      return false;
    }
    if (this->hl_mlsupervisor_request != other.hl_mlsupervisor_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticWord02_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticWord02_

// alias to use template instance with default allocator
using DiagnosticWord02 =
  sd_can_msgs::msg::DiagnosticWord02_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__STRUCT_HPP_
