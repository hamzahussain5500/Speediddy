// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/HLMsg06.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hl_msg06__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__HLMsg06__init(sd_can_msgs__msg__HLMsg06 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__HLMsg06__fini(msg);
    return false;
  }
  // hl_pc_temp
  // hl_cpu_usage
  // hl_gpu_usage
  // hl_gpu_temp
  // hl_perception_acc
  // hl_localization_acc
  // hl_watts_consumed
  // hl_aggressiveness
  return true;
}

void
sd_can_msgs__msg__HLMsg06__fini(sd_can_msgs__msg__HLMsg06 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hl_pc_temp
  // hl_cpu_usage
  // hl_gpu_usage
  // hl_gpu_temp
  // hl_perception_acc
  // hl_localization_acc
  // hl_watts_consumed
  // hl_aggressiveness
}

bool
sd_can_msgs__msg__HLMsg06__are_equal(const sd_can_msgs__msg__HLMsg06 * lhs, const sd_can_msgs__msg__HLMsg06 * rhs)
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
  // hl_pc_temp
  if (lhs->hl_pc_temp != rhs->hl_pc_temp) {
    return false;
  }
  // hl_cpu_usage
  if (lhs->hl_cpu_usage != rhs->hl_cpu_usage) {
    return false;
  }
  // hl_gpu_usage
  if (lhs->hl_gpu_usage != rhs->hl_gpu_usage) {
    return false;
  }
  // hl_gpu_temp
  if (lhs->hl_gpu_temp != rhs->hl_gpu_temp) {
    return false;
  }
  // hl_perception_acc
  if (lhs->hl_perception_acc != rhs->hl_perception_acc) {
    return false;
  }
  // hl_localization_acc
  if (lhs->hl_localization_acc != rhs->hl_localization_acc) {
    return false;
  }
  // hl_watts_consumed
  if (lhs->hl_watts_consumed != rhs->hl_watts_consumed) {
    return false;
  }
  // hl_aggressiveness
  if (lhs->hl_aggressiveness != rhs->hl_aggressiveness) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg06__copy(
  const sd_can_msgs__msg__HLMsg06 * input,
  sd_can_msgs__msg__HLMsg06 * output)
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
  // hl_pc_temp
  output->hl_pc_temp = input->hl_pc_temp;
  // hl_cpu_usage
  output->hl_cpu_usage = input->hl_cpu_usage;
  // hl_gpu_usage
  output->hl_gpu_usage = input->hl_gpu_usage;
  // hl_gpu_temp
  output->hl_gpu_temp = input->hl_gpu_temp;
  // hl_perception_acc
  output->hl_perception_acc = input->hl_perception_acc;
  // hl_localization_acc
  output->hl_localization_acc = input->hl_localization_acc;
  // hl_watts_consumed
  output->hl_watts_consumed = input->hl_watts_consumed;
  // hl_aggressiveness
  output->hl_aggressiveness = input->hl_aggressiveness;
  return true;
}

sd_can_msgs__msg__HLMsg06 *
sd_can_msgs__msg__HLMsg06__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg06 * msg = (sd_can_msgs__msg__HLMsg06 *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg06), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__HLMsg06));
  bool success = sd_can_msgs__msg__HLMsg06__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__HLMsg06__destroy(sd_can_msgs__msg__HLMsg06 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__HLMsg06__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__HLMsg06__Sequence__init(sd_can_msgs__msg__HLMsg06__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg06 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__HLMsg06 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__HLMsg06), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__HLMsg06__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__HLMsg06__fini(&data[i - 1]);
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
sd_can_msgs__msg__HLMsg06__Sequence__fini(sd_can_msgs__msg__HLMsg06__Sequence * array)
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
      sd_can_msgs__msg__HLMsg06__fini(&array->data[i]);
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

sd_can_msgs__msg__HLMsg06__Sequence *
sd_can_msgs__msg__HLMsg06__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLMsg06__Sequence * array = (sd_can_msgs__msg__HLMsg06__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__HLMsg06__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__HLMsg06__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__HLMsg06__Sequence__destroy(sd_can_msgs__msg__HLMsg06__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__HLMsg06__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__HLMsg06__Sequence__are_equal(const sd_can_msgs__msg__HLMsg06__Sequence * lhs, const sd_can_msgs__msg__HLMsg06__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg06__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__HLMsg06__Sequence__copy(
  const sd_can_msgs__msg__HLMsg06__Sequence * input,
  sd_can_msgs__msg__HLMsg06__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__HLMsg06);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__HLMsg06 * data =
      (sd_can_msgs__msg__HLMsg06 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__HLMsg06__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__HLMsg06__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__HLMsg06__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
