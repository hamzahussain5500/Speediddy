// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/TEXIB6rTx1.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/texib6r_tx1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__TEXIB6rTx1__init(sd_can_msgs__msg__TEXIB6rTx1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__TEXIB6rTx1__fini(msg);
    return false;
  }
  // acc_z
  // acc_y
  // acc_x
  return true;
}

void
sd_can_msgs__msg__TEXIB6rTx1__fini(sd_can_msgs__msg__TEXIB6rTx1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acc_z
  // acc_y
  // acc_x
}

bool
sd_can_msgs__msg__TEXIB6rTx1__are_equal(const sd_can_msgs__msg__TEXIB6rTx1 * lhs, const sd_can_msgs__msg__TEXIB6rTx1 * rhs)
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
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__TEXIB6rTx1__copy(
  const sd_can_msgs__msg__TEXIB6rTx1 * input,
  sd_can_msgs__msg__TEXIB6rTx1 * output)
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
  // acc_z
  output->acc_z = input->acc_z;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_x
  output->acc_x = input->acc_x;
  return true;
}

sd_can_msgs__msg__TEXIB6rTx1 *
sd_can_msgs__msg__TEXIB6rTx1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__TEXIB6rTx1 * msg = (sd_can_msgs__msg__TEXIB6rTx1 *)allocator.allocate(sizeof(sd_can_msgs__msg__TEXIB6rTx1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__TEXIB6rTx1));
  bool success = sd_can_msgs__msg__TEXIB6rTx1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__TEXIB6rTx1__destroy(sd_can_msgs__msg__TEXIB6rTx1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__TEXIB6rTx1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__TEXIB6rTx1__Sequence__init(sd_can_msgs__msg__TEXIB6rTx1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__TEXIB6rTx1 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__TEXIB6rTx1 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__TEXIB6rTx1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__TEXIB6rTx1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__TEXIB6rTx1__fini(&data[i - 1]);
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
sd_can_msgs__msg__TEXIB6rTx1__Sequence__fini(sd_can_msgs__msg__TEXIB6rTx1__Sequence * array)
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
      sd_can_msgs__msg__TEXIB6rTx1__fini(&array->data[i]);
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

sd_can_msgs__msg__TEXIB6rTx1__Sequence *
sd_can_msgs__msg__TEXIB6rTx1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__TEXIB6rTx1__Sequence * array = (sd_can_msgs__msg__TEXIB6rTx1__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__TEXIB6rTx1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__TEXIB6rTx1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__TEXIB6rTx1__Sequence__destroy(sd_can_msgs__msg__TEXIB6rTx1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__TEXIB6rTx1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__TEXIB6rTx1__Sequence__are_equal(const sd_can_msgs__msg__TEXIB6rTx1__Sequence * lhs, const sd_can_msgs__msg__TEXIB6rTx1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__TEXIB6rTx1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__TEXIB6rTx1__Sequence__copy(
  const sd_can_msgs__msg__TEXIB6rTx1__Sequence * input,
  sd_can_msgs__msg__TEXIB6rTx1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__TEXIB6rTx1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__TEXIB6rTx1 * data =
      (sd_can_msgs__msg__TEXIB6rTx1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__TEXIB6rTx1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__TEXIB6rTx1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__TEXIB6rTx1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
