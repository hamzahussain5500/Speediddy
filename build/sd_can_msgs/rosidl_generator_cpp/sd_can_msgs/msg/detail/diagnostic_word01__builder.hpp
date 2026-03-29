// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/diagnostic_word01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticWord01_ice_diagnostic_spare_legacy
{
public:
  explicit Init_DiagnosticWord01_ice_diagnostic_spare_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::DiagnosticWord01 ice_diagnostic_spare_legacy(::sd_can_msgs::msg::DiagnosticWord01::_ice_diagnostic_spare_legacy_type arg)
  {
    msg_.ice_diagnostic_spare_legacy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_over_rpm_warning_legacy
{
public:
  explicit Init_DiagnosticWord01_ice_over_rpm_warning_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_diagnostic_spare_legacy ice_over_rpm_warning_legacy(::sd_can_msgs::msg::DiagnosticWord01::_ice_over_rpm_warning_legacy_type arg)
  {
    msg_.ice_over_rpm_warning_legacy = std::move(arg);
    return Init_DiagnosticWord01_ice_diagnostic_spare_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_emb_tank_press_under_min_start_limit_legacy
{
public:
  explicit Init_DiagnosticWord01_emb_tank_press_under_min_start_limit_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_over_rpm_warning_legacy emb_tank_press_under_min_start_limit_legacy(::sd_can_msgs::msg::DiagnosticWord01::_emb_tank_press_under_min_start_limit_legacy_type arg)
  {
    msg_.emb_tank_press_under_min_start_limit_legacy = std::move(arg);
    return Init_DiagnosticWord01_ice_over_rpm_warning_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_emb_tank_press_under_level3_legacy
{
public:
  explicit Init_DiagnosticWord01_emb_tank_press_under_level3_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_emb_tank_press_under_min_start_limit_legacy emb_tank_press_under_level3_legacy(::sd_can_msgs::msg::DiagnosticWord01::_emb_tank_press_under_level3_legacy_type arg)
  {
    msg_.emb_tank_press_under_level3_legacy = std::move(arg);
    return Init_DiagnosticWord01_emb_tank_press_under_min_start_limit_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_emb_tank_press_under_level2_legacy
{
public:
  explicit Init_DiagnosticWord01_emb_tank_press_under_level2_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_emb_tank_press_under_level3_legacy emb_tank_press_under_level2_legacy(::sd_can_msgs::msg::DiagnosticWord01::_emb_tank_press_under_level2_legacy_type arg)
  {
    msg_.emb_tank_press_under_level2_legacy = std::move(arg);
    return Init_DiagnosticWord01_emb_tank_press_under_level3_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_emb_tank_press_under_level1_legacy
{
public:
  explicit Init_DiagnosticWord01_emb_tank_press_under_level1_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_emb_tank_press_under_level2_legacy emb_tank_press_under_level1_legacy(::sd_can_msgs::msg::DiagnosticWord01::_emb_tank_press_under_level1_legacy_type arg)
  {
    msg_.emb_tank_press_under_level1_legacy = std::move(arg);
    return Init_DiagnosticWord01_emb_tank_press_under_level2_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_em_piston_hall_not_ready_legacy
{
public:
  explicit Init_DiagnosticWord01_em_piston_hall_not_ready_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_emb_tank_press_under_level1_legacy em_piston_hall_not_ready_legacy(::sd_can_msgs::msg::DiagnosticWord01::_em_piston_hall_not_ready_legacy_type arg)
  {
    msg_.em_piston_hall_not_ready_legacy = std::move(arg);
    return Init_DiagnosticWord01_emb_tank_press_under_level1_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu2_timeout_error_legacy
{
public:
  explicit Init_DiagnosticWord01_pdu2_timeout_error_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_em_piston_hall_not_ready_legacy pdu2_timeout_error_legacy(::sd_can_msgs::msg::DiagnosticWord01::_pdu2_timeout_error_legacy_type arg)
  {
    msg_.pdu2_timeout_error_legacy = std::move(arg);
    return Init_DiagnosticWord01_em_piston_hall_not_ready_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu2_counter_error_legacy
{
public:
  explicit Init_DiagnosticWord01_pdu2_counter_error_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu2_timeout_error_legacy pdu2_counter_error_legacy(::sd_can_msgs::msg::DiagnosticWord01::_pdu2_counter_error_legacy_type arg)
  {
    msg_.pdu2_counter_error_legacy = std::move(arg);
    return Init_DiagnosticWord01_pdu2_timeout_error_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu1_timeout_error_legacy
{
public:
  explicit Init_DiagnosticWord01_pdu1_timeout_error_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu2_counter_error_legacy pdu1_timeout_error_legacy(::sd_can_msgs::msg::DiagnosticWord01::_pdu1_timeout_error_legacy_type arg)
  {
    msg_.pdu1_timeout_error_legacy = std::move(arg);
    return Init_DiagnosticWord01_pdu2_counter_error_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu1_counter_error_legacy
{
public:
  explicit Init_DiagnosticWord01_pdu1_counter_error_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu1_timeout_error_legacy pdu1_counter_error_legacy(::sd_can_msgs::msg::DiagnosticWord01::_pdu1_counter_error_legacy_type arg)
  {
    msg_.pdu1_counter_error_legacy = std::move(arg);
    return Init_DiagnosticWord01_pdu1_timeout_error_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_emb_line_press_over_max_start_limit_legacy
{
public:
  explicit Init_DiagnosticWord01_emb_line_press_over_max_start_limit_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu1_counter_error_legacy emb_line_press_over_max_start_limit_legacy(::sd_can_msgs::msg::DiagnosticWord01::_emb_line_press_over_max_start_limit_legacy_type arg)
  {
    msg_.emb_line_press_over_max_start_limit_legacy = std::move(arg);
    return Init_DiagnosticWord01_pdu1_counter_error_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_error_legacy
{
public:
  explicit Init_DiagnosticWord01_ice_error_legacy(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_emb_line_press_over_max_start_limit_legacy ice_error_legacy(::sd_can_msgs::msg::DiagnosticWord01::_ice_error_legacy_type arg)
  {
    msg_.ice_error_legacy = std::move(arg);
    return Init_DiagnosticWord01_emb_line_press_over_max_start_limit_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_psa_steer_slip_warning
{
public:
  explicit Init_DiagnosticWord01_psa_steer_slip_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_error_legacy psa_steer_slip_warning(::sd_can_msgs::msg::DiagnosticWord01::_psa_steer_slip_warning_type arg)
  {
    msg_.psa_steer_slip_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_error_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_rm_timeout_error
{
public:
  explicit Init_DiagnosticWord01_rm_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_psa_steer_slip_warning rm_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_rm_timeout_error_type arg)
  {
    msg_.rm_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_psa_steer_slip_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_rm_counter_error
{
public:
  explicit Init_DiagnosticWord01_rm_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_rm_timeout_error rm_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_rm_counter_error_type arg)
  {
    msg_.rm_counter_error = std::move(arg);
    return Init_DiagnosticWord01_rm_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_fuel_volume_warning
{
public:
  explicit Init_DiagnosticWord01_ice_fuel_volume_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_rm_counter_error ice_fuel_volume_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_fuel_volume_warning_type arg)
  {
    msg_.ice_fuel_volume_warning = std::move(arg);
    return Init_DiagnosticWord01_rm_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_target_gear_not_reached_warning
{
public:
  explicit Init_DiagnosticWord01_ice_target_gear_not_reached_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_fuel_volume_warning ice_target_gear_not_reached_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_target_gear_not_reached_warning_type arg)
  {
    msg_.ice_target_gear_not_reached_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_fuel_volume_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_sensor_failure_warning
{
public:
  explicit Init_DiagnosticWord01_ice_sensor_failure_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_target_gear_not_reached_warning ice_sensor_failure_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_sensor_failure_warning_type arg)
  {
    msg_.ice_sensor_failure_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_target_gear_not_reached_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu12_active_anti_fire
{
public:
  explicit Init_DiagnosticWord01_pdu12_active_anti_fire(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_sensor_failure_warning pdu12_active_anti_fire(::sd_can_msgs::msg::DiagnosticWord01::_pdu12_active_anti_fire_type arg)
  {
    msg_.pdu12_active_anti_fire = std::move(arg);
    return Init_DiagnosticWord01_ice_sensor_failure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_oil_temperature_warning
{
public:
  explicit Init_DiagnosticWord01_ice_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu12_active_anti_fire ice_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_oil_temperature_warning_type arg)
  {
    msg_.ice_oil_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01_pdu12_active_anti_fire(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_oil_pressure_warning
{
public:
  explicit Init_DiagnosticWord01_ice_oil_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_oil_temperature_warning ice_oil_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_oil_pressure_warning_type arg)
  {
    msg_.ice_oil_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_oil_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_gear_oil_temperature_warning
{
public:
  explicit Init_DiagnosticWord01_ice_gear_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_oil_pressure_warning ice_gear_oil_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_gear_oil_temperature_warning_type arg)
  {
    msg_.ice_gear_oil_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_oil_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_fuel_pressure_warning
{
public:
  explicit Init_DiagnosticWord01_ice_fuel_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_gear_oil_temperature_warning ice_fuel_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_fuel_pressure_warning_type arg)
  {
    msg_.ice_fuel_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_gear_oil_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_coolant_temperature_warning
{
public:
  explicit Init_DiagnosticWord01_ice_coolant_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_fuel_pressure_warning ice_coolant_temperature_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_coolant_temperature_warning_type arg)
  {
    msg_.ice_coolant_temperature_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_fuel_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_coolant_pressure_warning
{
public:
  explicit Init_DiagnosticWord01_ice_coolant_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_coolant_temperature_warning ice_coolant_pressure_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_coolant_pressure_warning_type arg)
  {
    msg_.ice_coolant_pressure_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_coolant_temperature_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_boost_warning
{
public:
  explicit Init_DiagnosticWord01_ice_boost_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_coolant_pressure_warning ice_boost_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_boost_warning_type arg)
  {
    msg_.ice_boost_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_coolant_pressure_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_bsu_wrong_init_config
{
public:
  explicit Init_DiagnosticWord01_bsu_wrong_init_config(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_boost_warning bsu_wrong_init_config(::sd_can_msgs::msg::DiagnosticWord01::_bsu_wrong_init_config_type arg)
  {
    msg_.bsu_wrong_init_config = std::move(arg);
    return Init_DiagnosticWord01_ice_boost_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_override_wrong_config
{
public:
  explicit Init_DiagnosticWord01_ice_override_wrong_config(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_bsu_wrong_init_config ice_override_wrong_config(::sd_can_msgs::msg::DiagnosticWord01::_ice_override_wrong_config_type arg)
  {
    msg_.ice_override_wrong_config = std::move(arg);
    return Init_DiagnosticWord01_bsu_wrong_init_config(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dcdc4812_under_min_start_limit
{
public:
  explicit Init_DiagnosticWord01_dcdc4812_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_override_wrong_config dcdc4812_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01::_dcdc4812_under_min_start_limit_type arg)
  {
    msg_.dcdc4812_under_min_start_limit = std::move(arg);
    return Init_DiagnosticWord01_ice_override_wrong_config(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ml_stop_conditions_active
{
public:
  explicit Init_DiagnosticWord01_ml_stop_conditions_active(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dcdc4812_under_min_start_limit ml_stop_conditions_active(::sd_can_msgs::msg::DiagnosticWord01::_ml_stop_conditions_active_type arg)
  {
    msg_.ml_stop_conditions_active = std::move(arg);
    return Init_DiagnosticWord01_dcdc4812_under_min_start_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_em_stop_conditions_active
{
public:
  explicit Init_DiagnosticWord01_em_stop_conditions_active(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ml_stop_conditions_active em_stop_conditions_active(::sd_can_msgs::msg::DiagnosticWord01::_em_stop_conditions_active_type arg)
  {
    msg_.em_stop_conditions_active = std::move(arg);
    return Init_DiagnosticWord01_ml_stop_conditions_active(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dem_cbarr_not_receive
{
public:
  explicit Init_DiagnosticWord01_dem_cbarr_not_receive(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_em_stop_conditions_active dem_cbarr_not_receive(::sd_can_msgs::msg::DiagnosticWord01::_dem_cbarr_not_receive_type arg)
  {
    msg_.dem_cbarr_not_receive = std::move(arg);
    return Init_DiagnosticWord01_em_stop_conditions_active(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_psa_timeout_error
{
public:
  explicit Init_DiagnosticWord01_psa_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dem_cbarr_not_receive psa_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_psa_timeout_error_type arg)
  {
    msg_.psa_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_dem_cbarr_not_receive(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_psa_error
{
public:
  explicit Init_DiagnosticWord01_psa_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_psa_timeout_error psa_error(::sd_can_msgs::msg::DiagnosticWord01::_psa_error_type arg)
  {
    msg_.psa_error = std::move(arg);
    return Init_DiagnosticWord01_psa_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_psa_derating
{
public:
  explicit Init_DiagnosticWord01_psa_derating(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_psa_error psa_derating(::sd_can_msgs::msg::DiagnosticWord01::_psa_derating_type arg)
  {
    msg_.psa_derating = std::move(arg);
    return Init_DiagnosticWord01_psa_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_psa_counter_error
{
public:
  explicit Init_DiagnosticWord01_psa_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_psa_derating psa_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_psa_counter_error_type arg)
  {
    msg_.psa_counter_error = std::move(arg);
    return Init_DiagnosticWord01_psa_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dem_cbarl_not_receive
{
public:
  explicit Init_DiagnosticWord01_dem_cbarl_not_receive(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_psa_counter_error dem_cbarl_not_receive(::sd_can_msgs::msg::DiagnosticWord01::_dem_cbarl_not_receive_type arg)
  {
    msg_.dem_cbarl_not_receive = std::move(arg);
    return Init_DiagnosticWord01_psa_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu48_timeout_error
{
public:
  explicit Init_DiagnosticWord01_pdu48_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dem_cbarl_not_receive pdu48_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_pdu48_timeout_error_type arg)
  {
    msg_.pdu48_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_dem_cbarl_not_receive(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu48_counter_error
{
public:
  explicit Init_DiagnosticWord01_pdu48_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu48_timeout_error pdu48_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_pdu48_counter_error_type arg)
  {
    msg_.pdu48_counter_error = std::move(arg);
    return Init_DiagnosticWord01_pdu48_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu12_timeout_error
{
public:
  explicit Init_DiagnosticWord01_pdu12_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu48_counter_error pdu12_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_pdu12_timeout_error_type arg)
  {
    msg_.pdu12_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_pdu48_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_pdu12_counter_error
{
public:
  explicit Init_DiagnosticWord01_pdu12_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu12_timeout_error pdu12_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_pdu12_counter_error_type arg)
  {
    msg_.pdu12_counter_error = std::move(arg);
    return Init_DiagnosticWord01_pdu12_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_oil_temp_under_min_start_limit
{
public:
  explicit Init_DiagnosticWord01_ice_oil_temp_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_pdu12_counter_error ice_oil_temp_under_min_start_limit(::sd_can_msgs::msg::DiagnosticWord01::_ice_oil_temp_under_min_start_limit_type arg)
  {
    msg_.ice_oil_temp_under_min_start_limit = std::move(arg);
    return Init_DiagnosticWord01_pdu12_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dem_cbafr_not_receive
{
public:
  explicit Init_DiagnosticWord01_dem_cbafr_not_receive(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_oil_temp_under_min_start_limit dem_cbafr_not_receive(::sd_can_msgs::msg::DiagnosticWord01::_dem_cbafr_not_receive_type arg)
  {
    msg_.dem_cbafr_not_receive = std::move(arg);
    return Init_DiagnosticWord01_ice_oil_temp_under_min_start_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_timeout_error
{
public:
  explicit Init_DiagnosticWord01_ice_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dem_cbafr_not_receive ice_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_ice_timeout_error_type arg)
  {
    msg_.ice_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_dem_cbafr_not_receive(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_counter_error
{
public:
  explicit Init_DiagnosticWord01_ice_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_timeout_error ice_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_ice_counter_error_type arg)
  {
    msg_.ice_counter_error = std::move(arg);
    return Init_DiagnosticWord01_ice_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_hl_timeout_error
{
public:
  explicit Init_DiagnosticWord01_hl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_counter_error hl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_hl_timeout_error_type arg)
  {
    msg_.hl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_ice_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_hl_counter_error
{
public:
  explicit Init_DiagnosticWord01_hl_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_hl_timeout_error hl_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_hl_counter_error_type arg)
  {
    msg_.hl_counter_error = std::move(arg);
    return Init_DiagnosticWord01_hl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_aps_warning
{
public:
  explicit Init_DiagnosticWord01_ice_aps_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_hl_counter_error ice_aps_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_aps_warning_type arg)
  {
    msg_.ice_aps_warning = std::move(arg);
    return Init_DiagnosticWord01_hl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_starting_starting_failed
{
public:
  explicit Init_DiagnosticWord01_ice_starting_starting_failed(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_aps_warning ice_starting_starting_failed(::sd_can_msgs::msg::DiagnosticWord01::_ice_starting_starting_failed_type arg)
  {
    msg_.ice_starting_starting_failed = std::move(arg);
    return Init_DiagnosticWord01_ice_aps_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_starting_oil_heater_failed
{
public:
  explicit Init_DiagnosticWord01_ice_starting_oil_heater_failed(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_starting_starting_failed ice_starting_oil_heater_failed(::sd_can_msgs::msg::DiagnosticWord01::_ice_starting_oil_heater_failed_type arg)
  {
    msg_.ice_starting_oil_heater_failed = std::move(arg);
    return Init_DiagnosticWord01_ice_starting_starting_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_starting_fueling_failed
{
public:
  explicit Init_DiagnosticWord01_ice_starting_fueling_failed(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_starting_oil_heater_failed ice_starting_fueling_failed(::sd_can_msgs::msg::DiagnosticWord01::_ice_starting_fueling_failed_type arg)
  {
    msg_.ice_starting_fueling_failed = std::move(arg);
    return Init_DiagnosticWord01_ice_starting_oil_heater_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dem_pdu12_v_not_receive
{
public:
  explicit Init_DiagnosticWord01_dem_pdu12_v_not_receive(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_starting_fueling_failed dem_pdu12_v_not_receive(::sd_can_msgs::msg::DiagnosticWord01::_dem_pdu12_v_not_receive_type arg)
  {
    msg_.dem_pdu12_v_not_receive = std::move(arg);
    return Init_DiagnosticWord01_ice_starting_fueling_failed(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_engine_off_rejected
{
public:
  explicit Init_DiagnosticWord01_ice_engine_off_rejected(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dem_pdu12_v_not_receive ice_engine_off_rejected(::sd_can_msgs::msg::DiagnosticWord01::_ice_engine_off_rejected_type arg)
  {
    msg_.ice_engine_off_rejected = std::move(arg);
    return Init_DiagnosticWord01_dem_pdu12_v_not_receive(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ice_gear_low_oil_temp_warning
{
public:
  explicit Init_DiagnosticWord01_ice_gear_low_oil_temp_warning(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_engine_off_rejected ice_gear_low_oil_temp_warning(::sd_can_msgs::msg::DiagnosticWord01::_ice_gear_low_oil_temp_warning_type arg)
  {
    msg_.ice_gear_low_oil_temp_warning = std::move(arg);
    return Init_DiagnosticWord01_ice_engine_off_rejected(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dem_cbafl_not_receive
{
public:
  explicit Init_DiagnosticWord01_dem_cbafl_not_receive(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ice_gear_low_oil_temp_warning dem_cbafl_not_receive(::sd_can_msgs::msg::DiagnosticWord01::_dem_cbafl_not_receive_type arg)
  {
    msg_.dem_cbafl_not_receive = std::move(arg);
    return Init_DiagnosticWord01_ice_gear_low_oil_temp_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_ecu_timeout_em_fault
{
public:
  explicit Init_DiagnosticWord01_ecu_timeout_em_fault(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dem_cbafl_not_receive ecu_timeout_em_fault(::sd_can_msgs::msg::DiagnosticWord01::_ecu_timeout_em_fault_type arg)
  {
    msg_.ecu_timeout_em_fault = std::move(arg);
    return Init_DiagnosticWord01_dem_cbafl_not_receive(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dcdc_timeout_error
{
public:
  explicit Init_DiagnosticWord01_dcdc_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_ecu_timeout_em_fault dcdc_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_dcdc_timeout_error_type arg)
  {
    msg_.dcdc_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_ecu_timeout_em_fault(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_dcdc_starting_faild
{
public:
  explicit Init_DiagnosticWord01_dcdc_starting_faild(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dcdc_timeout_error dcdc_starting_faild(::sd_can_msgs::msg::DiagnosticWord01::_dcdc_starting_faild_type arg)
  {
    msg_.dcdc_starting_faild = std::move(arg);
    return Init_DiagnosticWord01_dcdc_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rr_timeout_error
{
public:
  explicit Init_DiagnosticWord01_cba_rr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_dcdc_starting_faild cba_rr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rr_timeout_error_type arg)
  {
    msg_.cba_rr_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_dcdc_starting_faild(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rr_error
{
public:
  explicit Init_DiagnosticWord01_cba_rr_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rr_timeout_error cba_rr_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rr_error_type arg)
  {
    msg_.cba_rr_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rr_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rr_derating
{
public:
  explicit Init_DiagnosticWord01_cba_rr_derating(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rr_error cba_rr_derating(::sd_can_msgs::msg::DiagnosticWord01::_cba_rr_derating_type arg)
  {
    msg_.cba_rr_derating = std::move(arg);
    return Init_DiagnosticWord01_cba_rr_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rr_counter_error
{
public:
  explicit Init_DiagnosticWord01_cba_rr_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rr_derating cba_rr_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rr_counter_error_type arg)
  {
    msg_.cba_rr_counter_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rr_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rl_timeout_error
{
public:
  explicit Init_DiagnosticWord01_cba_rl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rr_counter_error cba_rl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rl_timeout_error_type arg)
  {
    msg_.cba_rl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rr_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rl_error
{
public:
  explicit Init_DiagnosticWord01_cba_rl_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rl_timeout_error cba_rl_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rl_error_type arg)
  {
    msg_.cba_rl_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rl_derating
{
public:
  explicit Init_DiagnosticWord01_cba_rl_derating(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rl_error cba_rl_derating(::sd_can_msgs::msg::DiagnosticWord01::_cba_rl_derating_type arg)
  {
    msg_.cba_rl_derating = std::move(arg);
    return Init_DiagnosticWord01_cba_rl_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_rl_counter_error
{
public:
  explicit Init_DiagnosticWord01_cba_rl_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rl_derating cba_rl_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_rl_counter_error_type arg)
  {
    msg_.cba_rl_counter_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rl_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fr_timeout_error
{
public:
  explicit Init_DiagnosticWord01_cba_fr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_rl_counter_error cba_fr_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fr_timeout_error_type arg)
  {
    msg_.cba_fr_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_cba_rl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fr_error
{
public:
  explicit Init_DiagnosticWord01_cba_fr_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fr_timeout_error cba_fr_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fr_error_type arg)
  {
    msg_.cba_fr_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fr_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fr_derating
{
public:
  explicit Init_DiagnosticWord01_cba_fr_derating(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fr_error cba_fr_derating(::sd_can_msgs::msg::DiagnosticWord01::_cba_fr_derating_type arg)
  {
    msg_.cba_fr_derating = std::move(arg);
    return Init_DiagnosticWord01_cba_fr_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fr_counter_error
{
public:
  explicit Init_DiagnosticWord01_cba_fr_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fr_derating cba_fr_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fr_counter_error_type arg)
  {
    msg_.cba_fr_counter_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fr_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fl_timeout_error
{
public:
  explicit Init_DiagnosticWord01_cba_fl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fr_counter_error cba_fl_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fl_timeout_error_type arg)
  {
    msg_.cba_fl_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fr_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fl_error
{
public:
  explicit Init_DiagnosticWord01_cba_fl_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fl_timeout_error cba_fl_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fl_error_type arg)
  {
    msg_.cba_fl_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fl_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fl_derating
{
public:
  explicit Init_DiagnosticWord01_cba_fl_derating(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fl_error cba_fl_derating(::sd_can_msgs::msg::DiagnosticWord01::_cba_fl_derating_type arg)
  {
    msg_.cba_fl_derating = std::move(arg);
    return Init_DiagnosticWord01_cba_fl_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_cba_fl_counter_error
{
public:
  explicit Init_DiagnosticWord01_cba_fl_counter_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fl_derating cba_fl_counter_error(::sd_can_msgs::msg::DiagnosticWord01::_cba_fl_counter_error_type arg)
  {
    msg_.cba_fl_counter_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fl_derating(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_bms_timeout_error
{
public:
  explicit Init_DiagnosticWord01_bms_timeout_error(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_cba_fl_counter_error bms_timeout_error(::sd_can_msgs::msg::DiagnosticWord01::_bms_timeout_error_type arg)
  {
    msg_.bms_timeout_error = std::move(arg);
    return Init_DiagnosticWord01_cba_fl_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_bms_starting_faild
{
public:
  explicit Init_DiagnosticWord01_bms_starting_faild(::sd_can_msgs::msg::DiagnosticWord01 & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord01_bms_timeout_error bms_starting_faild(::sd_can_msgs::msg::DiagnosticWord01::_bms_starting_faild_type arg)
  {
    msg_.bms_starting_faild = std::move(arg);
    return Init_DiagnosticWord01_bms_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

class Init_DiagnosticWord01_header
{
public:
  Init_DiagnosticWord01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticWord01_bms_starting_faild header(::sd_can_msgs::msg::DiagnosticWord01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticWord01_bms_starting_faild(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::DiagnosticWord01>()
{
  return sd_can_msgs::msg::builder::Init_DiagnosticWord01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01__BUILDER_HPP_
