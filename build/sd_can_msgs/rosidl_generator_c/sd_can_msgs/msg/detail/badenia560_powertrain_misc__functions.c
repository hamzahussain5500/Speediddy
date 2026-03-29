// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_powertrain_misc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560PowertrainMisc__init(sd_can_msgs__msg__Badenia560PowertrainMisc * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560PowertrainMisc__fini(msg);
    return false;
  }
  // b12_soc
  // b48_soc
  // b12_temp
  // b48_temp
  // throttle_position
  // engine_speed_limit
  // fuel_used_kg
  return true;
}

void
sd_can_msgs__msg__Badenia560PowertrainMisc__fini(sd_can_msgs__msg__Badenia560PowertrainMisc * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // b12_soc
  // b48_soc
  // b12_temp
  // b48_temp
  // throttle_position
  // engine_speed_limit
  // fuel_used_kg
}

bool
sd_can_msgs__msg__Badenia560PowertrainMisc__are_equal(const sd_can_msgs__msg__Badenia560PowertrainMisc * lhs, const sd_can_msgs__msg__Badenia560PowertrainMisc * rhs)
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
  // b12_soc
  if (lhs->b12_soc != rhs->b12_soc) {
    return false;
  }
  // b48_soc
  if (lhs->b48_soc != rhs->b48_soc) {
    return false;
  }
  // b12_temp
  if (lhs->b12_temp != rhs->b12_temp) {
    return false;
  }
  // b48_temp
  if (lhs->b48_temp != rhs->b48_temp) {
    return false;
  }
  // throttle_position
  if (lhs->throttle_position != rhs->throttle_position) {
    return false;
  }
  // engine_speed_limit
  if (lhs->engine_speed_limit != rhs->engine_speed_limit) {
    return false;
  }
  // fuel_used_kg
  if (lhs->fuel_used_kg != rhs->fuel_used_kg) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560PowertrainMisc__copy(
  const sd_can_msgs__msg__Badenia560PowertrainMisc * input,
  sd_can_msgs__msg__Badenia560PowertrainMisc * output)
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
  // b12_soc
  output->b12_soc = input->b12_soc;
  // b48_soc
  output->b48_soc = input->b48_soc;
  // b12_temp
  output->b12_temp = input->b12_temp;
  // b48_temp
  output->b48_temp = input->b48_temp;
  // throttle_position
  output->throttle_position = input->throttle_position;
  // engine_speed_limit
  output->engine_speed_limit = input->engine_speed_limit;
  // fuel_used_kg
  output->fuel_used_kg = input->fuel_used_kg;
  return true;
}

sd_can_msgs__msg__Badenia560PowertrainMisc *
sd_can_msgs__msg__Badenia560PowertrainMisc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainMisc * msg = (sd_can_msgs__msg__Badenia560PowertrainMisc *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560PowertrainMisc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560PowertrainMisc));
  bool success = sd_can_msgs__msg__Badenia560PowertrainMisc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560PowertrainMisc__destroy(sd_can_msgs__msg__Badenia560PowertrainMisc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560PowertrainMisc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__init(sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainMisc * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560PowertrainMisc *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560PowertrainMisc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560PowertrainMisc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560PowertrainMisc__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__fini(sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * array)
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
      sd_can_msgs__msg__Badenia560PowertrainMisc__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence *
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * array = (sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__destroy(sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__are_equal(const sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * lhs, const sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560PowertrainMisc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__copy(
  const sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * input,
  sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560PowertrainMisc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560PowertrainMisc * data =
      (sd_can_msgs__msg__Badenia560PowertrainMisc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560PowertrainMisc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560PowertrainMisc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560PowertrainMisc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
