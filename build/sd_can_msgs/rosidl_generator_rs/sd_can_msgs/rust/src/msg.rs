#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sd_can_msgs__msg__BSURanges01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSURanges01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..1 (0..100000 Pa)
    pub cba_min_pressure_fl_pa: f64,

    /// Range: 0..30 (5000000..20000000 Pa)
    pub cba_max_pressure_fl_pa: f64,

    /// Range: 0..1 (0..100000 Pa)
    pub cba_min_pressure_fr_pa: f64,

    /// Range: 0..30 (5000000..20000000 Pa)
    pub cba_max_pressure_fr_pa: f64,

    /// Range: 0..1 (0..100000 Pa)
    pub cba_min_pressure_rl_pa: f64,

    /// Range: 0..30 (5000000..20000000 Pa)
    pub cba_max_pressure_rl_pa: f64,

    /// Range: 0..1 (0..100000 Pa)
    pub cba_min_pressure_rr_pa: f64,

    /// Range: 0..30 (5000000..20000000 Pa)
    pub cba_max_pressure_rr_pa: f64,

    /// Range: 0..100 (0..100 %)
    pub ice_max_throttle: f64,

    /// Range: 0..100 (0..100 %)
    pub ice_min_throttle: f64,

}



impl Default for BSURanges01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BSURanges01::default())
  }
}

impl rosidl_runtime_rs::Message for BSURanges01 {
  type RmwMsg = super::msg::rmw::BSURanges01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_min_pressure_fl_pa: msg.cba_min_pressure_fl_pa,
        cba_max_pressure_fl_pa: msg.cba_max_pressure_fl_pa,
        cba_min_pressure_fr_pa: msg.cba_min_pressure_fr_pa,
        cba_max_pressure_fr_pa: msg.cba_max_pressure_fr_pa,
        cba_min_pressure_rl_pa: msg.cba_min_pressure_rl_pa,
        cba_max_pressure_rl_pa: msg.cba_max_pressure_rl_pa,
        cba_min_pressure_rr_pa: msg.cba_min_pressure_rr_pa,
        cba_max_pressure_rr_pa: msg.cba_max_pressure_rr_pa,
        ice_max_throttle: msg.ice_max_throttle,
        ice_min_throttle: msg.ice_min_throttle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_min_pressure_fl_pa: msg.cba_min_pressure_fl_pa,
      cba_max_pressure_fl_pa: msg.cba_max_pressure_fl_pa,
      cba_min_pressure_fr_pa: msg.cba_min_pressure_fr_pa,
      cba_max_pressure_fr_pa: msg.cba_max_pressure_fr_pa,
      cba_min_pressure_rl_pa: msg.cba_min_pressure_rl_pa,
      cba_max_pressure_rl_pa: msg.cba_max_pressure_rl_pa,
      cba_min_pressure_rr_pa: msg.cba_min_pressure_rr_pa,
      cba_max_pressure_rr_pa: msg.cba_max_pressure_rr_pa,
      ice_max_throttle: msg.ice_max_throttle,
      ice_min_throttle: msg.ice_min_throttle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_min_pressure_fl_pa: msg.cba_min_pressure_fl_pa,
      cba_max_pressure_fl_pa: msg.cba_max_pressure_fl_pa,
      cba_min_pressure_fr_pa: msg.cba_min_pressure_fr_pa,
      cba_max_pressure_fr_pa: msg.cba_max_pressure_fr_pa,
      cba_min_pressure_rl_pa: msg.cba_min_pressure_rl_pa,
      cba_max_pressure_rl_pa: msg.cba_max_pressure_rl_pa,
      cba_min_pressure_rr_pa: msg.cba_min_pressure_rr_pa,
      cba_max_pressure_rr_pa: msg.cba_max_pressure_rr_pa,
      ice_max_throttle: msg.ice_max_throttle,
      ice_min_throttle: msg.ice_min_throttle,
    }
  }
}


// Corresponds to sd_can_msgs__msg__BSURanges02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSURanges02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_min_angle_rad: f64,

    /// Range: 0..255 (0..25.5 rad)
    pub psa_max_angle_rad: f64,

    /// Range: 0..255 (-255..0 rad_s)
    pub psa_min_angle_speed_rad_s: f64,

    /// Range: 0..255 (0..255 rad_s)
    pub psa_max_angle_speed_rad_s: f64,

    /// Range: 0..1976 (-19760..0 mNm)
    pub psa_min_torque_m_nm: f64,

    /// Range: 0..1976 (0..19760 mNm)
    pub psa_max_torque_m_nm: f64,

}



impl Default for BSURanges02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BSURanges02::default())
  }
}

impl rosidl_runtime_rs::Message for BSURanges02 {
  type RmwMsg = super::msg::rmw::BSURanges02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        psa_min_angle_rad: msg.psa_min_angle_rad,
        psa_max_angle_rad: msg.psa_max_angle_rad,
        psa_min_angle_speed_rad_s: msg.psa_min_angle_speed_rad_s,
        psa_max_angle_speed_rad_s: msg.psa_max_angle_speed_rad_s,
        psa_min_torque_m_nm: msg.psa_min_torque_m_nm,
        psa_max_torque_m_nm: msg.psa_max_torque_m_nm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      psa_min_angle_rad: msg.psa_min_angle_rad,
      psa_max_angle_rad: msg.psa_max_angle_rad,
      psa_min_angle_speed_rad_s: msg.psa_min_angle_speed_rad_s,
      psa_max_angle_speed_rad_s: msg.psa_max_angle_speed_rad_s,
      psa_min_torque_m_nm: msg.psa_min_torque_m_nm,
      psa_max_torque_m_nm: msg.psa_max_torque_m_nm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      psa_min_angle_rad: msg.psa_min_angle_rad,
      psa_max_angle_rad: msg.psa_max_angle_rad,
      psa_min_angle_speed_rad_s: msg.psa_min_angle_speed_rad_s,
      psa_max_angle_speed_rad_s: msg.psa_max_angle_speed_rad_s,
      psa_min_torque_m_nm: msg.psa_min_torque_m_nm,
      psa_max_torque_m_nm: msg.psa_max_torque_m_nm,
    }
  }
}


// Corresponds to sd_can_msgs__msg__BSUStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// BSU Status Information
    /// BSU Limp Mode Activated (0..1) - enum
    pub bsu_limp_mode_activated: u8,

    /// BSU Switch Off Request (0..1)
    pub bsu_switch_off_req: u8,

    /// ABS External Enable Acknowledgment (0..1)
    pub abs_external_enable_ack: u8,

    /// BSU ML Stop Activated (0..3) - 2 bits
    pub bsu_ml_stop_activated: u8,

    /// BSU EM Stop Activated (0..1) - enum
    pub bsu_em_stop_activated: u8,

    /// BSU Alive Counter (0..15) - 4 bits
    pub bsu_alive_counter: u8,

    /// BSU HL Warning (0..1) - bool
    pub bsu_hl_warning: u8,

    /// BSU HL Stop Request (0..1) - bool
    pub bsu_hl_stop_request: u8,

    /// BSU Status (0..1023) - 10 bits
    pub bsu_status: u16,

}

impl BSUStatus01 {
    /// Constants
    pub const BSU_HL_STOP_REQUEST_FALSE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_HL_STOP_REQUEST_TRUE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_ML_STOP_ACTIVATED_LEVEL0: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_ML_STOP_ACTIVATED_LEVEL1: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_ML_STOP_ACTIVATED_LEVEL2: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_ML_STOP_ACTIVATED_LEVEL3: u8 = 3;

}


impl Default for BSUStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BSUStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01 {
  type RmwMsg = super::msg::rmw::BSUStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
        bsu_switch_off_req: msg.bsu_switch_off_req,
        abs_external_enable_ack: msg.abs_external_enable_ack,
        bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
        bsu_em_stop_activated: msg.bsu_em_stop_activated,
        bsu_alive_counter: msg.bsu_alive_counter,
        bsu_hl_warning: msg.bsu_hl_warning,
        bsu_hl_stop_request: msg.bsu_hl_stop_request,
        bsu_status: msg.bsu_status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
      bsu_switch_off_req: msg.bsu_switch_off_req,
      abs_external_enable_ack: msg.abs_external_enable_ack,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_status: msg.bsu_status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
      bsu_switch_off_req: msg.bsu_switch_off_req,
      abs_external_enable_ack: msg.abs_external_enable_ack,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_status: msg.bsu_status,
    }
  }
}


// Corresponds to sd_can_msgs__msg__BSUStatus01Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..1 (0..1 bool)
    pub bsu_hl_stop_request: u8,

    /// Range: 0.1 (0..1 bool)
    pub bsu_hl_warning: u8,

    /// Range: 0..1 (0..1 enum)
    pub bsu_em_stop_activated: u8,

    /// Range: 0..1 (0..1 enum)
    pub bsu_ml_stop_activated: u8,

    /// Range: 0..15 (0..15 uint)
    pub bsu_alive_counter: u8,

    /// Range: 0..1023 (0..1023 uint)
    pub bsu_status: u16,

    /// Range: 0..1 (0..1 -)
    pub abs_external_enable_ack: u8,

}

impl BSUStatus01Legacy {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_HL_STOP_REQUEST_FALSE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_HL_STOP_REQUEST_TRUE: u8 = 1;

}


impl Default for BSUStatus01Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BSUStatus01Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01Legacy {
  type RmwMsg = super::msg::rmw::BSUStatus01Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_hl_stop_request: msg.bsu_hl_stop_request,
        bsu_hl_warning: msg.bsu_hl_warning,
        bsu_em_stop_activated: msg.bsu_em_stop_activated,
        bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
        bsu_alive_counter: msg.bsu_alive_counter,
        bsu_status: msg.bsu_status,
        abs_external_enable_ack: msg.abs_external_enable_ack,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_status: msg.bsu_status,
      abs_external_enable_ack: msg.abs_external_enable_ack,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_status: msg.bsu_status,
      abs_external_enable_ack: msg.abs_external_enable_ack,
    }
  }
}


// Corresponds to sd_can_msgs__msg__BSUStatus01Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// BSU Status Information
    /// BSU Switch Off Request (0..1)
    pub bsu_switch_off_req: u8,

    /// BSU Limp Mode Activated (0..1)
    pub bsu_limp_mode_activated: u8,

    /// BSU HL Stop Request (0..1)
    pub bsu_hl_stop_request: u8,

    /// BSU HL Warning (0..1)
    pub bsu_hl_warning: u8,

    /// BSU EM Stop Activated (0..1)
    pub bsu_em_stop_activated: u8,

    /// BSU ML Stop Activated (0..1)
    pub bsu_ml_stop_activated: u8,

    /// BSU Alive Counter (0..15)
    pub bsu_alive_counter: u8,

    /// BSU Status (0..1023)
    pub bsu_status: u16,

    /// ABS External Enable Acknowledgment (0..1)
    pub abs_external_enable_ack: u8,

}

impl BSUStatus01Updated {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_HL_STOP_REQUEST_FALSE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BSU_HL_STOP_REQUEST_TRUE: u8 = 1;

}


impl Default for BSUStatus01Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BSUStatus01Updated::default())
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01Updated {
  type RmwMsg = super::msg::rmw::BSUStatus01Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_switch_off_req: msg.bsu_switch_off_req,
        bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
        bsu_hl_stop_request: msg.bsu_hl_stop_request,
        bsu_hl_warning: msg.bsu_hl_warning,
        bsu_em_stop_activated: msg.bsu_em_stop_activated,
        bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
        bsu_alive_counter: msg.bsu_alive_counter,
        bsu_status: msg.bsu_status,
        abs_external_enable_ack: msg.abs_external_enable_ack,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_switch_off_req: msg.bsu_switch_off_req,
      bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_status: msg.bsu_status,
      abs_external_enable_ack: msg.abs_external_enable_ack,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_switch_off_req: msg.bsu_switch_off_req,
      bsu_limp_mode_activated: msg.bsu_limp_mode_activated,
      bsu_hl_stop_request: msg.bsu_hl_stop_request,
      bsu_hl_warning: msg.bsu_hl_warning,
      bsu_em_stop_activated: msg.bsu_em_stop_activated,
      bsu_ml_stop_activated: msg.bsu_ml_stop_activated,
      bsu_alive_counter: msg.bsu_alive_counter,
      bsu_status: msg.bsu_status,
      abs_external_enable_ack: msg.abs_external_enable_ack,
    }
  }
}


// Corresponds to sd_can_msgs__msg__CbaStatusFl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusFl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..4095 (0..40950000 Pa), Scale: 10000, Offset: 0
    pub cba_actual_pressure_fl_pa: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_actual_pressure_fl: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_target_pressure_fl_ack: f64,

    /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
    pub cba_actual_current_fl_a: f64,

    /// Range: 0..255 (0..102 V), Scale: 0.4, Offset: 0
    pub cba_voltage_fl_v: f64,

}



impl Default for CbaStatusFl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CbaStatusFl::default())
  }
}

impl rosidl_runtime_rs::Message for CbaStatusFl {
  type RmwMsg = super::msg::rmw::CbaStatusFl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
        cba_actual_pressure_fl: msg.cba_actual_pressure_fl,
        cba_target_pressure_fl_ack: msg.cba_target_pressure_fl_ack,
        cba_actual_current_fl_a: msg.cba_actual_current_fl_a,
        cba_voltage_fl_v: msg.cba_voltage_fl_v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
      cba_actual_pressure_fl: msg.cba_actual_pressure_fl,
      cba_target_pressure_fl_ack: msg.cba_target_pressure_fl_ack,
      cba_actual_current_fl_a: msg.cba_actual_current_fl_a,
      cba_voltage_fl_v: msg.cba_voltage_fl_v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_actual_pressure_fl_pa: msg.cba_actual_pressure_fl_pa,
      cba_actual_pressure_fl: msg.cba_actual_pressure_fl,
      cba_target_pressure_fl_ack: msg.cba_target_pressure_fl_ack,
      cba_actual_current_fl_a: msg.cba_actual_current_fl_a,
      cba_voltage_fl_v: msg.cba_voltage_fl_v,
    }
  }
}


// Corresponds to sd_can_msgs__msg__CbaStatusFr

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusFr {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..4095 (0..40950000 Pa), Scale: 10000, Offset: 0
    pub cba_actual_pressure_fr_pa: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_actual_pressure_fr: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_target_pressure_fr_ack: f64,

    /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
    pub cba_actual_current_fr_a: f64,

    /// Range: 0..255 (0..102 V), Scale: 0.4, Offset: 0
    pub cba_voltage_fr_v: f64,

}



impl Default for CbaStatusFr {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CbaStatusFr::default())
  }
}

impl rosidl_runtime_rs::Message for CbaStatusFr {
  type RmwMsg = super::msg::rmw::CbaStatusFr;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
        cba_actual_pressure_fr: msg.cba_actual_pressure_fr,
        cba_target_pressure_fr_ack: msg.cba_target_pressure_fr_ack,
        cba_actual_current_fr_a: msg.cba_actual_current_fr_a,
        cba_voltage_fr_v: msg.cba_voltage_fr_v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
      cba_actual_pressure_fr: msg.cba_actual_pressure_fr,
      cba_target_pressure_fr_ack: msg.cba_target_pressure_fr_ack,
      cba_actual_current_fr_a: msg.cba_actual_current_fr_a,
      cba_voltage_fr_v: msg.cba_voltage_fr_v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_actual_pressure_fr_pa: msg.cba_actual_pressure_fr_pa,
      cba_actual_pressure_fr: msg.cba_actual_pressure_fr,
      cba_target_pressure_fr_ack: msg.cba_target_pressure_fr_ack,
      cba_actual_current_fr_a: msg.cba_actual_current_fr_a,
      cba_voltage_fr_v: msg.cba_voltage_fr_v,
    }
  }
}


// Corresponds to sd_can_msgs__msg__CbaStatusRl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusRl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..4095 (0..40950000 Pa), Scale: 10000, Offset: 0
    pub cba_actual_pressure_rl_pa: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_actual_pressure_rl: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_target_pressure_rl_ack: f64,

    /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
    pub cba_actual_current_rl_a: f64,

    /// Range: 0..255 (0..102 V), Scale: 0.4, Offset: 0
    pub cba_voltage_rl_v: f64,

}



impl Default for CbaStatusRl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CbaStatusRl::default())
  }
}

impl rosidl_runtime_rs::Message for CbaStatusRl {
  type RmwMsg = super::msg::rmw::CbaStatusRl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
        cba_actual_pressure_rl: msg.cba_actual_pressure_rl,
        cba_target_pressure_rl_ack: msg.cba_target_pressure_rl_ack,
        cba_actual_current_rl_a: msg.cba_actual_current_rl_a,
        cba_voltage_rl_v: msg.cba_voltage_rl_v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
      cba_actual_pressure_rl: msg.cba_actual_pressure_rl,
      cba_target_pressure_rl_ack: msg.cba_target_pressure_rl_ack,
      cba_actual_current_rl_a: msg.cba_actual_current_rl_a,
      cba_voltage_rl_v: msg.cba_voltage_rl_v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_actual_pressure_rl_pa: msg.cba_actual_pressure_rl_pa,
      cba_actual_pressure_rl: msg.cba_actual_pressure_rl,
      cba_target_pressure_rl_ack: msg.cba_target_pressure_rl_ack,
      cba_actual_current_rl_a: msg.cba_actual_current_rl_a,
      cba_voltage_rl_v: msg.cba_voltage_rl_v,
    }
  }
}


// Corresponds to sd_can_msgs__msg__CbaStatusRr

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusRr {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..4095 (0..40950000 Pa), Scale: 10000, Offset: 0
    pub cba_actual_pressure_rr_pa: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_actual_pressure_rr: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub cba_target_pressure_rr_ack: f64,

    /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
    pub cba_actual_current_rr_a: f64,

    /// Range: 0..255 (0..102 V), Scale: 0.4, Offset: 0
    pub cba_voltage_rr_v: f64,

}



impl Default for CbaStatusRr {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CbaStatusRr::default())
  }
}

impl rosidl_runtime_rs::Message for CbaStatusRr {
  type RmwMsg = super::msg::rmw::CbaStatusRr;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
        cba_actual_pressure_rr: msg.cba_actual_pressure_rr,
        cba_target_pressure_rr_ack: msg.cba_target_pressure_rr_ack,
        cba_actual_current_rr_a: msg.cba_actual_current_rr_a,
        cba_voltage_rr_v: msg.cba_voltage_rr_v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
      cba_actual_pressure_rr: msg.cba_actual_pressure_rr,
      cba_target_pressure_rr_ack: msg.cba_target_pressure_rr_ack,
      cba_actual_current_rr_a: msg.cba_actual_current_rr_a,
      cba_voltage_rr_v: msg.cba_voltage_rr_v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_actual_pressure_rr_pa: msg.cba_actual_pressure_rr_pa,
      cba_actual_pressure_rr: msg.cba_actual_pressure_rr,
      cba_target_pressure_rr_ack: msg.cba_target_pressure_rr_ack,
      cba_actual_current_rr_a: msg.cba_actual_current_rr_a,
      cba_voltage_rr_v: msg.cba_voltage_rr_v,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ecu_timeout_em_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbafl_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_low_oil_temp_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_engine_off_rejected: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_pdu12_v_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_fueling_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_oil_heater_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_starting_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_aps_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbafr_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temp_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu48_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu48_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbarl_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbarr_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub em_stop_conditions_active: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ml_stop_conditions_active: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc4812_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_override_wrong_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bsu_wrong_init_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_boost_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_active_anti_fire: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_sensor_failure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_target_gear_not_reached_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_volume_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_timeout_error: u8,

    /// ========== NEW v3 DIAGNOSTIC SIGNAL ==========
    /// PSA System Enhancement (ONLY new signal in DiagnosticWord_01 v3)
    /// PSA Steering Slip Warning (0..1) - New in v3
    pub psa_steer_slip_warning: u8,

    /// ===============================================
    /// Fields from the legacy message
    pub ice_error_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_line_press_over_max_start_limit_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu1_counter_error_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu1_timeout_error_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu2_counter_error_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu2_timeout_error_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub em_piston_hall_not_ready_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level1_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level2_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level3_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_min_start_limit_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_over_rpm_warning_legacy: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_diagnostic_spare_legacy: u8,

}



