// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/ice_status01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__ICEStatus01__init(sd_can_msgs__msg__ICEStatus01 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__ICEStatus01__fini(msg);
    return false;
  }
  // ice_actual_gear
  // ice_target_gear_ack
  // ice_actual_throttle
  // ice_target_throttle_ack
  // ice_push_to_pass_req
  // ice_push_to_pass_ack
  // ice_water_press_k_pa
  // ice_available_fuel_l
  // ice_downshift_available
  return true;
}

void
sd_can_msgs__msg__ICEStatus01__fini(sd_can_msgs__msg__ICEStatus01 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ice_actual_gear
  // ice_target_gear_ack
  // ice_actual_throttle
  // ice_target_throttle_ack
  // ice_push_to_pass_req
  // ice_push_to_pass_ack
  // ice_water_press_k_pa
  // ice_available_fuel_l
  // ice_downshift_available
}

bool
sd_can_msgs__msg__ICEStatus01__are_equal(const sd_can_msgs__msg__ICEStatus01 * lhs, const sd_can_msgs__msg__ICEStatus01 * rhs)
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
  // ice_actual_gear
  if (lhs->ice_actual_gear != rhs->ice_actual_gear) {
    return false;
  }
  // ice_target_gear_ack
  if (lhs->ice_target_gear_ack != rhs->ice_target_gear_ack) {
    return false;
  }
  // ice_actual_throttle
  if (lhs->ice_actual_throttle != rhs->ice_actual_throttle) {
    return false;
  }
  // ice_target_throttle_ack
  if (lhs->ice_target_throttle_ack != rhs->ice_target_throttle_ack) {
    return false;
  }
  // ice_push_to_pass_req
  if (lhs->ice_push_to_pass_req != rhs->ice_push_to_pass_req) {
    return false;
  }
  // ice_push_to_pass_ack
  if (lhs->ice_push_to_pass_ack != rhs->ice_push_to_pass_ack) {
    return false;
  }
  // ice_water_press_k_pa
  if (lhs->ice_water_press_k_pa != rhs->ice_water_press_k_pa) {
    return false;
  }
  // ice_available_fuel_l
  if (lhs->ice_available_fuel_l != rhs->ice_available_fuel_l) {
    return false;
  }
  // ice_downshift_available
  if (lhs->ice_downshift_available != rhs->ice_downshift_available) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__ICEStatus01__copy(
  const sd_can_msgs__msg__ICEStatus01 * input,
  sd_can_msgs__msg__ICEStatus01 * output)
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
  // ice_actual_gear
  output->ice_actual_gear = input->ice_actual_gear;
  // ice_target_gear_ack
  output->ice_target_gear_ack = input->ice_target_gear_ack;
  // ice_actual_throttle
  output->ice_actual_throttle = input->ice_actual_throttle;
  // ice_target_throttle_ack
  output->ice_target_throttle_ack = input->ice_target_throttle_ack;
  // ice_push_to_pass_req
  output->ice_push_to_pass_req = input->ice_push_to_pass_req;
  // ice_push_to_pass_ack
  output->ice_push_to_pass_ack = input->ice_push_to_pass_ack;
  // ice_water_press_k_pa
  output->ice_water_press_k_pa = input->ice_water_press_k_pa;
  // ice_available_fuel_l
  output->ice_available_fuel_l = input->ice_available_fuel_l;
  // ice_downshift_available
  output->ice_downshift_available = input->ice_downshift_available;
  return true;
}

sd_can_msgs__msg__ICEStatus01 *
sd_can_msgs__msg__ICEStatus01__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__ICEStatus01 * msg = (sd_can_msgs__msg__ICEStatus01 *)allocator.allocate(sizeof(sd_can_msgs__msg__ICEStatus01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__ICEStatus01));
  bool success = sd_can_msgs__msg__ICEStatus01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__ICEStatus01__destroy(sd_can_msgs__msg__ICEStatus01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__ICEStatus01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__ICEStatus01__Sequence__init(sd_can_msgs__msg__ICEStatus01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__ICEStatus01 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__ICEStatus01 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__ICEStatus01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__ICEStatus01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__ICEStatus01__fini(&data[i - 1]);
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
sd_can_msgs__msg__ICEStatus01__Sequence__fini(sd_can_msgs__msg__ICEStatus01__Sequence * array)
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
      sd_can_msgs__msg__ICEStatus01__fini(&array->data[i]);
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

sd_can_msgs__msg__ICEStatus01__Sequence *
sd_can_msgs__msg__ICEStatus01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__ICEStatus01__Sequence * array = (sd_can_msgs__msg__ICEStatus01__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__ICEStatus01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__ICEStatus01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__ICEStatus01__Sequence__destroy(sd_can_msgs__msg__ICEStatus01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__ICEStatus01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__ICEStatus01__Sequence__are_equal(const sd_can_msgs__msg__ICEStatus01__Sequence * lhs, const sd_can_msgs__msg__ICEStatus01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__ICEStatus01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__ICEStatus01__Sequence__copy(
  const sd_can_msgs__msg__ICEStatus01__Sequence * input,
  sd_can_msgs__msg__ICEStatus01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__ICEStatus01);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__ICEStatus01 * data =
      (sd_can_msgs__msg__ICEStatus01 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__ICEStatus01__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__ICEStatus01__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__ICEStatus01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
