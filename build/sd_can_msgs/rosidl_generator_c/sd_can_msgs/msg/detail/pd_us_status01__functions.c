// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/PdUsStatus01.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/pd_us_status01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__PdUsStatus01__init(sd_can_msgs__msg__PdUsStatus01 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__PdUsStatus01__fini(msg);
    return false;
  }
  // pdu12_power_supply_voltage_v
  // pdu12_total_current_a
  // pdu48_power_supply_voltage_v
  // pdu48_total_current_a
  // pdu1_power_supply_voltage_v_legacy
  // pdu1_total_current_a_legacy
  // pdu2_power_supply_voltage_v_legacy
  // pdu2_total_current_a_legacy
  return true;
}

void
sd_can_msgs__msg__PdUsStatus01__fini(sd_can_msgs__msg__PdUsStatus01 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pdu12_power_supply_voltage_v
  // pdu12_total_current_a
  // pdu48_power_supply_voltage_v
  // pdu48_total_current_a
  // pdu1_power_supply_voltage_v_legacy
  // pdu1_total_current_a_legacy
  // pdu2_power_supply_voltage_v_legacy
  // pdu2_total_current_a_legacy
}

bool
sd_can_msgs__msg__PdUsStatus01__are_equal(const sd_can_msgs__msg__PdUsStatus01 * lhs, const sd_can_msgs__msg__PdUsStatus01 * rhs)
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
  // pdu12_power_supply_voltage_v
  if (lhs->pdu12_power_supply_voltage_v != rhs->pdu12_power_supply_voltage_v) {
    return false;
  }
  // pdu12_total_current_a
  if (lhs->pdu12_total_current_a != rhs->pdu12_total_current_a) {
    return false;
  }
  // pdu48_power_supply_voltage_v
  if (lhs->pdu48_power_supply_voltage_v != rhs->pdu48_power_supply_voltage_v) {
    return false;
  }
  // pdu48_total_current_a
  if (lhs->pdu48_total_current_a != rhs->pdu48_total_current_a) {
    return false;
  }
  // pdu1_power_supply_voltage_v_legacy
  if (lhs->pdu1_power_supply_voltage_v_legacy != rhs->pdu1_power_supply_voltage_v_legacy) {
    return false;
  }
  // pdu1_total_current_a_legacy
  if (lhs->pdu1_total_current_a_legacy != rhs->pdu1_total_current_a_legacy) {
    return false;
  }
  // pdu2_power_supply_voltage_v_legacy
  if (lhs->pdu2_power_supply_voltage_v_legacy != rhs->pdu2_power_supply_voltage_v_legacy) {
    return false;
  }
  // pdu2_total_current_a_legacy
  if (lhs->pdu2_total_current_a_legacy != rhs->pdu2_total_current_a_legacy) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__PdUsStatus01__copy(
  const sd_can_msgs__msg__PdUsStatus01 * input,
  sd_can_msgs__msg__PdUsStatus01 * output)
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
  // pdu12_power_supply_voltage_v
  output->pdu12_power_supply_voltage_v = input->pdu12_power_supply_voltage_v;
  // pdu12_total_current_a
  output->pdu12_total_current_a = input->pdu12_total_current_a;
  // pdu48_power_supply_voltage_v
  output->pdu48_power_supply_voltage_v = input->pdu48_power_supply_voltage_v;
  // pdu48_total_current_a
  output->pdu48_total_current_a = input->pdu48_total_current_a;
  // pdu1_power_supply_voltage_v_legacy
  output->pdu1_power_supply_voltage_v_legacy = input->pdu1_power_supply_voltage_v_legacy;
  // pdu1_total_current_a_legacy
  output->pdu1_total_current_a_legacy = input->pdu1_total_current_a_legacy;
  // pdu2_power_supply_voltage_v_legacy
  output->pdu2_power_supply_voltage_v_legacy = input->pdu2_power_supply_voltage_v_legacy;
  // pdu2_total_current_a_legacy
  output->pdu2_total_current_a_legacy = input->pdu2_total_current_a_legacy;
  return true;
}

sd_can_msgs__msg__PdUsStatus01 *
sd_can_msgs__msg__PdUsStatus01__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__PdUsStatus01 * msg = (sd_can_msgs__msg__PdUsStatus01 *)allocator.allocate(sizeof(sd_can_msgs__msg__PdUsStatus01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__PdUsStatus01));
  bool success = sd_can_msgs__msg__PdUsStatus01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__PdUsStatus01__destroy(sd_can_msgs__msg__PdUsStatus01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__PdUsStatus01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__PdUsStatus01__Sequence__init(sd_can_msgs__msg__PdUsStatus01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__PdUsStatus01 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__PdUsStatus01 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__PdUsStatus01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__PdUsStatus01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__PdUsStatus01__fini(&data[i - 1]);
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
sd_can_msgs__msg__PdUsStatus01__Sequence__fini(sd_can_msgs__msg__PdUsStatus01__Sequence * array)
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
      sd_can_msgs__msg__PdUsStatus01__fini(&array->data[i]);
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

sd_can_msgs__msg__PdUsStatus01__Sequence *
sd_can_msgs__msg__PdUsStatus01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__PdUsStatus01__Sequence * array = (sd_can_msgs__msg__PdUsStatus01__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__PdUsStatus01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__PdUsStatus01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__PdUsStatus01__Sequence__destroy(sd_can_msgs__msg__PdUsStatus01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__PdUsStatus01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__PdUsStatus01__Sequence__are_equal(const sd_can_msgs__msg__PdUsStatus01__Sequence * lhs, const sd_can_msgs__msg__PdUsStatus01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__PdUsStatus01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__PdUsStatus01__Sequence__copy(
  const sd_can_msgs__msg__PdUsStatus01__Sequence * input,
  sd_can_msgs__msg__PdUsStatus01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__PdUsStatus01);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__PdUsStatus01 * data =
      (sd_can_msgs__msg__PdUsStatus01 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__PdUsStatus01__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__PdUsStatus01__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__PdUsStatus01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