impl Default for DiagnosticWord01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord01::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01 {
  type RmwMsg = super::msg::rmw::DiagnosticWord01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bms_starting_faild: msg.bms_starting_faild,
        bms_timeout_error: msg.bms_timeout_error,
        cba_fl_counter_error: msg.cba_fl_counter_error,
        cba_fl_derating: msg.cba_fl_derating,
        cba_fl_error: msg.cba_fl_error,
        cba_fl_timeout_error: msg.cba_fl_timeout_error,
        cba_fr_counter_error: msg.cba_fr_counter_error,
        cba_fr_derating: msg.cba_fr_derating,
        cba_fr_error: msg.cba_fr_error,
        cba_fr_timeout_error: msg.cba_fr_timeout_error,
        cba_rl_counter_error: msg.cba_rl_counter_error,
        cba_rl_derating: msg.cba_rl_derating,
        cba_rl_error: msg.cba_rl_error,
        cba_rl_timeout_error: msg.cba_rl_timeout_error,
        cba_rr_counter_error: msg.cba_rr_counter_error,
        cba_rr_derating: msg.cba_rr_derating,
        cba_rr_error: msg.cba_rr_error,
        cba_rr_timeout_error: msg.cba_rr_timeout_error,
        dcdc_starting_faild: msg.dcdc_starting_faild,
        dcdc_timeout_error: msg.dcdc_timeout_error,
        ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
        dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
        ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
        ice_engine_off_rejected: msg.ice_engine_off_rejected,
        dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
        ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
        ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
        ice_starting_starting_failed: msg.ice_starting_starting_failed,
        ice_aps_warning: msg.ice_aps_warning,
        hl_counter_error: msg.hl_counter_error,
        hl_timeout_error: msg.hl_timeout_error,
        ice_counter_error: msg.ice_counter_error,
        ice_timeout_error: msg.ice_timeout_error,
        dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
        ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
        pdu12_counter_error: msg.pdu12_counter_error,
        pdu12_timeout_error: msg.pdu12_timeout_error,
        pdu48_counter_error: msg.pdu48_counter_error,
        pdu48_timeout_error: msg.pdu48_timeout_error,
        dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
        psa_counter_error: msg.psa_counter_error,
        psa_derating: msg.psa_derating,
        psa_error: msg.psa_error,
        psa_timeout_error: msg.psa_timeout_error,
        dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
        em_stop_conditions_active: msg.em_stop_conditions_active,
        ml_stop_conditions_active: msg.ml_stop_conditions_active,
        dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
        ice_override_wrong_config: msg.ice_override_wrong_config,
        bsu_wrong_init_config: msg.bsu_wrong_init_config,
        ice_boost_warning: msg.ice_boost_warning,
        ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
        ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
        ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
        ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
        ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
        ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
        pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
        ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
        ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
        ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
        rm_counter_error: msg.rm_counter_error,
        rm_timeout_error: msg.rm_timeout_error,
        psa_steer_slip_warning: msg.psa_steer_slip_warning,
        ice_error_legacy: msg.ice_error_legacy,
        emb_line_press_over_max_start_limit_legacy: msg.emb_line_press_over_max_start_limit_legacy,
        pdu1_counter_error_legacy: msg.pdu1_counter_error_legacy,
        pdu1_timeout_error_legacy: msg.pdu1_timeout_error_legacy,
        pdu2_counter_error_legacy: msg.pdu2_counter_error_legacy,
        pdu2_timeout_error_legacy: msg.pdu2_timeout_error_legacy,
        em_piston_hall_not_ready_legacy: msg.em_piston_hall_not_ready_legacy,
        emb_tank_press_under_level1_legacy: msg.emb_tank_press_under_level1_legacy,
        emb_tank_press_under_level2_legacy: msg.emb_tank_press_under_level2_legacy,
        emb_tank_press_under_level3_legacy: msg.emb_tank_press_under_level3_legacy,
        emb_tank_press_under_min_start_limit_legacy: msg.emb_tank_press_under_min_start_limit_legacy,
        ice_over_rpm_warning_legacy: msg.ice_over_rpm_warning_legacy,
        ice_diagnostic_spare_legacy: msg.ice_diagnostic_spare_legacy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
      dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu12_counter_error: msg.pdu12_counter_error,
      pdu12_timeout_error: msg.pdu12_timeout_error,
      pdu48_counter_error: msg.pdu48_counter_error,
      pdu48_timeout_error: msg.pdu48_timeout_error,
      dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
      em_stop_conditions_active: msg.em_stop_conditions_active,
      ml_stop_conditions_active: msg.ml_stop_conditions_active,
      dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
      psa_steer_slip_warning: msg.psa_steer_slip_warning,
      ice_error_legacy: msg.ice_error_legacy,
      emb_line_press_over_max_start_limit_legacy: msg.emb_line_press_over_max_start_limit_legacy,
      pdu1_counter_error_legacy: msg.pdu1_counter_error_legacy,
      pdu1_timeout_error_legacy: msg.pdu1_timeout_error_legacy,
      pdu2_counter_error_legacy: msg.pdu2_counter_error_legacy,
      pdu2_timeout_error_legacy: msg.pdu2_timeout_error_legacy,
      em_piston_hall_not_ready_legacy: msg.em_piston_hall_not_ready_legacy,
      emb_tank_press_under_level1_legacy: msg.emb_tank_press_under_level1_legacy,
      emb_tank_press_under_level2_legacy: msg.emb_tank_press_under_level2_legacy,
      emb_tank_press_under_level3_legacy: msg.emb_tank_press_under_level3_legacy,
      emb_tank_press_under_min_start_limit_legacy: msg.emb_tank_press_under_min_start_limit_legacy,
      ice_over_rpm_warning_legacy: msg.ice_over_rpm_warning_legacy,
      ice_diagnostic_spare_legacy: msg.ice_diagnostic_spare_legacy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
      dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu12_counter_error: msg.pdu12_counter_error,
      pdu12_timeout_error: msg.pdu12_timeout_error,
      pdu48_counter_error: msg.pdu48_counter_error,
      pdu48_timeout_error: msg.pdu48_timeout_error,
      dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
      em_stop_conditions_active: msg.em_stop_conditions_active,
      ml_stop_conditions_active: msg.ml_stop_conditions_active,
      dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
      psa_steer_slip_warning: msg.psa_steer_slip_warning,
      ice_error_legacy: msg.ice_error_legacy,
      emb_line_press_over_max_start_limit_legacy: msg.emb_line_press_over_max_start_limit_legacy,
      pdu1_counter_error_legacy: msg.pdu1_counter_error_legacy,
      pdu1_timeout_error_legacy: msg.pdu1_timeout_error_legacy,
      pdu2_counter_error_legacy: msg.pdu2_counter_error_legacy,
      pdu2_timeout_error_legacy: msg.pdu2_timeout_error_legacy,
      em_piston_hall_not_ready_legacy: msg.em_piston_hall_not_ready_legacy,
      emb_tank_press_under_level1_legacy: msg.emb_tank_press_under_level1_legacy,
      emb_tank_press_under_level2_legacy: msg.emb_tank_press_under_level2_legacy,
      emb_tank_press_under_level3_legacy: msg.emb_tank_press_under_level3_legacy,
      emb_tank_press_under_min_start_limit_legacy: msg.emb_tank_press_under_min_start_limit_legacy,
      ice_over_rpm_warning_legacy: msg.ice_over_rpm_warning_legacy,
      ice_diagnostic_spare_legacy: msg.ice_diagnostic_spare_legacy,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord01Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_low_oil_temp_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_engine_off_rejected: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_fueling_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_oil_heater_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_starting_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_aps_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_line_press_over_max_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temp_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu1_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu1_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu2_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu2_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub em_piston_hall_not_ready: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level1: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level2: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_level3: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emb_tank_press_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_override_wrong_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bsu_wrong_init_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_boost_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_over_rpm_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_sensor_failure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_target_gear_not_reached_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_volume_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_diagnostic_spare: u8,

}



impl Default for DiagnosticWord01Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord01Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01Legacy {
  type RmwMsg = super::msg::rmw::DiagnosticWord01Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bms_starting_faild: msg.bms_starting_faild,
        bms_timeout_error: msg.bms_timeout_error,
        cba_fl_counter_error: msg.cba_fl_counter_error,
        cba_fl_derating: msg.cba_fl_derating,
        cba_fl_error: msg.cba_fl_error,
        cba_fl_timeout_error: msg.cba_fl_timeout_error,
        cba_fr_counter_error: msg.cba_fr_counter_error,
        cba_fr_derating: msg.cba_fr_derating,
        cba_fr_error: msg.cba_fr_error,
        cba_fr_timeout_error: msg.cba_fr_timeout_error,
        cba_rl_counter_error: msg.cba_rl_counter_error,
        cba_rl_derating: msg.cba_rl_derating,
        cba_rl_error: msg.cba_rl_error,
        cba_rl_timeout_error: msg.cba_rl_timeout_error,
        cba_rr_counter_error: msg.cba_rr_counter_error,
        cba_rr_derating: msg.cba_rr_derating,
        cba_rr_error: msg.cba_rr_error,
        cba_rr_timeout_error: msg.cba_rr_timeout_error,
        dcdc_starting_faild: msg.dcdc_starting_faild,
        dcdc_timeout_error: msg.dcdc_timeout_error,
        ice_error: msg.ice_error,
        ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
        ice_engine_off_rejected: msg.ice_engine_off_rejected,
        ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
        ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
        ice_starting_starting_failed: msg.ice_starting_starting_failed,
        ice_aps_warning: msg.ice_aps_warning,
        hl_counter_error: msg.hl_counter_error,
        hl_timeout_error: msg.hl_timeout_error,
        ice_counter_error: msg.ice_counter_error,
        ice_timeout_error: msg.ice_timeout_error,
        emb_line_press_over_max_start_limit: msg.emb_line_press_over_max_start_limit,
        ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
        pdu1_counter_error: msg.pdu1_counter_error,
        pdu1_timeout_error: msg.pdu1_timeout_error,
        pdu2_counter_error: msg.pdu2_counter_error,
        pdu2_timeout_error: msg.pdu2_timeout_error,
        em_piston_hall_not_ready: msg.em_piston_hall_not_ready,
        psa_counter_error: msg.psa_counter_error,
        psa_derating: msg.psa_derating,
        psa_error: msg.psa_error,
        psa_timeout_error: msg.psa_timeout_error,
        emb_tank_press_under_level1: msg.emb_tank_press_under_level1,
        emb_tank_press_under_level2: msg.emb_tank_press_under_level2,
        emb_tank_press_under_level3: msg.emb_tank_press_under_level3,
        emb_tank_press_under_min_start_limit: msg.emb_tank_press_under_min_start_limit,
        ice_override_wrong_config: msg.ice_override_wrong_config,
        bsu_wrong_init_config: msg.bsu_wrong_init_config,
        ice_boost_warning: msg.ice_boost_warning,
        ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
        ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
        ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
        ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
        ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
        ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
        ice_over_rpm_warning: msg.ice_over_rpm_warning,
        ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
        ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
        ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
        rm_counter_error: msg.rm_counter_error,
        rm_timeout_error: msg.rm_timeout_error,
        ice_diagnostic_spare: msg.ice_diagnostic_spare,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ice_error: msg.ice_error,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      emb_line_press_over_max_start_limit: msg.emb_line_press_over_max_start_limit,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu1_counter_error: msg.pdu1_counter_error,
      pdu1_timeout_error: msg.pdu1_timeout_error,
      pdu2_counter_error: msg.pdu2_counter_error,
      pdu2_timeout_error: msg.pdu2_timeout_error,
      em_piston_hall_not_ready: msg.em_piston_hall_not_ready,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      emb_tank_press_under_level1: msg.emb_tank_press_under_level1,
      emb_tank_press_under_level2: msg.emb_tank_press_under_level2,
      emb_tank_press_under_level3: msg.emb_tank_press_under_level3,
      emb_tank_press_under_min_start_limit: msg.emb_tank_press_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      ice_over_rpm_warning: msg.ice_over_rpm_warning,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
      ice_diagnostic_spare: msg.ice_diagnostic_spare,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ice_error: msg.ice_error,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      emb_line_press_over_max_start_limit: msg.emb_line_press_over_max_start_limit,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu1_counter_error: msg.pdu1_counter_error,
      pdu1_timeout_error: msg.pdu1_timeout_error,
      pdu2_counter_error: msg.pdu2_counter_error,
      pdu2_timeout_error: msg.pdu2_timeout_error,
      em_piston_hall_not_ready: msg.em_piston_hall_not_ready,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      emb_tank_press_under_level1: msg.emb_tank_press_under_level1,
      emb_tank_press_under_level2: msg.emb_tank_press_under_level2,
      emb_tank_press_under_level3: msg.emb_tank_press_under_level3,
      emb_tank_press_under_min_start_limit: msg.emb_tank_press_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      ice_over_rpm_warning: msg.ice_over_rpm_warning,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
      ice_diagnostic_spare: msg.ice_diagnostic_spare,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord01Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bms_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_fr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_starting_faild: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ecu_timeout_em_fault: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbafl_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_low_oil_temp_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_engine_off_rejected: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_pdu12_v_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_fueling_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_oil_heater_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_starting_starting_failed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_aps_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hl_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbafr_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temp_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu48_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu48_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbarl_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_derating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_timeout_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dem_cbarr_not_receive: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub em_stop_conditions_active: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ml_stop_conditions_active: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc4812_under_min_start_limit: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_override_wrong_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bsu_wrong_init_config: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_boost_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_coolant_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_gear_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_pressure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temperature_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pdu12_active_anti_fire: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_sensor_failure_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_target_gear_not_reached_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_volume_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_counter_error: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rm_timeout_error: u8,

}



impl Default for DiagnosticWord01Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord01Updated::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01Updated {
  type RmwMsg = super::msg::rmw::DiagnosticWord01Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bms_starting_faild: msg.bms_starting_faild,
        bms_timeout_error: msg.bms_timeout_error,
        cba_fl_counter_error: msg.cba_fl_counter_error,
        cba_fl_derating: msg.cba_fl_derating,
        cba_fl_error: msg.cba_fl_error,
        cba_fl_timeout_error: msg.cba_fl_timeout_error,
        cba_fr_counter_error: msg.cba_fr_counter_error,
        cba_fr_derating: msg.cba_fr_derating,
        cba_fr_error: msg.cba_fr_error,
        cba_fr_timeout_error: msg.cba_fr_timeout_error,
        cba_rl_counter_error: msg.cba_rl_counter_error,
        cba_rl_derating: msg.cba_rl_derating,
        cba_rl_error: msg.cba_rl_error,
        cba_rl_timeout_error: msg.cba_rl_timeout_error,
        cba_rr_counter_error: msg.cba_rr_counter_error,
        cba_rr_derating: msg.cba_rr_derating,
        cba_rr_error: msg.cba_rr_error,
        cba_rr_timeout_error: msg.cba_rr_timeout_error,
        dcdc_starting_faild: msg.dcdc_starting_faild,
        dcdc_timeout_error: msg.dcdc_timeout_error,
        ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
        dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
        ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
        ice_engine_off_rejected: msg.ice_engine_off_rejected,
        dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
        ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
        ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
        ice_starting_starting_failed: msg.ice_starting_starting_failed,
        ice_aps_warning: msg.ice_aps_warning,
        hl_counter_error: msg.hl_counter_error,
        hl_timeout_error: msg.hl_timeout_error,
        ice_counter_error: msg.ice_counter_error,
        ice_timeout_error: msg.ice_timeout_error,
        dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
        ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
        pdu12_counter_error: msg.pdu12_counter_error,
        pdu12_timeout_error: msg.pdu12_timeout_error,
        pdu48_counter_error: msg.pdu48_counter_error,
        pdu48_timeout_error: msg.pdu48_timeout_error,
        dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
        psa_counter_error: msg.psa_counter_error,
        psa_derating: msg.psa_derating,
        psa_error: msg.psa_error,
        psa_timeout_error: msg.psa_timeout_error,
        dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
        em_stop_conditions_active: msg.em_stop_conditions_active,
        ml_stop_conditions_active: msg.ml_stop_conditions_active,
        dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
        ice_override_wrong_config: msg.ice_override_wrong_config,
        bsu_wrong_init_config: msg.bsu_wrong_init_config,
        ice_boost_warning: msg.ice_boost_warning,
        ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
        ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
        ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
        ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
        ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
        ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
        pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
        ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
        ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
        ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
        rm_counter_error: msg.rm_counter_error,
        rm_timeout_error: msg.rm_timeout_error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
      dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu12_counter_error: msg.pdu12_counter_error,
      pdu12_timeout_error: msg.pdu12_timeout_error,
      pdu48_counter_error: msg.pdu48_counter_error,
      pdu48_timeout_error: msg.pdu48_timeout_error,
      dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
      em_stop_conditions_active: msg.em_stop_conditions_active,
      ml_stop_conditions_active: msg.ml_stop_conditions_active,
      dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bms_starting_faild: msg.bms_starting_faild,
      bms_timeout_error: msg.bms_timeout_error,
      cba_fl_counter_error: msg.cba_fl_counter_error,
      cba_fl_derating: msg.cba_fl_derating,
      cba_fl_error: msg.cba_fl_error,
      cba_fl_timeout_error: msg.cba_fl_timeout_error,
      cba_fr_counter_error: msg.cba_fr_counter_error,
      cba_fr_derating: msg.cba_fr_derating,
      cba_fr_error: msg.cba_fr_error,
      cba_fr_timeout_error: msg.cba_fr_timeout_error,
      cba_rl_counter_error: msg.cba_rl_counter_error,
      cba_rl_derating: msg.cba_rl_derating,
      cba_rl_error: msg.cba_rl_error,
      cba_rl_timeout_error: msg.cba_rl_timeout_error,
      cba_rr_counter_error: msg.cba_rr_counter_error,
      cba_rr_derating: msg.cba_rr_derating,
      cba_rr_error: msg.cba_rr_error,
      cba_rr_timeout_error: msg.cba_rr_timeout_error,
      dcdc_starting_faild: msg.dcdc_starting_faild,
      dcdc_timeout_error: msg.dcdc_timeout_error,
      ecu_timeout_em_fault: msg.ecu_timeout_em_fault,
      dem_cbafl_not_receive: msg.dem_cbafl_not_receive,
      ice_gear_low_oil_temp_warning: msg.ice_gear_low_oil_temp_warning,
      ice_engine_off_rejected: msg.ice_engine_off_rejected,
      dem_pdu12_v_not_receive: msg.dem_pdu12_v_not_receive,
      ice_starting_fueling_failed: msg.ice_starting_fueling_failed,
      ice_starting_oil_heater_failed: msg.ice_starting_oil_heater_failed,
      ice_starting_starting_failed: msg.ice_starting_starting_failed,
      ice_aps_warning: msg.ice_aps_warning,
      hl_counter_error: msg.hl_counter_error,
      hl_timeout_error: msg.hl_timeout_error,
      ice_counter_error: msg.ice_counter_error,
      ice_timeout_error: msg.ice_timeout_error,
      dem_cbafr_not_receive: msg.dem_cbafr_not_receive,
      ice_oil_temp_under_min_start_limit: msg.ice_oil_temp_under_min_start_limit,
      pdu12_counter_error: msg.pdu12_counter_error,
      pdu12_timeout_error: msg.pdu12_timeout_error,
      pdu48_counter_error: msg.pdu48_counter_error,
      pdu48_timeout_error: msg.pdu48_timeout_error,
      dem_cbarl_not_receive: msg.dem_cbarl_not_receive,
      psa_counter_error: msg.psa_counter_error,
      psa_derating: msg.psa_derating,
      psa_error: msg.psa_error,
      psa_timeout_error: msg.psa_timeout_error,
      dem_cbarr_not_receive: msg.dem_cbarr_not_receive,
      em_stop_conditions_active: msg.em_stop_conditions_active,
      ml_stop_conditions_active: msg.ml_stop_conditions_active,
      dcdc4812_under_min_start_limit: msg.dcdc4812_under_min_start_limit,
      ice_override_wrong_config: msg.ice_override_wrong_config,
      bsu_wrong_init_config: msg.bsu_wrong_init_config,
      ice_boost_warning: msg.ice_boost_warning,
      ice_coolant_pressure_warning: msg.ice_coolant_pressure_warning,
      ice_coolant_temperature_warning: msg.ice_coolant_temperature_warning,
      ice_fuel_pressure_warning: msg.ice_fuel_pressure_warning,
      ice_gear_oil_temperature_warning: msg.ice_gear_oil_temperature_warning,
      ice_oil_pressure_warning: msg.ice_oil_pressure_warning,
      ice_oil_temperature_warning: msg.ice_oil_temperature_warning,
      pdu12_active_anti_fire: msg.pdu12_active_anti_fire,
      ice_sensor_failure_warning: msg.ice_sensor_failure_warning,
      ice_target_gear_not_reached_warning: msg.ice_target_gear_not_reached_warning,
      ice_fuel_volume_warning: msg.ice_fuel_volume_warning,
      rm_counter_error: msg.rm_counter_error,
      rm_timeout_error: msg.rm_timeout_error,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Diagnostic word information for BSU
    /// RC Force Race Mode (0..1)
    pub rc_force_race_mode: u8,

