// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hlpc_info1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__HLPCInfo1__init(sd_can_msgs__msg__HLPCInfo1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__HLPCInfo1__fini(msg);
    return false;
  }
  // hlpc_network_ping
  // hlpc_lidar_status_left
  // hlpc_lidar_status_front
  // hlpc_lidar_status_right
  // hlpc_radar_status_front
  // hlpc_radar_status_left
  // hlpc_radar_status_right
  // hlpc_radar_status_rear
  // hlpc_vector_nav_fix
  // hlpc_alive_c4
  return true;
}

void
sd_can_msgs__msg__HLPCInfo1__fini(sd_can_msgs__msg__HLPCInfo1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hlpc_network_ping
  // hlpc_lidar_status_left
  // hlpc_lidar_status_front
  // hlpc_lidar_status_right
  // hlpc_radar_status_front
  // hlpc_radar_status_left
  // hlpc_radar_status_right
  // hlpc_radar_status_rear
  // hlpc_vector_nav_fix
  // hlpc_alive_c4
}

bool
sd_can_msgs__msg__HLPCInfo1__are_equal(const sd_can_msgs__msg__HLPCInfo1 * lhs, const sd_can_msgs__msg__HLPCInfo1 * rhs)
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
  // hlpc_network_ping
  if (lhs->hlpc_network_ping != rhs->hlpc_network_ping) {
    return false;
  }
  // hlpc_lidar_status_left
  if (lhs->hlpc_lidar_status_left != rhs->hlpc_lidar_status_left) {
    return false;
  }
  // hlpc_lidar_status_front
  if (lhs->hlpc_lidar_status_front != rhs->hlpc_lidar_status_front) {
    return false;
  }
  // hlpc_lidar_status_right
  if (lhs->hlpc_lidar_status_right != rhs->hlpc_lidar_status_right) {
    return false;
  }
  // hlpc_radar_status_front
  if (lhs->hlpc_radar_status_front != rhs->hlpc_radar_status_front) {
    return false;
  }
  // hlpc_radar_status_left
  if (lhs->hlpc_radar_status_left != rhs->hlpc_radar_status_left) {
    return false;
  }
  // hlpc_radar_status_right
  if (lhs->hlpc_radar_status_right != rhs->hlpc_radar_status_right) {
    return false;
  }
  // hlpc_radar_status_rear
  if (lhs->hlpc_radar_status_rear != rhs->hlpc_radar_status_rear) {
    return false;
  }
  // hlpc_vector_nav_fix
  if (lhs->hlpc_vector_nav_fix != rhs->hlpc_vector_nav_fix) {
    return false;
  }
  // hlpc_alive_c4
  if (lhs->hlpc_alive_c4 != rhs->hlpc_alive_c4) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__HLPCInfo1__copy(
  const sd_can_msgs__msg__HLPCInfo1 * input,
  sd_can_msgs__msg__HLPCInfo1 * output)
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
  // hlpc_network_ping
  output->hlpc_network_ping = input->hlpc_network_ping;
  // hlpc_lidar_status_left
  output->hlpc_lidar_status_left = input->hlpc_lidar_status_left;
  // hlpc_lidar_status_front
  output->hlpc_lidar_status_front = input->hlpc_lidar_status_front;
  // hlpc_lidar_status_right
  output->hlpc_lidar_status_right = input->hlpc_lidar_status_right;
  // hlpc_radar_status_front
  output->hlpc_radar_status_front = input->hlpc_radar_status_front;
  // hlpc_radar_status_left
  output->hlpc_radar_status_left = input->hlpc_radar_status_left;
  // hlpc_radar_status_right
  output->hlpc_radar_status_right = input->hlpc_radar_status_right;
  // hlpc_radar_status_rear
  output->hlpc_radar_status_rear = input->hlpc_radar_status_rear;
  // hlpc_vector_nav_fix
  output->hlpc_vector_nav_fix = input->hlpc_vector_nav_fix;
  // hlpc_alive_c4
  output->hlpc_alive_c4 = input->hlpc_alive_c4;
  return true;
}

sd_can_msgs__msg__HLPCInfo1 *
sd_can_msgs__msg__HLPCInfo1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLPCInfo1 * msg = (sd_can_msgs__msg__HLPCInfo1 *)allocator.allocate(sizeof(sd_can_msgs__msg__HLPCInfo1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__HLPCInfo1));
  bool success = sd_can_msgs__msg__HLPCInfo1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__HLPCInfo1__destroy(sd_can_msgs__msg__HLPCInfo1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__HLPCInfo1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__HLPCInfo1__Sequence__init(sd_can_msgs__msg__HLPCInfo1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLPCInfo1 * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__HLPCInfo1 *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__HLPCInfo1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__HLPCInfo1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__HLPCInfo1__fini(&data[i - 1]);
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
sd_can_msgs__msg__HLPCInfo1__Sequence__fini(sd_can_msgs__msg__HLPCInfo1__Sequence * array)
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
      sd_can_msgs__msg__HLPCInfo1__fini(&array->data[i]);
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

sd_can_msgs__msg__HLPCInfo1__Sequence *
sd_can_msgs__msg__HLPCInfo1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__HLPCInfo1__Sequence * array = (sd_can_msgs__msg__HLPCInfo1__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__HLPCInfo1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__HLPCInfo1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__HLPCInfo1__Sequence__destroy(sd_can_msgs__msg__HLPCInfo1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__HLPCInfo1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__HLPCInfo1__Sequence__are_equal(const sd_can_msgs__msg__HLPCInfo1__Sequence * lhs, const sd_can_msgs__msg__HLPCInfo1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__HLPCInfo1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__HLPCInfo1__Sequence__copy(
  const sd_can_msgs__msg__HLPCInfo1__Sequence * input,
  sd_can_msgs__msg__HLPCInfo1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__HLPCInfo1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__HLPCInfo1 * data =
      (sd_can_msgs__msg__HLPCInfo1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__HLPCInfo1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__HLPCInfo1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__HLPCInfo1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
