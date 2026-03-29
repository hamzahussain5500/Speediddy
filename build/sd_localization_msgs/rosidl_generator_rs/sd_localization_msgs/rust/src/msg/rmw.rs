#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sd_localization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_localization_msgs__msg__StateEstimation() -> *const std::ffi::c_void;
}

#[link(name = "sd_localization_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_localization_msgs__msg__StateEstimation__init(msg: *mut StateEstimation) -> bool;
    fn sd_localization_msgs__msg__StateEstimation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateEstimation>, size: usize) -> bool;
    fn sd_localization_msgs__msg__StateEstimation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateEstimation>);
    fn sd_localization_msgs__msg__StateEstimation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateEstimation>, out_seq: *mut rosidl_runtime_rs::Sequence<StateEstimation>) -> bool;
}

// Corresponds to sd_localization_msgs__msg__StateEstimation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateEstimation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub se_status: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub se_state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_accuracy: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_accuracy: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub wx_radps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wy_radps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wz_radps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub omega_w_fl: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub omega_w_fr: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub omega_w_rl: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub omega_w_rr: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v_raw_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beta_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ax_mps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay_mps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub az_mps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid_imu_b: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_vel_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kappa_radpm: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dbeta_radps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddyaw_radps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ax_vel_mps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay_vel_mps2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lambda_fl_perc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lambda_fr_perc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lambda_rl_perc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lambda_rr_perc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid_wheelsspeeds_b: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alpha_fl_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alpha_fr_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alpha_rl_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alpha_rr_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub diff_fr_alpha_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_wheel_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gas: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clutch: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gear: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpm: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_brake_pressure: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_brake_pressure: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_timestamp: f64,

    /// depricated
    pub residuals_status: bool,

    /// depricated
    pub std_dev_status: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_safe: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_actual_pressure_fl_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_actual_pressure_fr_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_actual_pressure_rl_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_actual_pressure_rr_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sn_map_state: sd_map_msgs::msg::rmw::SnMapState,

}



impl Default for StateEstimation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_localization_msgs__msg__StateEstimation__init(&mut msg as *mut _) {
        panic!("Call to sd_localization_msgs__msg__StateEstimation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateEstimation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_localization_msgs__msg__StateEstimation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_localization_msgs__msg__StateEstimation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_localization_msgs__msg__StateEstimation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateEstimation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateEstimation where Self: Sized {
  const TYPE_NAME: &'static str = "sd_localization_msgs/msg/StateEstimation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_localization_msgs__msg__StateEstimation() }
  }
}