    /// RC Beacon Timeout (0..1)
    pub rc_beacon_time_out: u8,

    /// Display Timeout Error (0..1)
    pub display_timeout_error: u8,

    /// RM Red Flag (0..1)
    pub rm_red_flag: u8,

    /// RM Safe Stop (0..1)
    pub rm_safe_stop: u8,

    /// Display Counter Error (0..1)
    pub display_counter_error: u8,

    /// CBA EM Brake Sat Not Received (0..1)
    pub cba_em_brake_sat_not_received: u8,

    /// CBA Sat Values Not Received (0..1)
    pub cba_sat_values_not_received: u8,

    /// ICE Oil Temp Start Limit Not Received (0..1)
    pub ice_oil_temp_start_limit_not_rec: u8,

    /// ML Stop Brake Sat Not Received (0..1)
    pub ml_stop_brake_sat_not_received: u8,

    /// PSA Sat Values Not Received (0..1)
    pub psa_sat_values_not_received: u8,

    /// Limp Sat Values Not Received (0..1)
    pub limp_sat_values_not_received: u8,

    /// Fan Car Speed Max Value Not Received (0..1)
    pub fan_car_speed_max_value_not_rec: u8,

    /// Fan Car Speed Min Value Not Received (0..1)
    pub fan_car_speed_min_value_not_rec: u8,

    /// Fan Water Temp Max Value Not Received (0..1)
    pub fan_water_temp_max_value_not_rec: u8,

    /// Fan Water Temp Min Value Not Received (0..1)
    pub fan_water_temp_min_value_not_rec: u8,

    /// Heater Oil Temp Max Value Not Received (0..1)
    pub heater_oil_temp_max_value_not_rec: u8,

    /// ICE Fuel Pres Start Limit Not Received (0..1)
    pub ice_fuel_pres_start_limit_not_rec: u8,

    /// ICE Oil Temp Bypass Not Received (0..1)
    pub ice_oil_temp_by_pass_not_received: u8,

    /// PSA Sat Rates Default Value (0..1) - New in 2025
    pub psa_sat_rates_def_val: u8,

    /// ========== NEW v3 BMS DIAGNOSTIC SIGNALS (CRITICAL) ==========
    /// BMS 12V Battery Monitoring
    /// BMS 12V SOC Under Level 1 (0..1) - New in v3
    pub bms12_soc_under_level1: u8,

    /// BMS 12V SOC Under Level 2 (0..1) - New in v3
    pub bms12_soc_under_level2: u8,

    /// BMS 12V Temperature Over Level 1 (0..1) - New in v3
    pub bms12_temp_over_level1: u8,

    /// BMS 12V Temperature Over Level 2 (0..1) - New in v3
    pub bms12_temp_over_level2: u8,

    /// BMS 48V Battery Monitoring
    /// BMS 48V SOC Under Level 1 (0..1) - New in v3
    pub bms48_soc_under_level1: u8,

    /// BMS 48V SOC Under Level 2 (0..1) - New in v3
    pub bms48_soc_under_level2: u8,

    /// BMS 48V Temperature Over Level 1 (0..1) - New in v3
    pub bms48_temp_over_level1: u8,

    /// BMS 48V Temperature Over Level 2 (0..1) - New in v3
    pub bms48_temp_over_level2: u8,

    /// Badenia System Diagnostics
    /// Badenia System Counter Error (0..1) - New in v3
    pub badenia_counter_error: u8,

    /// Badenia System Timeout Error (0..1) - New in v3
    pub badenia_timeout_error: u8,

    /// Race Management Emergency Flag
    /// Race Management Emergency Flag (0..1) - New in v3
    pub rm_em_flag: u8,

    /// Enhanced Default Value Signals
    /// ML Stop Brake Bias Default Value (0..1) - New in v3
    pub ml_stop_brake_bias_def_val: u8,

    /// Limp ICE Saturation Values Default Value (0..1) - New in v3
    pub limp_ice_sat_values_def_val: u8,

    /// CBA Saturation Rates Default Value (0..1) - New in v3
    pub cba_sat_rates_def_val: u8,

    /// Limp CBA Saturation Values Default Value (0..1) - New in v3
    pub limp_cba_sat_values_def_val: u8,

    /// ===============================================================
    /// ========== NEW v7 PUSH-TO-PASS & ML SUPERVISOR SIGNALS ==========
    /// Push-to-Pass Configuration Default Values
    /// P2P Maximum Number of Activations Default Value (0..1) - New in v7
    pub p2p_max_num_activation_def_val: u8,

    /// P2P Cooldown Duration Default Value (0..1) - New in v7
    pub p2p_cooldown_duration_def_val: u8,

    /// P2P Active Duration Default Value (0..1) - New in v7
    pub p2p_active_duration_def_val: u8,

    /// Race Control Delta Timeout Limit Default Value (0..1) - New in v7
    pub rc_delta_timeout_lim_def_val: u8,

    /// ML Supervisor
    /// High-Level ML Supervisor Request Flag (0..1) - New in v7
    pub hl_mlsupervisor_request: u8,

}



impl Default for DiagnosticWord02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord02::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02 {
  type RmwMsg = super::msg::rmw::DiagnosticWord02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rc_force_race_mode: msg.rc_force_race_mode,
        rc_beacon_time_out: msg.rc_beacon_time_out,
        display_timeout_error: msg.display_timeout_error,
        rm_red_flag: msg.rm_red_flag,
        rm_safe_stop: msg.rm_safe_stop,
        display_counter_error: msg.display_counter_error,
        cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
        cba_sat_values_not_received: msg.cba_sat_values_not_received,
        ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
        ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
        psa_sat_values_not_received: msg.psa_sat_values_not_received,
        limp_sat_values_not_received: msg.limp_sat_values_not_received,
        fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
        fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
        fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
        fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
        heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
        ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
        ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
        psa_sat_rates_def_val: msg.psa_sat_rates_def_val,
        bms12_soc_under_level1: msg.bms12_soc_under_level1,
        bms12_soc_under_level2: msg.bms12_soc_under_level2,
        bms12_temp_over_level1: msg.bms12_temp_over_level1,
        bms12_temp_over_level2: msg.bms12_temp_over_level2,
        bms48_soc_under_level1: msg.bms48_soc_under_level1,
        bms48_soc_under_level2: msg.bms48_soc_under_level2,
        bms48_temp_over_level1: msg.bms48_temp_over_level1,
        bms48_temp_over_level2: msg.bms48_temp_over_level2,
        badenia_counter_error: msg.badenia_counter_error,
        badenia_timeout_error: msg.badenia_timeout_error,
        rm_em_flag: msg.rm_em_flag,
        ml_stop_brake_bias_def_val: msg.ml_stop_brake_bias_def_val,
        limp_ice_sat_values_def_val: msg.limp_ice_sat_values_def_val,
        cba_sat_rates_def_val: msg.cba_sat_rates_def_val,
        limp_cba_sat_values_def_val: msg.limp_cba_sat_values_def_val,
        p2p_max_num_activation_def_val: msg.p2p_max_num_activation_def_val,
        p2p_cooldown_duration_def_val: msg.p2p_cooldown_duration_def_val,
        p2p_active_duration_def_val: msg.p2p_active_duration_def_val,
        rc_delta_timeout_lim_def_val: msg.rc_delta_timeout_lim_def_val,
        hl_mlsupervisor_request: msg.hl_mlsupervisor_request,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
      display_timeout_error: msg.display_timeout_error,
      rm_red_flag: msg.rm_red_flag,
      rm_safe_stop: msg.rm_safe_stop,
      display_counter_error: msg.display_counter_error,
      cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
      cba_sat_values_not_received: msg.cba_sat_values_not_received,
      ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
      ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
      psa_sat_values_not_received: msg.psa_sat_values_not_received,
      limp_sat_values_not_received: msg.limp_sat_values_not_received,
      fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
      fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
      fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
      fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
      heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
      ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
      ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
      psa_sat_rates_def_val: msg.psa_sat_rates_def_val,
      bms12_soc_under_level1: msg.bms12_soc_under_level1,
      bms12_soc_under_level2: msg.bms12_soc_under_level2,
      bms12_temp_over_level1: msg.bms12_temp_over_level1,
      bms12_temp_over_level2: msg.bms12_temp_over_level2,
      bms48_soc_under_level1: msg.bms48_soc_under_level1,
      bms48_soc_under_level2: msg.bms48_soc_under_level2,
      bms48_temp_over_level1: msg.bms48_temp_over_level1,
      bms48_temp_over_level2: msg.bms48_temp_over_level2,
      badenia_counter_error: msg.badenia_counter_error,
      badenia_timeout_error: msg.badenia_timeout_error,
      rm_em_flag: msg.rm_em_flag,
      ml_stop_brake_bias_def_val: msg.ml_stop_brake_bias_def_val,
      limp_ice_sat_values_def_val: msg.limp_ice_sat_values_def_val,
      cba_sat_rates_def_val: msg.cba_sat_rates_def_val,
      limp_cba_sat_values_def_val: msg.limp_cba_sat_values_def_val,
      p2p_max_num_activation_def_val: msg.p2p_max_num_activation_def_val,
      p2p_cooldown_duration_def_val: msg.p2p_cooldown_duration_def_val,
      p2p_active_duration_def_val: msg.p2p_active_duration_def_val,
      rc_delta_timeout_lim_def_val: msg.rc_delta_timeout_lim_def_val,
      hl_mlsupervisor_request: msg.hl_mlsupervisor_request,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
      display_timeout_error: msg.display_timeout_error,
      rm_red_flag: msg.rm_red_flag,
      rm_safe_stop: msg.rm_safe_stop,
      display_counter_error: msg.display_counter_error,
      cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
      cba_sat_values_not_received: msg.cba_sat_values_not_received,
      ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
      ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
      psa_sat_values_not_received: msg.psa_sat_values_not_received,
      limp_sat_values_not_received: msg.limp_sat_values_not_received,
      fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
      fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
      fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
      fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
      heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
      ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
      ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
      psa_sat_rates_def_val: msg.psa_sat_rates_def_val,
      bms12_soc_under_level1: msg.bms12_soc_under_level1,
      bms12_soc_under_level2: msg.bms12_soc_under_level2,
      bms12_temp_over_level1: msg.bms12_temp_over_level1,
      bms12_temp_over_level2: msg.bms12_temp_over_level2,
      bms48_soc_under_level1: msg.bms48_soc_under_level1,
      bms48_soc_under_level2: msg.bms48_soc_under_level2,
      bms48_temp_over_level1: msg.bms48_temp_over_level1,
      bms48_temp_over_level2: msg.bms48_temp_over_level2,
      badenia_counter_error: msg.badenia_counter_error,
      badenia_timeout_error: msg.badenia_timeout_error,
      rm_em_flag: msg.rm_em_flag,
      ml_stop_brake_bias_def_val: msg.ml_stop_brake_bias_def_val,
      limp_ice_sat_values_def_val: msg.limp_ice_sat_values_def_val,
      cba_sat_rates_def_val: msg.cba_sat_rates_def_val,
      limp_cba_sat_values_def_val: msg.limp_cba_sat_values_def_val,
      p2p_max_num_activation_def_val: msg.p2p_max_num_activation_def_val,
      p2p_cooldown_duration_def_val: msg.p2p_cooldown_duration_def_val,
      p2p_active_duration_def_val: msg.p2p_active_duration_def_val,
      rc_delta_timeout_lim_def_val: msg.rc_delta_timeout_lim_def_val,
      hl_mlsupervisor_request: msg.hl_mlsupervisor_request,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord02Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_force_race_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_beacon_time_out: bool,

}



impl Default for DiagnosticWord02Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord02Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02Legacy {
  type RmwMsg = super::msg::rmw::DiagnosticWord02Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rc_force_race_mode: msg.rc_force_race_mode,
        rc_beacon_time_out: msg.rc_beacon_time_out,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
    }
  }
}


// Corresponds to sd_can_msgs__msg__DiagnosticWord02Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Diagnostic word information for BSU
    /// RC Force Race Mode (0..1)
    pub rc_force_race_mode: u8,

    /// RC Beacon Timeout (0..1)
    pub rc_beacon_time_out: u8,

    /// Display Timeout Error (0..1)
    pub display_timeout_error: u8,

    /// RM Red Flag (0..1)
    pub rm_red_flag: u8,

    /// RM Safe Stop (0..1)
    pub rm_safe_stop: u8,

    /// Display Counter Error (0..1)
    pub display_counter_error: u8,

    /// CBA EM Brake Sat Not Received (0..1)
    pub cba_em_brake_sat_not_received: u8,

    /// CBA Sat Values Not Received (0..1)
    pub cba_sat_values_not_received: u8,

    /// ICE Oil Temp Start Limit Not Received (0..1)
    pub ice_oil_temp_start_limit_not_rec: u8,

    /// ML Stop Brake Sat Not Received (0..1)
    pub ml_stop_brake_sat_not_received: u8,

    /// PSA Sat Values Not Received (0..1)
    pub psa_sat_values_not_received: u8,

    /// Limp Sat Values Not Received (0..1)
    pub limp_sat_values_not_received: u8,

    /// Fan Car Speed Max Value Not Received (0..1)
    pub fan_car_speed_max_value_not_rec: u8,

    /// Fan Car Speed Min Value Not Received (0..1)
    pub fan_car_speed_min_value_not_rec: u8,

    /// Fan Water Temp Max Value Not Received (0..1)
    pub fan_water_temp_max_value_not_rec: u8,

    /// Fan Water Temp Min Value Not Received (0..1)
    pub fan_water_temp_min_value_not_rec: u8,

    /// Heater Oil Temp Max Value Not Received (0..1)
    pub heater_oil_temp_max_value_not_rec: u8,

    /// ICE Fuel Pres Start Limit Not Received (0..1)
    pub ice_fuel_pres_start_limit_not_rec: u8,

    /// ICE Oil Temp Bypass Not Received (0..1)
    pub ice_oil_temp_by_pass_not_received: u8,

}



impl Default for DiagnosticWord02Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticWord02Updated::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02Updated {
  type RmwMsg = super::msg::rmw::DiagnosticWord02Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rc_force_race_mode: msg.rc_force_race_mode,
        rc_beacon_time_out: msg.rc_beacon_time_out,
        display_timeout_error: msg.display_timeout_error,
        rm_red_flag: msg.rm_red_flag,
        rm_safe_stop: msg.rm_safe_stop,
        display_counter_error: msg.display_counter_error,
        cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
        cba_sat_values_not_received: msg.cba_sat_values_not_received,
        ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
        ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
        psa_sat_values_not_received: msg.psa_sat_values_not_received,
        limp_sat_values_not_received: msg.limp_sat_values_not_received,
        fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
        fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
        fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
        fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
        heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
        ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
        ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
      display_timeout_error: msg.display_timeout_error,
      rm_red_flag: msg.rm_red_flag,
      rm_safe_stop: msg.rm_safe_stop,
      display_counter_error: msg.display_counter_error,
      cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
      cba_sat_values_not_received: msg.cba_sat_values_not_received,
      ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
      ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
      psa_sat_values_not_received: msg.psa_sat_values_not_received,
      limp_sat_values_not_received: msg.limp_sat_values_not_received,
      fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
      fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
      fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
      fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
      heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
      ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
      ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rc_force_race_mode: msg.rc_force_race_mode,
      rc_beacon_time_out: msg.rc_beacon_time_out,
      display_timeout_error: msg.display_timeout_error,
      rm_red_flag: msg.rm_red_flag,
      rm_safe_stop: msg.rm_safe_stop,
      display_counter_error: msg.display_counter_error,
      cba_em_brake_sat_not_received: msg.cba_em_brake_sat_not_received,
      cba_sat_values_not_received: msg.cba_sat_values_not_received,
      ice_oil_temp_start_limit_not_rec: msg.ice_oil_temp_start_limit_not_rec,
      ml_stop_brake_sat_not_received: msg.ml_stop_brake_sat_not_received,
      psa_sat_values_not_received: msg.psa_sat_values_not_received,
      limp_sat_values_not_received: msg.limp_sat_values_not_received,
      fan_car_speed_max_value_not_rec: msg.fan_car_speed_max_value_not_rec,
      fan_car_speed_min_value_not_rec: msg.fan_car_speed_min_value_not_rec,
      fan_water_temp_max_value_not_rec: msg.fan_water_temp_max_value_not_rec,
      fan_water_temp_min_value_not_rec: msg.fan_water_temp_min_value_not_rec,
      heater_oil_temp_max_value_not_rec: msg.heater_oil_temp_max_value_not_rec,
      ice_fuel_pres_start_limit_not_rec: msg.ice_fuel_pres_start_limit_not_rec,
      ice_oil_temp_by_pass_not_received: msg.ice_oil_temp_by_pass_not_received,
    }
  }
}


// Corresponds to sd_can_msgs__msg__EMStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// EM status for the system
    /// Voltage in volts (0..25.4 bar)
    pub dcdc4812_voltage_v: u8,

    /// EM status code
    pub em_status: u16,

    /// Deceleration 1 in m/s
    pub hl_stop_deceleration_1: f64,

    /// Deceleration 2 in m/s
    pub hl_stop_deceleration_2: f64,

    /// Time to deceleration 1 in seconds
    pub hl_stop_time_to_dec_1: f64,

    /// Time to deceleration 2 in seconds
    pub hl_stop_time_to_dec_2: f64,

    ///  Fields from the legacy message
    /// Range: 0..120_legacy (0..12 bar)
    pub emb_line_pressure_bar_legacy: f64,

    /// Range: 0..120_legacy (0..12 bar)
    pub emb_tank_pressure_bar_legacy: f64,

}



impl Default for EMStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EMStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for EMStatus01 {
  type RmwMsg = super::msg::rmw::EMStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
        em_status: msg.em_status,
        hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
        hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
        hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
        hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
        emb_line_pressure_bar_legacy: msg.emb_line_pressure_bar_legacy,
        emb_tank_pressure_bar_legacy: msg.emb_tank_pressure_bar_legacy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      emb_line_pressure_bar_legacy: msg.emb_line_pressure_bar_legacy,
      emb_tank_pressure_bar_legacy: msg.emb_tank_pressure_bar_legacy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      emb_line_pressure_bar_legacy: msg.emb_line_pressure_bar_legacy,
      emb_tank_pressure_bar_legacy: msg.emb_tank_pressure_bar_legacy,
    }
  }
}


// Corresponds to sd_can_msgs__msg__EMStatus01Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..120 (0..12 bar)
    pub emb_line_pressure_bar: f64,

    /// Range: 0..120 (0..12 bar)
    pub emb_tank_pressure_bar: f64,

    /// Range: 0..1023 (0..1023 uint)
    pub em_status: u16,

    /// Range: 0..1023 (0..102.3 m/s)
    pub hl_stop_deceleration_1: f64,

    /// Range: 0..1023 (0..102.3 m/s)
    pub hl_stop_deceleration_2: f64,

    /// Range: 0..1023 (0..102.3 s)
    pub hl_stop_time_to_dec_1: f64,

    /// Range: 0..1023 (0..102.3 s)
    pub hl_stop_time_to_dec_2: f64,

}



