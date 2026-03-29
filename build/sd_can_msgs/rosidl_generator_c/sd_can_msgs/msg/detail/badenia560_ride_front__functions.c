// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560RideFront.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_ride_front__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560RideFront__init(sd_can_msgs__msg__Badenia560RideFront * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560RideFront__fini(msg);
    return false;
  }
  // ride_height_front
  // damper_stroke_f3rd
  // damper_stroke_fl
  // damper_stroke_fr
  return true;
}

void
sd_can_msgs__msg__Badenia560RideFront__fini(sd_can_msgs__msg__Badenia560RideFront * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ride_height_front
  // damper_stroke_f3rd
  // damper_stroke_fl
  // damper_stroke_fr
}

bool
sd_can_msgs__msg__Badenia560RideFront__are_equal(const sd_can_msgs__msg__Badenia560RideFront * lhs, const sd_can_msgs__msg__Badenia560RideFront * rhs)
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
  // ride_height_front
  if (lhs->ride_height_front != rhs->ride_height_front) {
    return false;
  }
  // damper_stroke_f3rd
  if (lhs->damper_stroke_f3rd != rhs->damper_stroke_f3rd) {
    return false;
  }
  // damper_stroke_fl
  if (lhs->damper_stroke_fl != rhs->damper_stroke_fl) {
    return false;
  }
  // damper_stroke_fr
  if (lhs->damper_stroke_fr != rhs->damper_stroke_fr) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560RideFront__copy(
  const sd_can_msgs__msg__Badenia560RideFront * input,
  sd_can_msgs__msg__Badenia560RideFront * output)
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
  // ride_height_front
  output->ride_height_front = input->ride_height_front;
  // damper_stroke_f3rd
  output->damper_stroke_f3rd = input->damper_stroke_f3rd;
  // damper_stroke_fl
  output->damper_stroke_fl = input->damper_stroke_fl;
  // damper_stroke_fr
  output->damper_stroke_fr = input->damper_stroke_fr;
  return true;
}

sd_can_msgs__msg__Badenia560RideFront *
sd_can_msgs__msg__Badenia560RideFront__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560RideFront * msg = (sd_can_msgs__msg__Badenia560RideFront *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560RideFront), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560RideFront));
  bool success = sd_can_msgs__msg__Badenia560RideFront__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560RideFront__destroy(sd_can_msgs__msg__Badenia560RideFront * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560RideFront__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560RideFront__Sequence__init(sd_can_msgs__msg__Badenia560RideFront__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560RideFront * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560RideFront *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560RideFront), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560RideFront__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560RideFront__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560RideFront__Sequence__fini(sd_can_msgs__msg__Badenia560RideFront__Sequence * array)
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
      sd_can_msgs__msg__Badenia560RideFront__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560RideFront__Sequence *
sd_can_msgs__msg__Badenia560RideFront__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560RideFront__Sequence * array = (sd_can_msgs__msg__Badenia560RideFront__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560RideFront__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560RideFront__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560RideFront__Sequence__destroy(sd_can_msgs__msg__Badenia560RideFront__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560RideFront__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560RideFront__Sequence__are_equal(const sd_can_msgs__msg__Badenia560RideFront__Sequence * lhs, const sd_can_msgs__msg__Badenia560RideFront__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560RideFront__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560RideFront__Sequence__copy(
  const sd_can_msgs__msg__Badenia560RideFront__Sequence * input,
  sd_can_msgs__msg__Badenia560RideFront__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560RideFront);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560RideFront * data =
      (sd_can_msgs__msg__Badenia560RideFront *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560RideFront__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560RideFront__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560RideFront__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
