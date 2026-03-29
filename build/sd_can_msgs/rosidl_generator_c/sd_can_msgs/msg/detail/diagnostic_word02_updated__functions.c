// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word02_updated__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__DiagnosticWord02Updated__init(sd_can_msgs__msg__DiagnosticWord02Updated * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__DiagnosticWord02Updated__fini(msg);
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
  return true;
}

void
sd_can_msgs__msg__DiagnosticWord02Updated__fini(sd_can_msgs__msg__DiagnosticWord02Updated * msg)
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
}

bool
sd_can_msgs__msg__DiagnosticWord02Updated__are_equal(const sd_can_msgs__msg__DiagnosticWord02Updated * lhs, const sd_can_msgs__msg__DiagnosticWord02Updated * rhs)
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
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord02Updated__copy(
  const sd_can_msgs__msg__DiagnosticWord02Updated * input,
  sd_can_msgs__msg__DiagnosticWord02Updated * output)
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
  return true;
}

sd_can_msgs__msg__DiagnosticWord02Updated *
sd_can_msgs__msg__DiagnosticWord02Updated__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02Updated * msg = (sd_can_msgs__msg__DiagnosticWord02Updated *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord02Updated), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__DiagnosticWord02Updated));
  bool success = sd_can_msgs__msg__DiagnosticWord02Updated__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__DiagnosticWord02Updated__destroy(sd_can_msgs__msg__DiagnosticWord02Updated * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__DiagnosticWord02Updated__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__init(sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02Updated * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__DiagnosticWord02Updated *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__DiagnosticWord02Updated), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__DiagnosticWord02Updated__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__DiagnosticWord02Updated__fini(&data[i - 1]);
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
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__fini(sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * array)
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
      sd_can_msgs__msg__DiagnosticWord02Updated__fini(&array->data[i]);
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

sd_can_msgs__msg__DiagnosticWord02Updated__Sequence *
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * array = (sd_can_msgs__msg__DiagnosticWord02Updated__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__DiagnosticWord02Updated__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__destroy(sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__are_equal(const sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * lhs, const sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord02Updated__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__copy(
  const sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * input,
  sd_can_msgs__msg__DiagnosticWord02Updated__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__DiagnosticWord02Updated);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__DiagnosticWord02Updated * data =
      (sd_can_msgs__msg__DiagnosticWord02Updated *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__DiagnosticWord02Updated__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__DiagnosticWord02Updated__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__DiagnosticWord02Updated__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