impl Default for EMStatus01Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EMStatus01Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for EMStatus01Legacy {
  type RmwMsg = super::msg::rmw::EMStatus01Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        emb_line_pressure_bar: msg.emb_line_pressure_bar,
        emb_tank_pressure_bar: msg.emb_tank_pressure_bar,
        em_status: msg.em_status,
        hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
        hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
        hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
        hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      emb_line_pressure_bar: msg.emb_line_pressure_bar,
      emb_tank_pressure_bar: msg.emb_tank_pressure_bar,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      emb_line_pressure_bar: msg.emb_line_pressure_bar,
      emb_tank_pressure_bar: msg.emb_tank_pressure_bar,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
    }
  }
}


// Corresponds to sd_can_msgs__msg__EMStatus01Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// EM status for the system
    /// Voltage in volts (0..25.4 bar)
    pub dcdc4812_voltage_v: u8,

    /// EM status code
    pub em_status: u16,

    /// Deceleration 1 in m/s
    pub hl_stop_deceleration_1: u16,

    /// Deceleration 2 in m/s
    pub hl_stop_deceleration_2: u16,

    /// Time to deceleration 1 in seconds
    pub hl_stop_time_to_dec_1: u16,

    /// Time to deceleration 2 in seconds
    pub hl_stop_time_to_dec_2: u16,

}



impl Default for EMStatus01Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EMStatus01Updated::default())
  }
}

impl rosidl_runtime_rs::Message for EMStatus01Updated {
  type RmwMsg = super::msg::rmw::EMStatus01Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
        em_status: msg.em_status,
        hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
        hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
        hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
        hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dcdc4812_voltage_v: msg.dcdc4812_voltage_v,
      em_status: msg.em_status,
      hl_stop_deceleration_1: msg.hl_stop_deceleration_1,
      hl_stop_deceleration_2: msg.hl_stop_deceleration_2,
      hl_stop_time_to_dec_1: msg.hl_stop_time_to_dec_1,
      hl_stop_time_to_dec_2: msg.hl_stop_time_to_dec_2,
    }
  }
}


// Corresponds to sd_can_msgs__msg__FlagInfoOutput
/// Flag Info Output Message
/// CAN ID: 0x7C (124)
/// This message contains race management flag information and LED status
/// New in DBC v3 - provides race control and marshalling information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FlagInfoOutput {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// LED status output from EMM Car Marshalling Equipment
    /// Range: 0-255
    pub led_status: u8,

    /// EMM Car Marshalling Equipment outputs free running counter
    /// Range: 0-255
    pub free_running_counter: u8,

    /// Spare field 1 for CAN ID 0x7C
    pub spare1_0x7_c: u8,

    /// Spare field 2 for CAN ID 0x7C
    pub spare2_0x7_c: u8,

    /// Session Management - Session Type
    /// Values: 0=No Session, 64=Practice, 128=Qualifying, 192=Race
    pub sm_session_type: u8,

    /// Session Management - Track Flag
    /// Values: 0=No Flag, 5=Red Flag, 7=Safety Car Out, 11=Full Course Yellow, 13=Code 60
    pub sm_track_flag: u8,

    /// Session Management - Car Flag
    /// Values include: 0=Off, 3=Blue, 16=Chequered, 18=Black&White, 26=Blue Static,
    /// 29=Yellow Speed Offender, 30=Go To Pit, 31=Long Lap, 32=Change Position,
    /// 33=Long Lap x2, 34=Drive Through, 35=Ride Through, 38=Time Penalty,
    /// 39=Loudness, 40=In Pit Penalty, 129=Orange Flag, 130=Purple Flag,
    /// 131=Safe Stop Flag, 132=Emergency Stop Flag
    pub sm_car_flag: u8,

    /// CRC checksum for Session Management data
    /// Range: 0-255
    pub crc_sm: u8,

}



impl Default for FlagInfoOutput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FlagInfoOutput::default())
  }
}

impl rosidl_runtime_rs::Message for FlagInfoOutput {
  type RmwMsg = super::msg::rmw::FlagInfoOutput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        led_status: msg.led_status,
        free_running_counter: msg.free_running_counter,
        spare1_0x7_c: msg.spare1_0x7_c,
        spare2_0x7_c: msg.spare2_0x7_c,
        sm_session_type: msg.sm_session_type,
        sm_track_flag: msg.sm_track_flag,
        sm_car_flag: msg.sm_car_flag,
        crc_sm: msg.crc_sm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      led_status: msg.led_status,
      free_running_counter: msg.free_running_counter,
      spare1_0x7_c: msg.spare1_0x7_c,
      spare2_0x7_c: msg.spare2_0x7_c,
      sm_session_type: msg.sm_session_type,
      sm_track_flag: msg.sm_track_flag,
      sm_car_flag: msg.sm_car_flag,
      crc_sm: msg.crc_sm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      led_status: msg.led_status,
      free_running_counter: msg.free_running_counter,
      spare1_0x7_c: msg.spare1_0x7_c,
      spare2_0x7_c: msg.spare2_0x7_c,
      sm_session_type: msg.sm_session_type,
      sm_track_flag: msg.sm_track_flag,
      sm_car_flag: msg.sm_car_flag,
      crc_sm: msg.crc_sm,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..15 (0..15 uint), Scale: 1, Offset: 0
    pub hl_alive_01: u8,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub hl_target_pressure_rr: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub hl_target_pressure_rl: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub hl_target_pressure_fr: f64,

    /// Range: 0..2000 (0..100 %), Scale: 0.05, Offset: 0
    pub hl_target_pressure_fl: f64,

    /// Range: 0..9 (-1..8 enum), Scale: 1, Offset: -1
    pub hl_target_gear: u8,

    /// Range: 0..1000 (0..100 %), Scale: 0.1, Offset: 0
    pub hl_target_throttle: f64,

}



impl Default for HLMsg01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg01::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg01 {
  type RmwMsg = super::msg::rmw::HLMsg01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_alive_01: msg.hl_alive_01,
        hl_target_pressure_rr: msg.hl_target_pressure_rr,
        hl_target_pressure_rl: msg.hl_target_pressure_rl,
        hl_target_pressure_fr: msg.hl_target_pressure_fr,
        hl_target_pressure_fl: msg.hl_target_pressure_fl,
        hl_target_gear: msg.hl_target_gear,
        hl_target_throttle: msg.hl_target_throttle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_alive_01: msg.hl_alive_01,
      hl_target_pressure_rr: msg.hl_target_pressure_rr,
      hl_target_pressure_rl: msg.hl_target_pressure_rl,
      hl_target_pressure_fr: msg.hl_target_pressure_fr,
      hl_target_pressure_fl: msg.hl_target_pressure_fl,
      hl_target_gear: msg.hl_target_gear,
      hl_target_throttle: msg.hl_target_throttle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_alive_01: msg.hl_alive_01,
      hl_target_pressure_rr: msg.hl_target_pressure_rr,
      hl_target_pressure_rl: msg.hl_target_pressure_rl,
      hl_target_pressure_fr: msg.hl_target_pressure_fr,
      hl_target_pressure_fl: msg.hl_target_pressure_fl,
      hl_target_gear: msg.hl_target_gear,
      hl_target_throttle: msg.hl_target_throttle,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..15 (0..15 uint), Scale: 1, Offset: 0
    pub hl_alive_02: u8,

    /// Range: 0..7 (0..7 enum), Scale: 1, Offset: 0
    pub hl_psa_mode_of_operation: u8,

    /// Range: 0..4000 (-100..100 %), Scale: 0.05, Offset: -100
    pub hl_target_psa_control: f64,

    /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad/s2), Scale: 0.1, Offset: 0
    pub hl_psa_profile_acc_rad_s2: u16,

    /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad/s2), Scale: 0.1, Offset: 0
    pub hl_psa_profile_dec_rad_s2: u16,

    /// If This Signal is set to 0, Default value will be send by the BSU, Range: 0..20000 (0..2000 rad_s), Scale: 0.1, Offset: 0
    pub hl_psa_profile_vel_rad_s: u16,

}



impl Default for HLMsg02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg02::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg02 {
  type RmwMsg = super::msg::rmw::HLMsg02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_alive_02: msg.hl_alive_02,
        hl_psa_mode_of_operation: msg.hl_psa_mode_of_operation,
        hl_target_psa_control: msg.hl_target_psa_control,
        hl_psa_profile_acc_rad_s2: msg.hl_psa_profile_acc_rad_s2,
        hl_psa_profile_dec_rad_s2: msg.hl_psa_profile_dec_rad_s2,
        hl_psa_profile_vel_rad_s: msg.hl_psa_profile_vel_rad_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_alive_02: msg.hl_alive_02,
      hl_psa_mode_of_operation: msg.hl_psa_mode_of_operation,
      hl_target_psa_control: msg.hl_target_psa_control,
      hl_psa_profile_acc_rad_s2: msg.hl_psa_profile_acc_rad_s2,
      hl_psa_profile_dec_rad_s2: msg.hl_psa_profile_dec_rad_s2,
      hl_psa_profile_vel_rad_s: msg.hl_psa_profile_vel_rad_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_alive_02: msg.hl_alive_02,
      hl_psa_mode_of_operation: msg.hl_psa_mode_of_operation,
      hl_target_psa_control: msg.hl_target_psa_control,
      hl_psa_profile_acc_rad_s2: msg.hl_psa_profile_acc_rad_s2,
      hl_psa_profile_dec_rad_s2: msg.hl_psa_profile_dec_rad_s2,
      hl_psa_profile_vel_rad_s: msg.hl_psa_profile_vel_rad_s,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg03
/// EAC24BsuHlMsg03.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// HL message for the system
    /// Alive status (0..15)
    pub hl_alive_03: u8,

    /// DBW (Drive by Wire) enabled status (0..1)
    pub hl_dbw_enable: u8,

    /// Push-to-pass status (0..1)
    pub hl_push_to_pass_on: u8,

    /// GNSS activation status (0..1)
    pub hl_pdu12_activate_gnss: u8,

    /// OSS activation status (0..1)
    pub hl_pdu12_activate_oss: u8,

    /// ICE (Internal Combustion Engine) enabled status (0..1)
    pub hl_ice_enable: u8,

    /// ========== NEW v7 ML SUPERVISOR SIGNAL ==========
    /// ML Supervisor Activation Status (0..1) - New in v7
    pub hl_ml_supervisor_activation: u8,

    /// =================================================
    /// Lidar activation status (0..1)
    pub hl_pdu12_activate_lidar: u8,

    /// Radar activation status (0..1)
    pub hl_pdu12_activate_radar: u8,

    /// Start fuel level in liters (0..655.35)
    pub ice_start_fuel_level_l: f64,

    /// Cranking bypass status (0..1)
    pub hl_crancking_by_pass: u8,

    /// Switch-off confirmation status (0..1)
    pub hl_switch_off_ok: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub header_legacy: std_msgs::msg::Header,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_gnss_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_oss_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_r_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_cn_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_l_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_rear_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_cn_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_r_legacy: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_l_legacy: u8,

}



impl Default for HLMsg03 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg03::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg03 {
  type RmwMsg = super::msg::rmw::HLMsg03;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_alive_03: msg.hl_alive_03,
        hl_dbw_enable: msg.hl_dbw_enable,
        hl_push_to_pass_on: msg.hl_push_to_pass_on,
        hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
        hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
        hl_ice_enable: msg.hl_ice_enable,
        hl_ml_supervisor_activation: msg.hl_ml_supervisor_activation,
        hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
        hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
        ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
        hl_crancking_by_pass: msg.hl_crancking_by_pass,
        hl_switch_off_ok: msg.hl_switch_off_ok,
        header_legacy: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header_legacy)).into_owned(),
        hl_pdu1_activate_gnss_legacy: msg.hl_pdu1_activate_gnss_legacy,
        hl_pdu1_activate_oss_legacy: msg.hl_pdu1_activate_oss_legacy,
        hl_pdu1_activate_lidar_r_legacy: msg.hl_pdu1_activate_lidar_r_legacy,
        hl_pdu1_activate_lidar_cn_legacy: msg.hl_pdu1_activate_lidar_cn_legacy,
        hl_pdu1_activate_lidar_l_legacy: msg.hl_pdu1_activate_lidar_l_legacy,
        hl_pdu1_activate_radar_rear_legacy: msg.hl_pdu1_activate_radar_rear_legacy,
        hl_pdu1_activate_radar_cn_legacy: msg.hl_pdu1_activate_radar_cn_legacy,
        hl_pdu1_activate_radar_r_legacy: msg.hl_pdu1_activate_radar_r_legacy,
        hl_pdu1_activate_radar_l_legacy: msg.hl_pdu1_activate_radar_l_legacy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
      hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_ml_supervisor_activation: msg.hl_ml_supervisor_activation,
      hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
      hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
      hl_switch_off_ok: msg.hl_switch_off_ok,
        header_legacy: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header_legacy)).into_owned(),
      hl_pdu1_activate_gnss_legacy: msg.hl_pdu1_activate_gnss_legacy,
      hl_pdu1_activate_oss_legacy: msg.hl_pdu1_activate_oss_legacy,
      hl_pdu1_activate_lidar_r_legacy: msg.hl_pdu1_activate_lidar_r_legacy,
      hl_pdu1_activate_lidar_cn_legacy: msg.hl_pdu1_activate_lidar_cn_legacy,
      hl_pdu1_activate_lidar_l_legacy: msg.hl_pdu1_activate_lidar_l_legacy,
      hl_pdu1_activate_radar_rear_legacy: msg.hl_pdu1_activate_radar_rear_legacy,
      hl_pdu1_activate_radar_cn_legacy: msg.hl_pdu1_activate_radar_cn_legacy,
      hl_pdu1_activate_radar_r_legacy: msg.hl_pdu1_activate_radar_r_legacy,
      hl_pdu1_activate_radar_l_legacy: msg.hl_pdu1_activate_radar_l_legacy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
      hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_ml_supervisor_activation: msg.hl_ml_supervisor_activation,
      hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
      hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
      hl_switch_off_ok: msg.hl_switch_off_ok,
      header_legacy: std_msgs::msg::Header::from_rmw_message(msg.header_legacy),
      hl_pdu1_activate_gnss_legacy: msg.hl_pdu1_activate_gnss_legacy,
      hl_pdu1_activate_oss_legacy: msg.hl_pdu1_activate_oss_legacy,
      hl_pdu1_activate_lidar_r_legacy: msg.hl_pdu1_activate_lidar_r_legacy,
      hl_pdu1_activate_lidar_cn_legacy: msg.hl_pdu1_activate_lidar_cn_legacy,
      hl_pdu1_activate_lidar_l_legacy: msg.hl_pdu1_activate_lidar_l_legacy,
      hl_pdu1_activate_radar_rear_legacy: msg.hl_pdu1_activate_radar_rear_legacy,
      hl_pdu1_activate_radar_cn_legacy: msg.hl_pdu1_activate_radar_cn_legacy,
      hl_pdu1_activate_radar_r_legacy: msg.hl_pdu1_activate_radar_r_legacy,
      hl_pdu1_activate_radar_l_legacy: msg.hl_pdu1_activate_radar_l_legacy,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg03Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..15 (0..15 uint)
    pub hl_alive_03: u8,

    /// Range: 0..1 (0..1 -)
    pub hl_dbw_enable: u8,

    /// Range: 0..1 (0..1 enum)
    pub hl_push_to_pass_on: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_gnss: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_oss: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_ice_enable: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_r: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_cn: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_lidar_l: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_rear: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_cn: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_r: u8,

    /// Range: 0..1 (0..1 bool)
    pub hl_pdu1_activate_radar_l: u8,

    /// Range: 0..65535 (0..655.35 l)
    pub ice_start_fuel_level_l: f64,

    /// Range: 0..1 (0..1 -)
    pub hl_crancking_by_pass: u8,

}



impl Default for HLMsg03Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg03Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg03Legacy {
  type RmwMsg = super::msg::rmw::HLMsg03Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_alive_03: msg.hl_alive_03,
        hl_dbw_enable: msg.hl_dbw_enable,
        hl_push_to_pass_on: msg.hl_push_to_pass_on,
        hl_pdu1_activate_gnss: msg.hl_pdu1_activate_gnss,
        hl_pdu1_activate_oss: msg.hl_pdu1_activate_oss,
        hl_ice_enable: msg.hl_ice_enable,
        hl_pdu1_activate_lidar_r: msg.hl_pdu1_activate_lidar_r,
        hl_pdu1_activate_lidar_cn: msg.hl_pdu1_activate_lidar_cn,
        hl_pdu1_activate_lidar_l: msg.hl_pdu1_activate_lidar_l,
        hl_pdu1_activate_radar_rear: msg.hl_pdu1_activate_radar_rear,
        hl_pdu1_activate_radar_cn: msg.hl_pdu1_activate_radar_cn,
        hl_pdu1_activate_radar_r: msg.hl_pdu1_activate_radar_r,
        hl_pdu1_activate_radar_l: msg.hl_pdu1_activate_radar_l,
        ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
        hl_crancking_by_pass: msg.hl_crancking_by_pass,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu1_activate_gnss: msg.hl_pdu1_activate_gnss,
      hl_pdu1_activate_oss: msg.hl_pdu1_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_pdu1_activate_lidar_r: msg.hl_pdu1_activate_lidar_r,
      hl_pdu1_activate_lidar_cn: msg.hl_pdu1_activate_lidar_cn,
      hl_pdu1_activate_lidar_l: msg.hl_pdu1_activate_lidar_l,
      hl_pdu1_activate_radar_rear: msg.hl_pdu1_activate_radar_rear,
      hl_pdu1_activate_radar_cn: msg.hl_pdu1_activate_radar_cn,
      hl_pdu1_activate_radar_r: msg.hl_pdu1_activate_radar_r,
      hl_pdu1_activate_radar_l: msg.hl_pdu1_activate_radar_l,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu1_activate_gnss: msg.hl_pdu1_activate_gnss,
      hl_pdu1_activate_oss: msg.hl_pdu1_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_pdu1_activate_lidar_r: msg.hl_pdu1_activate_lidar_r,
      hl_pdu1_activate_lidar_cn: msg.hl_pdu1_activate_lidar_cn,
      hl_pdu1_activate_lidar_l: msg.hl_pdu1_activate_lidar_l,
      hl_pdu1_activate_radar_rear: msg.hl_pdu1_activate_radar_rear,
      hl_pdu1_activate_radar_cn: msg.hl_pdu1_activate_radar_cn,
      hl_pdu1_activate_radar_r: msg.hl_pdu1_activate_radar_r,
      hl_pdu1_activate_radar_l: msg.hl_pdu1_activate_radar_l,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg03Updated
/// EAC24BsuHlMsg03.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// HL message for the system
    /// Alive status (0..15)
    pub hl_alive_03: u8,

    /// DBW (Drive by Wire) enabled status (0..1)
    pub hl_dbw_enable: bool,

    /// Push-to-pass status (0..1)
    pub hl_push_to_pass_on: u8,

    /// GNSS activation status (0..1)
    pub hl_pdu12_activate_gnss: bool,

    /// OSS activation status (0..1)
    pub hl_pdu12_activate_oss: bool,

    /// ICE (Internal Combustion Engine) enabled status (0..1)
    pub hl_ice_enable: bool,

    /// Lidar activation status (0..1)
    pub hl_pdu12_activate_lidar: bool,

    /// Radar activation status (0..1)
    pub hl_pdu12_activate_radar: bool,

    /// Start fuel level in liters (0..655.35)
    pub ice_start_fuel_level_l: u16,

    /// Cranking bypass status (0..1)
    pub hl_crancking_by_pass: bool,

    /// Switch-off confirmation status (0..1)
    pub hl_switch_off_ok: bool,

}



