// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempRear.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_rear__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(msg);
    return false;
  }
  // outer_rl
  // center_rl
  // inner_rl
  // outer_rr
  // center_rr
  // inner_rr
  return true;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // outer_rl
  // center_rl
  // inner_rl
  // outer_rr
  // center_rr
  // inner_rr
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__are_equal(const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * lhs, const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * rhs)
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
  // outer_rl
  if (lhs->outer_rl != rhs->outer_rl) {
    return false;
  }
  // center_rl
  if (lhs->center_rl != rhs->center_rl) {
    return false;
  }
  // inner_rl
  if (lhs->inner_rl != rhs->inner_rl) {
    return false;
  }
  // outer_rr
  if (lhs->outer_rr != rhs->outer_rr) {
    return false;
  }
  // center_rr
  if (lhs->center_rr != rhs->center_rr) {
    return false;
  }
  // inner_rr
  if (lhs->inner_rr != rhs->inner_rr) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__copy(
  const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * input,
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * output)
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
  // outer_rl
  output->outer_rl = input->outer_rl;
  // center_rl
  output->center_rl = input->center_rl;
  // inner_rl
  output->inner_rl = input->inner_rl;
  // outer_rr
  output->outer_rr = input->outer_rr;
  // center_rr
  output->center_rr = input->center_rr;
  // inner_rr
  output->inner_rr = input->inner_rr;
  return true;
}

sd_can_msgs__msg__Badenia560TyreSurfaceTempRear *
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * msg = (sd_can_msgs__msg__Badenia560TyreSurfaceTempRear *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear));
  bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__destroy(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__init(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560TyreSurfaceTempRear *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__fini(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * array)
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
      sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence *
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * array = (sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__destroy(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__are_equal(const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * lhs, const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__copy(
  const sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * input,
  sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempRear);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560TyreSurfaceTempRear * data =
      (sd_can_msgs__msg__Badenia560TyreSurfaceTempRear *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
