// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice
#include "sd_localization_msgs/msg/detail/state_estimation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sn_map_state`
#include "sd_map_msgs/msg/detail/sn_map_state__functions.h"

bool
sd_localization_msgs__msg__StateEstimation__init(sd_localization_msgs__msg__StateEstimation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sd_localization_msgs__msg__StateEstimation__fini(msg);
    return false;
  }
  // se_status
  // se_state
  // x_m
  // y_m
  // z_m
  // roll_rad
  // pitch_rad
  // yaw_rad
  // pos_accuracy
  // vel_accuracy
  // wx_radps
  // wy_radps
  // wz_radps
  // vx_mps
  // vy_mps
  // vz_mps
  // omega_w_fl
  // omega_w_fr
  // omega_w_rl
  // omega_w_rr
  // v_mps
  // v_raw_mps
  // beta_rad
  // ax_mps2
  // ay_mps2
  // az_mps2
  // valid_imu_b
  // yaw_vel_rad
  // kappa_radpm
  // dbeta_radps
  // ddyaw_radps2
  // ax_vel_mps2
  // ay_vel_mps2
  // lambda_fl_perc
  // lambda_fr_perc
  // lambda_rl_perc
  // lambda_rr_perc
  // valid_wheelsspeeds_b
  // alpha_fl_rad
  // alpha_fr_rad
  // alpha_rl_rad
  // alpha_rr_rad
  // diff_fr_alpha_rad
  // delta_wheel_rad
  // timestamp
  // gas
  // brake
  // clutch
  // gear
  // rpm
  // front_brake_pressure
  // rear_brake_pressure
  // vehicle_timestamp
  // residuals_status
  // std_dev_status
  // is_safe
  // cba_actual_pressure_fl_pa
  // cba_actual_pressure_fr_pa
  // cba_actual_pressure_rl_pa
  // cba_actual_pressure_rr_pa
  // sn_map_state
  if (!sd_map_msgs__msg__SnMapState__init(&msg->sn_map_state)) {
    sd_localization_msgs__msg__StateEstimation__fini(msg);
    return false;
  }
  return true;
}

void
sd_localization_msgs__msg__StateEstimation__fini(sd_localization_msgs__msg__StateEstimation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // se_status
  // se_state
  // x_m
  // y_m
  // z_m
  // roll_rad
  // pitch_rad
  // yaw_rad
  // pos_accuracy
  // vel_accuracy
  // wx_radps
  // wy_radps
  // wz_radps
  // vx_mps
  // vy_mps
  // vz_mps
  // omega_w_fl
  // omega_w_fr
  // omega_w_rl
  // omega_w_rr
  // v_mps
  // v_raw_mps
  // beta_rad
  // ax_mps2
  // ay_mps2
  // az_mps2
  // valid_imu_b
  // yaw_vel_rad
  // kappa_radpm
  // dbeta_radps
  // ddyaw_radps2
  // ax_vel_mps2
  // ay_vel_mps2
  // lambda_fl_perc
  // lambda_fr_perc
  // lambda_rl_perc
  // lambda_rr_perc
  // valid_wheelsspeeds_b
  // alpha_fl_rad
  // alpha_fr_rad
  // alpha_rl_rad
  // alpha_rr_rad
  // diff_fr_alpha_rad
  // delta_wheel_rad
  // timestamp
  // gas
  // brake
  // clutch
  // gear
  // rpm
  // front_brake_pressure
  // rear_brake_pressure
  // vehicle_timestamp
  // residuals_status
  // std_dev_status
  // is_safe
  // cba_actual_pressure_fl_pa
  // cba_actual_pressure_fr_pa
  // cba_actual_pressure_rl_pa
  // cba_actual_pressure_rr_pa
  // sn_map_state
  sd_map_msgs__msg__SnMapState__fini(&msg->sn_map_state);
}

