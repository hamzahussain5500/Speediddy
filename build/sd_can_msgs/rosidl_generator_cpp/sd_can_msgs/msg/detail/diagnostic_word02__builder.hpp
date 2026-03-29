// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/diagnostic_word02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticWord02_hl_mlsupervisor_request
{
public:
  explicit Init_DiagnosticWord02_hl_mlsupervisor_request(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::DiagnosticWord02 hl_mlsupervisor_request(::sd_can_msgs::msg::DiagnosticWord02::_hl_mlsupervisor_request_type arg)
  {
    msg_.hl_mlsupervisor_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rc_delta_timeout_lim_def_val
{
public:
  explicit Init_DiagnosticWord02_rc_delta_timeout_lim_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_hl_mlsupervisor_request rc_delta_timeout_lim_def_val(::sd_can_msgs::msg::DiagnosticWord02::_rc_delta_timeout_lim_def_val_type arg)
  {
    msg_.rc_delta_timeout_lim_def_val = std::move(arg);
    return Init_DiagnosticWord02_hl_mlsupervisor_request(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_p2p_active_duration_def_val
{
public:
  explicit Init_DiagnosticWord02_p2p_active_duration_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_rc_delta_timeout_lim_def_val p2p_active_duration_def_val(::sd_can_msgs::msg::DiagnosticWord02::_p2p_active_duration_def_val_type arg)
  {
    msg_.p2p_active_duration_def_val = std::move(arg);
    return Init_DiagnosticWord02_rc_delta_timeout_lim_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_p2p_cooldown_duration_def_val
{
public:
  explicit Init_DiagnosticWord02_p2p_cooldown_duration_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_p2p_active_duration_def_val p2p_cooldown_duration_def_val(::sd_can_msgs::msg::DiagnosticWord02::_p2p_cooldown_duration_def_val_type arg)
  {
    msg_.p2p_cooldown_duration_def_val = std::move(arg);
    return Init_DiagnosticWord02_p2p_active_duration_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_p2p_max_num_activation_def_val
{
public:
  explicit Init_DiagnosticWord02_p2p_max_num_activation_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_p2p_cooldown_duration_def_val p2p_max_num_activation_def_val(::sd_can_msgs::msg::DiagnosticWord02::_p2p_max_num_activation_def_val_type arg)
  {
    msg_.p2p_max_num_activation_def_val = std::move(arg);
    return Init_DiagnosticWord02_p2p_cooldown_duration_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_limp_cba_sat_values_def_val
{
public:
  explicit Init_DiagnosticWord02_limp_cba_sat_values_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_p2p_max_num_activation_def_val limp_cba_sat_values_def_val(::sd_can_msgs::msg::DiagnosticWord02::_limp_cba_sat_values_def_val_type arg)
  {
    msg_.limp_cba_sat_values_def_val = std::move(arg);
    return Init_DiagnosticWord02_p2p_max_num_activation_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_cba_sat_rates_def_val
{
public:
  explicit Init_DiagnosticWord02_cba_sat_rates_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_limp_cba_sat_values_def_val cba_sat_rates_def_val(::sd_can_msgs::msg::DiagnosticWord02::_cba_sat_rates_def_val_type arg)
  {
    msg_.cba_sat_rates_def_val = std::move(arg);
    return Init_DiagnosticWord02_limp_cba_sat_values_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_limp_ice_sat_values_def_val
{
public:
  explicit Init_DiagnosticWord02_limp_ice_sat_values_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_cba_sat_rates_def_val limp_ice_sat_values_def_val(::sd_can_msgs::msg::DiagnosticWord02::_limp_ice_sat_values_def_val_type arg)
  {
    msg_.limp_ice_sat_values_def_val = std::move(arg);
    return Init_DiagnosticWord02_cba_sat_rates_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_ml_stop_brake_bias_def_val
{
public:
  explicit Init_DiagnosticWord02_ml_stop_brake_bias_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_limp_ice_sat_values_def_val ml_stop_brake_bias_def_val(::sd_can_msgs::msg::DiagnosticWord02::_ml_stop_brake_bias_def_val_type arg)
  {
    msg_.ml_stop_brake_bias_def_val = std::move(arg);
    return Init_DiagnosticWord02_limp_ice_sat_values_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rm_em_flag
{
public:
  explicit Init_DiagnosticWord02_rm_em_flag(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_ml_stop_brake_bias_def_val rm_em_flag(::sd_can_msgs::msg::DiagnosticWord02::_rm_em_flag_type arg)
  {
    msg_.rm_em_flag = std::move(arg);
    return Init_DiagnosticWord02_ml_stop_brake_bias_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_badenia_timeout_error
{
public:
  explicit Init_DiagnosticWord02_badenia_timeout_error(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_rm_em_flag badenia_timeout_error(::sd_can_msgs::msg::DiagnosticWord02::_badenia_timeout_error_type arg)
  {
    msg_.badenia_timeout_error = std::move(arg);
    return Init_DiagnosticWord02_rm_em_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_badenia_counter_error
{
public:
  explicit Init_DiagnosticWord02_badenia_counter_error(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_badenia_timeout_error badenia_counter_error(::sd_can_msgs::msg::DiagnosticWord02::_badenia_counter_error_type arg)
  {
    msg_.badenia_counter_error = std::move(arg);
    return Init_DiagnosticWord02_badenia_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms48_temp_over_level2
{
public:
  explicit Init_DiagnosticWord02_bms48_temp_over_level2(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_badenia_counter_error bms48_temp_over_level2(::sd_can_msgs::msg::DiagnosticWord02::_bms48_temp_over_level2_type arg)
  {
    msg_.bms48_temp_over_level2 = std::move(arg);
    return Init_DiagnosticWord02_badenia_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms48_temp_over_level1
{
public:
  explicit Init_DiagnosticWord02_bms48_temp_over_level1(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms48_temp_over_level2 bms48_temp_over_level1(::sd_can_msgs::msg::DiagnosticWord02::_bms48_temp_over_level1_type arg)
  {
    msg_.bms48_temp_over_level1 = std::move(arg);
    return Init_DiagnosticWord02_bms48_temp_over_level2(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms48_soc_under_level2
{
public:
  explicit Init_DiagnosticWord02_bms48_soc_under_level2(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms48_temp_over_level1 bms48_soc_under_level2(::sd_can_msgs::msg::DiagnosticWord02::_bms48_soc_under_level2_type arg)
  {
    msg_.bms48_soc_under_level2 = std::move(arg);
    return Init_DiagnosticWord02_bms48_temp_over_level1(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms48_soc_under_level1
{
public:
  explicit Init_DiagnosticWord02_bms48_soc_under_level1(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms48_soc_under_level2 bms48_soc_under_level1(::sd_can_msgs::msg::DiagnosticWord02::_bms48_soc_under_level1_type arg)
  {
    msg_.bms48_soc_under_level1 = std::move(arg);
    return Init_DiagnosticWord02_bms48_soc_under_level2(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms12_temp_over_level2
{
public:
  explicit Init_DiagnosticWord02_bms12_temp_over_level2(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms48_soc_under_level1 bms12_temp_over_level2(::sd_can_msgs::msg::DiagnosticWord02::_bms12_temp_over_level2_type arg)
  {
    msg_.bms12_temp_over_level2 = std::move(arg);
    return Init_DiagnosticWord02_bms48_soc_under_level1(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms12_temp_over_level1
{
public:
  explicit Init_DiagnosticWord02_bms12_temp_over_level1(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms12_temp_over_level2 bms12_temp_over_level1(::sd_can_msgs::msg::DiagnosticWord02::_bms12_temp_over_level1_type arg)
  {
    msg_.bms12_temp_over_level1 = std::move(arg);
    return Init_DiagnosticWord02_bms12_temp_over_level2(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms12_soc_under_level2
{
public:
  explicit Init_DiagnosticWord02_bms12_soc_under_level2(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms12_temp_over_level1 bms12_soc_under_level2(::sd_can_msgs::msg::DiagnosticWord02::_bms12_soc_under_level2_type arg)
  {
    msg_.bms12_soc_under_level2 = std::move(arg);
    return Init_DiagnosticWord02_bms12_temp_over_level1(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_bms12_soc_under_level1
{
public:
  explicit Init_DiagnosticWord02_bms12_soc_under_level1(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms12_soc_under_level2 bms12_soc_under_level1(::sd_can_msgs::msg::DiagnosticWord02::_bms12_soc_under_level1_type arg)
  {
    msg_.bms12_soc_under_level1 = std::move(arg);
    return Init_DiagnosticWord02_bms12_soc_under_level2(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_psa_sat_rates_def_val
{
public:
  explicit Init_DiagnosticWord02_psa_sat_rates_def_val(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_bms12_soc_under_level1 psa_sat_rates_def_val(::sd_can_msgs::msg::DiagnosticWord02::_psa_sat_rates_def_val_type arg)
  {
    msg_.psa_sat_rates_def_val = std::move(arg);
    return Init_DiagnosticWord02_bms12_soc_under_level1(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_ice_oil_temp_by_pass_not_received
{
public:
  explicit Init_DiagnosticWord02_ice_oil_temp_by_pass_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_psa_sat_rates_def_val ice_oil_temp_by_pass_not_received(::sd_can_msgs::msg::DiagnosticWord02::_ice_oil_temp_by_pass_not_received_type arg)
  {
    msg_.ice_oil_temp_by_pass_not_received = std::move(arg);
    return Init_DiagnosticWord02_psa_sat_rates_def_val(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_ice_fuel_pres_start_limit_not_rec
{
public:
  explicit Init_DiagnosticWord02_ice_fuel_pres_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_ice_oil_temp_by_pass_not_received ice_fuel_pres_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_ice_fuel_pres_start_limit_not_rec_type arg)
  {
    msg_.ice_fuel_pres_start_limit_not_rec = std::move(arg);
    return Init_DiagnosticWord02_ice_oil_temp_by_pass_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_heater_oil_temp_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02_heater_oil_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_ice_fuel_pres_start_limit_not_rec heater_oil_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_heater_oil_temp_max_value_not_rec_type arg)
  {
    msg_.heater_oil_temp_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02_ice_fuel_pres_start_limit_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_fan_water_temp_min_value_not_rec
{
public:
  explicit Init_DiagnosticWord02_fan_water_temp_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_heater_oil_temp_max_value_not_rec fan_water_temp_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_fan_water_temp_min_value_not_rec_type arg)
  {
    msg_.fan_water_temp_min_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02_heater_oil_temp_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_fan_water_temp_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02_fan_water_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_fan_water_temp_min_value_not_rec fan_water_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_fan_water_temp_max_value_not_rec_type arg)
  {
    msg_.fan_water_temp_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02_fan_water_temp_min_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_fan_car_speed_min_value_not_rec
{
public:
  explicit Init_DiagnosticWord02_fan_car_speed_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_fan_water_temp_max_value_not_rec fan_car_speed_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_fan_car_speed_min_value_not_rec_type arg)
  {
    msg_.fan_car_speed_min_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02_fan_water_temp_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_fan_car_speed_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02_fan_car_speed_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_fan_car_speed_min_value_not_rec fan_car_speed_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_fan_car_speed_max_value_not_rec_type arg)
  {
    msg_.fan_car_speed_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02_fan_car_speed_min_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_limp_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02_limp_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_fan_car_speed_max_value_not_rec limp_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02::_limp_sat_values_not_received_type arg)
  {
    msg_.limp_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02_fan_car_speed_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_psa_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02_psa_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_limp_sat_values_not_received psa_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02::_psa_sat_values_not_received_type arg)
  {
    msg_.psa_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02_limp_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_ml_stop_brake_sat_not_received
{
public:
  explicit Init_DiagnosticWord02_ml_stop_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_psa_sat_values_not_received ml_stop_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02::_ml_stop_brake_sat_not_received_type arg)
  {
    msg_.ml_stop_brake_sat_not_received = std::move(arg);
    return Init_DiagnosticWord02_psa_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_ice_oil_temp_start_limit_not_rec
{
public:
  explicit Init_DiagnosticWord02_ice_oil_temp_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_ml_stop_brake_sat_not_received ice_oil_temp_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02::_ice_oil_temp_start_limit_not_rec_type arg)
  {
    msg_.ice_oil_temp_start_limit_not_rec = std::move(arg);
    return Init_DiagnosticWord02_ml_stop_brake_sat_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_cba_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02_cba_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_ice_oil_temp_start_limit_not_rec cba_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02::_cba_sat_values_not_received_type arg)
  {
    msg_.cba_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02_ice_oil_temp_start_limit_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_cba_em_brake_sat_not_received
{
public:
  explicit Init_DiagnosticWord02_cba_em_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_cba_sat_values_not_received cba_em_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02::_cba_em_brake_sat_not_received_type arg)
  {
    msg_.cba_em_brake_sat_not_received = std::move(arg);
    return Init_DiagnosticWord02_cba_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_display_counter_error
{
public:
  explicit Init_DiagnosticWord02_display_counter_error(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_cba_em_brake_sat_not_received display_counter_error(::sd_can_msgs::msg::DiagnosticWord02::_display_counter_error_type arg)
  {
    msg_.display_counter_error = std::move(arg);
    return Init_DiagnosticWord02_cba_em_brake_sat_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rm_safe_stop
{
public:
  explicit Init_DiagnosticWord02_rm_safe_stop(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_display_counter_error rm_safe_stop(::sd_can_msgs::msg::DiagnosticWord02::_rm_safe_stop_type arg)
  {
    msg_.rm_safe_stop = std::move(arg);
    return Init_DiagnosticWord02_display_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rm_red_flag
{
public:
  explicit Init_DiagnosticWord02_rm_red_flag(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_rm_safe_stop rm_red_flag(::sd_can_msgs::msg::DiagnosticWord02::_rm_red_flag_type arg)
  {
    msg_.rm_red_flag = std::move(arg);
    return Init_DiagnosticWord02_rm_safe_stop(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_display_timeout_error
{
public:
  explicit Init_DiagnosticWord02_display_timeout_error(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_rm_red_flag display_timeout_error(::sd_can_msgs::msg::DiagnosticWord02::_display_timeout_error_type arg)
  {
    msg_.display_timeout_error = std::move(arg);
    return Init_DiagnosticWord02_rm_red_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rc_beacon_time_out
{
public:
  explicit Init_DiagnosticWord02_rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_display_timeout_error rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02::_rc_beacon_time_out_type arg)
  {
    msg_.rc_beacon_time_out = std::move(arg);
    return Init_DiagnosticWord02_display_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_rc_force_race_mode
{
public:
  explicit Init_DiagnosticWord02_rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02_rc_beacon_time_out rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02::_rc_force_race_mode_type arg)
  {
    msg_.rc_force_race_mode = std::move(arg);
    return Init_DiagnosticWord02_rc_beacon_time_out(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

class Init_DiagnosticWord02_header
{
public:
  Init_DiagnosticWord02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticWord02_rc_force_race_mode header(::sd_can_msgs::msg::DiagnosticWord02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticWord02_rc_force_race_mode(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::DiagnosticWord02>()
{
  return sd_can_msgs::msg::builder::Init_DiagnosticWord02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02__BUILDER_HPP_