impl Default for HLMsg03Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg03Updated::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg03Updated {
  type RmwMsg = super::msg::rmw::HLMsg03Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_alive_03: msg.hl_alive_03,
        hl_dbw_enable: msg.hl_dbw_enable,
        hl_push_to_pass_on: msg.hl_push_to_pass_on,
        hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
        hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
        hl_ice_enable: msg.hl_ice_enable,
        hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
        hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
        ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
        hl_crancking_by_pass: msg.hl_crancking_by_pass,
        hl_switch_off_ok: msg.hl_switch_off_ok,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
      hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
      hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
      hl_switch_off_ok: msg.hl_switch_off_ok,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_alive_03: msg.hl_alive_03,
      hl_dbw_enable: msg.hl_dbw_enable,
      hl_push_to_pass_on: msg.hl_push_to_pass_on,
      hl_pdu12_activate_gnss: msg.hl_pdu12_activate_gnss,
      hl_pdu12_activate_oss: msg.hl_pdu12_activate_oss,
      hl_ice_enable: msg.hl_ice_enable,
      hl_pdu12_activate_lidar: msg.hl_pdu12_activate_lidar,
      hl_pdu12_activate_radar: msg.hl_pdu12_activate_radar,
      ice_start_fuel_level_l: msg.ice_start_fuel_level_l,
      hl_crancking_by_pass: msg.hl_crancking_by_pass,
      hl_switch_off_ok: msg.hl_switch_off_ok,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg04

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg04 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: (deg), Scale: 1E-007, Offset: 0
    pub hl_latitude: f64,

    /// Range: (deg), Scale: 1E-007, Offset: 0
    pub hl_longitude: f64,

}



impl Default for HLMsg04 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg04::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg04 {
  type RmwMsg = super::msg::rmw::HLMsg04;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_latitude: msg.hl_latitude,
        hl_longitude: msg.hl_longitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_latitude: msg.hl_latitude,
      hl_longitude: msg.hl_longitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_latitude: msg.hl_latitude,
      hl_longitude: msg.hl_longitude,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg05

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg05 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: (m), Scale: 0.1, Offset: 0
    pub hl_height: f64,

    /// Range: (m/s), Scale: 0.005, Offset: 0
    pub hl_vel_east: f64,

    /// Range: (m/s), Scale: 0.005, Offset: 0
    pub hl_vel_north: f64,

    /// Range: (m/s), Scale: 0.005, Offset: 0
    pub hl_vel_up: f64,

}



impl Default for HLMsg05 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg05::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg05 {
  type RmwMsg = super::msg::rmw::HLMsg05;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_height: msg.hl_height,
        hl_vel_east: msg.hl_vel_east,
        hl_vel_north: msg.hl_vel_north,
        hl_vel_up: msg.hl_vel_up,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_height: msg.hl_height,
      hl_vel_east: msg.hl_vel_east,
      hl_vel_north: msg.hl_vel_north,
      hl_vel_up: msg.hl_vel_up,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_height: msg.hl_height,
      hl_vel_east: msg.hl_vel_east,
      hl_vel_north: msg.hl_vel_north,
      hl_vel_up: msg.hl_vel_up,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLMsg06

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg06 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== v7 BREAKING CHANGES ==========
    /// NOTE: In v7, hl_pc_temp is renamed to hl_cpu_temp in DBC
    /// For backward compatibility, we keep hl_pc_temp here and map it in the handler
    /// Range: (degC), Scale: 1, Offset: -40 (maps to hl_cpu_temp in v7)
    pub hl_pc_temp: i8,

    /// Range: (%), Scale: 1, Offset: 0
    pub hl_cpu_usage: u8,

    /// Range: (%), Scale: 1, Offset: 0
    pub hl_gpu_usage: u8,

    /// NEW in v7: GPU Temperature Monitoring
    /// Range: (degC), Scale: 1, Offset: -40 - New in v7
    pub hl_gpu_temp: i8,

    /// REMOVED in v7 (kept for backward compatibility, will be 0 in v7):
    /// Range: (%), Scale: 1, Offset: 0 - REMOVED in v7
    pub hl_perception_acc: u8,

    /// Range: (%), Scale: 1, Offset: 0 - REMOVED in v7
    pub hl_localization_acc: u8,

    /// Range: (W), Scale: 1, Offset: 0 - REMOVED in v7
    pub hl_watts_consumed: u16,

    /// Range: (enum), Scale: 1, Offset: 0 - REMOVED in v7
    pub hl_aggressiveness: u8,

}



impl Default for HLMsg06 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLMsg06::default())
  }
}

impl rosidl_runtime_rs::Message for HLMsg06 {
  type RmwMsg = super::msg::rmw::HLMsg06;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hl_pc_temp: msg.hl_pc_temp,
        hl_cpu_usage: msg.hl_cpu_usage,
        hl_gpu_usage: msg.hl_gpu_usage,
        hl_gpu_temp: msg.hl_gpu_temp,
        hl_perception_acc: msg.hl_perception_acc,
        hl_localization_acc: msg.hl_localization_acc,
        hl_watts_consumed: msg.hl_watts_consumed,
        hl_aggressiveness: msg.hl_aggressiveness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hl_pc_temp: msg.hl_pc_temp,
      hl_cpu_usage: msg.hl_cpu_usage,
      hl_gpu_usage: msg.hl_gpu_usage,
      hl_gpu_temp: msg.hl_gpu_temp,
      hl_perception_acc: msg.hl_perception_acc,
      hl_localization_acc: msg.hl_localization_acc,
      hl_watts_consumed: msg.hl_watts_consumed,
      hl_aggressiveness: msg.hl_aggressiveness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hl_pc_temp: msg.hl_pc_temp,
      hl_cpu_usage: msg.hl_cpu_usage,
      hl_gpu_usage: msg.hl_gpu_usage,
      hl_gpu_temp: msg.hl_gpu_temp,
      hl_perception_acc: msg.hl_perception_acc,
      hl_localization_acc: msg.hl_localization_acc,
      hl_watts_consumed: msg.hl_watts_consumed,
      hl_aggressiveness: msg.hl_aggressiveness,
    }
  }
}


// Corresponds to sd_can_msgs__msg__ICEStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ICEStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_actual_gear: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_target_gear_ack: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_actual_throttle: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_target_throttle_ack: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_push_to_pass_req: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_push_to_pass_ack: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_water_press_k_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_available_fuel_l: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_downshift_available: f64,

}



impl Default for ICEStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ICEStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for ICEStatus01 {
  type RmwMsg = super::msg::rmw::ICEStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ice_actual_gear: msg.ice_actual_gear,
        ice_target_gear_ack: msg.ice_target_gear_ack,
        ice_actual_throttle: msg.ice_actual_throttle,
        ice_target_throttle_ack: msg.ice_target_throttle_ack,
        ice_push_to_pass_req: msg.ice_push_to_pass_req,
        ice_push_to_pass_ack: msg.ice_push_to_pass_ack,
        ice_water_press_k_pa: msg.ice_water_press_k_pa,
        ice_available_fuel_l: msg.ice_available_fuel_l,
        ice_downshift_available: msg.ice_downshift_available,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ice_actual_gear: msg.ice_actual_gear,
      ice_target_gear_ack: msg.ice_target_gear_ack,
      ice_actual_throttle: msg.ice_actual_throttle,
      ice_target_throttle_ack: msg.ice_target_throttle_ack,
      ice_push_to_pass_req: msg.ice_push_to_pass_req,
      ice_push_to_pass_ack: msg.ice_push_to_pass_ack,
      ice_water_press_k_pa: msg.ice_water_press_k_pa,
      ice_available_fuel_l: msg.ice_available_fuel_l,
      ice_downshift_available: msg.ice_downshift_available,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ice_actual_gear: msg.ice_actual_gear,
      ice_target_gear_ack: msg.ice_target_gear_ack,
      ice_actual_throttle: msg.ice_actual_throttle,
      ice_target_throttle_ack: msg.ice_target_throttle_ack,
      ice_push_to_pass_req: msg.ice_push_to_pass_req,
      ice_push_to_pass_ack: msg.ice_push_to_pass_ack,
      ice_water_press_k_pa: msg.ice_water_press_k_pa,
      ice_available_fuel_l: msg.ice_available_fuel_l,
      ice_downshift_available: msg.ice_downshift_available,
    }
  }
}


// Corresponds to sd_can_msgs__msg__ICEStatus02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ICEStatus02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_temp_deg_c: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_engine_speed_rpm: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_fuel_press_k_pa: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_water_temp_deg_c: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ice_oil_press_k_pa: f64,

}



impl Default for ICEStatus02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ICEStatus02::default())
  }
}

impl rosidl_runtime_rs::Message for ICEStatus02 {
  type RmwMsg = super::msg::rmw::ICEStatus02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ice_oil_temp_deg_c: msg.ice_oil_temp_deg_c,
        ice_engine_speed_rpm: msg.ice_engine_speed_rpm,
        ice_fuel_press_k_pa: msg.ice_fuel_press_k_pa,
        ice_water_temp_deg_c: msg.ice_water_temp_deg_c,
        ice_oil_press_k_pa: msg.ice_oil_press_k_pa,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ice_oil_temp_deg_c: msg.ice_oil_temp_deg_c,
      ice_engine_speed_rpm: msg.ice_engine_speed_rpm,
      ice_fuel_press_k_pa: msg.ice_fuel_press_k_pa,
      ice_water_temp_deg_c: msg.ice_water_temp_deg_c,
      ice_oil_press_k_pa: msg.ice_oil_press_k_pa,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ice_oil_temp_deg_c: msg.ice_oil_temp_deg_c,
      ice_engine_speed_rpm: msg.ice_engine_speed_rpm,
      ice_fuel_press_k_pa: msg.ice_fuel_press_k_pa,
      ice_water_temp_deg_c: msg.ice_water_temp_deg_c,
      ice_oil_press_k_pa: msg.ice_oil_press_k_pa,
    }
  }
}


// Corresponds to sd_can_msgs__msg__PSAStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PSAStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..10200 (-25.5..25.5 rad), Scale: 0.005, Offset: -25.5
    pub psa_actual_pos_rad: f64,

    /// Range: 0..5100 (-255..255 rad_s), Scale: 0.1, Offset: -255
    pub psa_actual_speed_rad_s: f64,

    /// Range: 0..6400 (-32000..32000 mNm), Scale: 10, Offset: -32000
    pub psa_actual_torque_m_nm: f64,

    /// Range: 0..7 (0..7 enum), Scale: 1, Offset: 0
    pub psa_actual_mode_of_operation: u8,

    /// Range: 0..1000 (-50..50 A), Scale: 0.1, Offset: -50
    pub psa_actual_current_a: f64,

    /// Range: 0..160 (0..64 V), Scale: 0.4, Offset: 0
    pub psa_actual_voltage_v: f64,

}



impl Default for PSAStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PSAStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for PSAStatus01 {
  type RmwMsg = super::msg::rmw::PSAStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        psa_actual_pos_rad: msg.psa_actual_pos_rad,
        psa_actual_speed_rad_s: msg.psa_actual_speed_rad_s,
        psa_actual_torque_m_nm: msg.psa_actual_torque_m_nm,
        psa_actual_mode_of_operation: msg.psa_actual_mode_of_operation,
        psa_actual_current_a: msg.psa_actual_current_a,
        psa_actual_voltage_v: msg.psa_actual_voltage_v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      psa_actual_pos_rad: msg.psa_actual_pos_rad,
      psa_actual_speed_rad_s: msg.psa_actual_speed_rad_s,
      psa_actual_torque_m_nm: msg.psa_actual_torque_m_nm,
      psa_actual_mode_of_operation: msg.psa_actual_mode_of_operation,
      psa_actual_current_a: msg.psa_actual_current_a,
      psa_actual_voltage_v: msg.psa_actual_voltage_v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      psa_actual_pos_rad: msg.psa_actual_pos_rad,
      psa_actual_speed_rad_s: msg.psa_actual_speed_rad_s,
      psa_actual_torque_m_nm: msg.psa_actual_torque_m_nm,
      psa_actual_mode_of_operation: msg.psa_actual_mode_of_operation,
      psa_actual_current_a: msg.psa_actual_current_a,
      psa_actual_voltage_v: msg.psa_actual_voltage_v,
    }
  }
}


// Corresponds to sd_can_msgs__msg__PSAStatus02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PSAStatus02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_target_psa_control_ack: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_actual_pos: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_actual_speed: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub psa_actual_torque: f64,

}



impl Default for PSAStatus02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PSAStatus02::default())
  }
}

impl rosidl_runtime_rs::Message for PSAStatus02 {
  type RmwMsg = super::msg::rmw::PSAStatus02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        psa_target_psa_control_ack: msg.psa_target_psa_control_ack,
        psa_actual_pos: msg.psa_actual_pos,
        psa_actual_speed: msg.psa_actual_speed,
        psa_actual_torque: msg.psa_actual_torque,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      psa_target_psa_control_ack: msg.psa_target_psa_control_ack,
      psa_actual_pos: msg.psa_actual_pos,
      psa_actual_speed: msg.psa_actual_speed,
      psa_actual_torque: msg.psa_actual_torque,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      psa_target_psa_control_ack: msg.psa_target_psa_control_ack,
      psa_actual_pos: msg.psa_actual_pos,
      psa_actual_speed: msg.psa_actual_speed,
      psa_actual_torque: msg.psa_actual_torque,
    }
  }
}


// Corresponds to sd_can_msgs__msg__PdUsStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Power Distribution Unit Status
    /// PDU12 power supply voltage (0..65.535 V)
    pub pdu12_power_supply_voltage_v: f64,

    /// PDU12 total current (0..409 A)
    pub pdu12_total_current_a: f64,

    /// PDU48 power supply voltage (0..65.535 V)
    pub pdu48_power_supply_voltage_v: f64,

    /// PDU48 total current (0..409 A)
    pub pdu48_total_current_a: f64,

    /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
    pub pdu1_power_supply_voltage_v_legacy: f64,

    /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
    pub pdu1_total_current_a_legacy: f64,

    /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
    pub pdu2_power_supply_voltage_v_legacy: f64,

    /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
    pub pdu2_total_current_a_legacy: f64,

}



impl Default for PdUsStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PdUsStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01 {
  type RmwMsg = super::msg::rmw::PdUsStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
        pdu12_total_current_a: msg.pdu12_total_current_a,
        pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
        pdu48_total_current_a: msg.pdu48_total_current_a,
        pdu1_power_supply_voltage_v_legacy: msg.pdu1_power_supply_voltage_v_legacy,
        pdu1_total_current_a_legacy: msg.pdu1_total_current_a_legacy,
        pdu2_power_supply_voltage_v_legacy: msg.pdu2_power_supply_voltage_v_legacy,
        pdu2_total_current_a_legacy: msg.pdu2_total_current_a_legacy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
      pdu12_total_current_a: msg.pdu12_total_current_a,
      pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
      pdu48_total_current_a: msg.pdu48_total_current_a,
      pdu1_power_supply_voltage_v_legacy: msg.pdu1_power_supply_voltage_v_legacy,
      pdu1_total_current_a_legacy: msg.pdu1_total_current_a_legacy,
      pdu2_power_supply_voltage_v_legacy: msg.pdu2_power_supply_voltage_v_legacy,
      pdu2_total_current_a_legacy: msg.pdu2_total_current_a_legacy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
      pdu12_total_current_a: msg.pdu12_total_current_a,
      pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
      pdu48_total_current_a: msg.pdu48_total_current_a,
      pdu1_power_supply_voltage_v_legacy: msg.pdu1_power_supply_voltage_v_legacy,
      pdu1_total_current_a_legacy: msg.pdu1_total_current_a_legacy,
      pdu2_power_supply_voltage_v_legacy: msg.pdu2_power_supply_voltage_v_legacy,
      pdu2_total_current_a_legacy: msg.pdu2_total_current_a_legacy,
    }
  }
}


// Corresponds to sd_can_msgs__msg__PdUsStatus01Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
    pub pdu1_power_supply_voltage_v: f64,

    /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
    pub pdu1_total_current_a: f64,

    /// Range: 0..250 (0..25 V), Scale: 0.1, Offset: 0
    pub pdu2_power_supply_voltage_v: f64,

    /// Range: 0..4090 (0..409 A), Scale: 0.1, Offset: 0
    pub pdu2_total_current_a: f64,

}



impl Default for PdUsStatus01Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PdUsStatus01Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01Legacy {
  type RmwMsg = super::msg::rmw::PdUsStatus01Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pdu1_power_supply_voltage_v: msg.pdu1_power_supply_voltage_v,
        pdu1_total_current_a: msg.pdu1_total_current_a,
        pdu2_power_supply_voltage_v: msg.pdu2_power_supply_voltage_v,
        pdu2_total_current_a: msg.pdu2_total_current_a,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pdu1_power_supply_voltage_v: msg.pdu1_power_supply_voltage_v,
      pdu1_total_current_a: msg.pdu1_total_current_a,
      pdu2_power_supply_voltage_v: msg.pdu2_power_supply_voltage_v,
      pdu2_total_current_a: msg.pdu2_total_current_a,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pdu1_power_supply_voltage_v: msg.pdu1_power_supply_voltage_v,
      pdu1_total_current_a: msg.pdu1_total_current_a,
      pdu2_power_supply_voltage_v: msg.pdu2_power_supply_voltage_v,
      pdu2_total_current_a: msg.pdu2_total_current_a,
    }
  }
}


// Corresponds to sd_can_msgs__msg__PdUsStatus01Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Power Distribution Unit Status
    /// PDU12 power supply voltage (0..65.535 V)
    pub pdu12_power_supply_voltage_v: u16,

    /// PDU12 total current (0..409 A)
    pub pdu12_total_current_a: u16,

    /// PDU48 power supply voltage (0..65.535 V)
    pub pdu48_power_supply_voltage_v: u16,

    /// PDU48 total current (0..409 A)
    pub pdu48_total_current_a: u16,

}



impl Default for PdUsStatus01Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PdUsStatus01Updated::default())
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01Updated {
  type RmwMsg = super::msg::rmw::PdUsStatus01Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
        pdu12_total_current_a: msg.pdu12_total_current_a,
        pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
        pdu48_total_current_a: msg.pdu48_total_current_a,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
      pdu12_total_current_a: msg.pdu12_total_current_a,
      pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
      pdu48_total_current_a: msg.pdu48_total_current_a,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pdu12_power_supply_voltage_v: msg.pdu12_power_supply_voltage_v,
      pdu12_total_current_a: msg.pdu12_total_current_a,
      pdu48_power_supply_voltage_v: msg.pdu48_power_supply_voltage_v,
      pdu48_total_current_a: msg.pdu48_total_current_a,
    }
  }
}


// Corresponds to sd_can_msgs__msg__RcStatus01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_session_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_car_flag: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_track_flag: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_sector_flag: u8,

}



impl Default for RcStatus01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RcStatus01::default())
  }
}

impl rosidl_runtime_rs::Message for RcStatus01 {
  type RmwMsg = super::msg::rmw::RcStatus01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rc_session_type: msg.rc_session_type,
        rc_car_flag: msg.rc_car_flag,
        rc_track_flag: msg.rc_track_flag,
        rc_sector_flag: msg.rc_sector_flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rc_session_type: msg.rc_session_type,
      rc_car_flag: msg.rc_car_flag,
      rc_track_flag: msg.rc_track_flag,
      rc_sector_flag: msg.rc_sector_flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rc_session_type: msg.rc_session_type,
      rc_car_flag: msg.rc_car_flag,
      rc_track_flag: msg.rc_track_flag,
      rc_sector_flag: msg.rc_sector_flag,
    }
  }
}


// Corresponds to sd_can_msgs__msg__SwVersions01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Software version information for BSU and other components
    /// BSU Software Minor Version (0..127)
    pub bsu_sw_minor_version: u8,

    /// BSU Software Major Version (0..31)
    pub bsu_sw_major_version: u8,

    /// BSU Software Build Version (0..1023)
    pub bsu_sw_build_version: u16,

    /// PSA Software Minor Version (0..127)
    pub psa_sw_minor_version: u8,

    /// PSA Software Major Version (0..31)
    pub psa_sw_major_version: u8,

    /// PSA Software Build Version (0..1023)
    pub psa_sw_build_version: u16,

    /// PDU12 Software Version (0..255)
    pub pdu12_sw_version: u8,

    /// PDU48 Software Version (0..255)
    pub pdu48_sw_version: u8,

    /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
    pub pdu1_sw_version_legacy: u8,

    /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
    pub pdu2_sw_version_legacy: u8,

}



