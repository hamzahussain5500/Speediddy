// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempFront.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_front__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(msg);
    return false;
  }
  // outer_fl
  // center_fl
  // inner_fl
  // outer_fr
  // center_fr
  // inner_fr
  return true;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // outer_fl
  // center_fl
  // inner_fl
  // outer_fr
  // center_fr
  // inner_fr
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__are_equal(const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * lhs, const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * rhs)
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
  // outer_fl
  if (lhs->outer_fl != rhs->outer_fl) {
    return false;
  }
  // center_fl
  if (lhs->center_fl != rhs->center_fl) {
    return false;
  }
  // inner_fl
  if (lhs->inner_fl != rhs->inner_fl) {
    return false;
  }
  // outer_fr
  if (lhs->outer_fr != rhs->outer_fr) {
    return false;
  }
  // center_fr
  if (lhs->center_fr != rhs->center_fr) {
    return false;
  }
  // inner_fr
  if (lhs->inner_fr != rhs->inner_fr) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__copy(
  const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * input,
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * output)
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
  // outer_fl
  output->outer_fl = input->outer_fl;
  // center_fl
  output->center_fl = input->center_fl;
  // inner_fl
  output->inner_fl = input->inner_fl;
  // outer_fr
  output->outer_fr = input->outer_fr;
  // center_fr
  output->center_fr = input->center_fr;
  // inner_fr
  output->inner_fr = input->inner_fr;
  return true;
}

sd_can_msgs__msg__Badenia560TyreSurfaceTempFront *
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * msg = (sd_can_msgs__msg__Badenia560TyreSurfaceTempFront *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront));
  bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__destroy(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__init(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560TyreSurfaceTempFront *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__fini(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * array)
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
      sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence *
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * array = (sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__destroy(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__are_equal(const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * lhs, const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__copy(
  const sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * input,
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560TyreSurfaceTempFront);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * data =
      (sd_can_msgs__msg__Badenia560TyreSurfaceTempFront *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
