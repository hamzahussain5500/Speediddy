// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/HLMsg03.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hl_msg03__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `header_legacy`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__HLMsg03__init(sd_can_msgs__msg__HLMsg03 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__HLMsg03__fini(msg);
    return false;
  }
  // hl_alive_03
  // hl_dbw_enable
  // hl_push_to_pass_on
  // hl_pdu12_activate_gnss
  // hl_pdu12_activate_oss
  // hl_ice_enable
  // hl_ml_supervisor_activation
  // hl_pdu12_activate_lidar
  // hl_pdu12_activate_radar
  // ice_start_fuel_level_l
  // hl_crancking_by_pass
  // hl_switch_off_ok
  // header_legacy
  if (!std_msgs__msg__Header__init(&msg->header_legacy)) {
    sd_can_msgs__msg__HLMsg03__fini(msg);
    return false;
  }
  // hl_pdu1_activate_gnss_legacy
  // hl_pdu1_activate_oss_legacy
  // hl_pdu1_activate_lidar_r_legacy
  // hl_pdu1_activate_lidar_cn_legacy
  // hl_pdu1_activate_lidar_l_legacy
  // hl_pdu1_activate_radar_rear_legacy
  // hl_pdu1_activate_radar_cn_legacy
  // hl_pdu1_activate_radar_r_legacy
  // hl_pdu1_activate_radar_l_legacy
  return true;
}

void
sd_can_msgs__msg__HLMsg03__fini(sd_can_msgs__msg__HLMsg03 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hl_alive_03
  // hl_dbw_enable
  // hl_push_to_pass_on
  // hl_pdu12_activate_gnss
  // hl_pdu12_activate_oss
  // hl_ice_enable
  // hl_ml_supervisor_activation
  // hl_pdu12_activate_lidar
  // hl_pdu12_activate_radar
  // ice_start_fuel_level_l
  // hl_crancking_by_pass
  // hl_switch_off_ok
  // header_legacy
  std_msgs__msg__Header__fini(&msg->header_legacy);
  // hl_pdu1_activate_gnss_legacy
  // hl_pdu1_activate_oss_legacy
  // hl_pdu1_activate_lidar_r_legacy
  // hl_pdu1_activate_lidar_cn_legacy
  // hl_pdu1_activate_lidar_l_legacy
  // hl_pdu1_activate_radar_rear_legacy
  // hl_pdu1_activate_radar_cn_legacy
  // hl_pdu1_activate_radar_r_legacy
  // hl_pdu1_activate_radar_l_legacy
}

