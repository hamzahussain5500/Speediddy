// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/DiagnosticWord02.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word02__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__DiagnosticWord02__init(sd_can_msgs__msg__DiagnosticWord02 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__DiagnosticWord02__fini(msg);
    return false;
  }
  // rc_force_race_mode
  // rc_beacon_time_out
  // display_timeout_error
  // rm_red_flag
  // rm_safe_stop
  // display_counter_error
  // cba_em_brake_sat_not_received
  // cba_sat_values_not_received
  // ice_oil_temp_start_limit_not_rec
  // ml_stop_brake_sat_not_received
  // psa_sat_values_not_received
  // limp_sat_values_not_received
  // fan_car_speed_max_value_not_rec
  // fan_car_speed_min_value_not_rec
  // fan_water_temp_max_value_not_rec
  // fan_water_temp_min_value_not_rec
  // heater_oil_temp_max_value_not_rec
  // ice_fuel_pres_start_limit_not_rec
  // ice_oil_temp_by_pass_not_received
  // psa_sat_rates_def_val
  // bms12_soc_under_level1
  // bms12_soc_under_level2
  // bms12_temp_over_level1
  // bms12_temp_over_level2
  // bms48_soc_under_level1
  // bms48_soc_under_level2
  // bms48_temp_over_level1
  // bms48_temp_over_level2
  // badenia_counter_error
  // badenia_timeout_error
  // rm_em_flag
  // ml_stop_brake_bias_def_val
  // limp_ice_sat_values_def_val
  // cba_sat_rates_def_val
  // limp_cba_sat_values_def_val
  // p2p_max_num_activation_def_val
  // p2p_cooldown_duration_def_val
  // p2p_active_duration_def_val
  // rc_delta_timeout_lim_def_val
  // hl_mlsupervisor_request
  return true;
}

void
sd_can_msgs__msg__DiagnosticWord02__fini(sd_can_msgs__msg__DiagnosticWord02 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rc_force_race_mode
  // rc_beacon_time_out
  // display_timeout_error
  // rm_red_flag
  // rm_safe_stop
  // display_counter_error
  // cba_em_brake_sat_not_received
  // cba_sat_values_not_received
  // ice_oil_temp_start_limit_not_rec
  // ml_stop_brake_sat_not_received
  // psa_sat_values_not_received
  // limp_sat_values_not_received
  // fan_car_speed_max_value_not_rec
  // fan_car_speed_min_value_not_rec
  // fan_water_temp_max_value_not_rec
  // fan_water_temp_min_value_not_rec
  // heater_oil_temp_max_value_not_rec
  // ice_fuel_pres_start_limit_not_rec
  // ice_oil_temp_by_pass_not_received
  // psa_sat_rates_def_val
  // bms12_soc_under_level1
  // bms12_soc_under_level2
  // bms12_temp_over_level1
  // bms12_temp_over_level2
  // bms48_soc_under_level1
  // bms48_soc_under_level2
  // bms48_temp_over_level1
  // bms48_temp_over_level2
  // badenia_counter_error
  // badenia_timeout_error
  // rm_em_flag
  // ml_stop_brake_bias_def_val
  // limp_ice_sat_values_def_val
  // cba_sat_rates_def_val
  // limp_cba_sat_values_def_val
  // p2p_max_num_activation_def_val
  // p2p_cooldown_duration_def_val
  // p2p_active_duration_def_val
  // rc_delta_timeout_lim_def_val
  // hl_mlsupervisor_request
}

