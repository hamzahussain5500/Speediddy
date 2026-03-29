// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560TpmsRear.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_tpms_rear__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560TpmsRear__init(sd_can_msgs__msg__Badenia560TpmsRear * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560TpmsRear__fini(msg);
    return false;
  }
  // tpr4_temp_rl
  // tpr4_temp_rr
  // tpr4_abs_press_rl
  // tpr4_abs_press_rr
  return true;
}

void
sd_can_msgs__msg__Badenia560TpmsRear__fini(sd_can_msgs__msg__Badenia560TpmsRear * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tpr4_temp_rl
  // tpr4_temp_rr
  // tpr4_abs_press_rl
  // tpr4_abs_press_rr
}

bool
sd_can_msgs__msg__Badenia560TpmsRear__are_equal(const sd_can_msgs__msg__Badenia560TpmsRear * lhs, const sd_can_msgs__msg__Badenia560TpmsRear * rhs)
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
  // tpr4_temp_rl
  if (lhs->tpr4_temp_rl != rhs->tpr4_temp_rl) {
    return false;
  }
  // tpr4_temp_rr
  if (lhs->tpr4_temp_rr != rhs->tpr4_temp_rr) {
    return false;
  }
  // tpr4_abs_press_rl
  if (lhs->tpr4_abs_press_rl != rhs->tpr4_abs_press_rl) {
    return false;
  }
  // tpr4_abs_press_rr
  if (lhs->tpr4_abs_press_rr != rhs->tpr4_abs_press_rr) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TpmsRear__copy(
  const sd_can_msgs__msg__Badenia560TpmsRear * input,
  sd_can_msgs__msg__Badenia560TpmsRear * output)
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
  // tpr4_temp_rl
  output->tpr4_temp_rl = input->tpr4_temp_rl;
  // tpr4_temp_rr
  output->tpr4_temp_rr = input->tpr4_temp_rr;
  // tpr4_abs_press_rl
  output->tpr4_abs_press_rl = input->tpr4_abs_press_rl;
  // tpr4_abs_press_rr
  output->tpr4_abs_press_rr = input->tpr4_abs_press_rr;
  return true;
}

sd_can_msgs__msg__Badenia560TpmsRear *
sd_can_msgs__msg__Badenia560TpmsRear__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TpmsRear * msg = (sd_can_msgs__msg__Badenia560TpmsRear *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TpmsRear), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560TpmsRear));
  bool success = sd_can_msgs__msg__Badenia560TpmsRear__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560TpmsRear__destroy(sd_can_msgs__msg__Badenia560TpmsRear * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560TpmsRear__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__init(sd_can_msgs__msg__Badenia560TpmsRear__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TpmsRear * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560TpmsRear *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560TpmsRear), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560TpmsRear__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560TpmsRear__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__fini(sd_can_msgs__msg__Badenia560TpmsRear__Sequence * array)
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
      sd_can_msgs__msg__Badenia560TpmsRear__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560TpmsRear__Sequence *
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560TpmsRear__Sequence * array = (sd_can_msgs__msg__Badenia560TpmsRear__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560TpmsRear__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560TpmsRear__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__destroy(sd_can_msgs__msg__Badenia560TpmsRear__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560TpmsRear__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__are_equal(const sd_can_msgs__msg__Badenia560TpmsRear__Sequence * lhs, const sd_can_msgs__msg__Badenia560TpmsRear__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TpmsRear__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560TpmsRear__Sequence__copy(
  const sd_can_msgs__msg__Badenia560TpmsRear__Sequence * input,
  sd_can_msgs__msg__Badenia560TpmsRear__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560TpmsRear);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560TpmsRear * data =
      (sd_can_msgs__msg__Badenia560TpmsRear *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560TpmsRear__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560TpmsRear__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560TpmsRear__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