impl Default for SwVersions01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwVersions01::default())
  }
}

impl rosidl_runtime_rs::Message for SwVersions01 {
  type RmwMsg = super::msg::rmw::SwVersions01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_sw_minor_version: msg.bsu_sw_minor_version,
        bsu_sw_major_version: msg.bsu_sw_major_version,
        bsu_sw_build_version: msg.bsu_sw_build_version,
        psa_sw_minor_version: msg.psa_sw_minor_version,
        psa_sw_major_version: msg.psa_sw_major_version,
        psa_sw_build_version: msg.psa_sw_build_version,
        pdu12_sw_version: msg.pdu12_sw_version,
        pdu48_sw_version: msg.pdu48_sw_version,
        pdu1_sw_version_legacy: msg.pdu1_sw_version_legacy,
        pdu2_sw_version_legacy: msg.pdu2_sw_version_legacy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu12_sw_version: msg.pdu12_sw_version,
      pdu48_sw_version: msg.pdu48_sw_version,
      pdu1_sw_version_legacy: msg.pdu1_sw_version_legacy,
      pdu2_sw_version_legacy: msg.pdu2_sw_version_legacy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu12_sw_version: msg.pdu12_sw_version,
      pdu48_sw_version: msg.pdu48_sw_version,
      pdu1_sw_version_legacy: msg.pdu1_sw_version_legacy,
      pdu2_sw_version_legacy: msg.pdu2_sw_version_legacy,
    }
  }
}


// Corresponds to sd_can_msgs__msg__SwVersions01Legacy

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
    pub bsu_sw_minor_version: u8,

    /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
    pub bsu_sw_major_version: u8,

    /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
    pub bsu_sw_build_version: u16,

    /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
    pub psa_sw_minor_version: u8,

    /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
    pub psa_sw_major_version: u8,

    /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
    pub psa_sw_build_version: u16,

    /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
    pub pdu1_sw_version: u8,

    /// Range: 0..255 (0..255 uint), Scale: 1, Offset: 0
    pub pdu2_sw_version: u8,

}



impl Default for SwVersions01Legacy {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwVersions01Legacy::default())
  }
}

impl rosidl_runtime_rs::Message for SwVersions01Legacy {
  type RmwMsg = super::msg::rmw::SwVersions01Legacy;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_sw_minor_version: msg.bsu_sw_minor_version,
        bsu_sw_major_version: msg.bsu_sw_major_version,
        bsu_sw_build_version: msg.bsu_sw_build_version,
        psa_sw_minor_version: msg.psa_sw_minor_version,
        psa_sw_major_version: msg.psa_sw_major_version,
        psa_sw_build_version: msg.psa_sw_build_version,
        pdu1_sw_version: msg.pdu1_sw_version,
        pdu2_sw_version: msg.pdu2_sw_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu1_sw_version: msg.pdu1_sw_version,
      pdu2_sw_version: msg.pdu2_sw_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu1_sw_version: msg.pdu1_sw_version,
      pdu2_sw_version: msg.pdu2_sw_version,
    }
  }
}


// Corresponds to sd_can_msgs__msg__SwVersions01Updated

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Software version information for BSU and other components
    /// BSU Software Minor Version (0..127)
    pub bsu_sw_minor_version: u8,

    /// BSU Software Major Version (0..31)
    pub bsu_sw_major_version: u8,

    /// BSU Software Build Version (0..1023)
    pub bsu_sw_build_version: u16,

    /// PSA Software Minor Version (0..127)
    pub psa_sw_minor_version: u8,

    /// PSA Software Major Version (0..31)
    pub psa_sw_major_version: u8,

    /// PSA Software Build Version (0..1023)
    pub psa_sw_build_version: u16,

    /// PDU12 Software Version (0..255)
    pub pdu12_sw_version: u8,

    /// PDU48 Software Version (0..255)
    pub pdu48_sw_version: u8,

}



impl Default for SwVersions01Updated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwVersions01Updated::default())
  }
}

impl rosidl_runtime_rs::Message for SwVersions01Updated {
  type RmwMsg = super::msg::rmw::SwVersions01Updated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_sw_minor_version: msg.bsu_sw_minor_version,
        bsu_sw_major_version: msg.bsu_sw_major_version,
        bsu_sw_build_version: msg.bsu_sw_build_version,
        psa_sw_minor_version: msg.psa_sw_minor_version,
        psa_sw_major_version: msg.psa_sw_major_version,
        psa_sw_build_version: msg.psa_sw_build_version,
        pdu12_sw_version: msg.pdu12_sw_version,
        pdu48_sw_version: msg.pdu48_sw_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu12_sw_version: msg.pdu12_sw_version,
      pdu48_sw_version: msg.pdu48_sw_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_sw_minor_version: msg.bsu_sw_minor_version,
      bsu_sw_major_version: msg.bsu_sw_major_version,
      bsu_sw_build_version: msg.bsu_sw_build_version,
      psa_sw_minor_version: msg.psa_sw_minor_version,
      psa_sw_major_version: msg.psa_sw_major_version,
      psa_sw_build_version: msg.psa_sw_build_version,
      pdu12_sw_version: msg.pdu12_sw_version,
      pdu48_sw_version: msg.pdu48_sw_version,
    }
  }
}


// Corresponds to sd_can_msgs__msg__SwVersions02

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
    pub cba_fl_sw_minor_version: u8,

    /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
    pub cba_fl_sw_major_version: u8,

    /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
    pub cba_fl_sw_build_version: u16,

    /// Range: 0..127 (0..127 uint), Scale: 1, Offset: 0
    pub cba_fr_sw_minor_version: u8,

    /// Range: 0..31 (0..31 uint), Scale: 1, Offset: 0
    pub cba_fr_sw_major_version: u8,

    /// Range: 0..1023 (0..1023 uint), Scale: 1, Offset: 0
    pub cba_fr_sw_build_version: u16,

}



impl Default for SwVersions02 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwVersions02::default())
  }
}

impl rosidl_runtime_rs::Message for SwVersions02 {
  type RmwMsg = super::msg::rmw::SwVersions02;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_fl_sw_minor_version: msg.cba_fl_sw_minor_version,
        cba_fl_sw_major_version: msg.cba_fl_sw_major_version,
        cba_fl_sw_build_version: msg.cba_fl_sw_build_version,
        cba_fr_sw_minor_version: msg.cba_fr_sw_minor_version,
        cba_fr_sw_major_version: msg.cba_fr_sw_major_version,
        cba_fr_sw_build_version: msg.cba_fr_sw_build_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_fl_sw_minor_version: msg.cba_fl_sw_minor_version,
      cba_fl_sw_major_version: msg.cba_fl_sw_major_version,
      cba_fl_sw_build_version: msg.cba_fl_sw_build_version,
      cba_fr_sw_minor_version: msg.cba_fr_sw_minor_version,
      cba_fr_sw_major_version: msg.cba_fr_sw_major_version,
      cba_fr_sw_build_version: msg.cba_fr_sw_build_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_fl_sw_minor_version: msg.cba_fl_sw_minor_version,
      cba_fl_sw_major_version: msg.cba_fl_sw_major_version,
      cba_fl_sw_build_version: msg.cba_fl_sw_build_version,
      cba_fr_sw_minor_version: msg.cba_fr_sw_minor_version,
      cba_fr_sw_major_version: msg.cba_fr_sw_major_version,
      cba_fr_sw_build_version: msg.cba_fr_sw_build_version,
    }
  }
}


// Corresponds to sd_can_msgs__msg__SwVersions03

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions03 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_sw_minor_version: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_sw_major_version: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rl_sw_build_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_sw_minor_version: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_sw_major_version: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cba_rr_sw_build_version: u16,

}



impl Default for SwVersions03 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwVersions03::default())
  }
}

impl rosidl_runtime_rs::Message for SwVersions03 {
  type RmwMsg = super::msg::rmw::SwVersions03;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cba_rl_sw_minor_version: msg.cba_rl_sw_minor_version,
        cba_rl_sw_major_version: msg.cba_rl_sw_major_version,
        cba_rl_sw_build_version: msg.cba_rl_sw_build_version,
        cba_rr_sw_minor_version: msg.cba_rr_sw_minor_version,
        cba_rr_sw_major_version: msg.cba_rr_sw_major_version,
        cba_rr_sw_build_version: msg.cba_rr_sw_build_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cba_rl_sw_minor_version: msg.cba_rl_sw_minor_version,
      cba_rl_sw_major_version: msg.cba_rl_sw_major_version,
      cba_rl_sw_build_version: msg.cba_rl_sw_build_version,
      cba_rr_sw_minor_version: msg.cba_rr_sw_minor_version,
      cba_rr_sw_major_version: msg.cba_rr_sw_major_version,
      cba_rr_sw_build_version: msg.cba_rr_sw_build_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cba_rl_sw_minor_version: msg.cba_rl_sw_minor_version,
      cba_rl_sw_major_version: msg.cba_rl_sw_major_version,
      cba_rl_sw_build_version: msg.cba_rl_sw_build_version,
      cba_rr_sw_minor_version: msg.cba_rr_sw_minor_version,
      cba_rr_sw_major_version: msg.cba_rr_sw_major_version,
      cba_rr_sw_build_version: msg.cba_rr_sw_build_version,
    }
  }
}


// Corresponds to sd_can_msgs__msg__WheelsSpeed01

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelsSpeed01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
    pub wss_speed_fl_rad_s: f64,

    /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
    pub wss_speed_fr_rad_s: f64,

    /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
    pub wss_speed_rl_rad_s: f64,

    /// Range: 0..16380 (0..409.5 rad_s), Scale: 0.025, Offset: 0
    pub wss_speed_rr_rad_s: f64,

}



impl Default for WheelsSpeed01 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelsSpeed01::default())
  }
}

impl rosidl_runtime_rs::Message for WheelsSpeed01 {
  type RmwMsg = super::msg::rmw::WheelsSpeed01;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        wss_speed_fl_rad_s: msg.wss_speed_fl_rad_s,
        wss_speed_fr_rad_s: msg.wss_speed_fr_rad_s,
        wss_speed_rl_rad_s: msg.wss_speed_rl_rad_s,
        wss_speed_rr_rad_s: msg.wss_speed_rr_rad_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      wss_speed_fl_rad_s: msg.wss_speed_fl_rad_s,
      wss_speed_fr_rad_s: msg.wss_speed_fr_rad_s,
      wss_speed_rl_rad_s: msg.wss_speed_rl_rad_s,
      wss_speed_rr_rad_s: msg.wss_speed_rr_rad_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      wss_speed_fl_rad_s: msg.wss_speed_fl_rad_s,
      wss_speed_fr_rad_s: msg.wss_speed_fr_rad_s,
      wss_speed_rl_rad_s: msg.wss_speed_rl_rad_s,
      wss_speed_rr_rad_s: msg.wss_speed_rr_rad_s,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560BadeniaMisc

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560BadeniaMisc {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Lap Time from beacon, Range: -, Scale: 0.001, Offset: 0
    pub lap_time: f64,

    /// 0,0 - 13107,1, Range: -, Scale: 0.1, Offset: 0
    pub lap_distance: f64,

    /// 127 max laps, Range: -, Scale: 1, Offset: 0
    pub lap_number: u8,

    /// 0 - 16.383, Range: -, Scale: 0.001, Offset: 0
    pub battery_voltage: f64,

}



impl Default for Badenia560BadeniaMisc {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560BadeniaMisc::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560BadeniaMisc {
  type RmwMsg = super::msg::rmw::Badenia560BadeniaMisc;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        lap_time: msg.lap_time,
        lap_distance: msg.lap_distance,
        lap_number: msg.lap_number,
        battery_voltage: msg.battery_voltage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      lap_time: msg.lap_time,
      lap_distance: msg.lap_distance,
      lap_number: msg.lap_number,
      battery_voltage: msg.battery_voltage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      lap_time: msg.lap_time,
      lap_distance: msg.lap_distance,
      lap_number: msg.lap_number,
      battery_voltage: msg.battery_voltage,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560BrakeDiskTemp

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560BrakeDiskTemp {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
    pub brake_disk_temp_fl: f64,

    /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
    pub brake_disk_temp_fr: f64,

    /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
    pub brake_disk_temp_rr: f64,

    /// 0,0 - 1000,0, Range: -, Scale: 0.1, Offset: 0
    pub brake_disk_temp_rl: f64,

}



impl Default for Badenia560BrakeDiskTemp {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560BrakeDiskTemp::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560BrakeDiskTemp {
  type RmwMsg = super::msg::rmw::Badenia560BrakeDiskTemp;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        brake_disk_temp_fl: msg.brake_disk_temp_fl,
        brake_disk_temp_fr: msg.brake_disk_temp_fr,
        brake_disk_temp_rr: msg.brake_disk_temp_rr,
        brake_disk_temp_rl: msg.brake_disk_temp_rl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      brake_disk_temp_fl: msg.brake_disk_temp_fl,
      brake_disk_temp_fr: msg.brake_disk_temp_fr,
      brake_disk_temp_rr: msg.brake_disk_temp_rr,
      brake_disk_temp_rl: msg.brake_disk_temp_rl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      brake_disk_temp_fl: msg.brake_disk_temp_fl,
      brake_disk_temp_fr: msg.brake_disk_temp_fr,
      brake_disk_temp_rr: msg.brake_disk_temp_rr,
      brake_disk_temp_rl: msg.brake_disk_temp_rl,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560MLStatus
/// Badenia560 ML Status (NEW in v5)
/// Frame ID: 0x100
/// ML status relay from BSU
/// BSU Prefill Request signals

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560MLStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== BSU PREFILL REQUEST SIGNALS ==========
    /// Relay of BSU prefill request values for all four corners
    /// BSU Prefill Request Front Left, Range: 0..1, Scale: 1, Offset: 0
    pub bsu_prefill_req_fl: u8,

    /// BSU Prefill Request Front Right, Range: 0..1, Scale: 1, Offset: 0
    pub bsu_prefill_req_fr: u8,

    /// BSU Prefill Request Rear Left, Range: 0..1, Scale: 1, Offset: 0
    pub bsu_prefill_req_rl: u8,

    /// BSU Prefill Request Rear Right, Range: 0..1, Scale: 1, Offset: 0
    pub bsu_prefill_req_rr: u8,

}



impl Default for Badenia560MLStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560MLStatus::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560MLStatus {
  type RmwMsg = super::msg::rmw::Badenia560MLStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bsu_prefill_req_fl: msg.bsu_prefill_req_fl,
        bsu_prefill_req_fr: msg.bsu_prefill_req_fr,
        bsu_prefill_req_rl: msg.bsu_prefill_req_rl,
        bsu_prefill_req_rr: msg.bsu_prefill_req_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bsu_prefill_req_fl: msg.bsu_prefill_req_fl,
      bsu_prefill_req_fr: msg.bsu_prefill_req_fr,
      bsu_prefill_req_rl: msg.bsu_prefill_req_rl,
      bsu_prefill_req_rr: msg.bsu_prefill_req_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bsu_prefill_req_fl: msg.bsu_prefill_req_fl,
      bsu_prefill_req_fr: msg.bsu_prefill_req_fr,
      bsu_prefill_req_rl: msg.bsu_prefill_req_rl,
      bsu_prefill_req_rr: msg.bsu_prefill_req_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560Misc4
/// Badenia560 Misc4 (NEW in v5)
/// Frame ID: 0x453
/// TPMS Diagnostics - Transmission check and alive counters

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Misc4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== TPMS TRANSMISSION CHECK FLAGS ==========
    /// 0 = TPMS sensor is transmitting, 1 = Not transmitting
    /// Front Left TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
    pub bad_tpms_check_fl: u8,

    /// Front Right TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
    pub bad_tpms_check_fr: u8,

    /// Rear Left TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
    pub bad_tpms_check_rl: u8,

    /// Rear Right TPMS Transmission Check, Range: 0..1, Scale: 1, Offset: 0
    pub bad_tpms_check_rr: u8,

    /// ========== TPMS ALIVE COUNTERS ==========
    /// Alive signal from each TPMS sensor (increments with each transmission)
    /// Front Left TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
    pub bad_tpms_tx_count_fl: u8,

    /// Front Right TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
    pub bad_tpms_tx_count_fr: u8,

    /// Rear Left TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
    pub bad_tpms_tx_count_rl: u8,

    /// Rear Right TPMS Alive Count, Range: 0..255, Scale: 1, Offset: 0
    pub bad_tpms_tx_count_rr: u8,

}



impl Default for Badenia560Misc4 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560Misc4::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560Misc4 {
  type RmwMsg = super::msg::rmw::Badenia560Misc4;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bad_tpms_check_fl: msg.bad_tpms_check_fl,
        bad_tpms_check_fr: msg.bad_tpms_check_fr,
        bad_tpms_check_rl: msg.bad_tpms_check_rl,
        bad_tpms_check_rr: msg.bad_tpms_check_rr,
        bad_tpms_tx_count_fl: msg.bad_tpms_tx_count_fl,
        bad_tpms_tx_count_fr: msg.bad_tpms_tx_count_fr,
        bad_tpms_tx_count_rl: msg.bad_tpms_tx_count_rl,
        bad_tpms_tx_count_rr: msg.bad_tpms_tx_count_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bad_tpms_check_fl: msg.bad_tpms_check_fl,
      bad_tpms_check_fr: msg.bad_tpms_check_fr,
      bad_tpms_check_rl: msg.bad_tpms_check_rl,
      bad_tpms_check_rr: msg.bad_tpms_check_rr,
      bad_tpms_tx_count_fl: msg.bad_tpms_tx_count_fl,
      bad_tpms_tx_count_fr: msg.bad_tpms_tx_count_fr,
      bad_tpms_tx_count_rl: msg.bad_tpms_tx_count_rl,
      bad_tpms_tx_count_rr: msg.bad_tpms_tx_count_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bad_tpms_check_fl: msg.bad_tpms_check_fl,
      bad_tpms_check_fr: msg.bad_tpms_check_fr,
      bad_tpms_check_rl: msg.bad_tpms_check_rl,
      bad_tpms_check_rr: msg.bad_tpms_check_rr,
      bad_tpms_tx_count_fl: msg.bad_tpms_tx_count_fl,
      bad_tpms_tx_count_fr: msg.bad_tpms_tx_count_fr,
      bad_tpms_tx_count_rl: msg.bad_tpms_tx_count_rl,
      bad_tpms_tx_count_rr: msg.bad_tpms_tx_count_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560Misc5
/// Badenia560 Misc5 (NEW in v5)
/// Frame ID: 0x454
/// TPMS Lifetime Counters - Total transmissions from each sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Misc5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== TPMS LIFETIME TRANSMISSION COUNTERS ==========
    /// Total number of transmissions from each TPMS sensor over its lifetime
    /// Front Left TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
    pub bad_tpms_tx_life_fl: u16,

    /// Front Right TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
    pub bad_tpms_tx_life_fr: u16,

    /// Rear Left TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
    pub bad_tpms_tx_life_rl: u16,

    /// Rear Right TPMS Lifetime Count, Range: 0..4096, Scale: 1, Offset: 0
    pub bad_tpms_tx_life_rr: u16,

}



impl Default for Badenia560Misc5 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560Misc5::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560Misc5 {
  type RmwMsg = super::msg::rmw::Badenia560Misc5;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bad_tpms_tx_life_fl: msg.bad_tpms_tx_life_fl,
        bad_tpms_tx_life_fr: msg.bad_tpms_tx_life_fr,
        bad_tpms_tx_life_rl: msg.bad_tpms_tx_life_rl,
        bad_tpms_tx_life_rr: msg.bad_tpms_tx_life_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bad_tpms_tx_life_fl: msg.bad_tpms_tx_life_fl,
      bad_tpms_tx_life_fr: msg.bad_tpms_tx_life_fr,
      bad_tpms_tx_life_rl: msg.bad_tpms_tx_life_rl,
      bad_tpms_tx_life_rr: msg.bad_tpms_tx_life_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bad_tpms_tx_life_fl: msg.bad_tpms_tx_life_fl,
      bad_tpms_tx_life_fr: msg.bad_tpms_tx_life_fr,
      bad_tpms_tx_life_rl: msg.bad_tpms_tx_life_rl,
      bad_tpms_tx_life_rr: msg.bad_tpms_tx_life_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560Pitot

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -, Scale: 0.01, Offset: 0
    pub pitot_front_press: f64,

