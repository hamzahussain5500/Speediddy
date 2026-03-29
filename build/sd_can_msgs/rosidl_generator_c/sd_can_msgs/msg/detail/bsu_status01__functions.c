// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/BSUStatus01.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/bsu_status01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__BSUStatus01__init(sd_can_msgs__msg__BSUStatus01 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__BSUStatus01__fini(msg);
    return false;
  }
  // bsu_limp_mode_activated
  // bsu_switch_off_req
  // abs_external_enable_ack
  // bsu_ml_stop_activated
  // bsu_em_stop_activated
  // bsu_alive_counter
  // bsu_hl_warning
  // bsu_hl_stop_request
  // bsu_status
  return true;
}

void
sd_can_msgs__msg__BSUStatus01__fini(sd_can_msgs__msg__BSUStatus01 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bsu_limp_mode_activated
  // bsu_switch_off_req
  // abs_external_enable_ack
  // bsu_ml_stop_activated
  // bsu_em_stop_activated
  // bsu_alive_counter
  // bsu_hl_warning
  // bsu_hl_stop_request
  // bsu_status
}

bool
sd_can_msgs__msg__BSUStatus01__are_equal(const sd_can_msgs__msg__BSUStatus01 * lhs, const sd_can_msgs__msg__BSUStatus01 * rhs)
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
  // bsu_limp_mode_activated
  if (lhs->bsu_limp_mode_activated != rhs->bsu_limp_mode_activated) {
    return false;
  }
  // bsu_switch_off_req
  if (lhs->bsu_switch_off_req != rhs->bsu_switch_off_req) {
    return false;
  }
  // abs_external_enable_ack
  if (lhs->abs_external_enable_ack != rhs->abs_external_enable_ack) {
    return false;
  }
  // bsu_ml_stop_activated
  if (lhs->bsu_ml_stop_activated != rhs->bsu_ml_stop_activated) {
    return false;
  }
  // bsu_em_stop_activated
  if (lhs->bsu_em_stop_activated != rhs->bsu_em_stop_activated) {
    return false;
  }
  // bsu_alive_counter
  if (lhs->bsu_alive_counter != rhs->bsu_alive_counter) {
    return false;
  }
  // bsu_hl_warning
  if (lhs->bsu_hl_warning != rhs->bsu_hl_warning) {
    return false;
  }
  // bsu_hl_stop_request
  if (lhs->bsu_hl_stop_request != rhs->bsu_hl_stop_request) {
    return false;
  }
  // bsu_status
  if (lhs->bsu_status != rhs->bsu_status) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__BSUStatus01__copy(
  const sd_can_msgs__msg__BSUStatus01 * input,
  sd_can_msgs__msg__BSUStatus01 * output)
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
  // bsu_limp_mode_activated
  output->bsu_limp_mode_activated = input->bsu_limp_mode_activated;
  // bsu_switch_off_req
  output->bsu_switch_off_req = input->bsu_switch_off_req;
  // abs_external_enable_ack
  output->abs_external_enable_ack = input->abs_external_enable_ack;
  // bsu_ml_stop_activated
  output->bsu_ml_stop_activated = input->bsu_ml_stop_activated;
  // bsu_em_stop_activated
  output->bsu_em_stop_activated = input->bsu_em_stop_activated;
  // bsu_alive_counter
  output->bsu_alive_counter = input->bsu_alive_counter;
  // bsu_hl_warning
  output->bsu_hl_warning = input->bsu_hl_warning;
  // bsu_hl_stop_request
  output->bsu_hl_stop_request = input->bsu_hl_stop_request;
  // bsu_status
  output->bsu_status = input->bsu_status;
  return true;
}

sd_can_msgs__msg__BSUStatus01 *
sd_can_msgs__msg__BSUStatus01__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__BSUStatus01 * msg = (sd_can_msgs__msg__BSUStatus01 *)allocator.allocate(sizeof(sd_can_msgs__msg__BSUStatus01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__BSUStatus01));
  bool success = sd_can_msgs__msg__BSUStatus01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__BSUStatus01__destroy(sd_can_msgs__msg__BSUStatus01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__BSUStatus01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__BSUStatus01__Sequence__init(sd_can_msgs__msg__BSUStatus01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__BSUStatus01 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__BSUStatus01 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__BSUStatus01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__BSUStatus01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__BSUStatus01__fini(&data[i - 1]);
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
sd_can_msgs__msg__BSUStatus01__Sequence__fini(sd_can_msgs__msg__BSUStatus01__Sequence * array)
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
      sd_can_msgs__msg__BSUStatus01__fini(&array->data[i]);
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

sd_can_msgs__msg__BSUStatus01__Sequence *
sd_can_msgs__msg__BSUStatus01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__BSUStatus01__Sequence * array = (sd_can_msgs__msg__BSUStatus01__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__BSUStatus01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__BSUStatus01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__BSUStatus01__Sequence__destroy(sd_can_msgs__msg__BSUStatus01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__BSUStatus01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__BSUStatus01__Sequence__are_equal(const sd_can_msgs__msg__BSUStatus01__Sequence * lhs, const sd_can_msgs__msg__BSUStatus01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__BSUStatus01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__BSUStatus01__Sequence__copy(
  const sd_can_msgs__msg__BSUStatus01__Sequence * input,
  sd_can_msgs__msg__BSUStatus01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__BSUStatus01);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__BSUStatus01 * data =
      (sd_can_msgs__msg__BSUStatus01 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__BSUStatus01__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__BSUStatus01__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__BSUStatus01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
