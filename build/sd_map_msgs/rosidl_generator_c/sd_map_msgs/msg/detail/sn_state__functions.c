// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice
#include "sd_map_msgs/msg/detail/sn_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sd_map_msgs__msg__SnState__init(sd_map_msgs__msg__SnState * msg)
{
  if (!msg) {
    return false;
  }
  // idx
  // ds
  // d_idx
  // n
  // epsi
  // status
  return true;
}

void
sd_map_msgs__msg__SnState__fini(sd_map_msgs__msg__SnState * msg)
{
  if (!msg) {
    return;
  }
  // idx
  // ds
  // d_idx
  // n
  // epsi
  // status
}

bool
sd_map_msgs__msg__SnState__are_equal(const sd_map_msgs__msg__SnState * lhs, const sd_map_msgs__msg__SnState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idx
  if (lhs->idx != rhs->idx) {
    return false;
  }
  // ds
  if (lhs->ds != rhs->ds) {
    return false;
  }
  // d_idx
  if (lhs->d_idx != rhs->d_idx) {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  // epsi
  if (lhs->epsi != rhs->epsi) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
sd_map_msgs__msg__SnState__copy(
  const sd_map_msgs__msg__SnState * input,
  sd_map_msgs__msg__SnState * output)
{
  if (!input || !output) {
    return false;
  }
  // idx
  output->idx = input->idx;
  // ds
  output->ds = input->ds;
  // d_idx
  output->d_idx = input->d_idx;
  // n
  output->n = input->n;
  // epsi
  output->epsi = input->epsi;
  // status
  output->status = input->status;
  return true;
}

sd_map_msgs__msg__SnState *
sd_map_msgs__msg__SnState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnState * msg = (sd_map_msgs__msg__SnState *)allocator.allocate(sizeof(sd_map_msgs__msg__SnState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_map_msgs__msg__SnState));
  bool success = sd_map_msgs__msg__SnState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_map_msgs__msg__SnState__destroy(sd_map_msgs__msg__SnState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_map_msgs__msg__SnState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_map_msgs__msg__SnState__Sequence__init(sd_map_msgs__msg__SnState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnState * data = NULL;

  if (size) {
    data = (sd_map_msgs__msg__SnState *)allocator.zero_allocate(size, sizeof(sd_map_msgs__msg__SnState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_map_msgs__msg__SnState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_map_msgs__msg__SnState__fini(&data[i - 1]);
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
sd_map_msgs__msg__SnState__Sequence__fini(sd_map_msgs__msg__SnState__Sequence * array)
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
      sd_map_msgs__msg__SnState__fini(&array->data[i]);
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

sd_map_msgs__msg__SnState__Sequence *
sd_map_msgs__msg__SnState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_map_msgs__msg__SnState__Sequence * array = (sd_map_msgs__msg__SnState__Sequence *)allocator.allocate(sizeof(sd_map_msgs__msg__SnState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_map_msgs__msg__SnState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_map_msgs__msg__SnState__Sequence__destroy(sd_map_msgs__msg__SnState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_map_msgs__msg__SnState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_map_msgs__msg__SnState__Sequence__are_equal(const sd_map_msgs__msg__SnState__Sequence * lhs, const sd_map_msgs__msg__SnState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_map_msgs__msg__SnState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_map_msgs__msg__SnState__Sequence__copy(
  const sd_map_msgs__msg__SnState__Sequence * input,
  sd_map_msgs__msg__SnState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_map_msgs__msg__SnState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_map_msgs__msg__SnState * data =
      (sd_map_msgs__msg__SnState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_map_msgs__msg__SnState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_map_msgs__msg__SnState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_map_msgs__msg__SnState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