    /// Range: -, Scale: 0.01, Offset: 0
    pub pitot_yaw_press: f64,

    /// Range: -, Scale: 0.01, Offset: 600
    pub pitot_absolute_press: f64,

    /// Range: -, Scale: 0.1, Offset: 0
    pub pitot_air_temp: f64,

}



impl Default for Badenia560Pitot {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560Pitot::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot {
  type RmwMsg = super::msg::rmw::Badenia560Pitot;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pitot_front_press: msg.pitot_front_press,
        pitot_yaw_press: msg.pitot_yaw_press,
        pitot_absolute_press: msg.pitot_absolute_press,
        pitot_air_temp: msg.pitot_air_temp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pitot_front_press: msg.pitot_front_press,
      pitot_yaw_press: msg.pitot_yaw_press,
      pitot_absolute_press: msg.pitot_absolute_press,
      pitot_air_temp: msg.pitot_air_temp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pitot_front_press: msg.pitot_front_press,
      pitot_yaw_press: msg.pitot_yaw_press,
      pitot_absolute_press: msg.pitot_absolute_press,
      pitot_air_temp: msg.pitot_air_temp,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560Pitot0

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot0 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -, Scale: 0.01, Offset: 0
    pub pitot_front_press: f64,

    /// Range: -, Scale: 0.01, Offset: 0
    pub pitot_yaw_press: f64,

    /// Range: -, Scale: 0.1, Offset: 0
    pub pitot_yaw_angle: f64,

    /// Range: -, Scale: 0.01, Offset: 600
    pub pitot_absolute_press: f64,

}



impl Default for Badenia560Pitot0 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560Pitot0::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot0 {
  type RmwMsg = super::msg::rmw::Badenia560Pitot0;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pitot_front_press: msg.pitot_front_press,
        pitot_yaw_press: msg.pitot_yaw_press,
        pitot_yaw_angle: msg.pitot_yaw_angle,
        pitot_absolute_press: msg.pitot_absolute_press,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pitot_front_press: msg.pitot_front_press,
      pitot_yaw_press: msg.pitot_yaw_press,
      pitot_yaw_angle: msg.pitot_yaw_angle,
      pitot_absolute_press: msg.pitot_absolute_press,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pitot_front_press: msg.pitot_front_press,
      pitot_yaw_press: msg.pitot_yaw_press,
      pitot_yaw_angle: msg.pitot_yaw_angle,
      pitot_absolute_press: msg.pitot_absolute_press,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560Pitot1
/// Message for Badenia560 Pitot Packet 1

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Air temperature in degrees Celsius
    pub pitot_air_temp: f64,

    /// Board temperature in degrees Celsius
    pub pitot_board_temp: f64,

}



impl Default for Badenia560Pitot1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560Pitot1::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot1 {
  type RmwMsg = super::msg::rmw::Badenia560Pitot1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pitot_air_temp: msg.pitot_air_temp,
        pitot_board_temp: msg.pitot_board_temp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pitot_air_temp: msg.pitot_air_temp,
      pitot_board_temp: msg.pitot_board_temp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pitot_air_temp: msg.pitot_air_temp,
      pitot_board_temp: msg.pitot_board_temp,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560PowertrainMisc

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainMisc {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== v5 NEW: Battery Monitoring ==========
    /// 12V Battery State of Charge, Range: 0..100, Scale: 1, Offset: 0
    pub b12_soc: u8,

    /// 48V Battery State of Charge, Range: 0..100, Scale: 1, Offset: 0
    pub b48_soc: u8,

    /// 12V Battery Temperature, Range: -, Scale: 1, Offset: 0
    pub b12_temp: u8,

    /// 48V Battery Temperature, Range: -, Scale: 1, Offset: 0
    pub b48_temp: u8,

    /// ========== Existing Signals ==========
    /// Throttle valve position, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
    pub throttle_position: f64,

    /// Rev limiter, Range: -, Scale: 1, Offset: 0
    pub engine_speed_limit: f64,

    /// Estimated fuel usage, Range: -, Scale: 0.01, Offset: 0
    pub fuel_used_kg: f64,

}



impl Default for Badenia560PowertrainMisc {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560PowertrainMisc::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainMisc {
  type RmwMsg = super::msg::rmw::Badenia560PowertrainMisc;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        b12_soc: msg.b12_soc,
        b48_soc: msg.b48_soc,
        b12_temp: msg.b12_temp,
        b48_temp: msg.b48_temp,
        throttle_position: msg.throttle_position,
        engine_speed_limit: msg.engine_speed_limit,
        fuel_used_kg: msg.fuel_used_kg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      b12_soc: msg.b12_soc,
      b48_soc: msg.b48_soc,
      b12_temp: msg.b12_temp,
      b48_temp: msg.b48_temp,
      throttle_position: msg.throttle_position,
      engine_speed_limit: msg.engine_speed_limit,
      fuel_used_kg: msg.fuel_used_kg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      b12_soc: msg.b12_soc,
      b48_soc: msg.b48_soc,
      b12_temp: msg.b12_temp,
      b48_temp: msg.b48_temp,
      throttle_position: msg.throttle_position,
      engine_speed_limit: msg.engine_speed_limit,
      fuel_used_kg: msg.fuel_used_kg,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560PowertrainPress

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainPress {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== v5 NEW: Front Pushrod Strain ==========
    /// Front Left Pushrod Strain, Range: -, Scale: 1, Offset: 32768
    pub m_pushrod_strain_fl: f64,

    /// Front Right Pushrod Strain, Range: -, Scale: 1, Offset: 32768
    pub m_pushrod_strain_fr: f64,

    /// ========== Existing Signals ==========
    /// Engine oil pressure, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
    pub engine_oil_pressure: f64,

    /// Engine water pressure, Range: -, Scale: 0.1, Offset: 0 (removed in DBC v5)
    pub coolant_pressure: f64,

    /// GDI pressure, Range: -, Scale: 1, Offset: 0
    pub fuel_press_direct: f64,

    /// Boost pressure, Range: -, Scale: 0.1, Offset: 0
    pub boost_pressure: f64,

}



impl Default for Badenia560PowertrainPress {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560PowertrainPress::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainPress {
  type RmwMsg = super::msg::rmw::Badenia560PowertrainPress;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        m_pushrod_strain_fl: msg.m_pushrod_strain_fl,
        m_pushrod_strain_fr: msg.m_pushrod_strain_fr,
        engine_oil_pressure: msg.engine_oil_pressure,
        coolant_pressure: msg.coolant_pressure,
        fuel_press_direct: msg.fuel_press_direct,
        boost_pressure: msg.boost_pressure,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      m_pushrod_strain_fl: msg.m_pushrod_strain_fl,
      m_pushrod_strain_fr: msg.m_pushrod_strain_fr,
      engine_oil_pressure: msg.engine_oil_pressure,
      coolant_pressure: msg.coolant_pressure,
      fuel_press_direct: msg.fuel_press_direct,
      boost_pressure: msg.boost_pressure,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      m_pushrod_strain_fl: msg.m_pushrod_strain_fl,
      m_pushrod_strain_fr: msg.m_pushrod_strain_fr,
      engine_oil_pressure: msg.engine_oil_pressure,
      coolant_pressure: msg.coolant_pressure,
      fuel_press_direct: msg.fuel_press_direct,
      boost_pressure: msg.boost_pressure,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560PowertrainTemp

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainTemp {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== v5 NEW: Rear Pushrod Strain ==========
    /// Rear Left Pushrod Strain, Range: -, Scale: 1, Offset: 32768
    pub m_pushrod_strain_rl: f64,

    /// Rear Right Pushrod Strain, Range: -, Scale: 1, Offset: 32768
    pub m_pushrod_strain_rr: f64,

    /// ========== v5 NEW: BSU Diagnostics ==========
    /// BSU Prefill Diagnostics, Range: 0..15, Scale: 1, Offset: 0
    pub bsu_prefill_diag: u8,

    /// ========== Existing Signals ==========
    /// Engine oil temperature, Range: -, Scale: 1, Offset: -40
    pub engine_oil_temperature: f64,

    /// Engine water temperature, Range: -, Scale: 1, Offset: -40
    pub coolant_temperature: f64,

    /// Gearbox oil temperature, Range: -, Scale: 0.1, Offset: 0
    pub gear_box_oil_temp: f64,

}



impl Default for Badenia560PowertrainTemp {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560PowertrainTemp::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainTemp {
  type RmwMsg = super::msg::rmw::Badenia560PowertrainTemp;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        m_pushrod_strain_rl: msg.m_pushrod_strain_rl,
        m_pushrod_strain_rr: msg.m_pushrod_strain_rr,
        bsu_prefill_diag: msg.bsu_prefill_diag,
        engine_oil_temperature: msg.engine_oil_temperature,
        coolant_temperature: msg.coolant_temperature,
        gear_box_oil_temp: msg.gear_box_oil_temp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      m_pushrod_strain_rl: msg.m_pushrod_strain_rl,
      m_pushrod_strain_rr: msg.m_pushrod_strain_rr,
      bsu_prefill_diag: msg.bsu_prefill_diag,
      engine_oil_temperature: msg.engine_oil_temperature,
      coolant_temperature: msg.coolant_temperature,
      gear_box_oil_temp: msg.gear_box_oil_temp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      m_pushrod_strain_rl: msg.m_pushrod_strain_rl,
      m_pushrod_strain_rr: msg.m_pushrod_strain_rr,
      bsu_prefill_diag: msg.bsu_prefill_diag,
      engine_oil_temperature: msg.engine_oil_temperature,
      coolant_temperature: msg.coolant_temperature,
      gear_box_oil_temp: msg.gear_box_oil_temp,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560RideFront

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560RideFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub ride_height_front: f64,

    /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_f3rd: f64,

    /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_fl: f64,

    /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_fr: f64,

}



impl Default for Badenia560RideFront {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560RideFront::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560RideFront {
  type RmwMsg = super::msg::rmw::Badenia560RideFront;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ride_height_front: msg.ride_height_front,
        damper_stroke_f3rd: msg.damper_stroke_f3rd,
        damper_stroke_fl: msg.damper_stroke_fl,
        damper_stroke_fr: msg.damper_stroke_fr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ride_height_front: msg.ride_height_front,
      damper_stroke_f3rd: msg.damper_stroke_f3rd,
      damper_stroke_fl: msg.damper_stroke_fl,
      damper_stroke_fr: msg.damper_stroke_fr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ride_height_front: msg.ride_height_front,
      damper_stroke_f3rd: msg.damper_stroke_f3rd,
      damper_stroke_fl: msg.damper_stroke_fl,
      damper_stroke_fr: msg.damper_stroke_fr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560RideRear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560RideRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub ride_height_rear: f64,

    /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_r3rd: f64,

    /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_rl: f64,

    /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
    pub damper_stroke_rr: f64,

}



impl Default for Badenia560RideRear {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560RideRear::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560RideRear {
  type RmwMsg = super::msg::rmw::Badenia560RideRear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ride_height_rear: msg.ride_height_rear,
        damper_stroke_r3rd: msg.damper_stroke_r3rd,
        damper_stroke_rl: msg.damper_stroke_rl,
        damper_stroke_rr: msg.damper_stroke_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ride_height_rear: msg.ride_height_rear,
      damper_stroke_r3rd: msg.damper_stroke_r3rd,
      damper_stroke_rl: msg.damper_stroke_rl,
      damper_stroke_rr: msg.damper_stroke_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ride_height_rear: msg.ride_height_rear,
      damper_stroke_r3rd: msg.damper_stroke_r3rd,
      damper_stroke_rl: msg.damper_stroke_rl,
      damper_stroke_rr: msg.damper_stroke_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560TpmsFront

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TpmsFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0-204,7°C, Range: -, Scale: 0.1, Offset: 0
    pub tpr4_temp_fl: f64,

    /// 0,0-204,7°C, Range: -, Scale: 0.1, Offset: 0
    pub tpr4_temp_fr: f64,

    /// 0,0-6500,0mbar, Range: -, Scale: 0.1, Offset: 0
    pub tpr4_abs_press_fr: f64,

    /// 0,0-6500,0mbar, Range: -, Scale: 0.1, Offset: 0
    pub tpr4_abs_press_fl: f64,

}



impl Default for Badenia560TpmsFront {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560TpmsFront::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560TpmsFront {
  type RmwMsg = super::msg::rmw::Badenia560TpmsFront;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        tpr4_temp_fl: msg.tpr4_temp_fl,
        tpr4_temp_fr: msg.tpr4_temp_fr,
        tpr4_abs_press_fr: msg.tpr4_abs_press_fr,
        tpr4_abs_press_fl: msg.tpr4_abs_press_fl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      tpr4_temp_fl: msg.tpr4_temp_fl,
      tpr4_temp_fr: msg.tpr4_temp_fr,
      tpr4_abs_press_fr: msg.tpr4_abs_press_fr,
      tpr4_abs_press_fl: msg.tpr4_abs_press_fl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      tpr4_temp_fl: msg.tpr4_temp_fl,
      tpr4_temp_fr: msg.tpr4_temp_fr,
      tpr4_abs_press_fr: msg.tpr4_abs_press_fr,
      tpr4_abs_press_fl: msg.tpr4_abs_press_fl,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560TpmsRear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TpmsRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -, Scale: 0.1, Offset: 0
    pub tpr4_temp_rl: f64,

    /// Range: -, Scale: 0.1, Offset: 0
    pub tpr4_temp_rr: f64,

    /// Range: -, Scale: 0.1, Offset: 0
    pub tpr4_abs_press_rl: f64,

    /// Range: -, Scale: 0.1, Offset: 0
    pub tpr4_abs_press_rr: f64,

}



impl Default for Badenia560TpmsRear {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560TpmsRear::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560TpmsRear {
  type RmwMsg = super::msg::rmw::Badenia560TpmsRear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        tpr4_temp_rl: msg.tpr4_temp_rl,
        tpr4_temp_rr: msg.tpr4_temp_rr,
        tpr4_abs_press_rl: msg.tpr4_abs_press_rl,
        tpr4_abs_press_rr: msg.tpr4_abs_press_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      tpr4_temp_rl: msg.tpr4_temp_rl,
      tpr4_temp_rr: msg.tpr4_temp_rr,
      tpr4_abs_press_rl: msg.tpr4_abs_press_rl,
      tpr4_abs_press_rr: msg.tpr4_abs_press_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      tpr4_temp_rl: msg.tpr4_temp_rl,
      tpr4_temp_rr: msg.tpr4_temp_rr,
      tpr4_abs_press_rl: msg.tpr4_abs_press_rl,
      tpr4_abs_press_rr: msg.tpr4_abs_press_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560TyreSurfaceTempFront

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TyreSurfaceTempFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub outer_fl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub center_fl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub inner_fl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub outer_fr: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub center_fr: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub inner_fr: f64,

}



impl Default for Badenia560TyreSurfaceTempFront {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560TyreSurfaceTempFront::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560TyreSurfaceTempFront {
  type RmwMsg = super::msg::rmw::Badenia560TyreSurfaceTempFront;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        outer_fl: msg.outer_fl,
        center_fl: msg.center_fl,
        inner_fl: msg.inner_fl,
        outer_fr: msg.outer_fr,
        center_fr: msg.center_fr,
        inner_fr: msg.inner_fr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      outer_fl: msg.outer_fl,
      center_fl: msg.center_fl,
      inner_fl: msg.inner_fl,
      outer_fr: msg.outer_fr,
      center_fr: msg.center_fr,
      inner_fr: msg.inner_fr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      outer_fl: msg.outer_fl,
      center_fl: msg.center_fl,
      inner_fl: msg.inner_fl,
      outer_fr: msg.outer_fr,
      center_fr: msg.center_fr,
      inner_fr: msg.inner_fr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560TyreSurfaceTempRear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TyreSurfaceTempRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub outer_rl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub center_rl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub inner_rl: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub outer_rr: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub center_rr: f64,

    /// 0,0 - 102,3°C, Range: -, Scale: 0.1, Offset: 0
    pub inner_rr: f64,

}



impl Default for Badenia560TyreSurfaceTempRear {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560TyreSurfaceTempRear::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560TyreSurfaceTempRear {
  type RmwMsg = super::msg::rmw::Badenia560TyreSurfaceTempRear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        outer_rl: msg.outer_rl,
        center_rl: msg.center_rl,
        inner_rl: msg.inner_rl,
        outer_rr: msg.outer_rr,
        center_rr: msg.center_rr,
        inner_rr: msg.inner_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      outer_rl: msg.outer_rl,
      center_rl: msg.center_rl,
      inner_rl: msg.inner_rl,
      outer_rr: msg.outer_rr,
      center_rr: msg.center_rr,
      inner_rr: msg.inner_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      outer_rl: msg.outer_rl,
      center_rl: msg.center_rl,
      inner_rl: msg.inner_rl,
      outer_rr: msg.outer_rr,
      center_rr: msg.center_rr,
      inner_rr: msg.inner_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560WheelLoad

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560WheelLoad {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
    pub load_wheel_fl: f64,

    /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
    pub load_wheel_fr: f64,

    /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
    pub load_wheel_rr: f64,

    /// -200,0 - 1438,3, Range: -, Scale: 0.1, Offset: -200
    pub load_wheel_rl: f64,

}



impl Default for Badenia560WheelLoad {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560WheelLoad::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560WheelLoad {
  type RmwMsg = super::msg::rmw::Badenia560WheelLoad;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        load_wheel_fl: msg.load_wheel_fl,
        load_wheel_fr: msg.load_wheel_fr,
        load_wheel_rr: msg.load_wheel_rr,
        load_wheel_rl: msg.load_wheel_rl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      load_wheel_fl: msg.load_wheel_fl,
      load_wheel_fr: msg.load_wheel_fr,
      load_wheel_rr: msg.load_wheel_rr,
      load_wheel_rl: msg.load_wheel_rl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      load_wheel_fl: msg.load_wheel_fl,
      load_wheel_fr: msg.load_wheel_fr,
      load_wheel_rr: msg.load_wheel_rr,
      load_wheel_rl: msg.load_wheel_rl,
    }
  }
}


// Corresponds to sd_can_msgs__msg__Badenia560ZAccelBody

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560ZAccelBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -, Scale: 0.001, Offset: 0
    pub gz_body_fr: f64,

    /// Range: -, Scale: 0.001, Offset: 0
    pub gz_body_rr: f64,

}



impl Default for Badenia560ZAccelBody {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Badenia560ZAccelBody::default())
  }
}

impl rosidl_runtime_rs::Message for Badenia560ZAccelBody {
  type RmwMsg = super::msg::rmw::Badenia560ZAccelBody;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        gz_body_fr: msg.gz_body_fr,
        gz_body_rr: msg.gz_body_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      gz_body_fr: msg.gz_body_fr,
      gz_body_rr: msg.gz_body_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      gz_body_fr: msg.gz_body_fr,
      gz_body_rr: msg.gz_body_rr,
    }
  }
}


// Corresponds to sd_can_msgs__msg__HLPCInfo1
/// HLPC Info1 (NEW in v5)
/// Frame ID: 0x700
/// High-Level Perception Computer sensor status information
/// Reports status of perception sensors (lidars, radars, GPS)
/// Frequency: 1 Hz

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLPCInfo1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// ========== NETWORK STATUS ==========
    /// Network ping time, Range: -, Scale: 1, Offset: 0, Freq: 1 Hz
    pub hlpc_network_ping: u16,

    /// ========== LIDAR STATUS ==========
    /// Status values: 0x00 = Inactive, 0x01 = Active, 0x02 = Error, 0x03 = Reserved
    /// Left Lidar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_lidar_status_left: u8,

    /// Front Lidar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_lidar_status_front: u8,

    /// Right Lidar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_lidar_status_right: u8,

    /// ========== RADAR STATUS ==========
    /// Status values: 0x00 = Inactive, 0x01 = Active, 0x02 = Error, 0x03 = Reserved
    /// Front Radar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_radar_status_front: u8,

