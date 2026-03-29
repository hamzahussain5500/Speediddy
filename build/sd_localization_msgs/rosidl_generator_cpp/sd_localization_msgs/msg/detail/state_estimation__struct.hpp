// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice

#ifndef SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_HPP_
#define SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'sn_map_state'
#include "sd_map_msgs/msg/detail/sn_map_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_localization_msgs__msg__StateEstimation __attribute__((deprecated))
#else
# define DEPRECATED__sd_localization_msgs__msg__StateEstimation __declspec(deprecated)
#endif

namespace sd_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateEstimation_
{
  using Type = StateEstimation_<ContainerAllocator>;

  explicit StateEstimation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sn_map_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->se_status = 0l;
      this->se_state = 0l;
      this->x_m = 0.0;
      this->y_m = 0.0;
      this->z_m = 0.0;
      this->roll_rad = 0.0;
      this->pitch_rad = 0.0;
      this->yaw_rad = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_accuracy.begin(), this->pos_accuracy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel_accuracy.begin(), this->vel_accuracy.end(), 0.0);
      this->wx_radps = 0.0;
      this->wy_radps = 0.0;
      this->wz_radps = 0.0;
      this->vx_mps = 0.0;
      this->vy_mps = 0.0;
      this->vz_mps = 0.0;
      this->omega_w_fl = 0.0;
      this->omega_w_fr = 0.0;
      this->omega_w_rl = 0.0;
      this->omega_w_rr = 0.0;
      this->v_mps = 0.0;
      this->v_raw_mps = 0.0;
      this->beta_rad = 0.0;
      this->ax_mps2 = 0.0;
      this->ay_mps2 = 0.0;
      this->az_mps2 = 0.0;
      this->valid_imu_b = false;
      this->yaw_vel_rad = 0.0;
      this->kappa_radpm = 0.0;
      this->dbeta_radps = 0.0;
      this->ddyaw_radps2 = 0.0;
      this->ax_vel_mps2 = 0.0;
      this->ay_vel_mps2 = 0.0;
      this->lambda_fl_perc = 0.0;
      this->lambda_fr_perc = 0.0;
      this->lambda_rl_perc = 0.0;
      this->lambda_rr_perc = 0.0;
      this->valid_wheelsspeeds_b = false;
      this->alpha_fl_rad = 0.0;
      this->alpha_fr_rad = 0.0;
      this->alpha_rl_rad = 0.0;
      this->alpha_rr_rad = 0.0;
      this->diff_fr_alpha_rad = 0.0;
      this->delta_wheel_rad = 0.0;
      this->timestamp = 0.0;
      this->gas = 0.0;
      this->brake = 0.0;
      this->clutch = 0.0;
      this->gear = 0.0;
      this->rpm = 0.0;
      this->front_brake_pressure = 0.0;
      this->rear_brake_pressure = 0.0;
      this->vehicle_timestamp = 0.0;
      this->residuals_status = false;
      this->std_dev_status = false;
      this->is_safe = false;
      this->cba_actual_pressure_fl_pa = 0.0;
      this->cba_actual_pressure_fr_pa = 0.0;
      this->cba_actual_pressure_rl_pa = 0.0;
      this->cba_actual_pressure_rr_pa = 0.0;
    }
  }

  explicit StateEstimation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pos_accuracy(_alloc),
    vel_accuracy(_alloc),
    sn_map_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->se_status = 0l;
      this->se_state = 0l;
      this->x_m = 0.0;
      this->y_m = 0.0;
      this->z_m = 0.0;
      this->roll_rad = 0.0;
      this->pitch_rad = 0.0;
      this->yaw_rad = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_accuracy.begin(), this->pos_accuracy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel_accuracy.begin(), this->vel_accuracy.end(), 0.0);
      this->wx_radps = 0.0;
      this->wy_radps = 0.0;
      this->wz_radps = 0.0;
      this->vx_mps = 0.0;
      this->vy_mps = 0.0;
      this->vz_mps = 0.0;
      this->omega_w_fl = 0.0;
      this->omega_w_fr = 0.0;
      this->omega_w_rl = 0.0;
      this->omega_w_rr = 0.0;
      this->v_mps = 0.0;
      this->v_raw_mps = 0.0;
      this->beta_rad = 0.0;
      this->ax_mps2 = 0.0;
      this->ay_mps2 = 0.0;
      this->az_mps2 = 0.0;
      this->valid_imu_b = false;
      this->yaw_vel_rad = 0.0;
      this->kappa_radpm = 0.0;
      this->dbeta_radps = 0.0;
      this->ddyaw_radps2 = 0.0;
      this->ax_vel_mps2 = 0.0;
      this->ay_vel_mps2 = 0.0;
      this->lambda_fl_perc = 0.0;
      this->lambda_fr_perc = 0.0;
      this->lambda_rl_perc = 0.0;
      this->lambda_rr_perc = 0.0;
      this->valid_wheelsspeeds_b = false;
      this->alpha_fl_rad = 0.0;
      this->alpha_fr_rad = 0.0;
      this->alpha_rl_rad = 0.0;
      this->alpha_rr_rad = 0.0;
      this->diff_fr_alpha_rad = 0.0;
      this->delta_wheel_rad = 0.0;
      this->timestamp = 0.0;
      this->gas = 0.0;
      this->brake = 0.0;
      this->clutch = 0.0;
      this->gear = 0.0;
      this->rpm = 0.0;
      this->front_brake_pressure = 0.0;
      this->rear_brake_pressure = 0.0;
      this->vehicle_timestamp = 0.0;
      this->residuals_status = false;
      this->std_dev_status = false;
      this->is_safe = false;
      this->cba_actual_pressure_fl_pa = 0.0;
      this->cba_actual_pressure_fr_pa = 0.0;
      this->cba_actual_pressure_rl_pa = 0.0;
      this->cba_actual_pressure_rr_pa = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _se_status_type =
    int32_t;
  _se_status_type se_status;
  using _se_state_type =
    int32_t;
  _se_state_type se_state;
  using _x_m_type =
    double;
  _x_m_type x_m;
  using _y_m_type =
    double;
  _y_m_type y_m;
  using _z_m_type =
    double;
  _z_m_type z_m;
  using _roll_rad_type =
    double;
  _roll_rad_type roll_rad;
  using _pitch_rad_type =
    double;
  _pitch_rad_type pitch_rad;
  using _yaw_rad_type =
    double;
  _yaw_rad_type yaw_rad;
  using _pos_accuracy_type =
    std::array<double, 3>;
  _pos_accuracy_type pos_accuracy;
  using _vel_accuracy_type =
    std::array<double, 3>;
  _vel_accuracy_type vel_accuracy;
  using _wx_radps_type =
    double;
  _wx_radps_type wx_radps;
  using _wy_radps_type =
    double;
  _wy_radps_type wy_radps;
  using _wz_radps_type =
    double;
  _wz_radps_type wz_radps;
  using _vx_mps_type =
    double;
  _vx_mps_type vx_mps;
  using _vy_mps_type =
    double;
  _vy_mps_type vy_mps;
  using _vz_mps_type =
    double;
  _vz_mps_type vz_mps;
  using _omega_w_fl_type =
    double;
  _omega_w_fl_type omega_w_fl;
  using _omega_w_fr_type =
    double;
  _omega_w_fr_type omega_w_fr;
  using _omega_w_rl_type =
    double;
  _omega_w_rl_type omega_w_rl;
  using _omega_w_rr_type =
    double;
  _omega_w_rr_type omega_w_rr;
  using _v_mps_type =
    double;
  _v_mps_type v_mps;
  using _v_raw_mps_type =
    double;
  _v_raw_mps_type v_raw_mps;
  using _beta_rad_type =
    double;
  _beta_rad_type beta_rad;
  using _ax_mps2_type =
    double;
  _ax_mps2_type ax_mps2;
  using _ay_mps2_type =
    double;
  _ay_mps2_type ay_mps2;
  using _az_mps2_type =
    double;
  _az_mps2_type az_mps2;
  using _valid_imu_b_type =
    bool;
  _valid_imu_b_type valid_imu_b;
  using _yaw_vel_rad_type =
    double;
  _yaw_vel_rad_type yaw_vel_rad;
  using _kappa_radpm_type =
    double;
  _kappa_radpm_type kappa_radpm;
  using _dbeta_radps_type =
    double;
  _dbeta_radps_type dbeta_radps;
  using _ddyaw_radps2_type =
    double;
  _ddyaw_radps2_type ddyaw_radps2;
  using _ax_vel_mps2_type =
    double;
  _ax_vel_mps2_type ax_vel_mps2;
  using _ay_vel_mps2_type =
    double;
  _ay_vel_mps2_type ay_vel_mps2;
  using _lambda_fl_perc_type =
    double;
  _lambda_fl_perc_type lambda_fl_perc;
  using _lambda_fr_perc_type =
    double;
  _lambda_fr_perc_type lambda_fr_perc;
  using _lambda_rl_perc_type =
    double;
  _lambda_rl_perc_type lambda_rl_perc;
  using _lambda_rr_perc_type =
    double;
  _lambda_rr_perc_type lambda_rr_perc;
  using _valid_wheelsspeeds_b_type =
    bool;
  _valid_wheelsspeeds_b_type valid_wheelsspeeds_b;
  using _alpha_fl_rad_type =
    double;
  _alpha_fl_rad_type alpha_fl_rad;
  using _alpha_fr_rad_type =
    double;
  _alpha_fr_rad_type alpha_fr_rad;
  using _alpha_rl_rad_type =
    double;
  _alpha_rl_rad_type alpha_rl_rad;
  using _alpha_rr_rad_type =
    double;
  _alpha_rr_rad_type alpha_rr_rad;
  using _diff_fr_alpha_rad_type =
    double;
  _diff_fr_alpha_rad_type diff_fr_alpha_rad;
  using _delta_wheel_rad_type =
    double;
  _delta_wheel_rad_type delta_wheel_rad;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _gas_type =
    double;
  _gas_type gas;
  using _brake_type =
    double;
  _brake_type brake;
  using _clutch_type =
    double;
  _clutch_type clutch;
  using _gear_type =
    double;
  _gear_type gear;
  using _rpm_type =
    double;
  _rpm_type rpm;
  using _front_brake_pressure_type =
    double;
  _front_brake_pressure_type front_brake_pressure;
  using _rear_brake_pressure_type =
    double;
  _rear_brake_pressure_type rear_brake_pressure;
  using _vehicle_timestamp_type =
    double;
  _vehicle_timestamp_type vehicle_timestamp;
  using _residuals_status_type =
    bool;
  _residuals_status_type residuals_status;
  using _std_dev_status_type =
    bool;
  _std_dev_status_type std_dev_status;
  using _is_safe_type =
    bool;
  _is_safe_type is_safe;
  using _cba_actual_pressure_fl_pa_type =
    double;
  _cba_actual_pressure_fl_pa_type cba_actual_pressure_fl_pa;
  using _cba_actual_pressure_fr_pa_type =
    double;
  _cba_actual_pressure_fr_pa_type cba_actual_pressure_fr_pa;
  using _cba_actual_pressure_rl_pa_type =
    double;
  _cba_actual_pressure_rl_pa_type cba_actual_pressure_rl_pa;
  using _cba_actual_pressure_rr_pa_type =
    double;
  _cba_actual_pressure_rr_pa_type cba_actual_pressure_rr_pa;
  using _sn_map_state_type =
    sd_map_msgs::msg::SnMapState_<ContainerAllocator>;
  _sn_map_state_type sn_map_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__se_status(
    const int32_t & _arg)
  {
    this->se_status = _arg;
    return *this;
  }
  Type & set__se_state(
    const int32_t & _arg)
  {
    this->se_state = _arg;
    return *this;
  }
  Type & set__x_m(
    const double & _arg)
  {
    this->x_m = _arg;
    return *this;
  }
  Type & set__y_m(
    const double & _arg)
  {
    this->y_m = _arg;
    return *this;
  }
  Type & set__z_m(
    const double & _arg)
  {
    this->z_m = _arg;
    return *this;
  }
  Type & set__roll_rad(
    const double & _arg)
  {
    this->roll_rad = _arg;
    return *this;
  }
  Type & set__pitch_rad(
    const double & _arg)
  {
    this->pitch_rad = _arg;
    return *this;
  }
  Type & set__yaw_rad(
    const double & _arg)
  {
    this->yaw_rad = _arg;
    return *this;
  }
  Type & set__pos_accuracy(
    const std::array<double, 3> & _arg)
  {
    this->pos_accuracy = _arg;
    return *this;
  }
  Type & set__vel_accuracy(
    const std::array<double, 3> & _arg)
  {
    this->vel_accuracy = _arg;
    return *this;
  }
  Type & set__wx_radps(
    const double & _arg)
  {
    this->wx_radps = _arg;
    return *this;
  }
  Type & set__wy_radps(
    const double & _arg)
  {
    this->wy_radps = _arg;
    return *this;
  }
  Type & set__wz_radps(
    const double & _arg)
  {
    this->wz_radps = _arg;
    return *this;
  }
  Type & set__vx_mps(
    const double & _arg)
  {
    this->vx_mps = _arg;
    return *this;
  }
  Type & set__vy_mps(
    const double & _arg)
  {
    this->vy_mps = _arg;
    return *this;
  }
  Type & set__vz_mps(
    const double & _arg)
  {
    this->vz_mps = _arg;
    return *this;
  }
  Type & set__omega_w_fl(
    const double & _arg)
  {
    this->omega_w_fl = _arg;
    return *this;
  }
  Type & set__omega_w_fr(
    const double & _arg)
  {
    this->omega_w_fr = _arg;
    return *this;
  }
  Type & set__omega_w_rl(
    const double & _arg)
  {
    this->omega_w_rl = _arg;
    return *this;
  }
  Type & set__omega_w_rr(
    const double & _arg)
  {
    this->omega_w_rr = _arg;
    return *this;
  }
  Type & set__v_mps(
    const double & _arg)
  {
    this->v_mps = _arg;
    return *this;
  }
  Type & set__v_raw_mps(
    const double & _arg)
  {
    this->v_raw_mps = _arg;
    return *this;
  }
  Type & set__beta_rad(
    const double & _arg)
  {
    this->beta_rad = _arg;
    return *this;
  }
  Type & set__ax_mps2(
    const double & _arg)
  {
    this->ax_mps2 = _arg;
    return *this;
  }
  Type & set__ay_mps2(
    const double & _arg)
  {
    this->ay_mps2 = _arg;
    return *this;
  }
  Type & set__az_mps2(
    const double & _arg)
  {
    this->az_mps2 = _arg;
    return *this;
  }
  Type & set__valid_imu_b(
    const bool & _arg)
  {
    this->valid_imu_b = _arg;
    return *this;
  }
  Type & set__yaw_vel_rad(
    const double & _arg)
  {
    this->yaw_vel_rad = _arg;
    return *this;
  }
  Type & set__kappa_radpm(
    const double & _arg)
  {
    this->kappa_radpm = _arg;
    return *this;
  }
  Type & set__dbeta_radps(
    const double & _arg)
  {
    this->dbeta_radps = _arg;
    return *this;
  }
  Type & set__ddyaw_radps2(
    const double & _arg)
  {
    this->ddyaw_radps2 = _arg;
    return *this;
  }
  Type & set__ax_vel_mps2(
    const double & _arg)
  {
    this->ax_vel_mps2 = _arg;
    return *this;
  }
  Type & set__ay_vel_mps2(
    const double & _arg)
  {
    this->ay_vel_mps2 = _arg;
    return *this;
  }
  Type & set__lambda_fl_perc(
    const double & _arg)
  {
    this->lambda_fl_perc = _arg;
    return *this;
  }
  Type & set__lambda_fr_perc(
    const double & _arg)
  {
    this->lambda_fr_perc = _arg;
    return *this;
  }
  Type & set__lambda_rl_perc(
    const double & _arg)
  {
    this->lambda_rl_perc = _arg;
    return *this;
  }
  Type & set__lambda_rr_perc(
    const double & _arg)
  {
    this->lambda_rr_perc = _arg;
    return *this;
  }
  Type & set__valid_wheelsspeeds_b(
    const bool & _arg)
  {
    this->valid_wheelsspeeds_b = _arg;
    return *this;
  }
  Type & set__alpha_fl_rad(
    const double & _arg)
  {
    this->alpha_fl_rad = _arg;
    return *this;
  }
  Type & set__alpha_fr_rad(
    const double & _arg)
  {
    this->alpha_fr_rad = _arg;
    return *this;
  }
  Type & set__alpha_rl_rad(
    const double & _arg)
  {
    this->alpha_rl_rad = _arg;
    return *this;
  }
  Type & set__alpha_rr_rad(
    const double & _arg)
  {
    this->alpha_rr_rad = _arg;
    return *this;
  }
  Type & set__diff_fr_alpha_rad(
    const double & _arg)
  {
    this->diff_fr_alpha_rad = _arg;
    return *this;
  }
  Type & set__delta_wheel_rad(
    const double & _arg)
  {
    this->delta_wheel_rad = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__gas(
    const double & _arg)
  {
    this->gas = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__clutch(
    const double & _arg)
  {
    this->clutch = _arg;
    return *this;
  }
  Type & set__gear(
    const double & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__rpm(
    const double & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__front_brake_pressure(
    const double & _arg)
  {
    this->front_brake_pressure = _arg;
    return *this;
  }
  Type & set__rear_brake_pressure(
    const double & _arg)
  {
    this->rear_brake_pressure = _arg;
    return *this;
  }
  Type & set__vehicle_timestamp(
    const double & _arg)
  {
    this->vehicle_timestamp = _arg;
    return *this;
  }
  Type & set__residuals_status(
    const bool & _arg)
  {
    this->residuals_status = _arg;
    return *this;
  }
  Type & set__std_dev_status(
    const bool & _arg)
  {
    this->std_dev_status = _arg;
    return *this;
  }
  Type & set__is_safe(
    const bool & _arg)
  {
    this->is_safe = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_fl_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_fl_pa = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_fr_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_fr_pa = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_rl_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_rl_pa = _arg;
    return *this;
  }
  Type & set__cba_actual_pressure_rr_pa(
    const double & _arg)
  {
    this->cba_actual_pressure_rr_pa = _arg;
    return *this;
  }
  Type & set__sn_map_state(
    const sd_map_msgs::msg::SnMapState_<ContainerAllocator> & _arg)
  {
    this->sn_map_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_localization_msgs__msg__StateEstimation
    std::shared_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_localization_msgs__msg__StateEstimation
    std::shared_ptr<sd_localization_msgs::msg::StateEstimation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateEstimation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->se_status != other.se_status) {
      return false;
    }
    if (this->se_state != other.se_state) {
      return false;
    }
    if (this->x_m != other.x_m) {
      return false;
    }
    if (this->y_m != other.y_m) {
      return false;
    }
    if (this->z_m != other.z_m) {
      return false;
    }
    if (this->roll_rad != other.roll_rad) {
      return false;
    }
    if (this->pitch_rad != other.pitch_rad) {
      return false;
    }
    if (this->yaw_rad != other.yaw_rad) {
      return false;
    }
    if (this->pos_accuracy != other.pos_accuracy) {
      return false;
    }
    if (this->vel_accuracy != other.vel_accuracy) {
      return false;
    }
    if (this->wx_radps != other.wx_radps) {
      return false;
    }
    if (this->wy_radps != other.wy_radps) {
      return false;
    }
    if (this->wz_radps != other.wz_radps) {
      return false;
    }
    if (this->vx_mps != other.vx_mps) {
      return false;
    }
    if (this->vy_mps != other.vy_mps) {
      return false;
    }
    if (this->vz_mps != other.vz_mps) {
      return false;
    }
    if (this->omega_w_fl != other.omega_w_fl) {
      return false;
    }
    if (this->omega_w_fr != other.omega_w_fr) {
      return false;
    }
    if (this->omega_w_rl != other.omega_w_rl) {
      return false;
    }
    if (this->omega_w_rr != other.omega_w_rr) {
      return false;
    }
    if (this->v_mps != other.v_mps) {
      return false;
    }
    if (this->v_raw_mps != other.v_raw_mps) {
      return false;
    }
    if (this->beta_rad != other.beta_rad) {
      return false;
    }
    if (this->ax_mps2 != other.ax_mps2) {
      return false;
    }
    if (this->ay_mps2 != other.ay_mps2) {
      return false;
    }
    if (this->az_mps2 != other.az_mps2) {
      return false;
    }
    if (this->valid_imu_b != other.valid_imu_b) {
      return false;
    }
    if (this->yaw_vel_rad != other.yaw_vel_rad) {
      return false;
    }
    if (this->kappa_radpm != other.kappa_radpm) {
      return false;
    }
    if (this->dbeta_radps != other.dbeta_radps) {
      return false;
    }
    if (this->ddyaw_radps2 != other.ddyaw_radps2) {
      return false;
    }
    if (this->ax_vel_mps2 != other.ax_vel_mps2) {
      return false;
    }
    if (this->ay_vel_mps2 != other.ay_vel_mps2) {
      return false;
    }
    if (this->lambda_fl_perc != other.lambda_fl_perc) {
      return false;
    }
    if (this->lambda_fr_perc != other.lambda_fr_perc) {
      return false;
    }
    if (this->lambda_rl_perc != other.lambda_rl_perc) {
      return false;
    }
    if (this->lambda_rr_perc != other.lambda_rr_perc) {
      return false;
    }
    if (this->valid_wheelsspeeds_b != other.valid_wheelsspeeds_b) {
      return false;
    }
    if (this->alpha_fl_rad != other.alpha_fl_rad) {
      return false;
    }
    if (this->alpha_fr_rad != other.alpha_fr_rad) {
      return false;
    }
    if (this->alpha_rl_rad != other.alpha_rl_rad) {
      return false;
    }
    if (this->alpha_rr_rad != other.alpha_rr_rad) {
      return false;
    }
    if (this->diff_fr_alpha_rad != other.diff_fr_alpha_rad) {
      return false;
    }
    if (this->delta_wheel_rad != other.delta_wheel_rad) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->gas != other.gas) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->clutch != other.clutch) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->front_brake_pressure != other.front_brake_pressure) {
      return false;
    }
    if (this->rear_brake_pressure != other.rear_brake_pressure) {
      return false;
    }
    if (this->vehicle_timestamp != other.vehicle_timestamp) {
      return false;
    }
    if (this->residuals_status != other.residuals_status) {
      return false;
    }
    if (this->std_dev_status != other.std_dev_status) {
      return false;
    }
    if (this->is_safe != other.is_safe) {
      return false;
    }
    if (this->cba_actual_pressure_fl_pa != other.cba_actual_pressure_fl_pa) {
      return false;
    }
    if (this->cba_actual_pressure_fr_pa != other.cba_actual_pressure_fr_pa) {
      return false;
    }
    if (this->cba_actual_pressure_rl_pa != other.cba_actual_pressure_rl_pa) {
      return false;
    }
    if (this->cba_actual_pressure_rr_pa != other.cba_actual_pressure_rr_pa) {
      return false;
    }
    if (this->sn_map_state != other.sn_map_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateEstimation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateEstimation_

// alias to use template instance with default allocator
using StateEstimation =
  sd_localization_msgs::msg::StateEstimation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_localization_msgs

#endif  // SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_HPP_
