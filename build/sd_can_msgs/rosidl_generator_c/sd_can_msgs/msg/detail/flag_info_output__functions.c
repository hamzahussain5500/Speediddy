// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/flag_info_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__FlagInfoOutput__init(sd_can_msgs__msg__FlagInfoOutput * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__FlagInfoOutput__fini(msg);
    return false;
  }
  // led_status
  // free_running_counter
  // spare1_0x7_c
  // spare2_0x7_c
  // sm_session_type
  // sm_track_flag
  // sm_car_flag
  // crc_sm
  return true;
}

void
sd_can_msgs__msg__FlagInfoOutput__fini(sd_can_msgs__msg__FlagInfoOutput * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // led_status
  // free_running_counter
  // spare1_0x7_c
  // spare2_0x7_c
  // sm_session_type
  // sm_track_flag
  // sm_car_flag
  // crc_sm
}

bool
sd_can_msgs__msg__FlagInfoOutput__are_equal(const sd_can_msgs__msg__FlagInfoOutput * lhs, const sd_can_msgs__msg__FlagInfoOutput * rhs)
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
  // led_status
  if (lhs->led_status != rhs->led_status) {
    return false;
  }
  // free_running_counter
  if (lhs->free_running_counter != rhs->free_running_counter) {
    return false;
  }
  // spare1_0x7_c
  if (lhs->spare1_0x7_c != rhs->spare1_0x7_c) {
    return false;
  }
  // spare2_0x7_c
  if (lhs->spare2_0x7_c != rhs->spare2_0x7_c) {
    return false;
  }
  // sm_session_type
  if (lhs->sm_session_type != rhs->sm_session_type) {
    return false;
  }
  // sm_track_flag
  if (lhs->sm_track_flag != rhs->sm_track_flag) {
    return false;
  }
  // sm_car_flag
  if (lhs->sm_car_flag != rhs->sm_car_flag) {
    return false;
  }
  // crc_sm
  if (lhs->crc_sm != rhs->crc_sm) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__FlagInfoOutput__copy(
  const sd_can_msgs__msg__FlagInfoOutput * input,
  sd_can_msgs__msg__FlagInfoOutput * output)
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
  // led_status
  output->led_status = input->led_status;
  // free_running_counter
  output->free_running_counter = input->free_running_counter;
  // spare1_0x7_c
  output->spare1_0x7_c = input->spare1_0x7_c;
  // spare2_0x7_c
  output->spare2_0x7_c = input->spare2_0x7_c;
  // sm_session_type
  output->sm_session_type = input->sm_session_type;
  // sm_track_flag
  output->sm_track_flag = input->sm_track_flag;
  // sm_car_flag
  output->sm_car_flag = input->sm_car_flag;
  // crc_sm
  output->crc_sm = input->crc_sm;
  return true;
}

sd_can_msgs__msg__FlagInfoOutput *
sd_can_msgs__msg__FlagInfoOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__FlagInfoOutput * msg = (sd_can_msgs__msg__FlagInfoOutput *)allocator.allocate(sizeof(sd_can_msgs__msg__FlagInfoOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__FlagInfoOutput));
  bool success = sd_can_msgs__msg__FlagInfoOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__FlagInfoOutput__destroy(sd_can_msgs__msg__FlagInfoOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__FlagInfoOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__FlagInfoOutput__Sequence__init(sd_can_msgs__msg__FlagInfoOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__FlagInfoOutput * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__FlagInfoOutput *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__FlagInfoOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__FlagInfoOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__FlagInfoOutput__fini(&data[i - 1]);
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
sd_can_msgs__msg__FlagInfoOutput__Sequence__fini(sd_can_msgs__msg__FlagInfoOutput__Sequence * array)
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
      sd_can_msgs__msg__FlagInfoOutput__fini(&array->data[i]);
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

sd_can_msgs__msg__FlagInfoOutput__Sequence *
sd_can_msgs__msg__FlagInfoOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__FlagInfoOutput__Sequence * array = (sd_can_msgs__msg__FlagInfoOutput__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__FlagInfoOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__FlagInfoOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__FlagInfoOutput__Sequence__destroy(sd_can_msgs__msg__FlagInfoOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__FlagInfoOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__FlagInfoOutput__Sequence__are_equal(const sd_can_msgs__msg__FlagInfoOutput__Sequence * lhs, const sd_can_msgs__msg__FlagInfoOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__FlagInfoOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__FlagInfoOutput__Sequence__copy(
  const sd_can_msgs__msg__FlagInfoOutput__Sequence * input,
  sd_can_msgs__msg__FlagInfoOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__FlagInfoOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__FlagInfoOutput * data =
      (sd_can_msgs__msg__FlagInfoOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__FlagInfoOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__FlagInfoOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__FlagInfoOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