bool
sd_localization_msgs__msg__StateEstimation__are_equal(const sd_localization_msgs__msg__StateEstimation * lhs, const sd_localization_msgs__msg__StateEstimation * rhs)
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
  // se_status
  if (lhs->se_status != rhs->se_status) {
    return false;
  }
  // se_state
  if (lhs->se_state != rhs->se_state) {
    return false;
  }
  // x_m
  if (lhs->x_m != rhs->x_m) {
    return false;
  }
  // y_m
  if (lhs->y_m != rhs->y_m) {
    return false;
  }
  // z_m
  if (lhs->z_m != rhs->z_m) {
    return false;
  }
  // roll_rad
  if (lhs->roll_rad != rhs->roll_rad) {
    return false;
  }
  // pitch_rad
  if (lhs->pitch_rad != rhs->pitch_rad) {
    return false;
  }
  // yaw_rad
  if (lhs->yaw_rad != rhs->yaw_rad) {
    return false;
  }
  // pos_accuracy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos_accuracy[i] != rhs->pos_accuracy[i]) {
      return false;
    }
  }
  // vel_accuracy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel_accuracy[i] != rhs->vel_accuracy[i]) {
      return false;
    }
  }
  // wx_radps
  if (lhs->wx_radps != rhs->wx_radps) {
    return false;
  }
  // wy_radps
  if (lhs->wy_radps != rhs->wy_radps) {
    return false;
  }
  // wz_radps
  if (lhs->wz_radps != rhs->wz_radps) {
    return false;
  }
  // vx_mps
  if (lhs->vx_mps != rhs->vx_mps) {
    return false;
  }
  // vy_mps
  if (lhs->vy_mps != rhs->vy_mps) {
    return false;
  }
  // vz_mps
  if (lhs->vz_mps != rhs->vz_mps) {
    return false;
  }
  // omega_w_fl
  if (lhs->omega_w_fl != rhs->omega_w_fl) {
    return false;
  }
  // omega_w_fr
  if (lhs->omega_w_fr != rhs->omega_w_fr) {
    return false;
  }
  // omega_w_rl
  if (lhs->omega_w_rl != rhs->omega_w_rl) {
    return false;
  }
  // omega_w_rr
  if (lhs->omega_w_rr != rhs->omega_w_rr) {
    return false;
  }
  // v_mps
  if (lhs->v_mps != rhs->v_mps) {
    return false;
  }
  // v_raw_mps
  if (lhs->v_raw_mps != rhs->v_raw_mps) {
    return false;
  }
  // beta_rad
  if (lhs->beta_rad != rhs->beta_rad) {
    return false;
  }
  // ax_mps2
  if (lhs->ax_mps2 != rhs->ax_mps2) {
    return false;
  }
  // ay_mps2
  if (lhs->ay_mps2 != rhs->ay_mps2) {
    return false;
  }
  // az_mps2
  if (lhs->az_mps2 != rhs->az_mps2) {
    return false;
  }
  // valid_imu_b
  if (lhs->valid_imu_b != rhs->valid_imu_b) {
    return false;
  }
  // yaw_vel_rad
  if (lhs->yaw_vel_rad != rhs->yaw_vel_rad) {
    return false;
  }
  // kappa_radpm
  if (lhs->kappa_radpm != rhs->kappa_radpm) {
    return false;
  }
  // dbeta_radps
  if (lhs->dbeta_radps != rhs->dbeta_radps) {
    return false;
  }
  // ddyaw_radps2
  if (lhs->ddyaw_radps2 != rhs->ddyaw_radps2) {
    return false;
  }
  // ax_vel_mps2
  if (lhs->ax_vel_mps2 != rhs->ax_vel_mps2) {
    return false;
  }
  // ay_vel_mps2
  if (lhs->ay_vel_mps2 != rhs->ay_vel_mps2) {
    return false;
  }
  // lambda_fl_perc
  if (lhs->lambda_fl_perc != rhs->lambda_fl_perc) {
    return false;
  }
  // lambda_fr_perc
  if (lhs->lambda_fr_perc != rhs->lambda_fr_perc) {
    return false;
  }
  // lambda_rl_perc
  if (lhs->lambda_rl_perc != rhs->lambda_rl_perc) {
    return false;
  }
  // lambda_rr_perc
  if (lhs->lambda_rr_perc != rhs->lambda_rr_perc) {
    return false;
  }
  // valid_wheelsspeeds_b
  if (lhs->valid_wheelsspeeds_b != rhs->valid_wheelsspeeds_b) {
    return false;
  }
  // alpha_fl_rad
  if (lhs->alpha_fl_rad != rhs->alpha_fl_rad) {
    return false;
  }
  // alpha_fr_rad
  if (lhs->alpha_fr_rad != rhs->alpha_fr_rad) {
    return false;
  }
  // alpha_rl_rad
  if (lhs->alpha_rl_rad != rhs->alpha_rl_rad) {
    return false;
  }
  // alpha_rr_rad
  if (lhs->alpha_rr_rad != rhs->alpha_rr_rad) {
    return false;
  }
  // diff_fr_alpha_rad
  if (lhs->diff_fr_alpha_rad != rhs->diff_fr_alpha_rad) {
    return false;
  }
  // delta_wheel_rad
  if (lhs->delta_wheel_rad != rhs->delta_wheel_rad) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // gas
  if (lhs->gas != rhs->gas) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // clutch
  if (lhs->clutch != rhs->clutch) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // rpm
  if (lhs->rpm != rhs->rpm) {
    return false;
  }
  // front_brake_pressure
  if (lhs->front_brake_pressure != rhs->front_brake_pressure) {
    return false;
  }
  // rear_brake_pressure
  if (lhs->rear_brake_pressure != rhs->rear_brake_pressure) {
    return false;
  }
  // vehicle_timestamp
  if (lhs->vehicle_timestamp != rhs->vehicle_timestamp) {
    return false;
  }
  // residuals_status
  if (lhs->residuals_status != rhs->residuals_status) {
    return false;
  }
  // std_dev_status
  if (lhs->std_dev_status != rhs->std_dev_status) {
    return false;
  }
  // is_safe
  if (lhs->is_safe != rhs->is_safe) {
    return false;
  }
  // cba_actual_pressure_fl_pa
  if (lhs->cba_actual_pressure_fl_pa != rhs->cba_actual_pressure_fl_pa) {
    return false;
  }
  // cba_actual_pressure_fr_pa
  if (lhs->cba_actual_pressure_fr_pa != rhs->cba_actual_pressure_fr_pa) {
    return false;
  }
  // cba_actual_pressure_rl_pa
  if (lhs->cba_actual_pressure_rl_pa != rhs->cba_actual_pressure_rl_pa) {
    return false;
  }
  // cba_actual_pressure_rr_pa
  if (lhs->cba_actual_pressure_rr_pa != rhs->cba_actual_pressure_rr_pa) {
    return false;
  }
  // sn_map_state
  if (!sd_map_msgs__msg__SnMapState__are_equal(
      &(lhs->sn_map_state), &(rhs->sn_map_state)))
  {
    return false;
  }
  return true;
}

