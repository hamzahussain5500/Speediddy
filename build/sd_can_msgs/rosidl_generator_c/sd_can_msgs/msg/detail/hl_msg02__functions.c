// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/HLMsg02.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hl_msg02__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__HLMsg02__init(sd_can_msgs__msg__HLMsg02 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__HLMsg02__fini(msg);
    return false;
  }
  // hl_alive_02
  // hl_psa_mode_of_operation
  // hl_target_psa_control
  // hl_psa_profile_acc_rad_s2
  // hl_psa_profile_dec_rad_s2
  // hl_psa_profile_vel_rad_s
  return true;
}

void
sd_can_msgs__msg__HLMsg02__fini(sd_can_msgs__msg__HLMsg02 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hl_alive_02
  // hl_psa_mode_of_operation
  // hl_target_psa_control
  // hl_psa_profile_acc_rad_s2
  // hl_psa_profile_dec_rad_s2
  // hl_psa_profile_vel_rad_s
}

bool
sd_can_msgs__msg__HLMsg02__are_equal(const sd_can_msgs__msg__HLMsg02 * lhs, const sd_can_msgs__msg__HLMsg02 * rhs)
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
  // hl_alive_02
  if (lhs->hl_alive_02 != rhs->hl_alive_02) {
    return false;
  }
  // hl_psa_mode_of_operation
  if (lhs->hl_psa_mode_of_operation != rhs->hl_psa_mode_of_operation) {
    return false;
  }
  // hl_target_psa_control
  if (lhs->hl_target_psa_control != rhs->hl_target_psa_control) {
    return false;
  }
  // hl_psa_profile_acc_rad_s2
  if (lhs->hl_psa_profile_acc_rad_s2 != rhs->hl_psa_profile_acc_rad_s2) {
    return false;
  }
  // hl_psa_profile_dec_rad_s2
  if (lhs->hl_psa_profile_dec_rad_s2 != rhs->hl_psa_profile_dec_rad_s2) {
    return false;
  }
  // hl_psa_profile_vel_rad_s
  if (lhs->hl_psa_profile_vel_rad_s != rhs->hl_psa_profile_vel_rad_s) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg02__copy(
  const sd_can_msgs__msg__HLMsg02 * input,
  sd_can_msgs__msg__HLMsg02 * output)
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
  // hl_alive_02
  output->hl_alive_02 = input->hl_alive_02;
  // hl_psa_mode_of_operation
  output->hl_psa_mode_of_operation = input->hl_psa_mode_of_operation;
  // hl_target_psa_control
  output->hl_target_psa_control = input->hl_target_psa_control;
  // hl_psa_profile_acc_rad_s2
  output->hl_psa_profile_acc_rad_s2 = input->hl_psa_profile_acc_rad_s2;
  // hl_psa_profile_dec_rad_s2
  output->hl_psa_profile_dec_rad_s2 = input->hl_psa_profile_dec_rad_s2;
  // hl_psa_profile_vel_rad_s
  output->hl_psa_profile_vel_rad_s = input->hl_psa_profile_vel_rad_s;
  return true;
}

sd_can_msgs__msg__HLMsg02 *
sd_can_msgs__msg__HLMsg02__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg02 * msg = (sd_can_msgs__msg__HLMsg02 *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg02), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__HLMsg02));
  bool success = sd_can_msgs__msg__HLMsg02__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__HLMsg02__destroy(sd_can_msgs__msg__HLMsg02 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__HLMsg02__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__HLMsg02__Sequence__init(sd_can_msgs__msg__HLMsg02__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg02 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__HLMsg02 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__HLMsg02), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__HLMsg02__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__HLMsg02__fini(&data[i - 1]);
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
sd_can_msgs__msg__HLMsg02__Sequence__fini(sd_can_msgs__msg__HLMsg02__Sequence * array)
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
      sd_can_msgs__msg__HLMsg02__fini(&array->data[i]);
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

sd_can_msgs__msg__HLMsg02__Sequence *
sd_can_msgs__msg__HLMsg02__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg02__Sequence * array = (sd_can_msgs__msg__HLMsg02__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg02__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__HLMsg02__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__HLMsg02__Sequence__destroy(sd_can_msgs__msg__HLMsg02__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__HLMsg02__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__HLMsg02__Sequence__are_equal(const sd_can_msgs__msg__HLMsg02__Sequence * lhs, const sd_can_msgs__msg__HLMsg02__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg02__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg02__Sequence__copy(
  const sd_can_msgs__msg__HLMsg02__Sequence * input,
  sd_can_msgs__msg__HLMsg02__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__HLMsg02);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__HLMsg02 * data =
      (sd_can_msgs__msg__HLMsg02 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__HLMsg02__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__HLMsg02__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg02__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
