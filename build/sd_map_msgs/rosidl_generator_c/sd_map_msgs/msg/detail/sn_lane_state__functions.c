// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice
#include "sd_map_msgs/msg/detail/sn_lane_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sn_state`
#include "sd_map_msgs/msg/detail/sn_state__functions.h"

bool
sd_map_msgs__msg__SnLaneState__init(sd_map_msgs__msg__SnLaneState * msg)
{
  if (!msg) {
    return false;
  }
  // sn_state
  if (!sd_map_msgs__msg__SnState__init(&msg->sn_state)) {
    sd_map_msgs__msg__SnLaneState__fini(msg);
    return false;
  }
  // is_inside_borders
  // dist_to_border
  return true;
}

void
sd_map_msgs__msg__SnLaneState__fini(sd_map_msgs__msg__SnLaneState * msg)
{
  if (!msg) {
    return;
  }
  // sn_state
  sd_map_msgs__msg__SnState__fini(&msg->sn_state);
  // is_inside_borders
  // dist_to_border
}

bool
sd_map_msgs__msg__SnLaneState__are_equal(const sd_map_msgs__msg__SnLaneState * lhs, const sd_map_msgs__msg__SnLaneState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sn_state
  if (!sd_map_msgs__msg__SnState__are_equal(
      &(lhs->sn_state), &(rhs->sn_state)))
  {
    return false;
  }
  // is_inside_borders
  if (lhs->is_inside_borders != rhs->is_inside_borders) {
    return false;
  }
  // dist_to_border
  if (lhs->dist_to_border != rhs->dist_to_border) {
    return false;
  }
  return true;
}

bool
sd_map_msgs__msg__SnLaneState__copy(
  const sd_map_msgs__msg__SnLaneState * input,
  sd_map_msgs__msg__SnLaneState * output)
{
  if (!input || !output) {
    return false;
  }
  // sn_state
  if (!sd_map_msgs__msg__SnState__copy(
      &(input->sn_state), &(output->sn_state)))
  {
    return false;
  }
  // is_inside_borders
  output->is_inside_borders = input->is_inside_borders;
  // dist_to_border
  output->dist_to_border = input->dist_to_border;
  return true;
}

sd_map_msgs__msg__SnLaneState *
sd_map_msgs__msg__SnLaneState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnLaneState * msg = (sd_map_msgs__msg__SnLaneState *)allocator.allocate(sizeof(sd_map_msgs__msg__SnLaneState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_map_msgs__msg__SnLaneState));
  bool success = sd_map_msgs__msg__SnLaneState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_map_msgs__msg__SnLaneState__destroy(sd_map_msgs__msg__SnLaneState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_map_msgs__msg__SnLaneState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_map_msgs__msg__SnLaneState__Sequence__init(sd_map_msgs__msg__SnLaneState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnLaneState * data = NULL;

  if (size) {
    data = (sd_map_msgs__msg__SnLaneState *)allocator.zero_allocate(size, sizeof(sd_map_msgs__msg__SnLaneState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_map_msgs__msg__SnLaneState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_map_msgs__msg__SnLaneState__fini(&data[i - 1]);
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
sd_map_msgs__msg__SnLaneState__Sequence__fini(sd_map_msgs__msg__SnLaneState__Sequence * array)
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
      sd_map_msgs__msg__SnLaneState__fini(&array->data[i]);
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

sd_map_msgs__msg__SnLaneState__Sequence *
sd_map_msgs__msg__SnLaneState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnLaneState__Sequence * array = (sd_map_msgs__msg__SnLaneState__Sequence *)allocator.allocate(sizeof(sd_map_msgs__msg__SnLaneState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_map_msgs__msg__SnLaneState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_map_msgs__msg__SnLaneState__Sequence__destroy(sd_map_msgs__msg__SnLaneState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_map_msgs__msg__SnLaneState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_map_msgs__msg__SnLaneState__Sequence__are_equal(const sd_map_msgs__msg__SnLaneState__Sequence * lhs, const sd_map_msgs__msg__SnLaneState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_map_msgs__msg__SnLaneState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_map_msgs__msg__SnLaneState__Sequence__copy(
  const sd_map_msgs__msg__SnLaneState__Sequence * input,
  sd_map_msgs__msg__SnLaneState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_map_msgs__msg__SnLaneState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_map_msgs__msg__SnLaneState * data =
      (sd_map_msgs__msg__SnLaneState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_map_msgs__msg__SnLaneState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_map_msgs__msg__SnLaneState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_map_msgs__msg__SnLaneState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