bool
sd_can_msgs__msg__HLMsg03__are_equal(const sd_can_msgs__msg__HLMsg03 * lhs, const sd_can_msgs__msg__HLMsg03 * rhs)
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
  // hl_alive_03
  if (lhs->hl_alive_03 != rhs->hl_alive_03) {
    return false;
  }
  // hl_dbw_enable
  if (lhs->hl_dbw_enable != rhs->hl_dbw_enable) {
    return false;
  }
  // hl_push_to_pass_on
  if (lhs->hl_push_to_pass_on != rhs->hl_push_to_pass_on) {
    return false;
  }
  // hl_pdu12_activate_gnss
  if (lhs->hl_pdu12_activate_gnss != rhs->hl_pdu12_activate_gnss) {
    return false;
  }
  // hl_pdu12_activate_oss
  if (lhs->hl_pdu12_activate_oss != rhs->hl_pdu12_activate_oss) {
    return false;
  }
  // hl_ice_enable
  if (lhs->hl_ice_enable != rhs->hl_ice_enable) {
    return false;
  }
  // hl_ml_supervisor_activation
  if (lhs->hl_ml_supervisor_activation != rhs->hl_ml_supervisor_activation) {
    return false;
  }
  // hl_pdu12_activate_lidar
  if (lhs->hl_pdu12_activate_lidar != rhs->hl_pdu12_activate_lidar) {
    return false;
  }
  // hl_pdu12_activate_radar
  if (lhs->hl_pdu12_activate_radar != rhs->hl_pdu12_activate_radar) {
    return false;
  }
  // ice_start_fuel_level_l
  if (lhs->ice_start_fuel_level_l != rhs->ice_start_fuel_level_l) {
    return false;
  }
  // hl_crancking_by_pass
  if (lhs->hl_crancking_by_pass != rhs->hl_crancking_by_pass) {
    return false;
  }
  // hl_switch_off_ok
  if (lhs->hl_switch_off_ok != rhs->hl_switch_off_ok) {
    return false;
  }
  // header_legacy
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header_legacy), &(rhs->header_legacy)))
  {
    return false;
  }
  // hl_pdu1_activate_gnss_legacy
  if (lhs->hl_pdu1_activate_gnss_legacy != rhs->hl_pdu1_activate_gnss_legacy) {
    return false;
  }
  // hl_pdu1_activate_oss_legacy
  if (lhs->hl_pdu1_activate_oss_legacy != rhs->hl_pdu1_activate_oss_legacy) {
    return false;
  }
  // hl_pdu1_activate_lidar_r_legacy
  if (lhs->hl_pdu1_activate_lidar_r_legacy != rhs->hl_pdu1_activate_lidar_r_legacy) {
    return false;
  }
  // hl_pdu1_activate_lidar_cn_legacy
  if (lhs->hl_pdu1_activate_lidar_cn_legacy != rhs->hl_pdu1_activate_lidar_cn_legacy) {
    return false;
  }
  // hl_pdu1_activate_lidar_l_legacy
  if (lhs->hl_pdu1_activate_lidar_l_legacy != rhs->hl_pdu1_activate_lidar_l_legacy) {
    return false;
  }
  // hl_pdu1_activate_radar_rear_legacy
  if (lhs->hl_pdu1_activate_radar_rear_legacy != rhs->hl_pdu1_activate_radar_rear_legacy) {
    return false;
  }
  // hl_pdu1_activate_radar_cn_legacy
  if (lhs->hl_pdu1_activate_radar_cn_legacy != rhs->hl_pdu1_activate_radar_cn_legacy) {
    return false;
  }
  // hl_pdu1_activate_radar_r_legacy
  if (lhs->hl_pdu1_activate_radar_r_legacy != rhs->hl_pdu1_activate_radar_r_legacy) {
    return false;
  }
  // hl_pdu1_activate_radar_l_legacy
  if (lhs->hl_pdu1_activate_radar_l_legacy != rhs->hl_pdu1_activate_radar_l_legacy) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg03__copy(
  const sd_can_msgs__msg__HLMsg03 * input,
  sd_can_msgs__msg__HLMsg03 * output)
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
  // hl_alive_03
  output->hl_alive_03 = input->hl_alive_03;
  // hl_dbw_enable
  output->hl_dbw_enable = input->hl_dbw_enable;
  // hl_push_to_pass_on
  output->hl_push_to_pass_on = input->hl_push_to_pass_on;
  // hl_pdu12_activate_gnss
  output->hl_pdu12_activate_gnss = input->hl_pdu12_activate_gnss;
  // hl_pdu12_activate_oss
  output->hl_pdu12_activate_oss = input->hl_pdu12_activate_oss;
  // hl_ice_enable
  output->hl_ice_enable = input->hl_ice_enable;
  // hl_ml_supervisor_activation
  output->hl_ml_supervisor_activation = input->hl_ml_supervisor_activation;
  // hl_pdu12_activate_lidar
  output->hl_pdu12_activate_lidar = input->hl_pdu12_activate_lidar;
  // hl_pdu12_activate_radar
  output->hl_pdu12_activate_radar = input->hl_pdu12_activate_radar;
  // ice_start_fuel_level_l
  output->ice_start_fuel_level_l = input->ice_start_fuel_level_l;
  // hl_crancking_by_pass
  output->hl_crancking_by_pass = input->hl_crancking_by_pass;
  // hl_switch_off_ok
  output->hl_switch_off_ok = input->hl_switch_off_ok;
  // header_legacy
  if (!std_msgs__msg__Header__copy(
      &(input->header_legacy), &(output->header_legacy)))
  {
    return false;
  }
  // hl_pdu1_activate_gnss_legacy
  output->hl_pdu1_activate_gnss_legacy = input->hl_pdu1_activate_gnss_legacy;
  // hl_pdu1_activate_oss_legacy
  output->hl_pdu1_activate_oss_legacy = input->hl_pdu1_activate_oss_legacy;
  // hl_pdu1_activate_lidar_r_legacy
  output->hl_pdu1_activate_lidar_r_legacy = input->hl_pdu1_activate_lidar_r_legacy;
  // hl_pdu1_activate_lidar_cn_legacy
  output->hl_pdu1_activate_lidar_cn_legacy = input->hl_pdu1_activate_lidar_cn_legacy;
  // hl_pdu1_activate_lidar_l_legacy
  output->hl_pdu1_activate_lidar_l_legacy = input->hl_pdu1_activate_lidar_l_legacy;
  // hl_pdu1_activate_radar_rear_legacy
  output->hl_pdu1_activate_radar_rear_legacy = input->hl_pdu1_activate_radar_rear_legacy;
  // hl_pdu1_activate_radar_cn_legacy
  output->hl_pdu1_activate_radar_cn_legacy = input->hl_pdu1_activate_radar_cn_legacy;
  // hl_pdu1_activate_radar_r_legacy
  output->hl_pdu1_activate_radar_r_legacy = input->hl_pdu1_activate_radar_r_legacy;
  // hl_pdu1_activate_radar_l_legacy
  output->hl_pdu1_activate_radar_l_legacy = input->hl_pdu1_activate_radar_l_legacy;
  return true;
}

sd_can_msgs__msg__HLMsg03 *
sd_can_msgs__msg__HLMsg03__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg03 * msg = (sd_can_msgs__msg__HLMsg03 *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg03), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__HLMsg03));
  bool success = sd_can_msgs__msg__HLMsg03__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__HLMsg03__destroy(sd_can_msgs__msg__HLMsg03 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__HLMsg03__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__HLMsg03__Sequence__init(sd_can_msgs__msg__HLMsg03__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg03 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__HLMsg03 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__HLMsg03), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__HLMsg03__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__HLMsg03__fini(&data[i - 1]);
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
sd_can_msgs__msg__HLMsg03__Sequence__fini(sd_can_msgs__msg__HLMsg03__Sequence * array)
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
      sd_can_msgs__msg__HLMsg03__fini(&array->data[i]);
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

sd_can_msgs__msg__HLMsg03__Sequence *
sd_can_msgs__msg__HLMsg03__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg03__Sequence * array = (sd_can_msgs__msg__HLMsg03__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg03__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__HLMsg03__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__HLMsg03__Sequence__destroy(sd_can_msgs__msg__HLMsg03__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__HLMsg03__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__HLMsg03__Sequence__are_equal(const sd_can_msgs__msg__HLMsg03__Sequence * lhs, const sd_can_msgs__msg__HLMsg03__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg03__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg03__Sequence__copy(
  const sd_can_msgs__msg__HLMsg03__Sequence * input,
  sd_can_msgs__msg__HLMsg03__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__HLMsg03);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__HLMsg03 * data =
      (sd_can_msgs__msg__HLMsg03 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__HLMsg03__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__HLMsg03__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg03__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