bool
sd_can_msgs__msg__DiagnosticWord02__are_equal(const sd_can_msgs__msg__DiagnosticWord02 * lhs, const sd_can_msgs__msg__DiagnosticWord02 * rhs)
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
  // rc_force_race_mode
  if (lhs->rc_force_race_mode != rhs->rc_force_race_mode) {
    return false;
  }
  // rc_beacon_time_out
  if (lhs->rc_beacon_time_out != rhs->rc_beacon_time_out) {
    return false;
  }
  // display_timeout_error
  if (lhs->display_timeout_error != rhs->display_timeout_error) {
    return false;
  }
  // rm_red_flag
  if (lhs->rm_red_flag != rhs->rm_red_flag) {
    return false;
  }
  // rm_safe_stop
  if (lhs->rm_safe_stop != rhs->rm_safe_stop) {
    return false;
  }
  // display_counter_error
  if (lhs->display_counter_error != rhs->display_counter_error) {
    return false;
  }
  // cba_em_brake_sat_not_received
  if (lhs->cba_em_brake_sat_not_received != rhs->cba_em_brake_sat_not_received) {
    return false;
  }
  // cba_sat_values_not_received
  if (lhs->cba_sat_values_not_received != rhs->cba_sat_values_not_received) {
    return false;
  }
  // ice_oil_temp_start_limit_not_rec
  if (lhs->ice_oil_temp_start_limit_not_rec != rhs->ice_oil_temp_start_limit_not_rec) {
    return false;
  }
  // ml_stop_brake_sat_not_received
  if (lhs->ml_stop_brake_sat_not_received != rhs->ml_stop_brake_sat_not_received) {
    return false;
  }
  // psa_sat_values_not_received
  if (lhs->psa_sat_values_not_received != rhs->psa_sat_values_not_received) {
    return false;
  }
  // limp_sat_values_not_received
  if (lhs->limp_sat_values_not_received != rhs->limp_sat_values_not_received) {
    return false;
  }
  // fan_car_speed_max_value_not_rec
  if (lhs->fan_car_speed_max_value_not_rec != rhs->fan_car_speed_max_value_not_rec) {
    return false;
  }
  // fan_car_speed_min_value_not_rec
  if (lhs->fan_car_speed_min_value_not_rec != rhs->fan_car_speed_min_value_not_rec) {
    return false;
  }
  // fan_water_temp_max_value_not_rec
  if (lhs->fan_water_temp_max_value_not_rec != rhs->fan_water_temp_max_value_not_rec) {
    return false;
  }
  // fan_water_temp_min_value_not_rec
  if (lhs->fan_water_temp_min_value_not_rec != rhs->fan_water_temp_min_value_not_rec) {
    return false;
  }
  // heater_oil_temp_max_value_not_rec
  if (lhs->heater_oil_temp_max_value_not_rec != rhs->heater_oil_temp_max_value_not_rec) {
    return false;
  }
  // ice_fuel_pres_start_limit_not_rec
  if (lhs->ice_fuel_pres_start_limit_not_rec != rhs->ice_fuel_pres_start_limit_not_rec) {
    return false;
  }
  // ice_oil_temp_by_pass_not_received
  if (lhs->ice_oil_temp_by_pass_not_received != rhs->ice_oil_temp_by_pass_not_received) {
    return false;
  }
  // psa_sat_rates_def_val
  if (lhs->psa_sat_rates_def_val != rhs->psa_sat_rates_def_val) {
    return false;
  }
  // bms12_soc_under_level1
  if (lhs->bms12_soc_under_level1 != rhs->bms12_soc_under_level1) {
    return false;
  }
  // bms12_soc_under_level2
  if (lhs->bms12_soc_under_level2 != rhs->bms12_soc_under_level2) {
    return false;
  }
  // bms12_temp_over_level1
  if (lhs->bms12_temp_over_level1 != rhs->bms12_temp_over_level1) {
    return false;
  }
  // bms12_temp_over_level2
  if (lhs->bms12_temp_over_level2 != rhs->bms12_temp_over_level2) {
    return false;
  }
  // bms48_soc_under_level1
  if (lhs->bms48_soc_under_level1 != rhs->bms48_soc_under_level1) {
    return false;
  }
  // bms48_soc_under_level2
  if (lhs->bms48_soc_under_level2 != rhs->bms48_soc_under_level2) {
    return false;
  }
  // bms48_temp_over_level1
  if (lhs->bms48_temp_over_level1 != rhs->bms48_temp_over_level1) {
    return false;
  }
  // bms48_temp_over_level2
  if (lhs->bms48_temp_over_level2 != rhs->bms48_temp_over_level2) {
    return false;
  }
  // badenia_counter_error
  if (lhs->badenia_counter_error != rhs->badenia_counter_error) {
    return false;
  }
  // badenia_timeout_error
  if (lhs->badenia_timeout_error != rhs->badenia_timeout_error) {
    return false;
  }
  // rm_em_flag
  if (lhs->rm_em_flag != rhs->rm_em_flag) {
    return false;
  }
  // ml_stop_brake_bias_def_val
  if (lhs->ml_stop_brake_bias_def_val != rhs->ml_stop_brake_bias_def_val) {
    return false;
  }
  // limp_ice_sat_values_def_val
  if (lhs->limp_ice_sat_values_def_val != rhs->limp_ice_sat_values_def_val) {
    return false;
  }
  // cba_sat_rates_def_val
  if (lhs->cba_sat_rates_def_val != rhs->cba_sat_rates_def_val) {
    return false;
  }
  // limp_cba_sat_values_def_val
  if (lhs->limp_cba_sat_values_def_val != rhs->limp_cba_sat_values_def_val) {
    return false;
  }
  // p2p_max_num_activation_def_val
  if (lhs->p2p_max_num_activation_def_val != rhs->p2p_max_num_activation_def_val) {
    return false;
  }
  // p2p_cooldown_duration_def_val
  if (lhs->p2p_cooldown_duration_def_val != rhs->p2p_cooldown_duration_def_val) {
    return false;
  }
  // p2p_active_duration_def_val
  if (lhs->p2p_active_duration_def_val != rhs->p2p_active_duration_def_val) {
    return false;
  }
  // rc_delta_timeout_lim_def_val
  if (lhs->rc_delta_timeout_lim_def_val != rhs->rc_delta_timeout_lim_def_val) {
    return false;
  }
  // hl_mlsupervisor_request
  if (lhs->hl_mlsupervisor_request != rhs->hl_mlsupervisor_request) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord02__copy(
  const sd_can_msgs__msg__DiagnosticWord02 * input,
  sd_can_msgs__msg__DiagnosticWord02 * output)
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
  // rc_force_race_mode
  output->rc_force_race_mode = input->rc_force_race_mode;
  // rc_beacon_time_out
  output->rc_beacon_time_out = input->rc_beacon_time_out;
  // display_timeout_error
  output->display_timeout_error = input->display_timeout_error;
  // rm_red_flag
  output->rm_red_flag = input->rm_red_flag;
  // rm_safe_stop
  output->rm_safe_stop = input->rm_safe_stop;
  // display_counter_error
  output->display_counter_error = input->display_counter_error;
  // cba_em_brake_sat_not_received
  output->cba_em_brake_sat_not_received = input->cba_em_brake_sat_not_received;
  // cba_sat_values_not_received
  output->cba_sat_values_not_received = input->cba_sat_values_not_received;
  // ice_oil_temp_start_limit_not_rec
  output->ice_oil_temp_start_limit_not_rec = input->ice_oil_temp_start_limit_not_rec;
  // ml_stop_brake_sat_not_received
  output->ml_stop_brake_sat_not_received = input->ml_stop_brake_sat_not_received;
  // psa_sat_values_not_received
  output->psa_sat_values_not_received = input->psa_sat_values_not_received;
  // limp_sat_values_not_received
  output->limp_sat_values_not_received = input->limp_sat_values_not_received;
  // fan_car_speed_max_value_not_rec
  output->fan_car_speed_max_value_not_rec = input->fan_car_speed_max_value_not_rec;
  // fan_car_speed_min_value_not_rec
  output->fan_car_speed_min_value_not_rec = input->fan_car_speed_min_value_not_rec;
  // fan_water_temp_max_value_not_rec
  output->fan_water_temp_max_value_not_rec = input->fan_water_temp_max_value_not_rec;
  // fan_water_temp_min_value_not_rec
  output->fan_water_temp_min_value_not_rec = input->fan_water_temp_min_value_not_rec;
  // heater_oil_temp_max_value_not_rec
  output->heater_oil_temp_max_value_not_rec = input->heater_oil_temp_max_value_not_rec;
  // ice_fuel_pres_start_limit_not_rec
  output->ice_fuel_pres_start_limit_not_rec = input->ice_fuel_pres_start_limit_not_rec;
  // ice_oil_temp_by_pass_not_received
  output->ice_oil_temp_by_pass_not_received = input->ice_oil_temp_by_pass_not_received;
  // psa_sat_rates_def_val
  output->psa_sat_rates_def_val = input->psa_sat_rates_def_val;
  // bms12_soc_under_level1
  output->bms12_soc_under_level1 = input->bms12_soc_under_level1;
  // bms12_soc_under_level2
  output->bms12_soc_under_level2 = input->bms12_soc_under_level2;
  // bms12_temp_over_level1
  output->bms12_temp_over_level1 = input->bms12_temp_over_level1;
  // bms12_temp_over_level2
  output->bms12_temp_over_level2 = input->bms12_temp_over_level2;
  // bms48_soc_under_level1
  output->bms48_soc_under_level1 = input->bms48_soc_under_level1;
  // bms48_soc_under_level2
  output->bms48_soc_under_level2 = input->bms48_soc_under_level2;
  // bms48_temp_over_level1
  output->bms48_temp_over_level1 = input->bms48_temp_over_level1;
  // bms48_temp_over_level2
  output->bms48_temp_over_level2 = input->bms48_temp_over_level2;
  // badenia_counter_error
  output->badenia_counter_error = input->badenia_counter_error;
  // badenia_timeout_error
  output->badenia_timeout_error = input->badenia_timeout_error;
  // rm_em_flag
  output->rm_em_flag = input->rm_em_flag;
  // ml_stop_brake_bias_def_val
  output->ml_stop_brake_bias_def_val = input->ml_stop_brake_bias_def_val;
  // limp_ice_sat_values_def_val
  output->limp_ice_sat_values_def_val = input->limp_ice_sat_values_def_val;
  // cba_sat_rates_def_val
  output->cba_sat_rates_def_val = input->cba_sat_rates_def_val;
  // limp_cba_sat_values_def_val
  output->limp_cba_sat_values_def_val = input->limp_cba_sat_values_def_val;
  // p2p_max_num_activation_def_val
  output->p2p_max_num_activation_def_val = input->p2p_max_num_activation_def_val;
  // p2p_cooldown_duration_def_val
  output->p2p_cooldown_duration_def_val = input->p2p_cooldown_duration_def_val;
  // p2p_active_duration_def_val
  output->p2p_active_duration_def_val = input->p2p_active_duration_def_val;
  // rc_delta_timeout_lim_def_val
  output->rc_delta_timeout_lim_def_val = input->rc_delta_timeout_lim_def_val;
  // hl_mlsupervisor_request
  output->hl_mlsupervisor_request = input->hl_mlsupervisor_request;
  return true;
}

