// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice
#include "sd_map_msgs/msg/detail/sn_map_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `track_sn_state`
// Member `pitlane_sn_state`
#include "sd_map_msgs/msg/detail/sn_lane_state__functions.h"

bool
sd_map_msgs__msg__SnMapState__init(sd_map_msgs__msg__SnMapState * msg)
{
  if (!msg) {
    return false;
  }
  // current_lane
  // track_sn_state
  if (!sd_map_msgs__msg__SnLaneState__init(&msg->track_sn_state)) {
    sd_map_msgs__msg__SnMapState__fini(msg);
    return false;
  }
  // pitlane_sn_state
  if (!sd_map_msgs__msg__SnLaneState__init(&msg->pitlane_sn_state)) {
    sd_map_msgs__msg__SnMapState__fini(msg);
    return false;
  }
  return true;
}

void
sd_map_msgs__msg__SnMapState__fini(sd_map_msgs__msg__SnMapState * msg)
{
  if (!msg) {
    return;
  }
  // current_lane
  // track_sn_state
  sd_map_msgs__msg__SnLaneState__fini(&msg->track_sn_state);
  // pitlane_sn_state
  sd_map_msgs__msg__SnLaneState__fini(&msg->pitlane_sn_state);
}

bool
sd_map_msgs__msg__SnMapState__are_equal(const sd_map_msgs__msg__SnMapState * lhs, const sd_map_msgs__msg__SnMapState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_lane
  if (lhs->current_lane != rhs->current_lane) {
    return false;
  }
  // track_sn_state
  if (!sd_map_msgs__msg__SnLaneState__are_equal(
      &(lhs->track_sn_state), &(rhs->track_sn_state)))
  {
    return false;
  }
  // pitlane_sn_state
  if (!sd_map_msgs__msg__SnLaneState__are_equal(
      &(lhs->pitlane_sn_state), &(rhs->pitlane_sn_state)))
  {
    return false;
  }
  return true;
}

bool
sd_map_msgs__msg__SnMapState__copy(
  const sd_map_msgs__msg__SnMapState * input,
  sd_map_msgs__msg__SnMapState * output)
{
  if (!input || !output) {
    return false;
  }
  // current_lane
  output->current_lane = input->current_lane;
  // track_sn_state
  if (!sd_map_msgs__msg__SnLaneState__copy(
      &(input->track_sn_state), &(output->track_sn_state)))
  {
    return false;
  }
  // pitlane_sn_state
  if (!sd_map_msgs__msg__SnLaneState__copy(
      &(input->pitlane_sn_state), &(output->pitlane_sn_state)))
  {
    return false;
  }
  return true;
}

sd_map_msgs__msg__SnMapState *
sd_map_msgs__msg__SnMapState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnMapState * msg = (sd_map_msgs__msg__SnMapState *)allocator.allocate(sizeof(sd_map_msgs__msg__SnMapState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_map_msgs__msg__SnMapState));
  bool success = sd_map_msgs__msg__SnMapState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_map_msgs__msg__SnMapState__destroy(sd_map_msgs__msg__SnMapState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_map_msgs__msg__SnMapState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_map_msgs__msg__SnMapState__Sequence__init(sd_map_msgs__msg__SnMapState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnMapState * data = NULL;

  if (size) {
    data = (sd_map_msgs__msg__SnMapState *)allocator.zero_allocate(size, sizeof(sd_map_msgs__msg__SnMapState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_map_msgs__msg__SnMapState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_map_msgs__msg__SnMapState__fini(&data[i - 1]);
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
sd_map_msgs__msg__SnMapState__Sequence__fini(sd_map_msgs__msg__SnMapState__Sequence * array)
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
      sd_map_msgs__msg__SnMapState__fini(&array->data[i]);
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

sd_map_msgs__msg__SnMapState__Sequence *
sd_map_msgs__msg__SnMapState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnMapState__Sequence * array = (sd_map_msgs__msg__SnMapState__Sequence *)allocator.allocate(sizeof(sd_map_msgs__msg__SnMapState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_map_msgs__msg__SnMapState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_map_msgs__msg__SnMapState__Sequence__destroy(sd_map_msgs__msg__SnMapState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_map_msgs__msg__SnMapState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_map_msgs__msg__SnMapState__Sequence__are_equal(const sd_map_msgs__msg__SnMapState__Sequence * lhs, const sd_map_msgs__msg__SnMapState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_map_msgs__msg__SnMapState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_map_msgs__msg__SnMapState__Sequence__copy(
  const sd_map_msgs__msg__SnMapState__Sequence * input,
  sd_map_msgs__msg__SnMapState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_map_msgs__msg__SnMapState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_map_msgs__msg__SnMapState * data =
      (sd_map_msgs__msg__SnMapState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_map_msgs__msg__SnMapState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_map_msgs__msg__SnMapState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_map_msgs__msg__SnMapState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