bool
sd_localization_msgs__msg__StateEstimation__copy(
  const sd_localization_msgs__msg__StateEstimation * input,
  sd_localization_msgs__msg__StateEstimation * output)
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
  // se_status
  output->se_status = input->se_status;
  // se_state
  output->se_state = input->se_state;
  // x_m
  output->x_m = input->x_m;
  // y_m
  output->y_m = input->y_m;
  // z_m
  output->z_m = input->z_m;
  // roll_rad
  output->roll_rad = input->roll_rad;
  // pitch_rad
  output->pitch_rad = input->pitch_rad;
  // yaw_rad
  output->yaw_rad = input->yaw_rad;
  // pos_accuracy
  for (size_t i = 0; i < 3; ++i) {
    output->pos_accuracy[i] = input->pos_accuracy[i];
  }
  // vel_accuracy
  for (size_t i = 0; i < 3; ++i) {
    output->vel_accuracy[i] = input->vel_accuracy[i];
  }
  // wx_radps
  output->wx_radps = input->wx_radps;
  // wy_radps
  output->wy_radps = input->wy_radps;
  // wz_radps
  output->wz_radps = input->wz_radps;
  // vx_mps
  output->vx_mps = input->vx_mps;
  // vy_mps
  output->vy_mps = input->vy_mps;
  // vz_mps
  output->vz_mps = input->vz_mps;
  // omega_w_fl
  output->omega_w_fl = input->omega_w_fl;
  // omega_w_fr
  output->omega_w_fr = input->omega_w_fr;
  // omega_w_rl
  output->omega_w_rl = input->omega_w_rl;
  // omega_w_rr
  output->omega_w_rr = input->omega_w_rr;
  // v_mps
  output->v_mps = input->v_mps;
  // v_raw_mps
  output->v_raw_mps = input->v_raw_mps;
  // beta_rad
  output->beta_rad = input->beta_rad;
  // ax_mps2
  output->ax_mps2 = input->ax_mps2;
  // ay_mps2
  output->ay_mps2 = input->ay_mps2;
  // az_mps2
  output->az_mps2 = input->az_mps2;
  // valid_imu_b
  output->valid_imu_b = input->valid_imu_b;
  // yaw_vel_rad
  output->yaw_vel_rad = input->yaw_vel_rad;
  // kappa_radpm
  output->kappa_radpm = input->kappa_radpm;
  // dbeta_radps
  output->dbeta_radps = input->dbeta_radps;
  // ddyaw_radps2
  output->ddyaw_radps2 = input->ddyaw_radps2;
  // ax_vel_mps2
  output->ax_vel_mps2 = input->ax_vel_mps2;
  // ay_vel_mps2
  output->ay_vel_mps2 = input->ay_vel_mps2;
  // lambda_fl_perc
  output->lambda_fl_perc = input->lambda_fl_perc;
  // lambda_fr_perc
  output->lambda_fr_perc = input->lambda_fr_perc;
  // lambda_rl_perc
  output->lambda_rl_perc = input->lambda_rl_perc;
  // lambda_rr_perc
  output->lambda_rr_perc = input->lambda_rr_perc;
  // valid_wheelsspeeds_b
  output->valid_wheelsspeeds_b = input->valid_wheelsspeeds_b;
  // alpha_fl_rad
  output->alpha_fl_rad = input->alpha_fl_rad;
  // alpha_fr_rad
  output->alpha_fr_rad = input->alpha_fr_rad;
  // alpha_rl_rad
  output->alpha_rl_rad = input->alpha_rl_rad;
  // alpha_rr_rad
  output->alpha_rr_rad = input->alpha_rr_rad;
  // diff_fr_alpha_rad
  output->diff_fr_alpha_rad = input->diff_fr_alpha_rad;
  // delta_wheel_rad
  output->delta_wheel_rad = input->delta_wheel_rad;
  // timestamp
  output->timestamp = input->timestamp;
  // gas
  output->gas = input->gas;
  // brake
  output->brake = input->brake;
  // clutch
  output->clutch = input->clutch;
  // gear
  output->gear = input->gear;
  // rpm
  output->rpm = input->rpm;
  // front_brake_pressure
  output->front_brake_pressure = input->front_brake_pressure;
  // rear_brake_pressure
  output->rear_brake_pressure = input->rear_brake_pressure;
  // vehicle_timestamp
  output->vehicle_timestamp = input->vehicle_timestamp;
  // residuals_status
  output->residuals_status = input->residuals_status;
  // std_dev_status
  output->std_dev_status = input->std_dev_status;
  // is_safe
  output->is_safe = input->is_safe;
  // cba_actual_pressure_fl_pa
  output->cba_actual_pressure_fl_pa = input->cba_actual_pressure_fl_pa;
  // cba_actual_pressure_fr_pa
  output->cba_actual_pressure_fr_pa = input->cba_actual_pressure_fr_pa;
  // cba_actual_pressure_rl_pa
  output->cba_actual_pressure_rl_pa = input->cba_actual_pressure_rl_pa;
  // cba_actual_pressure_rr_pa
  output->cba_actual_pressure_rr_pa = input->cba_actual_pressure_rr_pa;
  // sn_map_state
  if (!sd_map_msgs__msg__SnMapState__copy(
      &(input->sn_map_state), &(output->sn_map_state)))
  {
    return false;
  }
  return true;
}

