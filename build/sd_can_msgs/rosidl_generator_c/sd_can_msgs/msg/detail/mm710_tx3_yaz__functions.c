// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/MM710TX3YAZ.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/mm710_tx3_yaz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__MM710TX3YAZ__init(sd_can_msgs__msg__MM710TX3YAZ * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__MM710TX3YAZ__fini(msg);
    return false;
  }
  // crc
  // az_stat
  // msg_cnt
  // az
  // pitch_rate_stat
  // hw_index
  // pitch_rate
  return true;
}

void
sd_can_msgs__msg__MM710TX3YAZ__fini(sd_can_msgs__msg__MM710TX3YAZ * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // crc
  // az_stat
  // msg_cnt
  // az
  // pitch_rate_stat
  // hw_index
  // pitch_rate
}

bool
sd_can_msgs__msg__MM710TX3YAZ__are_equal(const sd_can_msgs__msg__MM710TX3YAZ * lhs, const sd_can_msgs__msg__MM710TX3YAZ * rhs)
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
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  // az_stat
  if (lhs->az_stat != rhs->az_stat) {
    return false;
  }
  // msg_cnt
  if (lhs->msg_cnt != rhs->msg_cnt) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // pitch_rate_stat
  if (lhs->pitch_rate_stat != rhs->pitch_rate_stat) {
    return false;
  }
  // hw_index
  if (lhs->hw_index != rhs->hw_index) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__MM710TX3YAZ__copy(
  const sd_can_msgs__msg__MM710TX3YAZ * input,
  sd_can_msgs__msg__MM710TX3YAZ * output)
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
  // crc
  output->crc = input->crc;
  // az_stat
  output->az_stat = input->az_stat;
  // msg_cnt
  output->msg_cnt = input->msg_cnt;
  // az
  output->az = input->az;
  // pitch_rate_stat
  output->pitch_rate_stat = input->pitch_rate_stat;
  // hw_index
  output->hw_index = input->hw_index;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  return true;
}

sd_can_msgs__msg__MM710TX3YAZ *
sd_can_msgs__msg__MM710TX3YAZ__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX3YAZ * msg = (sd_can_msgs__msg__MM710TX3YAZ *)allocator.allocate(sizeof(sd_can_msgs__msg__MM710TX3YAZ), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__MM710TX3YAZ));
  bool success = sd_can_msgs__msg__MM710TX3YAZ__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__MM710TX3YAZ__destroy(sd_can_msgs__msg__MM710TX3YAZ * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__MM710TX3YAZ__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__MM710TX3YAZ__Sequence__init(sd_can_msgs__msg__MM710TX3YAZ__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX3YAZ * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__MM710TX3YAZ *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__MM710TX3YAZ), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__MM710TX3YAZ__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__MM710TX3YAZ__fini(&data[i - 1]);
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
sd_can_msgs__msg__MM710TX3YAZ__Sequence__fini(sd_can_msgs__msg__MM710TX3YAZ__Sequence * array)
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
      sd_can_msgs__msg__MM710TX3YAZ__fini(&array->data[i]);
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

sd_can_msgs__msg__MM710TX3YAZ__Sequence *
sd_can_msgs__msg__MM710TX3YAZ__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX3YAZ__Sequence * array = (sd_can_msgs__msg__MM710TX3YAZ__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__MM710TX3YAZ__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__MM710TX3YAZ__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__MM710TX3YAZ__Sequence__destroy(sd_can_msgs__msg__MM710TX3YAZ__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__MM710TX3YAZ__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__MM710TX3YAZ__Sequence__are_equal(const sd_can_msgs__msg__MM710TX3YAZ__Sequence * lhs, const sd_can_msgs__msg__MM710TX3YAZ__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__MM710TX3YAZ__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__MM710TX3YAZ__Sequence__copy(
  const sd_can_msgs__msg__MM710TX3YAZ__Sequence * input,
  sd_can_msgs__msg__MM710TX3YAZ__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__MM710TX3YAZ);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__MM710TX3YAZ * data =
      (sd_can_msgs__msg__MM710TX3YAZ *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__MM710TX3YAZ__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__MM710TX3YAZ__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__MM710TX3YAZ__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
