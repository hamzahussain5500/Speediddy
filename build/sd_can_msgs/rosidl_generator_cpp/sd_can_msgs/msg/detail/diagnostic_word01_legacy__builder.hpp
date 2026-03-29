// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticWord01Legacy_ice_diagnostic_spare
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_diagnostic_spare(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::DiagnosticWord01Legacy ice_diagnostic_spare(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_diagnostic_spare_type arg)
  {
    msg_.ice_diagnostic_spare = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_rm_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_rm_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_diagnostic_spare rm_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_rm_timeout_error_type arg)
  {
    msg_.rm_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_diagnostic_spare(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_rm_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_rm_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_rm_timeout_error rm_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_rm_counter_error_type arg)
  {
    msg_.rm_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_rm_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_fuel_volume_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_fuel_volume_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_rm_counter_error ice_fuel_volume_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_fuel_volume_warning_type arg)
  {
    msg_.ice_fuel_volume_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_rm_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_target_gear_not_reached_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_target_gear_not_reached_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_fuel_volume_warning ice_target_gear_not_reached_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_target_gear_not_reached_warning_type arg)
  {
    msg_.ice_target_gear_not_reached_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_fuel_volume_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_sensor_failure_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_sensor_failure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_target_gear_not_reached_warning ice_sensor_failure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_sensor_failure_warning_type arg)
  {
    msg_.ice_sensor_failure_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_target_gear_not_reached_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_over_rpm_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_over_rpm_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_sensor_failure_warning ice_over_rpm_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_over_rpm_warning_type arg)
  {
    msg_.ice_over_rpm_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_sensor_failure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_oil_temperature_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_over_rpm_warning ice_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_oil_temperature_warning_type arg)
  {
    msg_.ice_oil_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_over_rpm_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_oil_pressure_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_oil_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_oil_temperature_warning ice_oil_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_oil_pressure_warning_type arg)
  {
    msg_.ice_oil_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_oil_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_gear_oil_temperature_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_gear_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_oil_pressure_warning ice_gear_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_gear_oil_temperature_warning_type arg)
  {
    msg_.ice_gear_oil_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_oil_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_fuel_pressure_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_fuel_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_gear_oil_temperature_warning ice_fuel_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_fuel_pressure_warning_type arg)
  {
    msg_.ice_fuel_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_gear_oil_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_coolant_temperature_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_coolant_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_fuel_pressure_warning ice_coolant_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_coolant_temperature_warning_type arg)
  {
    msg_.ice_coolant_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_fuel_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_coolant_pressure_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_coolant_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_coolant_temperature_warning ice_coolant_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_coolant_pressure_warning_type arg)
  {
    msg_.ice_coolant_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_coolant_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_boost_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_boost_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_coolant_pressure_warning ice_boost_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_boost_warning_type arg)
  {
    msg_.ice_boost_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_coolant_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_bsu_wrong_init_config
{
public:
  explicit Init_DiagnosticWord01Legacy_bsu_wrong_init_config(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_boost_warning bsu_wrong_init_config(::sd_can_msgs::msg::DiagnosticWord01Legacy::_bsu_wrong_init_config_type arg)
  {
    msg_.bsu_wrong_init_config = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_boost_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_override_wrong_config
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_override_wrong_config(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_bsu_wrong_init_config ice_override_wrong_config(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_override_wrong_config_type arg)
  {
    msg_.ice_override_wrong_config = std::move(arg);
    return Init_DiagnosticWord01Legacy_bsu_wrong_init_config(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_emb_tank_press_under_min_start_limit
{
public:
  explicit Init_DiagnosticWord01Legacy_emb_tank_press_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_override_wrong_config emb_tank_press_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy::_emb_tank_press_under_min_start_limit_type arg)
  {
    msg_.emb_tank_press_under_min_start_limit = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_override_wrong_config(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_emb_tank_press_under_level3
{
public:
  explicit Init_DiagnosticWord01Legacy_emb_tank_press_under_level3(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_emb_tank_press_under_min_start_limit emb_tank_press_under_level3(::sd_can_msgs::msg::DiagnosticWord01Legacy::_emb_tank_press_under_level3_type arg)
  {
    msg_.emb_tank_press_under_level3 = std::move(arg);
    return Init_DiagnosticWord01Legacy_emb_tank_press_under_min_start_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_emb_tank_press_under_level2
{
public:
  explicit Init_DiagnosticWord01Legacy_emb_tank_press_under_level2(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_emb_tank_press_under_level3 emb_tank_press_under_level2(::sd_can_msgs::msg::DiagnosticWord01Legacy::_emb_tank_press_under_level2_type arg)
  {
    msg_.emb_tank_press_under_level2 = std::move(arg);
    return Init_DiagnosticWord01Legacy_emb_tank_press_under_level3(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_emb_tank_press_under_level1
{
public:
  explicit Init_DiagnosticWord01Legacy_emb_tank_press_under_level1(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_emb_tank_press_under_level2 emb_tank_press_under_level1(::sd_can_msgs::msg::DiagnosticWord01Legacy::_emb_tank_press_under_level1_type arg)
  {
    msg_.emb_tank_press_under_level1 = std::move(arg);
    return Init_DiagnosticWord01Legacy_emb_tank_press_under_level2(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_psa_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_psa_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_emb_tank_press_under_level1 psa_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_psa_timeout_error_type arg)
  {
    msg_.psa_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_emb_tank_press_under_level1(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_psa_error
{
public:
  explicit Init_DiagnosticWord01Legacy_psa_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_psa_timeout_error psa_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_psa_error_type arg)
  {
    msg_.psa_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_psa_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_psa_derating
{
public:
  explicit Init_DiagnosticWord01Legacy_psa_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_psa_error psa_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy::_psa_derating_type arg)
  {
    msg_.psa_derating = std::move(arg);
    return Init_DiagnosticWord01Legacy_psa_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_psa_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_psa_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_psa_derating psa_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_psa_counter_error_type arg)
  {
    msg_.psa_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_psa_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_em_piston_hall_not_ready
{
public:
  explicit Init_DiagnosticWord01Legacy_em_piston_hall_not_ready(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_psa_counter_error em_piston_hall_not_ready(::sd_can_msgs::msg::DiagnosticWord01Legacy::_em_piston_hall_not_ready_type arg)
  {
    msg_.em_piston_hall_not_ready = std::move(arg);
    return Init_DiagnosticWord01Legacy_psa_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_pdu2_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_pdu2_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_em_piston_hall_not_ready pdu2_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_pdu2_timeout_error_type arg)
  {
    msg_.pdu2_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_em_piston_hall_not_ready(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_pdu2_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_pdu2_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_pdu2_timeout_error pdu2_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_pdu2_counter_error_type arg)
  {
    msg_.pdu2_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_pdu2_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_pdu1_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_pdu1_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_pdu2_counter_error pdu1_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_pdu1_timeout_error_type arg)
  {
    msg_.pdu1_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_pdu2_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_pdu1_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_pdu1_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_pdu1_timeout_error pdu1_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_pdu1_counter_error_type arg)
  {
    msg_.pdu1_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_pdu1_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_oil_temp_under_min_start_limit
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_oil_temp_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_pdu1_counter_error ice_oil_temp_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_oil_temp_under_min_start_limit_type arg)
  {
    msg_.ice_oil_temp_under_min_start_limit = std::move(arg);
    return Init_DiagnosticWord01Legacy_pdu1_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_emb_line_press_over_max_start_limit
{
public:
  explicit Init_DiagnosticWord01Legacy_emb_line_press_over_max_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_oil_temp_under_min_start_limit emb_line_press_over_max_start_limit(::sd_can_msgs::msg::DiagnosticWord01Legacy::_emb_line_press_over_max_start_limit_type arg)
  {
    msg_.emb_line_press_over_max_start_limit = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_oil_temp_under_min_start_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_emb_line_press_over_max_start_limit ice_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_timeout_error_type arg)
  {
    msg_.ice_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_emb_line_press_over_max_start_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_timeout_error ice_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_counter_error_type arg)
  {
    msg_.ice_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_hl_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_hl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_counter_error hl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_hl_timeout_error_type arg)
  {
    msg_.hl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_hl_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_hl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_hl_timeout_error hl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_hl_counter_error_type arg)
  {
    msg_.hl_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_hl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_aps_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_aps_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_hl_counter_error ice_aps_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_aps_warning_type arg)
  {
    msg_.ice_aps_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_hl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_starting_starting_failed
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_starting_starting_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_aps_warning ice_starting_starting_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_starting_starting_failed_type arg)
  {
    msg_.ice_starting_starting_failed = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_aps_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_starting_oil_heater_failed
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_starting_oil_heater_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_starting_starting_failed ice_starting_oil_heater_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_starting_oil_heater_failed_type arg)
  {
    msg_.ice_starting_oil_heater_failed = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_starting_starting_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_starting_fueling_failed
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_starting_fueling_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_starting_oil_heater_failed ice_starting_fueling_failed(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_starting_fueling_failed_type arg)
  {
    msg_.ice_starting_fueling_failed = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_starting_oil_heater_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_engine_off_rejected
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_engine_off_rejected(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_starting_fueling_failed ice_engine_off_rejected(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_engine_off_rejected_type arg)
  {
    msg_.ice_engine_off_rejected = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_starting_fueling_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_gear_low_oil_temp_warning
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_gear_low_oil_temp_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_engine_off_rejected ice_gear_low_oil_temp_warning(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_gear_low_oil_temp_warning_type arg)
  {
    msg_.ice_gear_low_oil_temp_warning = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_engine_off_rejected(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_ice_error
{
public:
  explicit Init_DiagnosticWord01Legacy_ice_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_gear_low_oil_temp_warning ice_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_ice_error_type arg)
  {
    msg_.ice_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_gear_low_oil_temp_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_dcdc_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_dcdc_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_ice_error dcdc_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_dcdc_timeout_error_type arg)
  {
    msg_.dcdc_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_ice_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_dcdc_starting_faild
{
public:
  explicit Init_DiagnosticWord01Legacy_dcdc_starting_faild(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_dcdc_timeout_error dcdc_starting_faild(::sd_can_msgs::msg::DiagnosticWord01Legacy::_dcdc_starting_faild_type arg)
  {
    msg_.dcdc_starting_faild = std::move(arg);
    return Init_DiagnosticWord01Legacy_dcdc_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rr_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_dcdc_starting_faild cba_rr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rr_timeout_error_type arg)
  {
    msg_.cba_rr_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_dcdc_starting_faild(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rr_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rr_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rr_timeout_error cba_rr_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rr_error_type arg)
  {
    msg_.cba_rr_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rr_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rr_derating
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rr_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rr_error cba_rr_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rr_derating_type arg)
  {
    msg_.cba_rr_derating = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rr_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rr_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rr_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rr_derating cba_rr_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rr_counter_error_type arg)
  {
    msg_.cba_rr_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rr_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rl_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rr_counter_error cba_rl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rl_timeout_error_type arg)
  {
    msg_.cba_rl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rr_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rl_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rl_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rl_timeout_error cba_rl_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rl_error_type arg)
  {
    msg_.cba_rl_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rl_derating
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rl_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rl_error cba_rl_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rl_derating_type arg)
  {
    msg_.cba_rl_derating = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rl_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_rl_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_rl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rl_derating cba_rl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_rl_counter_error_type arg)
  {
    msg_.cba_rl_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rl_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fr_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_rl_counter_error cba_fr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fr_timeout_error_type arg)
  {
    msg_.cba_fr_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_rl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fr_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fr_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fr_timeout_error cba_fr_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fr_error_type arg)
  {
    msg_.cba_fr_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fr_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fr_derating
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fr_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fr_error cba_fr_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fr_derating_type arg)
  {
    msg_.cba_fr_derating = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fr_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fr_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fr_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fr_derating cba_fr_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fr_counter_error_type arg)
  {
    msg_.cba_fr_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fr_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fl_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fr_counter_error cba_fl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fl_timeout_error_type arg)
  {
    msg_.cba_fl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fr_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fl_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fl_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fl_timeout_error cba_fl_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fl_error_type arg)
  {
    msg_.cba_fl_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fl_derating
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fl_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fl_error cba_fl_derating(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fl_derating_type arg)
  {
    msg_.cba_fl_derating = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fl_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_cba_fl_counter_error
{
public:
  explicit Init_DiagnosticWord01Legacy_cba_fl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fl_derating cba_fl_counter_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_cba_fl_counter_error_type arg)
  {
    msg_.cba_fl_counter_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fl_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_bms_timeout_error
{
public:
  explicit Init_DiagnosticWord01Legacy_bms_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_cba_fl_counter_error bms_timeout_error(::sd_can_msgs::msg::DiagnosticWord01Legacy::_bms_timeout_error_type arg)
  {
    msg_.bms_timeout_error = std::move(arg);
    return Init_DiagnosticWord01Legacy_cba_fl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_bms_starting_faild
{
public:
  explicit Init_DiagnosticWord01Legacy_bms_starting_faild(::sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01Legacy_bms_timeout_error bms_starting_faild(::sd_can_msgs::msg::DiagnosticWord01Legacy::_bms_starting_faild_type arg)
  {
    msg_.bms_starting_faild = std::move(arg);
    return Init_DiagnosticWord01Legacy_bms_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

class Init_DiagnosticWord01Legacy_header
{
public:
  Init_DiagnosticWord01Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticWord01Legacy_bms_starting_faild header(::sd_can_msgs::msg::DiagnosticWord01Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticWord01Legacy_bms_starting_faild(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::DiagnosticWord01Legacy>()
{
  return sd_can_msgs::msg::builder::Init_DiagnosticWord01Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__BUILDER_HPP_