sd_localization_msgs__msg__StateEstimation *
sd_localization_msgs__msg__StateEstimation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_localization_msgs__msg__StateEstimation * msg = (sd_localization_msgs__msg__StateEstimation *)allocator.allocate(sizeof(sd_localization_msgs__msg__StateEstimation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sd_localization_msgs__msg__StateEstimation));
  bool success = sd_localization_msgs__msg__StateEstimation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sd_localization_msgs__msg__StateEstimation__destroy(sd_localization_msgs__msg__StateEstimation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sd_localization_msgs__msg__StateEstimation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sd_localization_msgs__msg__StateEstimation__Sequence__init(sd_localization_msgs__msg__StateEstimation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_localization_msgs__msg__StateEstimation * data = NULL;

  if (size) {
    data = (sd_localization_msgs__msg__StateEstimation *)allocator.zero_allocate(size, sizeof(sd_localization_msgs__msg__StateEstimation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sd_localization_msgs__msg__StateEstimation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sd_localization_msgs__msg__StateEstimation__fini(&data[i - 1]);
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
sd_localization_msgs__msg__StateEstimation__Sequence__fini(sd_localization_msgs__msg__StateEstimation__Sequence * array)
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
      sd_localization_msgs__msg__StateEstimation__fini(&array->data[i]);
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

sd_localization_msgs__msg__StateEstimation__Sequence *
sd_localization_msgs__msg__StateEstimation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sd_localization_msgs__msg__StateEstimation__Sequence * array = (sd_localization_msgs__msg__StateEstimation__Sequence *)allocator.allocate(sizeof(sd_localization_msgs__msg__StateEstimation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sd_localization_msgs__msg__StateEstimation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sd_localization_msgs__msg__StateEstimation__Sequence__destroy(sd_localization_msgs__msg__StateEstimation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sd_localization_msgs__msg__StateEstimation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sd_localization_msgs__msg__StateEstimation__Sequence__are_equal(const sd_localization_msgs__msg__StateEstimation__Sequence * lhs, const sd_localization_msgs__msg__StateEstimation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sd_localization_msgs__msg__StateEstimation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sd_localization_msgs__msg__StateEstimation__Sequence__copy(
  const sd_localization_msgs__msg__StateEstimation__Sequence * input,
  sd_localization_msgs__msg__StateEstimation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sd_localization_msgs__msg__StateEstimation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sd_localization_msgs__msg__StateEstimation * data =
      (sd_localization_msgs__msg__StateEstimation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sd_localization_msgs__msg__StateEstimation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sd_localization_msgs__msg__StateEstimation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sd_localization_msgs__msg__StateEstimation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