sd_can_msgs__msg__DiagnosticWord02 *
sd_can_msgs__msg__DiagnosticWord02__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02 * msg = (sd_can_msgs__msg__DiagnosticWord02 *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord02), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__DiagnosticWord02));
  bool success = sd_can_msgs__msg__DiagnosticWord02__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__DiagnosticWord02__destroy(sd_can_msgs__msg__DiagnosticWord02 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__DiagnosticWord02__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__DiagnosticWord02__Sequence__init(sd_can_msgs__msg__DiagnosticWord02__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__DiagnosticWord02 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__DiagnosticWord02), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__DiagnosticWord02__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__DiagnosticWord02__fini(&data[i - 1]);
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
sd_can_msgs__msg__DiagnosticWord02__Sequence__fini(sd_can_msgs__msg__DiagnosticWord02__Sequence * array)
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
      sd_can_msgs__msg__DiagnosticWord02__fini(&array->data[i]);
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

sd_can_msgs__msg__DiagnosticWord02__Sequence *
sd_can_msgs__msg__DiagnosticWord02__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02__Sequence * array = (sd_can_msgs__msg__DiagnosticWord02__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord02__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__DiagnosticWord02__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__DiagnosticWord02__Sequence__destroy(sd_can_msgs__msg__DiagnosticWord02__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__DiagnosticWord02__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__DiagnosticWord02__Sequence__are_equal(const sd_can_msgs__msg__DiagnosticWord02__Sequence * lhs, const sd_can_msgs__msg__DiagnosticWord02__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord02__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord02__Sequence__copy(
  const sd_can_msgs__msg__DiagnosticWord02__Sequence * input,
  sd_can_msgs__msg__DiagnosticWord02__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__DiagnosticWord02);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__DiagnosticWord02 * data =
      (sd_can_msgs__msg__DiagnosticWord02 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__DiagnosticWord02__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__DiagnosticWord02__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord02__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
