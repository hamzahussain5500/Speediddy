#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sd_localization_msgs__msg__StateEstimation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateEstimation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    pub sn_map_state: sd_map_msgs::msg::SnMapState,

}



impl Default for StateEstimation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StateEstimation::default())
  }
}

impl rosidl_runtime_rs::Message for StateEstimation {
  type RmwMsg = super::msg::rmw::StateEstimation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        se_status: msg.se_status,
        se_state: msg.se_state,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
        roll_rad: msg.roll_rad,
        pitch_rad: msg.pitch_rad,
        yaw_rad: msg.yaw_rad,
        pos_accuracy: msg.pos_accuracy,
        vel_accuracy: msg.vel_accuracy,
        wx_radps: msg.wx_radps,
        wy_radps: msg.wy_radps,
        wz_radps: msg.wz_radps,
        vx_mps: msg.vx_mps,
        vy_mps: msg.vy_mps,
        vz_mps: msg.vz_mps,
        omega_w_fl: msg.omega_w_fl,
        omega_w_fr: msg.omega_w_fr,
        omega_w_rl: msg.omega_w_rl,
        omega_w_rr: msg.omega_w_rr,
        v_mps: msg.v_mps,
        v_raw_mps: msg.v_raw_mps,
        beta_rad: msg.beta_rad,
        ax_mps2: msg.ax_mps2,
        ay_mps2: msg.ay_mps2,
        az_mps2: msg.az_mps2,
        valid_imu_b: msg.valid_imu_b,
        yaw_vel_rad: msg.yaw_vel_rad,
        kappa_radpm: msg.kappa_radpm,
        dbeta_radps: msg.dbeta_radps,
        ddyaw_radps2: msg.ddyaw_radps2,
        ax_vel_mps2: msg.ax_vel_mps2,
        ay_vel_mps2: msg.ay_vel_mps2,
        lambda_fl_perc: msg.lambda_fl_perc,
        lambda_fr_perc: msg.lambda_fr_perc,
        lambda_rl_perc: msg.lambda_rl_perc,
        lambda_rr_perc: msg.lambda_rr_perc,
        valid_wheelsspeeds_b: msg.valid_wheelsspeeds_b,
        alpha_fl_rad: msg.alpha_fl_rad,
        alpha_fr_rad: msg.alpha_fr_rad,
        alpha_rl_rad: msg.alpha_rl_rad,
        alpha_rr_rad: msg.alpha_rr_rad,
        diff_fr_alpha_rad: msg.diff_fr_alpha_rad,
        delta_wheel_rad: msg.delta_wheel_rad,
        timestamp: msg.timestamp,
        gas: msg.gas,
        brake: msg.brake,
        clutch: msg.clutch,
        gear: msg.gear,
        rpm: msg.rpm,
        front_brake_pressure: msg.front_brake_pressure,
        rear_brake_pressure: msg.rear_brake_pressure,
        vehicle_timestamp: msg.vehicle_timestamp,
        residuals_status: msg.residuals_status,
        std_dev_status: msg.std_dev_status,
        is_safe: msg.is_safe,
        cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
        cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
        cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
        cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
        sn_map_state: sd_map_msgs::msg::SnMapState::into_rmw_message(std::borrow::Cow::Owned(msg.sn_map_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      se_status: msg.se_status,
      se_state: msg.se_state,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      roll_rad: msg.roll_rad,
      pitch_rad: msg.pitch_rad,
      yaw_rad: msg.yaw_rad,
        pos_accuracy: msg.pos_accuracy,
        vel_accuracy: msg.vel_accuracy,
      wx_radps: msg.wx_radps,
      wy_radps: msg.wy_radps,
      wz_radps: msg.wz_radps,
      vx_mps: msg.vx_mps,
      vy_mps: msg.vy_mps,
      vz_mps: msg.vz_mps,
      omega_w_fl: msg.omega_w_fl,
      omega_w_fr: msg.omega_w_fr,
      omega_w_rl: msg.omega_w_rl,
      omega_w_rr: msg.omega_w_rr,
      v_mps: msg.v_mps,
      v_raw_mps: msg.v_raw_mps,
      beta_rad: msg.beta_rad,
      ax_mps2: msg.ax_mps2,
      ay_mps2: msg.ay_mps2,
      az_mps2: msg.az_mps2,
      valid_imu_b: msg.valid_imu_b,
      yaw_vel_rad: msg.yaw_vel_rad,
      kappa_radpm: msg.kappa_radpm,
      dbeta_radps: msg.dbeta_radps,
      ddyaw_radps2: msg.ddyaw_radps2,
      ax_vel_mps2: msg.ax_vel_mps2,
      ay_vel_mps2: msg.ay_vel_mps2,
      lambda_fl_perc: msg.lambda_fl_perc,
      lambda_fr_perc: msg.lambda_fr_perc,
      lambda_rl_perc: msg.lambda_rl_perc,
      lambda_rr_perc: msg.lambda_rr_perc,
      valid_wheelsspeeds_b: msg.valid_wheelsspeeds_b,
      alpha_fl_rad: msg.alpha_fl_rad,
      alpha_fr_rad: msg.alpha_fr_rad,
      alpha_rl_rad: msg.alpha_rl_rad,
      alpha_rr_rad: msg.alpha_rr_rad,
      diff_fr_alpha_rad: msg.diff_fr_alpha_rad,
      delta_wheel_rad: msg.delta_wheel_rad,
      timestamp: msg.timestamp,
      gas: msg.gas,
      brake: msg.brake,
      clutch: msg.clutch,
      gear: msg.gear,
      rpm: msg.rpm,
      front_brake_pressure: msg.front_brake_pressure,
      rear_brake_pressure: msg.rear_brake_pressure,
      vehicle_timestamp: msg.vehicle_timestamp,
      residuals_status: msg.residuals_status,
      std_dev_status: msg.std_dev_status,
      is_safe: msg.is_safe,
      cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
      cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
      cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
      cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
        sn_map_state: sd_map_msgs::msg::SnMapState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sn_map_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      se_status: msg.se_status,
      se_state: msg.se_state,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      roll_rad: msg.roll_rad,
      pitch_rad: msg.pitch_rad,
      yaw_rad: msg.yaw_rad,
      pos_accuracy: msg.pos_accuracy,
      vel_accuracy: msg.vel_accuracy,
      wx_radps: msg.wx_radps,
      wy_radps: msg.wy_radps,
      wz_radps: msg.wz_radps,
      vx_mps: msg.vx_mps,
      vy_mps: msg.vy_mps,
      vz_mps: msg.vz_mps,
      omega_w_fl: msg.omega_w_fl,
      omega_w_fr: msg.omega_w_fr,
      omega_w_rl: msg.omega_w_rl,
      omega_w_rr: msg.omega_w_rr,
      v_mps: msg.v_mps,
      v_raw_mps: msg.v_raw_mps,
      beta_rad: msg.beta_rad,
      ax_mps2: msg.ax_mps2,
      ay_mps2: msg.ay_mps2,
      az_mps2: msg.az_mps2,
      valid_imu_b: msg.valid_imu_b,
      yaw_vel_rad: msg.yaw_vel_rad,
      kappa_radpm: msg.kappa_radpm,
      dbeta_radps: msg.dbeta_radps,
      ddyaw_radps2: msg.ddyaw_radps2,
      ax_vel_mps2: msg.ax_vel_mps2,
      ay_vel_mps2: msg.ay_vel_mps2,
      lambda_fl_perc: msg.lambda_fl_perc,
      lambda_fr_perc: msg.lambda_fr_perc,
      lambda_rl_perc: msg.lambda_rl_perc,
      lambda_rr_perc: msg.lambda_rr_perc,
      valid_wheelsspeeds_b: msg.valid_wheelsspeeds_b,
      alpha_fl_rad: msg.alpha_fl_rad,
      alpha_fr_rad: msg.alpha_fr_rad,
      alpha_rl_rad: msg.alpha_rl_rad,
      alpha_rr_rad: msg.alpha_rr_rad,
      diff_fr_alpha_rad: msg.diff_fr_alpha_rad,
      delta_wheel_rad: msg.delta_wheel_rad,
      timestamp: msg.timestamp,
      gas: msg.gas,
      brake: msg.brake,
      clutch: msg.clutch,
      gear: msg.gear,
      rpm: msg.rpm,
      front_brake_pressure: msg.front_brake_pressure,
      rear_brake_pressure: msg.rear_brake_pressure,
      vehicle_timestamp: msg.vehicle_timestamp,
      residuals_status: msg.residuals_status,
      std_dev_status: msg.std_dev_status,
      is_safe: msg.is_safe,
      cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
      cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
      cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
      cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
      sn_map_state: sd_map_msgs::msg::SnMapState::from_rmw_message(msg.sn_map_state),
    }
  }
}


