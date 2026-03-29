// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/DiagnosticWord01.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__DiagnosticWord01__init(sd_can_msgs__msg__DiagnosticWord01 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__DiagnosticWord01__fini(msg);
    return false;
  }
  // bms_starting_faild
  // bms_timeout_error
  // cba_fl_counter_error
  // cba_fl_derating
  // cba_fl_error
  // cba_fl_timeout_error
  // cba_fr_counter_error
  // cba_fr_derating
  // cba_fr_error
  // cba_fr_timeout_error
  // cba_rl_counter_error
  // cba_rl_derating
  // cba_rl_error
  // cba_rl_timeout_error
  // cba_rr_counter_error
  // cba_rr_derating
  // cba_rr_error
  // cba_rr_timeout_error
  // dcdc_starting_faild
  // dcdc_timeout_error
  // ecu_timeout_em_fault
  // dem_cbafl_not_receive
  // ice_gear_low_oil_temp_warning
  // ice_engine_off_rejected
  // dem_pdu12_v_not_receive
  // ice_starting_fueling_failed
  // ice_starting_oil_heater_failed
  // ice_starting_starting_failed
  // ice_aps_warning
  // hl_counter_error
  // hl_timeout_error
  // ice_counter_error
  // ice_timeout_error
  // dem_cbafr_not_receive
  // ice_oil_temp_under_min_start_limit
  // pdu12_counter_error
  // pdu12_timeout_error
  // pdu48_counter_error
  // pdu48_timeout_error
  // dem_cbarl_not_receive
  // psa_counter_error
  // psa_derating
  // psa_error
  // psa_timeout_error
  // dem_cbarr_not_receive
  // em_stop_conditions_active
  // ml_stop_conditions_active
  // dcdc4812_under_min_start_limit
  // ice_override_wrong_config
  // bsu_wrong_init_config
  // ice_boost_warning
  // ice_coolant_pressure_warning
  // ice_coolant_temperature_warning
  // ice_fuel_pressure_warning
  // ice_gear_oil_temperature_warning
  // ice_oil_pressure_warning
  // ice_oil_temperature_warning
  // pdu12_active_anti_fire
  // ice_sensor_failure_warning
  // ice_target_gear_not_reached_warning
  // ice_fuel_volume_warning
  // rm_counter_error
  // rm_timeout_error
  // psa_steer_slip_warning
  // ice_error_legacy
  // emb_line_press_over_max_start_limit_legacy
  // pdu1_counter_error_legacy
  // pdu1_timeout_error_legacy
  // pdu2_counter_error_legacy
  // pdu2_timeout_error_legacy
  // em_piston_hall_not_ready_legacy
  // emb_tank_press_under_level1_legacy
  // emb_tank_press_under_level2_legacy
  // emb_tank_press_under_level3_legacy
  // emb_tank_press_under_min_start_limit_legacy
  // ice_over_rpm_warning_legacy
  // ice_diagnostic_spare_legacy
  return true;
}

