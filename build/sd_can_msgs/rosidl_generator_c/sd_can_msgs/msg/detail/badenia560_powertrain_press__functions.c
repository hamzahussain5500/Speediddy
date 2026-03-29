// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_can_msgs:msg/Badenia560PowertrainPress.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/badenia560_powertrain_press__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sd_can_msgs__msg__Badenia560PowertrainPress__init(sd_can_msgs__msg__Badenia560PowertrainPress * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_can_msgs__msg__Badenia560PowertrainPress__fini(msg);
    return false;
  }
  // m_pushrod_strain_fl
  // m_pushrod_strain_fr
  // engine_oil_pressure
  // coolant_pressure
  // fuel_press_direct
  // boost_pressure
  return true;
}

void
sd_can_msgs__msg__Badenia560PowertrainPress__fini(sd_can_msgs__msg__Badenia560PowertrainPress * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // m_pushrod_strain_fl
  // m_pushrod_strain_fr
  // engine_oil_pressure
  // coolant_pressure
  // fuel_press_direct
  // boost_pressure
}

bool
sd_can_msgs__msg__Badenia560PowertrainPress__are_equal(const sd_can_msgs__msg__Badenia560PowertrainPress * lhs, const sd_can_msgs__msg__Badenia560PowertrainPress * rhs)
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
  // m_pushrod_strain_fl
  if (lhs->m_pushrod_strain_fl != rhs->m_pushrod_strain_fl) {
    return false;
  }
  // m_pushrod_strain_fr
  if (lhs->m_pushrod_strain_fr != rhs->m_pushrod_strain_fr) {
    return false;
  }
  // engine_oil_pressure
  if (lhs->engine_oil_pressure != rhs->engine_oil_pressure) {
    return false;
  }
  // coolant_pressure
  if (lhs->coolant_pressure != rhs->coolant_pressure) {
    return false;
  }
  // fuel_press_direct
  if (lhs->fuel_press_direct != rhs->fuel_press_direct) {
    return false;
  }
  // boost_pressure
  if (lhs->boost_pressure != rhs->boost_pressure) {
    return false;
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560PowertrainPress__copy(
  const sd_can_msgs__msg__Badenia560PowertrainPress * input,
  sd_can_msgs__msg__Badenia560PowertrainPress * output)
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
  // m_pushrod_strain_fl
  output->m_pushrod_strain_fl = input->m_pushrod_strain_fl;
  // m_pushrod_strain_fr
  output->m_pushrod_strain_fr = input->m_pushrod_strain_fr;
  // engine_oil_pressure
  output->engine_oil_pressure = input->engine_oil_pressure;
  // coolant_pressure
  output->coolant_pressure = input->coolant_pressure;
  // fuel_press_direct
  output->fuel_press_direct = input->fuel_press_direct;
  // boost_pressure
  output->boost_pressure = input->boost_pressure;
  return true;
}

sd_can_msgs__msg__Badenia560PowertrainPress *
sd_can_msgs__msg__Badenia560PowertrainPress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainPress * msg = (sd_can_msgs__msg__Badenia560PowertrainPress *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560PowertrainPress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_can_msgs__msg__Badenia560PowertrainPress));
  bool success = sd_can_msgs__msg__Badenia560PowertrainPress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_can_msgs__msg__Badenia560PowertrainPress__destroy(sd_can_msgs__msg__Badenia560PowertrainPress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_can_msgs__msg__Badenia560PowertrainPress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__init(sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainPress * data = NULL;

  if (size) {
    data = (sd_can_msgs__msg__Badenia560PowertrainPress *)allocator.zero_allocate(size, sizeof(sd_can_msgs__msg__Badenia560PowertrainPress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_can_msgs__msg__Badenia560PowertrainPress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_can_msgs__msg__Badenia560PowertrainPress__fini(&data[i - 1]);
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
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__fini(sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * array)
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
      sd_can_msgs__msg__Badenia560PowertrainPress__fini(&array->data[i]);
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

sd_can_msgs__msg__Badenia560PowertrainPress__Sequence *
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * array = (sd_can_msgs__msg__Badenia560PowertrainPress__Sequence *)allocator.allocate(sizeof(sd_can_msgs__msg__Badenia560PowertrainPress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__destroy(sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__are_equal(const sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * lhs, const sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560PowertrainPress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__copy(
  const sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * input,
  sd_can_msgs__msg__Badenia560PowertrainPress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_can_msgs__msg__Badenia560PowertrainPress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_can_msgs__msg__Badenia560PowertrainPress * data =
      (sd_can_msgs__msg__Badenia560PowertrainPress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_can_msgs__msg__Badenia560PowertrainPress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_can_msgs__msg__Badenia560PowertrainPress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_can_msgs__msg__Badenia560PowertrainPress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