    /// Left Radar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_radar_status_left: u8,

    /// Right Radar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_radar_status_right: u8,

    /// Rear Radar Status, Range: 0..3, Scale: 1, Offset: 0
    pub hlpc_radar_status_rear: u8,

    /// ========== GPS STATUS ==========
    /// VectorNav GPS Fix Status, Range: 0..8, Scale: 1, Offset: 0
    pub hlpc_vector_nav_fix: u8,

    /// ========== ALIVE SIGNAL ==========
    /// HLPC CAN4 Alive Counter, Range: 0..15, Scale: 1, Offset: 0
    pub hlpc_alive_c4: u8,

}



impl Default for HLPCInfo1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HLPCInfo1::default())
  }
}

impl rosidl_runtime_rs::Message for HLPCInfo1 {
  type RmwMsg = super::msg::rmw::HLPCInfo1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hlpc_network_ping: msg.hlpc_network_ping,
        hlpc_lidar_status_left: msg.hlpc_lidar_status_left,
        hlpc_lidar_status_front: msg.hlpc_lidar_status_front,
        hlpc_lidar_status_right: msg.hlpc_lidar_status_right,
        hlpc_radar_status_front: msg.hlpc_radar_status_front,
        hlpc_radar_status_left: msg.hlpc_radar_status_left,
        hlpc_radar_status_right: msg.hlpc_radar_status_right,
        hlpc_radar_status_rear: msg.hlpc_radar_status_rear,
        hlpc_vector_nav_fix: msg.hlpc_vector_nav_fix,
        hlpc_alive_c4: msg.hlpc_alive_c4,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hlpc_network_ping: msg.hlpc_network_ping,
      hlpc_lidar_status_left: msg.hlpc_lidar_status_left,
      hlpc_lidar_status_front: msg.hlpc_lidar_status_front,
      hlpc_lidar_status_right: msg.hlpc_lidar_status_right,
      hlpc_radar_status_front: msg.hlpc_radar_status_front,
      hlpc_radar_status_left: msg.hlpc_radar_status_left,
      hlpc_radar_status_right: msg.hlpc_radar_status_right,
      hlpc_radar_status_rear: msg.hlpc_radar_status_rear,
      hlpc_vector_nav_fix: msg.hlpc_vector_nav_fix,
      hlpc_alive_c4: msg.hlpc_alive_c4,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hlpc_network_ping: msg.hlpc_network_ping,
      hlpc_lidar_status_left: msg.hlpc_lidar_status_left,
      hlpc_lidar_status_front: msg.hlpc_lidar_status_front,
      hlpc_lidar_status_right: msg.hlpc_lidar_status_right,
      hlpc_radar_status_front: msg.hlpc_radar_status_front,
      hlpc_radar_status_left: msg.hlpc_radar_status_left,
      hlpc_radar_status_right: msg.hlpc_radar_status_right,
      hlpc_radar_status_rear: msg.hlpc_radar_status_rear,
      hlpc_vector_nav_fix: msg.hlpc_vector_nav_fix,
      hlpc_alive_c4: msg.hlpc_alive_c4,
    }
  }
}


// Corresponds to sd_can_msgs__msg__MM710TX1ZAY

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX1ZAY {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Fields from DBC file in order (by bit position)
    /// MM710_CRC_TX1 (56|8)
    pub crc: u8,

    /// MM710_AY_STAT (52|4)
    pub ay_stat: u8,

    /// MM710_MSG_CNT_TX1 (48|4)
    pub msg_cnt: u8,

    /// MM710_AccY (32|16) in G
    pub ay: f64,

    /// MM710_TEMP_RATE_Z (24|8) in °C
    pub temp_rate_z: f64,

    /// MM710_YawRate_STAT (20|4)
    pub yaw_rate_stat: u8,

    /// MM710_CLU_STAT (16|4)
    pub clu_stat: u8,

    /// MM710_YawRate (0|16) in °/s
    pub yaw_rate: f64,

}



impl Default for MM710TX1ZAY {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MM710TX1ZAY::default())
  }
}

impl rosidl_runtime_rs::Message for MM710TX1ZAY {
  type RmwMsg = super::msg::rmw::MM710TX1ZAY;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        crc: msg.crc,
        ay_stat: msg.ay_stat,
        msg_cnt: msg.msg_cnt,
        ay: msg.ay,
        temp_rate_z: msg.temp_rate_z,
        yaw_rate_stat: msg.yaw_rate_stat,
        clu_stat: msg.clu_stat,
        yaw_rate: msg.yaw_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      crc: msg.crc,
      ay_stat: msg.ay_stat,
      msg_cnt: msg.msg_cnt,
      ay: msg.ay,
      temp_rate_z: msg.temp_rate_z,
      yaw_rate_stat: msg.yaw_rate_stat,
      clu_stat: msg.clu_stat,
      yaw_rate: msg.yaw_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      crc: msg.crc,
      ay_stat: msg.ay_stat,
      msg_cnt: msg.msg_cnt,
      ay: msg.ay,
      temp_rate_z: msg.temp_rate_z,
      yaw_rate_stat: msg.yaw_rate_stat,
      clu_stat: msg.clu_stat,
      yaw_rate: msg.yaw_rate,
    }
  }
}


// Corresponds to sd_can_msgs__msg__MM710TX2XAX

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX2XAX {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Fields from DBC file in order (by bit position)
    /// MM710_CRC_TX2 (56|8)
    pub crc: u8,

    /// MM710_AX_STAT (52|4)
    pub ax_stat: u8,

    /// MM710_MSG_CNT_TX2 (48|4)
    pub msg_cnt: u8,

    /// MM710_AccX (32|16) in G
    pub ax: f64,

    /// MM710_CLU_DIAG (24|8)
    pub clu_diag: u8,

    /// MM710_RollRate_STAT (20|4)
    pub roll_rate_stat: u8,

    /// MM710_CLU_STAT5 (16|4)
    pub clu_stat: u8,

    /// MM710_RollRate (0|16) in °/s
    pub roll_rate: f64,

}



impl Default for MM710TX2XAX {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MM710TX2XAX::default())
  }
}

impl rosidl_runtime_rs::Message for MM710TX2XAX {
  type RmwMsg = super::msg::rmw::MM710TX2XAX;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        crc: msg.crc,
        ax_stat: msg.ax_stat,
        msg_cnt: msg.msg_cnt,
        ax: msg.ax,
        clu_diag: msg.clu_diag,
        roll_rate_stat: msg.roll_rate_stat,
        clu_stat: msg.clu_stat,
        roll_rate: msg.roll_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      crc: msg.crc,
      ax_stat: msg.ax_stat,
      msg_cnt: msg.msg_cnt,
      ax: msg.ax,
      clu_diag: msg.clu_diag,
      roll_rate_stat: msg.roll_rate_stat,
      clu_stat: msg.clu_stat,
      roll_rate: msg.roll_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      crc: msg.crc,
      ax_stat: msg.ax_stat,
      msg_cnt: msg.msg_cnt,
      ax: msg.ax,
      clu_diag: msg.clu_diag,
      roll_rate_stat: msg.roll_rate_stat,
      clu_stat: msg.clu_stat,
      roll_rate: msg.roll_rate,
    }
  }
}


// Corresponds to sd_can_msgs__msg__MM710TX3YAZ

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX3YAZ {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Fields from DBC file in order (by bit position)
    /// MM710_CRC_TX3 (56|8)
    pub crc: u8,

    /// MM710_AZ_STAT (52|4)
    pub az_stat: u8,

    /// MM710_MSG_CNT_TX3 (48|4)
    pub msg_cnt: u8,

    /// MM710_AccZ (32|16) in G
    pub az: f64,

    /// MM710_PitchRate_STAT (20|4)
    pub pitch_rate_stat: u8,

    /// MM710_HW_Index (16|4)
    pub hw_index: i8,

    /// MM710_PitchRate (0|16) in °/s
    pub pitch_rate: f64,

}



impl Default for MM710TX3YAZ {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MM710TX3YAZ::default())
  }
}

impl rosidl_runtime_rs::Message for MM710TX3YAZ {
  type RmwMsg = super::msg::rmw::MM710TX3YAZ;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        crc: msg.crc,
        az_stat: msg.az_stat,
        msg_cnt: msg.msg_cnt,
        az: msg.az,
        pitch_rate_stat: msg.pitch_rate_stat,
        hw_index: msg.hw_index,
        pitch_rate: msg.pitch_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      crc: msg.crc,
      az_stat: msg.az_stat,
      msg_cnt: msg.msg_cnt,
      az: msg.az,
      pitch_rate_stat: msg.pitch_rate_stat,
      hw_index: msg.hw_index,
      pitch_rate: msg.pitch_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      crc: msg.crc,
      az_stat: msg.az_stat,
      msg_cnt: msg.msg_cnt,
      az: msg.az,
      pitch_rate_stat: msg.pitch_rate_stat,
      hw_index: msg.hw_index,
      pitch_rate: msg.pitch_rate,
    }
  }
}


// Corresponds to sd_can_msgs__msg__TEXIB6rTx1
/// Message definition for CAN ID 600 (TEXIB6r_Tx1)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TEXIB6rTx1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Acceleration Z-axis
    pub acc_z: f64,

    /// Acceleration Y-axis
    pub acc_y: f64,

    /// Acceleration X-axis
    pub acc_x: f64,

}



impl Default for TEXIB6rTx1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TEXIB6rTx1::default())
  }
}

impl rosidl_runtime_rs::Message for TEXIB6rTx1 {
  type RmwMsg = super::msg::rmw::TEXIB6rTx1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acc_z: msg.acc_z,
        acc_y: msg.acc_y,
        acc_x: msg.acc_x,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acc_z: msg.acc_z,
      acc_y: msg.acc_y,
      acc_x: msg.acc_x,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acc_z: msg.acc_z,
      acc_y: msg.acc_y,
      acc_x: msg.acc_x,
    }
  }
}


// Corresponds to sd_can_msgs__msg__TEXIB6rTx2
/// Message definition for CAN ID 601 (TEXIB6r_Tx2)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TEXIB6rTx2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Gyroscope Z-axis
    pub gyr_z: f64,

    /// Gyroscope Y-axis
    pub gyr_y: f64,

    /// Gyroscope X-axis
    pub gyr_x: f64,

}



impl Default for TEXIB6rTx2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TEXIB6rTx2::default())
  }
}

impl rosidl_runtime_rs::Message for TEXIB6rTx2 {
  type RmwMsg = super::msg::rmw::TEXIB6rTx2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        gyr_z: msg.gyr_z,
        gyr_y: msg.gyr_y,
        gyr_x: msg.gyr_x,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      gyr_z: msg.gyr_z,
      gyr_y: msg.gyr_y,
      gyr_x: msg.gyr_x,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      gyr_z: msg.gyr_z,
      gyr_y: msg.gyr_y,
      gyr_x: msg.gyr_x,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerAccBody

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAccBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_x_body: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_y_body: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_z_body: f64,

}



impl Default for KistlerAccBody {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerAccBody::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerAccBody {
  type RmwMsg = super::msg::rmw::KistlerAccBody;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acc_x_body: msg.acc_x_body,
        acc_y_body: msg.acc_y_body,
        acc_z_body: msg.acc_z_body,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acc_x_body: msg.acc_x_body,
      acc_y_body: msg.acc_y_body,
      acc_z_body: msg.acc_z_body,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acc_x_body: msg.acc_x_body,
      acc_y_body: msg.acc_y_body,
      acc_z_body: msg.acc_z_body,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerAccHorAccCBody

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAccHorAccCBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_x_hor: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_y_hor: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_z_hor: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_c_body: f64,

}



impl Default for KistlerAccHorAccCBody {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerAccHorAccCBody::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerAccHorAccCBody {
  type RmwMsg = super::msg::rmw::KistlerAccHorAccCBody;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acc_x_hor: msg.acc_x_hor,
        acc_y_hor: msg.acc_y_hor,
        acc_z_hor: msg.acc_z_hor,
        acc_c_body: msg.acc_c_body,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acc_x_hor: msg.acc_x_hor,
      acc_y_hor: msg.acc_y_hor,
      acc_z_hor: msg.acc_z_hor,
      acc_c_body: msg.acc_c_body,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acc_x_hor: msg.acc_x_hor,
      acc_y_hor: msg.acc_y_hor,
      acc_z_hor: msg.acc_z_hor,
      acc_c_body: msg.acc_c_body,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerAngVelBody

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAngVelBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_x_body: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_y_body: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_z_body: f64,

}



impl Default for KistlerAngVelBody {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerAngVelBody::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerAngVelBody {
  type RmwMsg = super::msg::rmw::KistlerAngVelBody;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ang_vel_x_body: msg.ang_vel_x_body,
        ang_vel_y_body: msg.ang_vel_y_body,
        ang_vel_z_body: msg.ang_vel_z_body,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ang_vel_x_body: msg.ang_vel_x_body,
      ang_vel_y_body: msg.ang_vel_y_body,
      ang_vel_z_body: msg.ang_vel_z_body,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ang_vel_x_body: msg.ang_vel_x_body,
      ang_vel_y_body: msg.ang_vel_y_body,
      ang_vel_z_body: msg.ang_vel_z_body,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerAngVelHor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAngVelHor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_x_hor: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_y_hor: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_z_hor: f64,

}



impl Default for KistlerAngVelHor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerAngVelHor::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerAngVelHor {
  type RmwMsg = super::msg::rmw::KistlerAngVelHor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ang_vel_x_hor: msg.ang_vel_x_hor,
        ang_vel_y_hor: msg.ang_vel_y_hor,
        ang_vel_z_hor: msg.ang_vel_z_hor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ang_vel_x_hor: msg.ang_vel_x_hor,
      ang_vel_y_hor: msg.ang_vel_y_hor,
      ang_vel_z_hor: msg.ang_vel_z_hor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ang_vel_x_hor: msg.ang_vel_x_hor,
      ang_vel_y_hor: msg.ang_vel_y_hor,
      ang_vel_z_hor: msg.ang_vel_z_hor,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerCorrevit

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerCorrevit {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
    pub vel_x_cor: f64,

    /// Range: -2778..2778 (-100..100 km/h), Scale: 0.036, Offset: 0
    pub vel_y_cor: f64,

    /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
    pub vel_cor: f64,

    /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
    pub angle_cor: f64,

}



impl Default for KistlerCorrevit {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerCorrevit::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerCorrevit {
  type RmwMsg = super::msg::rmw::KistlerCorrevit;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vel_x_cor: msg.vel_x_cor,
        vel_y_cor: msg.vel_y_cor,
        vel_cor: msg.vel_cor,
        angle_cor: msg.angle_cor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vel_x_cor: msg.vel_x_cor,
      vel_y_cor: msg.vel_y_cor,
      vel_cor: msg.vel_cor,
      angle_cor: msg.angle_cor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vel_x_cor: msg.vel_x_cor,
      vel_y_cor: msg.vel_y_cor,
      vel_cor: msg.vel_cor,
      angle_cor: msg.angle_cor,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerDistance

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerDistance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -2147480000..2147480000 (-2147480.0..2147480.0 m), Scale: 0.001, Offset: 0
    pub distance: f64,

}



impl Default for KistlerDistance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerDistance::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerDistance {
  type RmwMsg = super::msg::rmw::KistlerDistance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        distance: msg.distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      distance: msg.distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      distance: msg.distance,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerPitchRoll

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerPitchRoll {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
    pub pitch: f64,

    /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
    pub roll: f64,

    /// Range: 0..65535 (0..65535 -), Scale: 1, Offset: 0
    pub timestamp: u16,

    /// Range: 0..65535 (0..655.35 m), Scale: 0.01, Offset: 0
    pub radius: f64,

}



impl Default for KistlerPitchRoll {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerPitchRoll::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerPitchRoll {
  type RmwMsg = super::msg::rmw::KistlerPitchRoll;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pitch: msg.pitch,
        roll: msg.roll,
        timestamp: msg.timestamp,
        radius: msg.radius,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pitch: msg.pitch,
      roll: msg.roll,
      timestamp: msg.timestamp,
      radius: msg.radius,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pitch: msg.pitch,
      roll: msg.roll,
      timestamp: msg.timestamp,
      radius: msg.radius,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: 0..9999 (0..9999 -), Scale: 1, Offset: 0
    pub sensor_id: u16,

    /// Range: -128..127 (-128..127 °C), Scale: 1, Offset: 0
    pub temperature: f64,

    /// Range: 0..255 (0..2.55 A), Scale: 0.01, Offset: 0
    pub lamp_current: f64,

    /// Range: 0..255 (0..255 -), Scale: 1, Offset: 0
    pub filter_setting: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub stst: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub filter_off_on: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub lamp_current_control: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub temperature_ok: u8,

    /// Range: 0..3 (0..3 -), Scale: 1, Offset: 0
    pub head_status: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub angle_switched_off: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub direction: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub ang_vel_correction: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub direction_motion: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub direction_mounting: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub direction_head_is_valid: u8,

    /// Range: 0..1 (0..1 -), Scale: 1, Offset: 0
    pub direction_head: u8,

}



impl Default for KistlerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerStatus {
  type RmwMsg = super::msg::rmw::KistlerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_id: msg.sensor_id,
        temperature: msg.temperature,
        lamp_current: msg.lamp_current,
        filter_setting: msg.filter_setting,
        stst: msg.stst,
        filter_off_on: msg.filter_off_on,
        lamp_current_control: msg.lamp_current_control,
        temperature_ok: msg.temperature_ok,
        head_status: msg.head_status,
        angle_switched_off: msg.angle_switched_off,
        direction: msg.direction,
        ang_vel_correction: msg.ang_vel_correction,
        direction_motion: msg.direction_motion,
        direction_mounting: msg.direction_mounting,
        direction_head_is_valid: msg.direction_head_is_valid,
        direction_head: msg.direction_head,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sensor_id: msg.sensor_id,
      temperature: msg.temperature,
      lamp_current: msg.lamp_current,
      filter_setting: msg.filter_setting,
      stst: msg.stst,
      filter_off_on: msg.filter_off_on,
      lamp_current_control: msg.lamp_current_control,
      temperature_ok: msg.temperature_ok,
      head_status: msg.head_status,
      angle_switched_off: msg.angle_switched_off,
      direction: msg.direction,
      ang_vel_correction: msg.ang_vel_correction,
      direction_motion: msg.direction_motion,
      direction_mounting: msg.direction_mounting,
      direction_head_is_valid: msg.direction_head_is_valid,
      direction_head: msg.direction_head,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_id: msg.sensor_id,
      temperature: msg.temperature,
      lamp_current: msg.lamp_current,
      filter_setting: msg.filter_setting,
      stst: msg.stst,
      filter_off_on: msg.filter_off_on,
      lamp_current_control: msg.lamp_current_control,
      temperature_ok: msg.temperature_ok,
      head_status: msg.head_status,
      angle_switched_off: msg.angle_switched_off,
      direction: msg.direction,
      ang_vel_correction: msg.ang_vel_correction,
      direction_motion: msg.direction_motion,
      direction_mounting: msg.direction_mounting,
      direction_head_is_valid: msg.direction_head_is_valid,
      direction_head: msg.direction_head,
    }
  }
}


// Corresponds to sd_can_msgs__msg__KistlerVelAngle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerVelAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
    pub vel_x: f64,

    /// Range: -2778..2778 (-100..100 km/h), Scale: 0.036, Offset: 0
    pub vel_y: f64,

    /// Range: -11111..11111 (-400..400 km/h), Scale: 0.036, Offset: 0
    pub vel: f64,

    /// Range: -4500..4500 (-45..45 °), Scale: 0.01, Offset: 0
    pub angle: f64,

}



impl Default for KistlerVelAngle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KistlerVelAngle::default())
  }
}

impl rosidl_runtime_rs::Message for KistlerVelAngle {
  type RmwMsg = super::msg::rmw::KistlerVelAngle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vel_x: msg.vel_x,
        vel_y: msg.vel_y,
        vel: msg.vel,
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      vel: msg.vel,
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      vel: msg.vel,
      angle: msg.angle,
    }
  }
}