void
sd_can_msgs__msg__DiagnosticWord01__fini(sd_can_msgs__msg__DiagnosticWord01 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bms_starting_faild
  // bms_timeout_error
  // cba_fl_counter_error
  // cba_fl_derating
  // cba_fl_error
  // cba_fl_timeout_error
  // cba_fr_counter_error
  // cba_fr_derating
  // cba_fr_error
  // cba_fr_timeout_error
  // cba_rl_counter_error
  // cba_rl_derating
  // cba_rl_error
  // cba_rl_timeout_error
  // cba_rr_counter_error
  // cba_rr_derating
  // cba_rr_error
  // cba_rr_timeout_error
  // dcdc_starting_faild
  // dcdc_timeout_error
  // ecu_timeout_em_fault
  // dem_cbafl_not_receive
  // ice_gear_low_oil_temp_warning
  // ice_engine_off_rejected
  // dem_pdu12_v_not_receive
  // ice_starting_fueling_failed
  // ice_starting_oil_heater_failed
  // ice_starting_starting_failed
  // ice_aps_warning
  // hl_counter_error
  // hl_timeout_error
  // ice_counter_error
  // ice_timeout_error
  // dem_cbafr_not_receive
  // ice_oil_temp_under_min_start_limit
  // pdu12_counter_error
  // pdu12_timeout_error
  // pdu48_counter_error
  // pdu48_timeout_error
  // dem_cbarl_not_receive
  // psa_counter_error
  // psa_derating
  // psa_error
  // psa_timeout_error
  // dem_cbarr_not_receive
  // em_stop_conditions_active
  // ml_stop_conditions_active
  // dcdc4812_under_min_start_limit
  // ice_override_wrong_config
  // bsu_wrong_init_config
  // ice_boost_warning
  // ice_coolant_pressure_warning
  // ice_coolant_temperature_warning
  // ice_fuel_pressure_warning
  // ice_gear_oil_temperature_warning
  // ice_oil_pressure_warning
  // ice_oil_temperature_warning
  // pdu12_active_anti_fire
  // ice_sensor_failure_warning
  // ice_target_gear_not_reached_warning
  // ice_fuel_volume_warning
  // rm_counter_error
  // rm_timeout_error
  // psa_steer_slip_warning
  // ice_error_legacy
  // emb_line_press_over_max_start_limit_legacy
  // pdu1_counter_error_legacy
  // pdu1_timeout_error_legacy
  // pdu2_counter_error_legacy
  // pdu2_timeout_error_legacy
  // em_piston_hall_not_ready_legacy
  // emb_tank_press_under_level1_legacy
  // emb_tank_press_under_level2_legacy
  // emb_tank_press_under_level3_legacy
  // emb_tank_press_under_min_start_limit_legacy
  // ice_over_rpm_warning_legacy
  // ice_diagnostic_spare_legacy
}

