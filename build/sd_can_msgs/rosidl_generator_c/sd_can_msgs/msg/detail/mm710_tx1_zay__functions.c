// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/MM710TX1ZAY.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/mm710_tx1_zay__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__MM710TX1ZAY__init(sd_can_msgs__msg__MM710TX1ZAY * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__MM710TX1ZAY__fini(msg);
    return false;
  }
  // crc
  // ay_stat
  // msg_cnt
  // ay
  // temp_rate_z
  // yaw_rate_stat
  // clu_stat
  // yaw_rate
  return true;
}

void
sd_can_msgs__msg__MM710TX1ZAY__fini(sd_can_msgs__msg__MM710TX1ZAY * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // crc
  // ay_stat
  // msg_cnt
  // ay
  // temp_rate_z
  // yaw_rate_stat
  // clu_stat
  // yaw_rate
}

bool
sd_can_msgs__msg__MM710TX1ZAY__are_equal(const sd_can_msgs__msg__MM710TX1ZAY * lhs, const sd_can_msgs__msg__MM710TX1ZAY * rhs)
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
  // ay_stat
  if (lhs->ay_stat != rhs->ay_stat) {
    return false;
  }
  // msg_cnt
  if (lhs->msg_cnt != rhs->msg_cnt) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // temp_rate_z
  if (lhs->temp_rate_z != rhs->temp_rate_z) {
    return false;
  }
  // yaw_rate_stat
  if (lhs->yaw_rate_stat != rhs->yaw_rate_stat) {
    return false;
  }
  // clu_stat
  if (lhs->clu_stat != rhs->clu_stat) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__MM710TX1ZAY__copy(
  const sd_can_msgs__msg__MM710TX1ZAY * input,
  sd_can_msgs__msg__MM710TX1ZAY * output)
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
  // ay_stat
  output->ay_stat = input->ay_stat;
  // msg_cnt
  output->msg_cnt = input->msg_cnt;
  // ay
  output->ay = input->ay;
  // temp_rate_z
  output->temp_rate_z = input->temp_rate_z;
  // yaw_rate_stat
  output->yaw_rate_stat = input->yaw_rate_stat;
  // clu_stat
  output->clu_stat = input->clu_stat;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  return true;
}

sd_can_msgs__msg__MM710TX1ZAY *
sd_can_msgs__msg__MM710TX1ZAY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX1ZAY * msg = (sd_can_msgs__msg__MM710TX1ZAY *)allocator.allocate(sizeof(sd_can_msgs__msg__MM710TX1ZAY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__MM710TX1ZAY));
  bool success = sd_can_msgs__msg__MM710TX1ZAY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__MM710TX1ZAY__destroy(sd_can_msgs__msg__MM710TX1ZAY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__MM710TX1ZAY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__MM710TX1ZAY__Sequence__init(sd_can_msgs__msg__MM710TX1ZAY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX1ZAY * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__MM710TX1ZAY *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__MM710TX1ZAY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__MM710TX1ZAY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__MM710TX1ZAY__fini(&data[i - 1]);
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
sd_can_msgs__msg__MM710TX1ZAY__Sequence__fini(sd_can_msgs__msg__MM710TX1ZAY__Sequence * array)
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
      sd_can_msgs__msg__MM710TX1ZAY__fini(&array->data[i]);
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

sd_can_msgs__msg__MM710TX1ZAY__Sequence *
sd_can_msgs__msg__MM710TX1ZAY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__MM710TX1ZAY__Sequence * array = (sd_can_msgs__msg__MM710TX1ZAY__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__MM710TX1ZAY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__MM710TX1ZAY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__MM710TX1ZAY__Sequence__destroy(sd_can_msgs__msg__MM710TX1ZAY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__MM710TX1ZAY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__MM710TX1ZAY__Sequence__are_equal(const sd_can_msgs__msg__MM710TX1ZAY__Sequence * lhs, const sd_can_msgs__msg__MM710TX1ZAY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__MM710TX1ZAY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__MM710TX1ZAY__Sequence__copy(
  const sd_can_msgs__msg__MM710TX1ZAY__Sequence * input,
  sd_can_msgs__msg__MM710TX1ZAY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__MM710TX1ZAY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__MM710TX1ZAY * data =
      (sd_can_msgs__msg__MM710TX1ZAY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__MM710TX1ZAY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__MM710TX1ZAY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__MM710TX1ZAY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
