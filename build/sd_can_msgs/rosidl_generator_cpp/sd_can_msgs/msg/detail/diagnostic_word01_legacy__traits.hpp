// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticWord01Legacy & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bms_starting_faild
  {
    out << "bms_starting_faild: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_starting_faild, out);
    out << ", ";
  }

  // member: bms_timeout_error
  {
    out << "bms_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_timeout_error, out);
    out << ", ";
  }

  // member: cba_fl_counter_error
  {
    out << "cba_fl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_counter_error, out);
    out << ", ";
  }

  // member: cba_fl_derating
  {
    out << "cba_fl_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_derating, out);
    out << ", ";
  }

  // member: cba_fl_error
  {
    out << "cba_fl_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_error, out);
    out << ", ";
  }

  // member: cba_fl_timeout_error
  {
    out << "cba_fl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_timeout_error, out);
    out << ", ";
  }

  // member: cba_fr_counter_error
  {
    out << "cba_fr_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_counter_error, out);
    out << ", ";
  }

  // member: cba_fr_derating
  {
    out << "cba_fr_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_derating, out);
    out << ", ";
  }

  // member: cba_fr_error
  {
    out << "cba_fr_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_error, out);
    out << ", ";
  }

  // member: cba_fr_timeout_error
  {
    out << "cba_fr_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_timeout_error, out);
    out << ", ";
  }

  // member: cba_rl_counter_error
  {
    out << "cba_rl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_counter_error, out);
    out << ", ";
  }

  // member: cba_rl_derating
  {
    out << "cba_rl_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_derating, out);
    out << ", ";
  }

  // member: cba_rl_error
  {
    out << "cba_rl_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_error, out);
    out << ", ";
  }

  // member: cba_rl_timeout_error
  {
    out << "cba_rl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_timeout_error, out);
    out << ", ";
  }

  // member: cba_rr_counter_error
  {
    out << "cba_rr_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_counter_error, out);
    out << ", ";
  }

  // member: cba_rr_derating
  {
    out << "cba_rr_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_derating, out);
    out << ", ";
  }

  // member: cba_rr_error
  {
    out << "cba_rr_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_error, out);
    out << ", ";
  }

  // member: cba_rr_timeout_error
  {
    out << "cba_rr_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_timeout_error, out);
    out << ", ";
  }

  // member: dcdc_starting_faild
  {
    out << "dcdc_starting_faild: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_starting_faild, out);
    out << ", ";
  }

  // member: dcdc_timeout_error
  {
    out << "dcdc_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_timeout_error, out);
    out << ", ";
  }

  // member: ice_error
  {
    out << "ice_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_error, out);
    out << ", ";
  }

  // member: ice_gear_low_oil_temp_warning
  {
    out << "ice_gear_low_oil_temp_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_gear_low_oil_temp_warning, out);
    out << ", ";
  }

  // member: ice_engine_off_rejected
  {
    out << "ice_engine_off_rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_engine_off_rejected, out);
    out << ", ";
  }

  // member: ice_starting_fueling_failed
  {
    out << "ice_starting_fueling_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_fueling_failed, out);
    out << ", ";
  }

  // member: ice_starting_oil_heater_failed
  {
    out << "ice_starting_oil_heater_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_oil_heater_failed, out);
    out << ", ";
  }

  // member: ice_starting_starting_failed
  {
    out << "ice_starting_starting_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_starting_failed, out);
    out << ", ";
  }

  // member: ice_aps_warning
  {
    out << "ice_aps_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_aps_warning, out);
    out << ", ";
  }

  // member: hl_counter_error
  {
    out << "hl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_counter_error, out);
    out << ", ";
  }

  // member: hl_timeout_error
  {
    out << "hl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_timeout_error, out);
    out << ", ";
  }

  // member: ice_counter_error
  {
    out << "ice_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_counter_error, out);
    out << ", ";
  }

  // member: ice_timeout_error
  {
    out << "ice_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_timeout_error, out);
    out << ", ";
  }

  // member: emb_line_press_over_max_start_limit
  {
    out << "emb_line_press_over_max_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_line_press_over_max_start_limit, out);
    out << ", ";
  }

  // member: ice_oil_temp_under_min_start_limit
  {
    out << "ice_oil_temp_under_min_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_under_min_start_limit, out);
    out << ", ";
  }

  // member: pdu1_counter_error
  {
    out << "pdu1_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu1_counter_error, out);
    out << ", ";
  }

  // member: pdu1_timeout_error
  {
    out << "pdu1_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu1_timeout_error, out);
    out << ", ";
  }

  // member: pdu2_counter_error
  {
    out << "pdu2_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu2_counter_error, out);
    out << ", ";
  }

  // member: pdu2_timeout_error
  {
    out << "pdu2_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu2_timeout_error, out);
    out << ", ";
  }

  // member: em_piston_hall_not_ready
  {
    out << "em_piston_hall_not_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.em_piston_hall_not_ready, out);
    out << ", ";
  }

  // member: psa_counter_error
  {
    out << "psa_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_counter_error, out);
    out << ", ";
  }

  // member: psa_derating
  {
    out << "psa_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_derating, out);
    out << ", ";
  }

  // member: psa_error
  {
    out << "psa_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_error, out);
    out << ", ";
  }

  // member: psa_timeout_error
  {
    out << "psa_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_timeout_error, out);
    out << ", ";
  }

  // member: emb_tank_press_under_level1
  {
    out << "emb_tank_press_under_level1: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level1, out);
    out << ", ";
  }

  // member: emb_tank_press_under_level2
  {
    out << "emb_tank_press_under_level2: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level2, out);
    out << ", ";
  }

  // member: emb_tank_press_under_level3
  {
    out << "emb_tank_press_under_level3: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level3, out);
    out << ", ";
  }

  // member: emb_tank_press_under_min_start_limit
  {
    out << "emb_tank_press_under_min_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_min_start_limit, out);
    out << ", ";
  }

  // member: ice_override_wrong_config
  {
    out << "ice_override_wrong_config: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_override_wrong_config, out);
    out << ", ";
  }

  // member: bsu_wrong_init_config
  {
    out << "bsu_wrong_init_config: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_wrong_init_config, out);
    out << ", ";
  }

  // member: ice_boost_warning
  {
    out << "ice_boost_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_boost_warning, out);
    out << ", ";
  }

  // member: ice_coolant_pressure_warning
  {
    out << "ice_coolant_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_coolant_pressure_warning, out);
    out << ", ";
  }

  // member: ice_coolant_temperature_warning
  {
    out << "ice_coolant_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_coolant_temperature_warning, out);
    out << ", ";
  }

  // member: ice_fuel_pressure_warning
  {
    out << "ice_fuel_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_pressure_warning, out);
    out << ", ";
  }

  // member: ice_gear_oil_temperature_warning
  {
    out << "ice_gear_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_gear_oil_temperature_warning, out);
    out << ", ";
  }

  // member: ice_oil_pressure_warning
  {
    out << "ice_oil_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_pressure_warning, out);
    out << ", ";
  }

  // member: ice_oil_temperature_warning
  {
    out << "ice_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temperature_warning, out);
    out << ", ";
  }

  // member: ice_over_rpm_warning
  {
    out << "ice_over_rpm_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_over_rpm_warning, out);
    out << ", ";
  }

  // member: ice_sensor_failure_warning
  {
    out << "ice_sensor_failure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_sensor_failure_warning, out);
    out << ", ";
  }

  // member: ice_target_gear_not_reached_warning
  {
    out << "ice_target_gear_not_reached_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_gear_not_reached_warning, out);
    out << ", ";
  }

  // member: ice_fuel_volume_warning
  {
    out << "ice_fuel_volume_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_volume_warning, out);
    out << ", ";
  }

  // member: rm_counter_error
  {
    out << "rm_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_counter_error, out);
    out << ", ";
  }

  // member: rm_timeout_error
  {
    out << "rm_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_timeout_error, out);
    out << ", ";
  }

  // member: ice_diagnostic_spare
  {
    out << "ice_diagnostic_spare: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_diagnostic_spare, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticWord01Legacy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bms_starting_faild
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_starting_faild: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_starting_faild, out);
    out << "\n";
  }

  // member: bms_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_timeout_error, out);
    out << "\n";
  }

  // member: cba_fl_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_counter_error, out);
    out << "\n";
  }

  // member: cba_fl_derating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fl_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_derating, out);
    out << "\n";
  }

  // member: cba_fl_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fl_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_error, out);
    out << "\n";
  }

  // member: cba_fl_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fl_timeout_error, out);
    out << "\n";
  }

  // member: cba_fr_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fr_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_counter_error, out);
    out << "\n";
  }

  // member: cba_fr_derating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fr_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_derating, out);
    out << "\n";
  }

  // member: cba_fr_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fr_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_error, out);
    out << "\n";
  }

  // member: cba_fr_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_fr_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_fr_timeout_error, out);
    out << "\n";
  }

  // member: cba_rl_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_counter_error, out);
    out << "\n";
  }

  // member: cba_rl_derating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_derating, out);
    out << "\n";
  }

  // member: cba_rl_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_error, out);
    out << "\n";
  }

  // member: cba_rl_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_timeout_error, out);
    out << "\n";
  }

  // member: cba_rr_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_counter_error, out);
    out << "\n";
  }

  // member: cba_rr_derating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_derating, out);
    out << "\n";
  }

  // member: cba_rr_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_error, out);
    out << "\n";
  }

  // member: cba_rr_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_timeout_error, out);
    out << "\n";
  }

  // member: dcdc_starting_faild
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_starting_faild: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_starting_faild, out);
    out << "\n";
  }

  // member: dcdc_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_timeout_error, out);
    out << "\n";
  }

  // member: ice_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_error, out);
    out << "\n";
  }

  // member: ice_gear_low_oil_temp_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_gear_low_oil_temp_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_gear_low_oil_temp_warning, out);
    out << "\n";
  }

  // member: ice_engine_off_rejected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_engine_off_rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_engine_off_rejected, out);
    out << "\n";
  }

  // member: ice_starting_fueling_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_starting_fueling_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_fueling_failed, out);
    out << "\n";
  }

  // member: ice_starting_oil_heater_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_starting_oil_heater_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_oil_heater_failed, out);
    out << "\n";
  }

  // member: ice_starting_starting_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_starting_starting_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_starting_starting_failed, out);
    out << "\n";
  }

  // member: ice_aps_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_aps_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_aps_warning, out);
    out << "\n";
  }

  // member: hl_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_counter_error, out);
    out << "\n";
  }

  // member: hl_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_timeout_error, out);
    out << "\n";
  }

  // member: ice_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_counter_error, out);
    out << "\n";
  }

  // member: ice_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_timeout_error, out);
    out << "\n";
  }

  // member: emb_line_press_over_max_start_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_line_press_over_max_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_line_press_over_max_start_limit, out);
    out << "\n";
  }

  // member: ice_oil_temp_under_min_start_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_oil_temp_under_min_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_under_min_start_limit, out);
    out << "\n";
  }

  // member: pdu1_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdu1_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu1_counter_error, out);
    out << "\n";
  }

  // member: pdu1_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdu1_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu1_timeout_error, out);
    out << "\n";
  }

  // member: pdu2_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdu2_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu2_counter_error, out);
    out << "\n";
  }

  // member: pdu2_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdu2_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pdu2_timeout_error, out);
    out << "\n";
  }

  // member: em_piston_hall_not_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "em_piston_hall_not_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.em_piston_hall_not_ready, out);
    out << "\n";
  }

  // member: psa_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_counter_error, out);
    out << "\n";
  }

  // member: psa_derating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_derating: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_derating, out);
    out << "\n";
  }

  // member: psa_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_error, out);
    out << "\n";
  }

  // member: psa_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_timeout_error, out);
    out << "\n";
  }

  // member: emb_tank_press_under_level1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_tank_press_under_level1: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level1, out);
    out << "\n";
  }

  // member: emb_tank_press_under_level2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_tank_press_under_level2: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level2, out);
    out << "\n";
  }

  // member: emb_tank_press_under_level3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_tank_press_under_level3: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_level3, out);
    out << "\n";
  }

  // member: emb_tank_press_under_min_start_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_tank_press_under_min_start_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_press_under_min_start_limit, out);
    out << "\n";
  }

  // member: ice_override_wrong_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_override_wrong_config: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_override_wrong_config, out);
    out << "\n";
  }

  // member: bsu_wrong_init_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_wrong_init_config: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_wrong_init_config, out);
    out << "\n";
  }

  // member: ice_boost_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_boost_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_boost_warning, out);
    out << "\n";
  }

  // member: ice_coolant_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_coolant_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_coolant_pressure_warning, out);
    out << "\n";
  }

  // member: ice_coolant_temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_coolant_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_coolant_temperature_warning, out);
    out << "\n";
  }

  // member: ice_fuel_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_fuel_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_pressure_warning, out);
    out << "\n";
  }

  // member: ice_gear_oil_temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_gear_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_gear_oil_temperature_warning, out);
    out << "\n";
  }

  // member: ice_oil_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_oil_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_pressure_warning, out);
    out << "\n";
  }

  // member: ice_oil_temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temperature_warning, out);
    out << "\n";
  }

  // member: ice_over_rpm_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_over_rpm_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_over_rpm_warning, out);
    out << "\n";
  }

  // member: ice_sensor_failure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_sensor_failure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_sensor_failure_warning, out);
    out << "\n";
  }

  // member: ice_target_gear_not_reached_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_target_gear_not_reached_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_target_gear_not_reached_warning, out);
    out << "\n";
  }

  // member: ice_fuel_volume_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_fuel_volume_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_volume_warning, out);
    out << "\n";
  }

  // member: rm_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rm_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_counter_error, out);
    out << "\n";
  }

  // member: rm_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rm_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_timeout_error, out);
    out << "\n";
  }

  // member: ice_diagnostic_spare
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_diagnostic_spare: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_diagnostic_spare, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticWord01Legacy & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::DiagnosticWord01Legacy & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::DiagnosticWord01Legacy & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::DiagnosticWord01Legacy>()
{
  return "sd_can_msgs::msg::DiagnosticWord01Legacy";
}

template<>
inline const char * name<sd_can_msgs::msg::DiagnosticWord01Legacy>()
{
  return "sd_can_msgs/msg/DiagnosticWord01Legacy";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::DiagnosticWord01Legacy>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::DiagnosticWord01Legacy>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::DiagnosticWord01Legacy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD01_LEGACY__TRAITS_HPP_