bool
sd_can_msgs__msg__DiagnosticWord01__are_equal(const sd_can_msgs__msg__DiagnosticWord01 * lhs, const sd_can_msgs__msg__DiagnosticWord01 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // bms_starting_faild
  if (lhs->bms_starting_faild != rhs->bms_starting_faild) {
    return false;
  }
  // bms_timeout_error
  if (lhs->bms_timeout_error != rhs->bms_timeout_error) {
    return false;
  }
  // cba_fl_counter_error
  if (lhs->cba_fl_counter_error != rhs->cba_fl_counter_error) {
    return false;
  }
  // cba_fl_derating
  if (lhs->cba_fl_derating != rhs->cba_fl_derating) {
    return false;
  }
  // cba_fl_error
  if (lhs->cba_fl_error != rhs->cba_fl_error) {
    return false;
  }
  // cba_fl_timeout_error
  if (lhs->cba_fl_timeout_error != rhs->cba_fl_timeout_error) {
    return false;
  }
  // cba_fr_counter_error
  if (lhs->cba_fr_counter_error != rhs->cba_fr_counter_error) {
    return false;
  }
  // cba_fr_derating
  if (lhs->cba_fr_derating != rhs->cba_fr_derating) {
    return false;
  }
  // cba_fr_error
  if (lhs->cba_fr_error != rhs->cba_fr_error) {
    return false;
  }
  // cba_fr_timeout_error
  if (lhs->cba_fr_timeout_error != rhs->cba_fr_timeout_error) {
    return false;
  }
  // cba_rl_counter_error
  if (lhs->cba_rl_counter_error != rhs->cba_rl_counter_error) {
    return false;
  }
  // cba_rl_derating
  if (lhs->cba_rl_derating != rhs->cba_rl_derating) {
    return false;
  }
  // cba_rl_error
  if (lhs->cba_rl_error != rhs->cba_rl_error) {
    return false;
  }
  // cba_rl_timeout_error
  if (lhs->cba_rl_timeout_error != rhs->cba_rl_timeout_error) {
    return false;
  }
  // cba_rr_counter_error
  if (lhs->cba_rr_counter_error != rhs->cba_rr_counter_error) {
    return false;
  }
  // cba_rr_derating
  if (lhs->cba_rr_derating != rhs->cba_rr_derating) {
    return false;
  }
  // cba_rr_error
  if (lhs->cba_rr_error != rhs->cba_rr_error) {
    return false;
  }
  // cba_rr_timeout_error
  if (lhs->cba_rr_timeout_error != rhs->cba_rr_timeout_error) {
    return false;
  }
  // dcdc_starting_faild
  if (lhs->dcdc_starting_faild != rhs->dcdc_starting_faild) {
    return false;
  }
  // dcdc_timeout_error
  if (lhs->dcdc_timeout_error != rhs->dcdc_timeout_error) {
    return false;
  }
  // ecu_timeout_em_fault
  if (lhs->ecu_timeout_em_fault != rhs->ecu_timeout_em_fault) {
    return false;
  }
  // dem_cbafl_not_receive
  if (lhs->dem_cbafl_not_receive != rhs->dem_cbafl_not_receive) {
    return false;
  }
  // ice_gear_low_oil_temp_warning
  if (lhs->ice_gear_low_oil_temp_warning != rhs->ice_gear_low_oil_temp_warning) {
    return false;
  }
  // ice_engine_off_rejected
  if (lhs->ice_engine_off_rejected != rhs->ice_engine_off_rejected) {
    return false;
  }
  // dem_pdu12_v_not_receive
  if (lhs->dem_pdu12_v_not_receive != rhs->dem_pdu12_v_not_receive) {
    return false;
  }
  // ice_starting_fueling_failed
  if (lhs->ice_starting_fueling_failed != rhs->ice_starting_fueling_failed) {
    return false;
  }
  // ice_starting_oil_heater_failed
  if (lhs->ice_starting_oil_heater_failed != rhs->ice_starting_oil_heater_failed) {
    return false;
  }
  // ice_starting_starting_failed
  if (lhs->ice_starting_starting_failed != rhs->ice_starting_starting_failed) {
    return false;
  }
  // ice_aps_warning
  if (lhs->ice_aps_warning != rhs->ice_aps_warning) {
    return false;
  }
  // hl_counter_error
  if (lhs->hl_counter_error != rhs->hl_counter_error) {
    return false;
  }
  // hl_timeout_error
  if (lhs->hl_timeout_error != rhs->hl_timeout_error) {
    return false;
  }
  // ice_counter_error
  if (lhs->ice_counter_error != rhs->ice_counter_error) {
    return false;
  }
  // ice_timeout_error
  if (lhs->ice_timeout_error != rhs->ice_timeout_error) {
    return false;
  }
  // dem_cbafr_not_receive
  if (lhs->dem_cbafr_not_receive != rhs->dem_cbafr_not_receive) {
    return false;
  }
  // ice_oil_temp_under_min_start_limit
  if (lhs->ice_oil_temp_under_min_start_limit != rhs->ice_oil_temp_under_min_start_limit) {
    return false;
  }
  // pdu12_counter_error
  if (lhs->pdu12_counter_error != rhs->pdu12_counter_error) {
    return false;
  }
  // pdu12_timeout_error
  if (lhs->pdu12_timeout_error != rhs->pdu12_timeout_error) {
    return false;
  }
  // pdu48_counter_error
  if (lhs->pdu48_counter_error != rhs->pdu48_counter_error) {
    return false;
  }
  // pdu48_timeout_error
  if (lhs->pdu48_timeout_error != rhs->pdu48_timeout_error) {
    return false;
  }
  // dem_cbarl_not_receive
  if (lhs->dem_cbarl_not_receive != rhs->dem_cbarl_not_receive) {
    return false;
  }
  // psa_counter_error
  if (lhs->psa_counter_error != rhs->psa_counter_error) {
    return false;
  }
  // psa_derating
  if (lhs->psa_derating != rhs->psa_derating) {
    return false;
  }
  // psa_error
  if (lhs->psa_error != rhs->psa_error) {
    return false;
  }
  // psa_timeout_error
  if (lhs->psa_timeout_error != rhs->psa_timeout_error) {
    return false;
  }
  // dem_cbarr_not_receive
  if (lhs->dem_cbarr_not_receive != rhs->dem_cbarr_not_receive) {
    return false;
  }
  // em_stop_conditions_active
  if (lhs->em_stop_conditions_active != rhs->em_stop_conditions_active) {
    return false;
  }
  // ml_stop_conditions_active
  if (lhs->ml_stop_conditions_active != rhs->ml_stop_conditions_active) {
    return false;
  }
  // dcdc4812_under_min_start_limit
  if (lhs->dcdc4812_under_min_start_limit != rhs->dcdc4812_under_min_start_limit) {
    return false;
  }
  // ice_override_wrong_config
  if (lhs->ice_override_wrong_config != rhs->ice_override_wrong_config) {
    return false;
  }
  // bsu_wrong_init_config
  if (lhs->bsu_wrong_init_config != rhs->bsu_wrong_init_config) {
    return false;
  }
  // ice_boost_warning
  if (lhs->ice_boost_warning != rhs->ice_boost_warning) {
    return false;
  }
  // ice_coolant_pressure_warning
  if (lhs->ice_coolant_pressure_warning != rhs->ice_coolant_pressure_warning) {
    return false;
  }
  // ice_coolant_temperature_warning
  if (lhs->ice_coolant_temperature_warning != rhs->ice_coolant_temperature_warning) {
    return false;
  }
  // ice_fuel_pressure_warning
  if (lhs->ice_fuel_pressure_warning != rhs->ice_fuel_pressure_warning) {
    return false;
  }
  // ice_gear_oil_temperature_warning
  if (lhs->ice_gear_oil_temperature_warning != rhs->ice_gear_oil_temperature_warning) {
    return false;
  }
  // ice_oil_pressure_warning
  if (lhs->ice_oil_pressure_warning != rhs->ice_oil_pressure_warning) {
    return false;
  }
  // ice_oil_temperature_warning
  if (lhs->ice_oil_temperature_warning != rhs->ice_oil_temperature_warning) {
    return false;
  }
  // pdu12_active_anti_fire
  if (lhs->pdu12_active_anti_fire != rhs->pdu12_active_anti_fire) {
    return false;
  }
  // ice_sensor_failure_warning
  if (lhs->ice_sensor_failure_warning != rhs->ice_sensor_failure_warning) {
    return false;
  }
  // ice_target_gear_not_reached_warning
  if (lhs->ice_target_gear_not_reached_warning != rhs->ice_target_gear_not_reached_warning) {
    return false;
  }
  // ice_fuel_volume_warning
  if (lhs->ice_fuel_volume_warning != rhs->ice_fuel_volume_warning) {
    return false;
  }
  // rm_counter_error
  if (lhs->rm_counter_error != rhs->rm_counter_error) {
    return false;
  }
  // rm_timeout_error
  if (lhs->rm_timeout_error != rhs->rm_timeout_error) {
    return false;
  }
  // psa_steer_slip_warning
  if (lhs->psa_steer_slip_warning != rhs->psa_steer_slip_warning) {
    return false;
  }
  // ice_error_legacy
  if (lhs->ice_error_legacy != rhs->ice_error_legacy) {
    return false;
  }
  // emb_line_press_over_max_start_limit_legacy
  if (lhs->emb_line_press_over_max_start_limit_legacy != rhs->emb_line_press_over_max_start_limit_legacy) {
    return false;
  }
  // pdu1_counter_error_legacy
  if (lhs->pdu1_counter_error_legacy != rhs->pdu1_counter_error_legacy) {
    return false;
  }
  // pdu1_timeout_error_legacy
  if (lhs->pdu1_timeout_error_legacy != rhs->pdu1_timeout_error_legacy) {
    return false;
  }
  // pdu2_counter_error_legacy
  if (lhs->pdu2_counter_error_legacy != rhs->pdu2_counter_error_legacy) {
    return false;
  }
  // pdu2_timeout_error_legacy
  if (lhs->pdu2_timeout_error_legacy != rhs->pdu2_timeout_error_legacy) {
    return false;
  }
  // em_piston_hall_not_ready_legacy
  if (lhs->em_piston_hall_not_ready_legacy != rhs->em_piston_hall_not_ready_legacy) {
    return false;
  }
  // emb_tank_press_under_level1_legacy
  if (lhs->emb_tank_press_under_level1_legacy != rhs->emb_tank_press_under_level1_legacy) {
    return false;
  }
  // emb_tank_press_under_level2_legacy
  if (lhs->emb_tank_press_under_level2_legacy != rhs->emb_tank_press_under_level2_legacy) {
    return false;
  }
  // emb_tank_press_under_level3_legacy
  if (lhs->emb_tank_press_under_level3_legacy != rhs->emb_tank_press_under_level3_legacy) {
    return false;
  }
  // emb_tank_press_under_min_start_limit_legacy
  if (lhs->emb_tank_press_under_min_start_limit_legacy != rhs->emb_tank_press_under_min_start_limit_legacy) {
    return false;
  }
  // ice_over_rpm_warning_legacy
  if (lhs->ice_over_rpm_warning_legacy != rhs->ice_over_rpm_warning_legacy) {
    return false;
  }
  // ice_diagnostic_spare_legacy
  if (lhs->ice_diagnostic_spare_legacy != rhs->ice_diagnostic_spare_legacy) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord01__copy(
  const sd_can_msgs__msg__DiagnosticWord01 * input,
  sd_can_msgs__msg__DiagnosticWord01 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // bms_starting_faild
  output->bms_starting_faild = input->bms_starting_faild;
  // bms_timeout_error
  output->bms_timeout_error = input->bms_timeout_error;
  // cba_fl_counter_error
  output->cba_fl_counter_error = input->cba_fl_counter_error;
  // cba_fl_derating
  output->cba_fl_derating = input->cba_fl_derating;
  // cba_fl_error
  output->cba_fl_error = input->cba_fl_error;
  // cba_fl_timeout_error
  output->cba_fl_timeout_error = input->cba_fl_timeout_error;
  // cba_fr_counter_error
  output->cba_fr_counter_error = input->cba_fr_counter_error;
  // cba_fr_derating
  output->cba_fr_derating = input->cba_fr_derating;
  // cba_fr_error
  output->cba_fr_error = input->cba_fr_error;
  // cba_fr_timeout_error
  output->cba_fr_timeout_error = input->cba_fr_timeout_error;
  // cba_rl_counter_error
  output->cba_rl_counter_error = input->cba_rl_counter_error;
  // cba_rl_derating
  output->cba_rl_derating = input->cba_rl_derating;
  // cba_rl_error
  output->cba_rl_error = input->cba_rl_error;
  // cba_rl_timeout_error
  output->cba_rl_timeout_error = input->cba_rl_timeout_error;
  // cba_rr_counter_error
  output->cba_rr_counter_error = input->cba_rr_counter_error;
  // cba_rr_derating
  output->cba_rr_derating = input->cba_rr_derating;
  // cba_rr_error
  output->cba_rr_error = input->cba_rr_error;
  // cba_rr_timeout_error
  output->cba_rr_timeout_error = input->cba_rr_timeout_error;
  // dcdc_starting_faild
  output->dcdc_starting_faild = input->dcdc_starting_faild;
  // dcdc_timeout_error
  output->dcdc_timeout_error = input->dcdc_timeout_error;
  // ecu_timeout_em_fault
  output->ecu_timeout_em_fault = input->ecu_timeout_em_fault;
  // dem_cbafl_not_receive
  output->dem_cbafl_not_receive = input->dem_cbafl_not_receive;
  // ice_gear_low_oil_temp_warning
  output->ice_gear_low_oil_temp_warning = input->ice_gear_low_oil_temp_warning;
  // ice_engine_off_rejected
  output->ice_engine_off_rejected = input->ice_engine_off_rejected;
  // dem_pdu12_v_not_receive
  output->dem_pdu12_v_not_receive = input->dem_pdu12_v_not_receive;
  // ice_starting_fueling_failed
  output->ice_starting_fueling_failed = input->ice_starting_fueling_failed;
  // ice_starting_oil_heater_failed
  output->ice_starting_oil_heater_failed = input->ice_starting_oil_heater_failed;
  // ice_starting_starting_failed
  output->ice_starting_starting_failed = input->ice_starting_starting_failed;
  // ice_aps_warning
  output->ice_aps_warning = input->ice_aps_warning;
  // hl_counter_error
  output->hl_counter_error = input->hl_counter_error;
  // hl_timeout_error
  output->hl_timeout_error = input->hl_timeout_error;
  // ice_counter_error
  output->ice_counter_error = input->ice_counter_error;
  // ice_timeout_error
  output->ice_timeout_error = input->ice_timeout_error;
  // dem_cbafr_not_receive
  output->dem_cbafr_not_receive = input->dem_cbafr_not_receive;
  // ice_oil_temp_under_min_start_limit
  output->ice_oil_temp_under_min_start_limit = input->ice_oil_temp_under_min_start_limit;
  // pdu12_counter_error
  output->pdu12_counter_error = input->pdu12_counter_error;
  // pdu12_timeout_error
  output->pdu12_timeout_error = input->pdu12_timeout_error;
  // pdu48_counter_error
  output->pdu48_counter_error = input->pdu48_counter_error;
  // pdu48_timeout_error
  output->pdu48_timeout_error = input->pdu48_timeout_error;
  // dem_cbarl_not_receive
  output->dem_cbarl_not_receive = input->dem_cbarl_not_receive;
  // psa_counter_error
  output->psa_counter_error = input->psa_counter_error;
  // psa_derating
  output->psa_derating = input->psa_derating;
  // psa_error
  output->psa_error = input->psa_error;
  // psa_timeout_error
  output->psa_timeout_error = input->psa_timeout_error;
  // dem_cbarr_not_receive
  output->dem_cbarr_not_receive = input->dem_cbarr_not_receive;
  // em_stop_conditions_active
  output->em_stop_conditions_active = input->em_stop_conditions_active;
  // ml_stop_conditions_active
  output->ml_stop_conditions_active = input->ml_stop_conditions_active;
  // dcdc4812_under_min_start_limit
  output->dcdc4812_under_min_start_limit = input->dcdc4812_under_min_start_limit;
  // ice_override_wrong_config
  output->ice_override_wrong_config = input->ice_override_wrong_config;
  // bsu_wrong_init_config
  output->bsu_wrong_init_config = input->bsu_wrong_init_config;
  // ice_boost_warning
  output->ice_boost_warning = input->ice_boost_warning;
  // ice_coolant_pressure_warning
  output->ice_coolant_pressure_warning = input->ice_coolant_pressure_warning;
  // ice_coolant_temperature_warning
  output->ice_coolant_temperature_warning = input->ice_coolant_temperature_warning;
  // ice_fuel_pressure_warning
  output->ice_fuel_pressure_warning = input->ice_fuel_pressure_warning;
  // ice_gear_oil_temperature_warning
  output->ice_gear_oil_temperature_warning = input->ice_gear_oil_temperature_warning;
  // ice_oil_pressure_warning
  output->ice_oil_pressure_warning = input->ice_oil_pressure_warning;
  // ice_oil_temperature_warning
  output->ice_oil_temperature_warning = input->ice_oil_temperature_warning;
  // pdu12_active_anti_fire
  output->pdu12_active_anti_fire = input->pdu12_active_anti_fire;
  // ice_sensor_failure_warning
  output->ice_sensor_failure_warning = input->ice_sensor_failure_warning;
  // ice_target_gear_not_reached_warning
  output->ice_target_gear_not_reached_warning = input->ice_target_gear_not_reached_warning;
  // ice_fuel_volume_warning
  output->ice_fuel_volume_warning = input->ice_fuel_volume_warning;
  // rm_counter_error
  output->rm_counter_error = input->rm_counter_error;
  // rm_timeout_error
  output->rm_timeout_error = input->rm_timeout_error;
  // psa_steer_slip_warning
  output->psa_steer_slip_warning = input->psa_steer_slip_warning;
  // ice_error_legacy
  output->ice_error_legacy = input->ice_error_legacy;
  // emb_line_press_over_max_start_limit_legacy
  output->emb_line_press_over_max_start_limit_legacy = input->emb_line_press_over_max_start_limit_legacy;
  // pdu1_counter_error_legacy
  output->pdu1_counter_error_legacy = input->pdu1_counter_error_legacy;
  // pdu1_timeout_error_legacy
  output->pdu1_timeout_error_legacy = input->pdu1_timeout_error_legacy;
  // pdu2_counter_error_legacy
  output->pdu2_counter_error_legacy = input->pdu2_counter_error_legacy;
  // pdu2_timeout_error_legacy
  output->pdu2_timeout_error_legacy = input->pdu2_timeout_error_legacy;
  // em_piston_hall_not_ready_legacy
  output->em_piston_hall_not_ready_legacy = input->em_piston_hall_not_ready_legacy;
  // emb_tank_press_under_level1_legacy
  output->emb_tank_press_under_level1_legacy = input->emb_tank_press_under_level1_legacy;
  // emb_tank_press_under_level2_legacy
  output->emb_tank_press_under_level2_legacy = input->emb_tank_press_under_level2_legacy;
  // emb_tank_press_under_level3_legacy
  output->emb_tank_press_under_level3_legacy = input->emb_tank_press_under_level3_legacy;
  // emb_tank_press_under_min_start_limit_legacy
  output->emb_tank_press_under_min_start_limit_legacy = input->emb_tank_press_under_min_start_limit_legacy;
  // ice_over_rpm_warning_legacy
  output->ice_over_rpm_warning_legacy = input->ice_over_rpm_warning_legacy;
  // ice_diagnostic_spare_legacy
  output->ice_diagnostic_spare_legacy = input->ice_diagnostic_spare_legacy;
  return true;
}

sd_can_msgs__msg__DiagnosticWord01 *
sd_can_msgs__msg__DiagnosticWord01__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord01 * msg = (sd_can_msgs__msg__DiagnosticWord01 *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__DiagnosticWord01));
  bool success = sd_can_msgs__msg__DiagnosticWord01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__DiagnosticWord01__destroy(sd_can_msgs__msg__DiagnosticWord01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__DiagnosticWord01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__DiagnosticWord01__Sequence__init(sd_can_msgs__msg__DiagnosticWord01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord01 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__DiagnosticWord01 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__DiagnosticWord01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__DiagnosticWord01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__DiagnosticWord01__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sd_can_msgs__msg__DiagnosticWord01__Sequence__fini(sd_can_msgs__msg__DiagnosticWord01__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sd_can_msgs__msg__DiagnosticWord01__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sd_can_msgs__msg__DiagnosticWord01__Sequence *
sd_can_msgs__msg__DiagnosticWord01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord01__Sequence * array = (sd_can_msgs__msg__DiagnosticWord01__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__DiagnosticWord01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__DiagnosticWord01__Sequence__destroy(sd_can_msgs__msg__DiagnosticWord01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__DiagnosticWord01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__DiagnosticWord01__Sequence__are_equal(const sd_can_msgs__msg__DiagnosticWord01__Sequence * lhs, const sd_can_msgs__msg__DiagnosticWord01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord01__Sequence__copy(
  const sd_can_msgs__msg__DiagnosticWord01__Sequence * input,
  sd_can_msgs__msg__DiagnosticWord01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__DiagnosticWord01);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__DiagnosticWord01 * data =
      (sd_can_msgs__msg__DiagnosticWord01 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__DiagnosticWord01__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__DiagnosticWord01__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
