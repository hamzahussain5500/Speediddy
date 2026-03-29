// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/kistler_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__KistlerStatus__init(sd_can_msgs__msg__KistlerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__KistlerStatus__fini(msg);
    return false;
  }
  // sensor_id
  // temperature
  // lamp_current
  // filter_setting
  // stst
  // filter_off_on
  // lamp_current_control
  // temperature_ok
  // head_status
  // angle_switched_off
  // direction
  // ang_vel_correction
  // direction_motion
  // direction_mounting
  // direction_head_is_valid
  // direction_head
  return true;
}

void
sd_can_msgs__msg__KistlerStatus__fini(sd_can_msgs__msg__KistlerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_id
  // temperature
  // lamp_current
  // filter_setting
  // stst
  // filter_off_on
  // lamp_current_control
  // temperature_ok
  // head_status
  // angle_switched_off
  // direction
  // ang_vel_correction
  // direction_motion
  // direction_mounting
  // direction_head_is_valid
  // direction_head
}

bool
sd_can_msgs__msg__KistlerStatus__are_equal(const sd_can_msgs__msg__KistlerStatus * lhs, const sd_can_msgs__msg__KistlerStatus * rhs)
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
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // lamp_current
  if (lhs->lamp_current != rhs->lamp_current) {
    return false;
  }
  // filter_setting
  if (lhs->filter_setting != rhs->filter_setting) {
    return false;
  }
  // stst
  if (lhs->stst != rhs->stst) {
    return false;
  }
  // filter_off_on
  if (lhs->filter_off_on != rhs->filter_off_on) {
    return false;
  }
  // lamp_current_control
  if (lhs->lamp_current_control != rhs->lamp_current_control) {
    return false;
  }
  // temperature_ok
  if (lhs->temperature_ok != rhs->temperature_ok) {
    return false;
  }
  // head_status
  if (lhs->head_status != rhs->head_status) {
    return false;
  }
  // angle_switched_off
  if (lhs->angle_switched_off != rhs->angle_switched_off) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // ang_vel_correction
  if (lhs->ang_vel_correction != rhs->ang_vel_correction) {
    return false;
  }
  // direction_motion
  if (lhs->direction_motion != rhs->direction_motion) {
    return false;
  }
  // direction_mounting
  if (lhs->direction_mounting != rhs->direction_mounting) {
    return false;
  }
  // direction_head_is_valid
  if (lhs->direction_head_is_valid != rhs->direction_head_is_valid) {
    return false;
  }
  // direction_head
  if (lhs->direction_head != rhs->direction_head) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__KistlerStatus__copy(
  const sd_can_msgs__msg__KistlerStatus * input,
  sd_can_msgs__msg__KistlerStatus * output)
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
  // sensor_id
  output->sensor_id = input->sensor_id;
  // temperature
  output->temperature = input->temperature;
  // lamp_current
  output->lamp_current = input->lamp_current;
  // filter_setting
  output->filter_setting = input->filter_setting;
  // stst
  output->stst = input->stst;
  // filter_off_on
  output->filter_off_on = input->filter_off_on;
  // lamp_current_control
  output->lamp_current_control = input->lamp_current_control;
  // temperature_ok
  output->temperature_ok = input->temperature_ok;
  // head_status
  output->head_status = input->head_status;
  // angle_switched_off
  output->angle_switched_off = input->angle_switched_off;
  // direction
  output->direction = input->direction;
  // ang_vel_correction
  output->ang_vel_correction = input->ang_vel_correction;
  // direction_motion
  output->direction_motion = input->direction_motion;
  // direction_mounting
  output->direction_mounting = input->direction_mounting;
  // direction_head_is_valid
  output->direction_head_is_valid = input->direction_head_is_valid;
  // direction_head
  output->direction_head = input->direction_head;
  return true;
}

sd_can_msgs__msg__KistlerStatus *
sd_can_msgs__msg__KistlerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__KistlerStatus * msg = (sd_can_msgs__msg__KistlerStatus *)allocator.allocate(sizeof(sd_can_msgs__msg__KistlerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__KistlerStatus));
  bool success = sd_can_msgs__msg__KistlerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__KistlerStatus__destroy(sd_can_msgs__msg__KistlerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__KistlerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__KistlerStatus__Sequence__init(sd_can_msgs__msg__KistlerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__KistlerStatus * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__KistlerStatus *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__KistlerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__KistlerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__KistlerStatus__fini(&data[i - 1]);
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
sd_can_msgs__msg__KistlerStatus__Sequence__fini(sd_can_msgs__msg__KistlerStatus__Sequence * array)
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
      sd_can_msgs__msg__KistlerStatus__fini(&array->data[i]);
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

sd_can_msgs__msg__KistlerStatus__Sequence *
sd_can_msgs__msg__KistlerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__KistlerStatus__Sequence * array = (sd_can_msgs__msg__KistlerStatus__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__KistlerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__KistlerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__KistlerStatus__Sequence__destroy(sd_can_msgs__msg__KistlerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__KistlerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__KistlerStatus__Sequence__are_equal(const sd_can_msgs__msg__KistlerStatus__Sequence * lhs, const sd_can_msgs__msg__KistlerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__KistlerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__KistlerStatus__Sequence__copy(
  const sd_can_msgs__msg__KistlerStatus__Sequence * input,
  sd_can_msgs__msg__KistlerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__KistlerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__KistlerStatus * data =
      (sd_can_msgs__msg__KistlerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__KistlerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__KistlerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__KistlerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
