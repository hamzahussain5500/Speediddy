#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSURanges01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__BSURanges01__init(msg: *mut BSURanges01) -> bool;
    fn sd_can_msgs__msg__BSURanges01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BSURanges01>, size: usize) -> bool;
    fn sd_can_msgs__msg__BSURanges01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BSURanges01>);
    fn sd_can_msgs__msg__BSURanges01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BSURanges01>, out_seq: *mut rosidl_runtime_rs::Sequence<BSURanges01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__BSURanges01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSURanges01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__BSURanges01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__BSURanges01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BSURanges01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BSURanges01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BSURanges01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/BSURanges01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSURanges01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSURanges02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__BSURanges02__init(msg: *mut BSURanges02) -> bool;
    fn sd_can_msgs__msg__BSURanges02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BSURanges02>, size: usize) -> bool;
    fn sd_can_msgs__msg__BSURanges02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BSURanges02>);
    fn sd_can_msgs__msg__BSURanges02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BSURanges02>, out_seq: *mut rosidl_runtime_rs::Sequence<BSURanges02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__BSURanges02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSURanges02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__BSURanges02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__BSURanges02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BSURanges02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSURanges02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BSURanges02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BSURanges02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/BSURanges02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSURanges02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__BSUStatus01__init(msg: *mut BSUStatus01) -> bool;
    fn sd_can_msgs__msg__BSUStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__BSUStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01>);
    fn sd_can_msgs__msg__BSUStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BSUStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__BSUStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__BSUStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__BSUStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BSUStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BSUStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/BSUStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__BSUStatus01Legacy__init(msg: *mut BSUStatus01Legacy) -> bool;
    fn sd_can_msgs__msg__BSUStatus01Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__BSUStatus01Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Legacy>);
    fn sd_can_msgs__msg__BSUStatus01Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BSUStatus01Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__BSUStatus01Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__BSUStatus01Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__BSUStatus01Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BSUStatus01Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BSUStatus01Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/BSUStatus01Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__BSUStatus01Updated__init(msg: *mut BSUStatus01Updated) -> bool;
    fn sd_can_msgs__msg__BSUStatus01Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__BSUStatus01Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Updated>);
    fn sd_can_msgs__msg__BSUStatus01Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BSUStatus01Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<BSUStatus01Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__BSUStatus01Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BSUStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__BSUStatus01Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__BSUStatus01Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BSUStatus01Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__BSUStatus01Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BSUStatus01Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BSUStatus01Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/BSUStatus01Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__BSUStatus01Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusFl() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__CbaStatusFl__init(msg: *mut CbaStatusFl) -> bool;
    fn sd_can_msgs__msg__CbaStatusFl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFl>, size: usize) -> bool;
    fn sd_can_msgs__msg__CbaStatusFl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFl>);
    fn sd_can_msgs__msg__CbaStatusFl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CbaStatusFl>, out_seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFl>) -> bool;
}

// Corresponds to sd_can_msgs__msg__CbaStatusFl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusFl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__CbaStatusFl__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__CbaStatusFl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CbaStatusFl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CbaStatusFl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CbaStatusFl where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/CbaStatusFl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusFl() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusFr() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__CbaStatusFr__init(msg: *mut CbaStatusFr) -> bool;
    fn sd_can_msgs__msg__CbaStatusFr__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFr>, size: usize) -> bool;
    fn sd_can_msgs__msg__CbaStatusFr__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFr>);
    fn sd_can_msgs__msg__CbaStatusFr__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CbaStatusFr>, out_seq: *mut rosidl_runtime_rs::Sequence<CbaStatusFr>) -> bool;
}

// Corresponds to sd_can_msgs__msg__CbaStatusFr
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusFr {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__CbaStatusFr__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__CbaStatusFr__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CbaStatusFr {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFr__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFr__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusFr__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CbaStatusFr {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CbaStatusFr where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/CbaStatusFr";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusFr() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusRl() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__CbaStatusRl__init(msg: *mut CbaStatusRl) -> bool;
    fn sd_can_msgs__msg__CbaStatusRl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRl>, size: usize) -> bool;
    fn sd_can_msgs__msg__CbaStatusRl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRl>);
    fn sd_can_msgs__msg__CbaStatusRl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CbaStatusRl>, out_seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRl>) -> bool;
}

// Corresponds to sd_can_msgs__msg__CbaStatusRl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusRl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__CbaStatusRl__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__CbaStatusRl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CbaStatusRl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CbaStatusRl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CbaStatusRl where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/CbaStatusRl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusRl() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusRr() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__CbaStatusRr__init(msg: *mut CbaStatusRr) -> bool;
    fn sd_can_msgs__msg__CbaStatusRr__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRr>, size: usize) -> bool;
    fn sd_can_msgs__msg__CbaStatusRr__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRr>);
    fn sd_can_msgs__msg__CbaStatusRr__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CbaStatusRr>, out_seq: *mut rosidl_runtime_rs::Sequence<CbaStatusRr>) -> bool;
}

// Corresponds to sd_can_msgs__msg__CbaStatusRr
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CbaStatusRr {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__CbaStatusRr__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__CbaStatusRr__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CbaStatusRr {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRr__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRr__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__CbaStatusRr__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CbaStatusRr {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CbaStatusRr where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/CbaStatusRr";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__CbaStatusRr() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord01__init(msg: *mut DiagnosticWord01) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01>);
    fn sd_can_msgs__msg__DiagnosticWord01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord01>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord01Legacy__init(msg: *mut DiagnosticWord01Legacy) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Legacy>);
    fn sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord01Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord01Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord01Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord01Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord01Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord01Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord01Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord01Updated__init(msg: *mut DiagnosticWord01Updated) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Updated>);
    fn sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord01Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord01Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord01Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord01Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord01Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord01Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord01Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord01Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord01Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord01Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord01Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord02__init(msg: *mut DiagnosticWord02) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02>);
    fn sd_can_msgs__msg__DiagnosticWord02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord02>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord02Legacy__init(msg: *mut DiagnosticWord02Legacy) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Legacy>);
    fn sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord02Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord02Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_force_race_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_beacon_time_out: bool,

}



impl Default for DiagnosticWord02Legacy {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord02Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord02Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord02Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord02Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord02Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__DiagnosticWord02Updated__init(msg: *mut DiagnosticWord02Updated) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Updated>);
    fn sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticWord02Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticWord02Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__DiagnosticWord02Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticWord02Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__DiagnosticWord02Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__DiagnosticWord02Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticWord02Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__DiagnosticWord02Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticWord02Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticWord02Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/DiagnosticWord02Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__DiagnosticWord02Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__EMStatus01__init(msg: *mut EMStatus01) -> bool;
    fn sd_can_msgs__msg__EMStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__EMStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01>);
    fn sd_can_msgs__msg__EMStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EMStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<EMStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__EMStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__EMStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__EMStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EMStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EMStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EMStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/EMStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__EMStatus01Legacy__init(msg: *mut EMStatus01Legacy) -> bool;
    fn sd_can_msgs__msg__EMStatus01Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__EMStatus01Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Legacy>);
    fn sd_can_msgs__msg__EMStatus01Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EMStatus01Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__EMStatus01Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__EMStatus01Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__EMStatus01Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EMStatus01Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EMStatus01Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EMStatus01Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/EMStatus01Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__EMStatus01Updated__init(msg: *mut EMStatus01Updated) -> bool;
    fn sd_can_msgs__msg__EMStatus01Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__EMStatus01Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Updated>);
    fn sd_can_msgs__msg__EMStatus01Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EMStatus01Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<EMStatus01Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__EMStatus01Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EMStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__EMStatus01Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__EMStatus01Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EMStatus01Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__EMStatus01Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EMStatus01Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EMStatus01Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/EMStatus01Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__EMStatus01Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__FlagInfoOutput() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__FlagInfoOutput__init(msg: *mut FlagInfoOutput) -> bool;
    fn sd_can_msgs__msg__FlagInfoOutput__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FlagInfoOutput>, size: usize) -> bool;
    fn sd_can_msgs__msg__FlagInfoOutput__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FlagInfoOutput>);
    fn sd_can_msgs__msg__FlagInfoOutput__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FlagInfoOutput>, out_seq: *mut rosidl_runtime_rs::Sequence<FlagInfoOutput>) -> bool;
}

// Corresponds to sd_can_msgs__msg__FlagInfoOutput
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Flag Info Output Message
/// CAN ID: 0x7C (124)
/// This message contains race management flag information and LED status
/// New in DBC v3 - provides race control and marshalling information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FlagInfoOutput {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__FlagInfoOutput__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__FlagInfoOutput__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FlagInfoOutput {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__FlagInfoOutput__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__FlagInfoOutput__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__FlagInfoOutput__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FlagInfoOutput {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FlagInfoOutput where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/FlagInfoOutput";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__FlagInfoOutput() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg01__init(msg: *mut HLMsg01) -> bool;
    fn sd_can_msgs__msg__HLMsg01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg01>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg01>);
    fn sd_can_msgs__msg__HLMsg01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg01>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg02__init(msg: *mut HLMsg02) -> bool;
    fn sd_can_msgs__msg__HLMsg02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg02>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg02>);
    fn sd_can_msgs__msg__HLMsg02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg02>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg03__init(msg: *mut HLMsg03) -> bool;
    fn sd_can_msgs__msg__HLMsg03__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg03__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03>);
    fn sd_can_msgs__msg__HLMsg03__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg03>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg03>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg03
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// EAC24BsuHlMsg03.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    pub header_legacy: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg03__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg03__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg03 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg03 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg03 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg03";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg03Legacy__init(msg: *mut HLMsg03Legacy) -> bool;
    fn sd_can_msgs__msg__HLMsg03Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg03Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Legacy>);
    fn sd_can_msgs__msg__HLMsg03Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg03Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg03Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg03Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg03Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg03Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg03Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg03Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg03Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg03Updated__init(msg: *mut HLMsg03Updated) -> bool;
    fn sd_can_msgs__msg__HLMsg03Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg03Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Updated>);
    fn sd_can_msgs__msg__HLMsg03Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg03Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg03Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg03Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// EAC24BsuHlMsg03.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg03Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg03Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg03Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg03Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg03Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg03Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg03Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg03Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg03Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg04() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg04__init(msg: *mut HLMsg04) -> bool;
    fn sd_can_msgs__msg__HLMsg04__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg04>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg04__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg04>);
    fn sd_can_msgs__msg__HLMsg04__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg04>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg04>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg04
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg04 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: (deg), Scale: 1E-007, Offset: 0
    pub hl_latitude: f64,

    /// Range: (deg), Scale: 1E-007, Offset: 0
    pub hl_longitude: f64,

}



impl Default for HLMsg04 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg04__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg04__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg04 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg04__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg04__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg04__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg04 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg04 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg04";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg04() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg05() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg05__init(msg: *mut HLMsg05) -> bool;
    fn sd_can_msgs__msg__HLMsg05__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg05>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg05__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg05>);
    fn sd_can_msgs__msg__HLMsg05__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg05>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg05>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg05
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg05 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg05__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg05__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg05 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg05__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg05__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg05__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg05 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg05 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg05";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg05() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg06() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLMsg06__init(msg: *mut HLMsg06) -> bool;
    fn sd_can_msgs__msg__HLMsg06__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLMsg06>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLMsg06__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLMsg06>);
    fn sd_can_msgs__msg__HLMsg06__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLMsg06>, out_seq: *mut rosidl_runtime_rs::Sequence<HLMsg06>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLMsg06
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLMsg06 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLMsg06__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLMsg06__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLMsg06 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg06__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg06__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLMsg06__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLMsg06 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLMsg06 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLMsg06";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLMsg06() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__ICEStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__ICEStatus01__init(msg: *mut ICEStatus01) -> bool;
    fn sd_can_msgs__msg__ICEStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ICEStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__ICEStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ICEStatus01>);
    fn sd_can_msgs__msg__ICEStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ICEStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<ICEStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__ICEStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ICEStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__ICEStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__ICEStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ICEStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ICEStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ICEStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/ICEStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__ICEStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__ICEStatus02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__ICEStatus02__init(msg: *mut ICEStatus02) -> bool;
    fn sd_can_msgs__msg__ICEStatus02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ICEStatus02>, size: usize) -> bool;
    fn sd_can_msgs__msg__ICEStatus02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ICEStatus02>);
    fn sd_can_msgs__msg__ICEStatus02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ICEStatus02>, out_seq: *mut rosidl_runtime_rs::Sequence<ICEStatus02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__ICEStatus02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ICEStatus02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__ICEStatus02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__ICEStatus02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ICEStatus02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__ICEStatus02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ICEStatus02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ICEStatus02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/ICEStatus02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__ICEStatus02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PSAStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__PSAStatus01__init(msg: *mut PSAStatus01) -> bool;
    fn sd_can_msgs__msg__PSAStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PSAStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__PSAStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PSAStatus01>);
    fn sd_can_msgs__msg__PSAStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PSAStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<PSAStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__PSAStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PSAStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__PSAStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__PSAStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PSAStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PSAStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PSAStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/PSAStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PSAStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PSAStatus02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__PSAStatus02__init(msg: *mut PSAStatus02) -> bool;
    fn sd_can_msgs__msg__PSAStatus02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PSAStatus02>, size: usize) -> bool;
    fn sd_can_msgs__msg__PSAStatus02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PSAStatus02>);
    fn sd_can_msgs__msg__PSAStatus02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PSAStatus02>, out_seq: *mut rosidl_runtime_rs::Sequence<PSAStatus02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__PSAStatus02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PSAStatus02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__PSAStatus02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__PSAStatus02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PSAStatus02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PSAStatus02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PSAStatus02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PSAStatus02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/PSAStatus02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PSAStatus02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__PdUsStatus01__init(msg: *mut PdUsStatus01) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01>);
    fn sd_can_msgs__msg__PdUsStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PdUsStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__PdUsStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__PdUsStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__PdUsStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PdUsStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PdUsStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/PdUsStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__PdUsStatus01Legacy__init(msg: *mut PdUsStatus01Legacy) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Legacy>);
    fn sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PdUsStatus01Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__PdUsStatus01Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__PdUsStatus01Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__PdUsStatus01Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PdUsStatus01Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PdUsStatus01Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/PdUsStatus01Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__PdUsStatus01Updated__init(msg: *mut PdUsStatus01Updated) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__PdUsStatus01Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Updated>);
    fn sd_can_msgs__msg__PdUsStatus01Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PdUsStatus01Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<PdUsStatus01Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__PdUsStatus01Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PdUsStatus01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__PdUsStatus01Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__PdUsStatus01Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PdUsStatus01Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__PdUsStatus01Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PdUsStatus01Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PdUsStatus01Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/PdUsStatus01Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__PdUsStatus01Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__RcStatus01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__RcStatus01__init(msg: *mut RcStatus01) -> bool;
    fn sd_can_msgs__msg__RcStatus01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RcStatus01>, size: usize) -> bool;
    fn sd_can_msgs__msg__RcStatus01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RcStatus01>);
    fn sd_can_msgs__msg__RcStatus01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RcStatus01>, out_seq: *mut rosidl_runtime_rs::Sequence<RcStatus01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__RcStatus01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcStatus01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__RcStatus01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__RcStatus01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RcStatus01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__RcStatus01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__RcStatus01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__RcStatus01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RcStatus01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RcStatus01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/RcStatus01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__RcStatus01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__SwVersions01__init(msg: *mut SwVersions01) -> bool;
    fn sd_can_msgs__msg__SwVersions01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01>, size: usize) -> bool;
    fn sd_can_msgs__msg__SwVersions01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01>);
    fn sd_can_msgs__msg__SwVersions01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwVersions01>, out_seq: *mut rosidl_runtime_rs::Sequence<SwVersions01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__SwVersions01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__SwVersions01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__SwVersions01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwVersions01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwVersions01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwVersions01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/SwVersions01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01Legacy() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__SwVersions01Legacy__init(msg: *mut SwVersions01Legacy) -> bool;
    fn sd_can_msgs__msg__SwVersions01Legacy__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Legacy>, size: usize) -> bool;
    fn sd_can_msgs__msg__SwVersions01Legacy__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Legacy>);
    fn sd_can_msgs__msg__SwVersions01Legacy__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwVersions01Legacy>, out_seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Legacy>) -> bool;
}

// Corresponds to sd_can_msgs__msg__SwVersions01Legacy
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01Legacy {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__SwVersions01Legacy__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__SwVersions01Legacy__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwVersions01Legacy {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Legacy__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Legacy__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Legacy__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwVersions01Legacy {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwVersions01Legacy where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/SwVersions01Legacy";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01Legacy() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01Updated() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__SwVersions01Updated__init(msg: *mut SwVersions01Updated) -> bool;
    fn sd_can_msgs__msg__SwVersions01Updated__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Updated>, size: usize) -> bool;
    fn sd_can_msgs__msg__SwVersions01Updated__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Updated>);
    fn sd_can_msgs__msg__SwVersions01Updated__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwVersions01Updated>, out_seq: *mut rosidl_runtime_rs::Sequence<SwVersions01Updated>) -> bool;
}

// Corresponds to sd_can_msgs__msg__SwVersions01Updated
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions01Updated {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__SwVersions01Updated__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__SwVersions01Updated__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwVersions01Updated {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Updated__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Updated__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions01Updated__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwVersions01Updated {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwVersions01Updated where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/SwVersions01Updated";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions01Updated() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions02() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__SwVersions02__init(msg: *mut SwVersions02) -> bool;
    fn sd_can_msgs__msg__SwVersions02__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwVersions02>, size: usize) -> bool;
    fn sd_can_msgs__msg__SwVersions02__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwVersions02>);
    fn sd_can_msgs__msg__SwVersions02__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwVersions02>, out_seq: *mut rosidl_runtime_rs::Sequence<SwVersions02>) -> bool;
}

// Corresponds to sd_can_msgs__msg__SwVersions02
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions02 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__SwVersions02__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__SwVersions02__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwVersions02 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions02__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions02__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions02__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwVersions02 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwVersions02 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/SwVersions02";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions02() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions03() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__SwVersions03__init(msg: *mut SwVersions03) -> bool;
    fn sd_can_msgs__msg__SwVersions03__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwVersions03>, size: usize) -> bool;
    fn sd_can_msgs__msg__SwVersions03__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwVersions03>);
    fn sd_can_msgs__msg__SwVersions03__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwVersions03>, out_seq: *mut rosidl_runtime_rs::Sequence<SwVersions03>) -> bool;
}

// Corresponds to sd_can_msgs__msg__SwVersions03
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwVersions03 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__SwVersions03__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__SwVersions03__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwVersions03 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions03__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions03__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__SwVersions03__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwVersions03 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwVersions03 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/SwVersions03";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__SwVersions03() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__WheelsSpeed01() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__WheelsSpeed01__init(msg: *mut WheelsSpeed01) -> bool;
    fn sd_can_msgs__msg__WheelsSpeed01__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelsSpeed01>, size: usize) -> bool;
    fn sd_can_msgs__msg__WheelsSpeed01__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelsSpeed01>);
    fn sd_can_msgs__msg__WheelsSpeed01__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelsSpeed01>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelsSpeed01>) -> bool;
}

// Corresponds to sd_can_msgs__msg__WheelsSpeed01
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelsSpeed01 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__WheelsSpeed01__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__WheelsSpeed01__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelsSpeed01 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__WheelsSpeed01__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__WheelsSpeed01__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__WheelsSpeed01__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelsSpeed01 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelsSpeed01 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/WheelsSpeed01";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__WheelsSpeed01() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560BadeniaMisc() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560BadeniaMisc__init(msg: *mut Badenia560BadeniaMisc) -> bool;
    fn sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560BadeniaMisc>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560BadeniaMisc>);
    fn sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560BadeniaMisc>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560BadeniaMisc>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560BadeniaMisc
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560BadeniaMisc {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560BadeniaMisc__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560BadeniaMisc__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560BadeniaMisc {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560BadeniaMisc {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560BadeniaMisc where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560BadeniaMisc";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560BadeniaMisc() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560BrakeDiskTemp() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560BrakeDiskTemp__init(msg: *mut Badenia560BrakeDiskTemp) -> bool;
    fn sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560BrakeDiskTemp>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560BrakeDiskTemp>);
    fn sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560BrakeDiskTemp>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560BrakeDiskTemp>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560BrakeDiskTemp
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560BrakeDiskTemp {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560BrakeDiskTemp__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560BrakeDiskTemp__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560BrakeDiskTemp {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560BrakeDiskTemp__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560BrakeDiskTemp {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560BrakeDiskTemp where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560BrakeDiskTemp";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560BrakeDiskTemp() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560MLStatus() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560MLStatus__init(msg: *mut Badenia560MLStatus) -> bool;
    fn sd_can_msgs__msg__Badenia560MLStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560MLStatus>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560MLStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560MLStatus>);
    fn sd_can_msgs__msg__Badenia560MLStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560MLStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560MLStatus>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560MLStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Badenia560 ML Status (NEW in v5)
/// Frame ID: 0x100
/// ML status relay from BSU
/// BSU Prefill Request signals

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560MLStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560MLStatus__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560MLStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560MLStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560MLStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560MLStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560MLStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560MLStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560MLStatus where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560MLStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560MLStatus() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Misc4() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560Misc4__init(msg: *mut Badenia560Misc4) -> bool;
    fn sd_can_msgs__msg__Badenia560Misc4__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc4>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560Misc4__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc4>);
    fn sd_can_msgs__msg__Badenia560Misc4__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560Misc4>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc4>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560Misc4
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Badenia560 Misc4 (NEW in v5)
/// Frame ID: 0x453
/// TPMS Diagnostics - Transmission check and alive counters

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Misc4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560Misc4__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560Misc4__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560Misc4 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc4__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc4__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc4__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560Misc4 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560Misc4 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560Misc4";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Misc4() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Misc5() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560Misc5__init(msg: *mut Badenia560Misc5) -> bool;
    fn sd_can_msgs__msg__Badenia560Misc5__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc5>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560Misc5__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc5>);
    fn sd_can_msgs__msg__Badenia560Misc5__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560Misc5>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560Misc5>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560Misc5
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Badenia560 Misc5 (NEW in v5)
/// Frame ID: 0x454
/// TPMS Lifetime Counters - Total transmissions from each sensor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Misc5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560Misc5__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560Misc5__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560Misc5 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc5__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc5__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Misc5__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560Misc5 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560Misc5 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560Misc5";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Misc5() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560Pitot__init(msg: *mut Badenia560Pitot) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot>);
    fn sd_can_msgs__msg__Badenia560Pitot__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560Pitot>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560Pitot
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560Pitot__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560Pitot__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560Pitot {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560Pitot where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560Pitot";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot0() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560Pitot0__init(msg: *mut Badenia560Pitot0) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot0__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot0>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot0__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot0>);
    fn sd_can_msgs__msg__Badenia560Pitot0__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560Pitot0>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot0>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560Pitot0
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot0 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560Pitot0__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560Pitot0__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560Pitot0 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot0__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot0__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot0__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot0 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560Pitot0 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560Pitot0";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot0() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot1() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560Pitot1__init(msg: *mut Badenia560Pitot1) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot1>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560Pitot1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot1>);
    fn sd_can_msgs__msg__Badenia560Pitot1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560Pitot1>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560Pitot1>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560Pitot1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message for Badenia560 Pitot Packet 1

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560Pitot1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Air temperature in degrees Celsius
    pub pitot_air_temp: f64,

    /// Board temperature in degrees Celsius
    pub pitot_board_temp: f64,

}



impl Default for Badenia560Pitot1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560Pitot1__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560Pitot1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560Pitot1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560Pitot1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560Pitot1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560Pitot1 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560Pitot1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560Pitot1() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainMisc() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560PowertrainMisc__init(msg: *mut Badenia560PowertrainMisc) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainMisc>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainMisc>);
    fn sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560PowertrainMisc>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainMisc>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560PowertrainMisc
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainMisc {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560PowertrainMisc__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560PowertrainMisc__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560PowertrainMisc {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainMisc__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainMisc {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560PowertrainMisc where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560PowertrainMisc";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainMisc() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainPress() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560PowertrainPress__init(msg: *mut Badenia560PowertrainPress) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainPress>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainPress>);
    fn sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560PowertrainPress>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainPress>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560PowertrainPress
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainPress {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560PowertrainPress__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560PowertrainPress__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560PowertrainPress {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainPress__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainPress {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560PowertrainPress where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560PowertrainPress";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainPress() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainTemp() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560PowertrainTemp__init(msg: *mut Badenia560PowertrainTemp) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainTemp>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainTemp>);
    fn sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560PowertrainTemp>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560PowertrainTemp>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560PowertrainTemp
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560PowertrainTemp {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560PowertrainTemp__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560PowertrainTemp__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560PowertrainTemp {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560PowertrainTemp__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560PowertrainTemp {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560PowertrainTemp where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560PowertrainTemp";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560PowertrainTemp() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560RideFront() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560RideFront__init(msg: *mut Badenia560RideFront) -> bool;
    fn sd_can_msgs__msg__Badenia560RideFront__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideFront>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560RideFront__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideFront>);
    fn sd_can_msgs__msg__Badenia560RideFront__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560RideFront>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideFront>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560RideFront
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560RideFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560RideFront__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560RideFront__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560RideFront {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideFront__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideFront__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideFront__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560RideFront {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560RideFront where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560RideFront";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560RideFront() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560RideRear() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560RideRear__init(msg: *mut Badenia560RideRear) -> bool;
    fn sd_can_msgs__msg__Badenia560RideRear__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideRear>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560RideRear__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideRear>);
    fn sd_can_msgs__msg__Badenia560RideRear__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560RideRear>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560RideRear>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560RideRear
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560RideRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560RideRear__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560RideRear__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560RideRear {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideRear__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideRear__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560RideRear__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560RideRear {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560RideRear where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560RideRear";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560RideRear() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TpmsFront() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560TpmsFront__init(msg: *mut Badenia560TpmsFront) -> bool;
    fn sd_can_msgs__msg__Badenia560TpmsFront__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsFront>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560TpmsFront__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsFront>);
    fn sd_can_msgs__msg__Badenia560TpmsFront__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560TpmsFront>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsFront>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560TpmsFront
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TpmsFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560TpmsFront__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560TpmsFront__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560TpmsFront {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsFront__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsFront__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsFront__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560TpmsFront {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560TpmsFront where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560TpmsFront";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TpmsFront() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TpmsRear() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560TpmsRear__init(msg: *mut Badenia560TpmsRear) -> bool;
    fn sd_can_msgs__msg__Badenia560TpmsRear__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsRear>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560TpmsRear__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsRear>);
    fn sd_can_msgs__msg__Badenia560TpmsRear__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560TpmsRear>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560TpmsRear>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560TpmsRear
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TpmsRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560TpmsRear__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560TpmsRear__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560TpmsRear {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsRear__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsRear__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TpmsRear__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560TpmsRear {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560TpmsRear where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560TpmsRear";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TpmsRear() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(msg: *mut Badenia560TyreSurfaceTempFront) -> bool;
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempFront>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempFront>);
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempFront>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempFront>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560TyreSurfaceTempFront
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TyreSurfaceTempFront {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560TyreSurfaceTempFront {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempFront__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560TyreSurfaceTempFront {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560TyreSurfaceTempFront where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560TyreSurfaceTempFront";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(msg: *mut Badenia560TyreSurfaceTempRear) -> bool;
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempRear>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempRear>);
    fn sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempRear>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560TyreSurfaceTempRear>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560TyreSurfaceTempRear
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560TyreSurfaceTempRear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560TyreSurfaceTempRear {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560TyreSurfaceTempRear__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560TyreSurfaceTempRear {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560TyreSurfaceTempRear where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560TyreSurfaceTempRear";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560WheelLoad() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560WheelLoad__init(msg: *mut Badenia560WheelLoad) -> bool;
    fn sd_can_msgs__msg__Badenia560WheelLoad__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560WheelLoad>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560WheelLoad__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560WheelLoad>);
    fn sd_can_msgs__msg__Badenia560WheelLoad__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560WheelLoad>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560WheelLoad>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560WheelLoad
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560WheelLoad {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560WheelLoad__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560WheelLoad__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560WheelLoad {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560WheelLoad__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560WheelLoad__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560WheelLoad__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560WheelLoad {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560WheelLoad where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560WheelLoad";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560WheelLoad() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560ZAccelBody() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__Badenia560ZAccelBody__init(msg: *mut Badenia560ZAccelBody) -> bool;
    fn sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Badenia560ZAccelBody>, size: usize) -> bool;
    fn sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Badenia560ZAccelBody>);
    fn sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Badenia560ZAccelBody>, out_seq: *mut rosidl_runtime_rs::Sequence<Badenia560ZAccelBody>) -> bool;
}

// Corresponds to sd_can_msgs__msg__Badenia560ZAccelBody
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Badenia560ZAccelBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: -, Scale: 0.001, Offset: 0
    pub gz_body_fr: f64,

    /// Range: -, Scale: 0.001, Offset: 0
    pub gz_body_rr: f64,

}



impl Default for Badenia560ZAccelBody {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__Badenia560ZAccelBody__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__Badenia560ZAccelBody__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Badenia560ZAccelBody {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__Badenia560ZAccelBody__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Badenia560ZAccelBody {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Badenia560ZAccelBody where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/Badenia560ZAccelBody";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__Badenia560ZAccelBody() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLPCInfo1() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__HLPCInfo1__init(msg: *mut HLPCInfo1) -> bool;
    fn sd_can_msgs__msg__HLPCInfo1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HLPCInfo1>, size: usize) -> bool;
    fn sd_can_msgs__msg__HLPCInfo1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HLPCInfo1>);
    fn sd_can_msgs__msg__HLPCInfo1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HLPCInfo1>, out_seq: *mut rosidl_runtime_rs::Sequence<HLPCInfo1>) -> bool;
}

// Corresponds to sd_can_msgs__msg__HLPCInfo1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// HLPC Info1 (NEW in v5)
/// Frame ID: 0x700
/// High-Level Perception Computer sensor status information
/// Reports status of perception sensors (lidars, radars, GPS)
/// Frequency: 1 Hz

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HLPCInfo1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__HLPCInfo1__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__HLPCInfo1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HLPCInfo1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLPCInfo1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLPCInfo1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__HLPCInfo1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HLPCInfo1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HLPCInfo1 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/HLPCInfo1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__HLPCInfo1() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX1ZAY() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__MM710TX1ZAY__init(msg: *mut MM710TX1ZAY) -> bool;
    fn sd_can_msgs__msg__MM710TX1ZAY__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MM710TX1ZAY>, size: usize) -> bool;
    fn sd_can_msgs__msg__MM710TX1ZAY__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MM710TX1ZAY>);
    fn sd_can_msgs__msg__MM710TX1ZAY__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MM710TX1ZAY>, out_seq: *mut rosidl_runtime_rs::Sequence<MM710TX1ZAY>) -> bool;
}

// Corresponds to sd_can_msgs__msg__MM710TX1ZAY
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX1ZAY {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__MM710TX1ZAY__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__MM710TX1ZAY__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MM710TX1ZAY {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX1ZAY__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX1ZAY__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX1ZAY__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MM710TX1ZAY {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MM710TX1ZAY where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/MM710TX1ZAY";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX1ZAY() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX2XAX() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__MM710TX2XAX__init(msg: *mut MM710TX2XAX) -> bool;
    fn sd_can_msgs__msg__MM710TX2XAX__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MM710TX2XAX>, size: usize) -> bool;
    fn sd_can_msgs__msg__MM710TX2XAX__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MM710TX2XAX>);
    fn sd_can_msgs__msg__MM710TX2XAX__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MM710TX2XAX>, out_seq: *mut rosidl_runtime_rs::Sequence<MM710TX2XAX>) -> bool;
}

// Corresponds to sd_can_msgs__msg__MM710TX2XAX
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX2XAX {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__MM710TX2XAX__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__MM710TX2XAX__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MM710TX2XAX {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX2XAX__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX2XAX__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX2XAX__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MM710TX2XAX {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MM710TX2XAX where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/MM710TX2XAX";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX2XAX() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX3YAZ() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__MM710TX3YAZ__init(msg: *mut MM710TX3YAZ) -> bool;
    fn sd_can_msgs__msg__MM710TX3YAZ__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MM710TX3YAZ>, size: usize) -> bool;
    fn sd_can_msgs__msg__MM710TX3YAZ__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MM710TX3YAZ>);
    fn sd_can_msgs__msg__MM710TX3YAZ__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MM710TX3YAZ>, out_seq: *mut rosidl_runtime_rs::Sequence<MM710TX3YAZ>) -> bool;
}

// Corresponds to sd_can_msgs__msg__MM710TX3YAZ
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MM710TX3YAZ {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__MM710TX3YAZ__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__MM710TX3YAZ__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MM710TX3YAZ {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX3YAZ__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX3YAZ__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__MM710TX3YAZ__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MM710TX3YAZ {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MM710TX3YAZ where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/MM710TX3YAZ";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__MM710TX3YAZ() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__TEXIB6rTx1() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__TEXIB6rTx1__init(msg: *mut TEXIB6rTx1) -> bool;
    fn sd_can_msgs__msg__TEXIB6rTx1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx1>, size: usize) -> bool;
    fn sd_can_msgs__msg__TEXIB6rTx1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx1>);
    fn sd_can_msgs__msg__TEXIB6rTx1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TEXIB6rTx1>, out_seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx1>) -> bool;
}

// Corresponds to sd_can_msgs__msg__TEXIB6rTx1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for CAN ID 600 (TEXIB6r_Tx1)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TEXIB6rTx1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Acceleration Z-axis
    pub acc_z: f64,

    /// Acceleration Y-axis
    pub acc_y: f64,

    /// Acceleration X-axis
    pub acc_x: f64,

}



impl Default for TEXIB6rTx1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__TEXIB6rTx1__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__TEXIB6rTx1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TEXIB6rTx1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TEXIB6rTx1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TEXIB6rTx1 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/TEXIB6rTx1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__TEXIB6rTx1() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__TEXIB6rTx2() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__TEXIB6rTx2__init(msg: *mut TEXIB6rTx2) -> bool;
    fn sd_can_msgs__msg__TEXIB6rTx2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx2>, size: usize) -> bool;
    fn sd_can_msgs__msg__TEXIB6rTx2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx2>);
    fn sd_can_msgs__msg__TEXIB6rTx2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TEXIB6rTx2>, out_seq: *mut rosidl_runtime_rs::Sequence<TEXIB6rTx2>) -> bool;
}

// Corresponds to sd_can_msgs__msg__TEXIB6rTx2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for CAN ID 601 (TEXIB6r_Tx2)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TEXIB6rTx2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Gyroscope Z-axis
    pub gyr_z: f64,

    /// Gyroscope Y-axis
    pub gyr_y: f64,

    /// Gyroscope X-axis
    pub gyr_x: f64,

}



impl Default for TEXIB6rTx2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__TEXIB6rTx2__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__TEXIB6rTx2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TEXIB6rTx2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__TEXIB6rTx2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TEXIB6rTx2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TEXIB6rTx2 where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/TEXIB6rTx2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__TEXIB6rTx2() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAccBody() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerAccBody__init(msg: *mut KistlerAccBody) -> bool;
    fn sd_can_msgs__msg__KistlerAccBody__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerAccBody>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerAccBody__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerAccBody>);
    fn sd_can_msgs__msg__KistlerAccBody__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerAccBody>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerAccBody>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerAccBody
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAccBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_x_body: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_y_body: f64,

    /// Range: -18000..18000 (-180..180 m/s²), Scale: 0.01, Offset: 0
    pub acc_z_body: f64,

}



impl Default for KistlerAccBody {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerAccBody__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerAccBody__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerAccBody {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccBody__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccBody__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccBody__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerAccBody {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerAccBody where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerAccBody";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAccBody() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAccHorAccCBody() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerAccHorAccCBody__init(msg: *mut KistlerAccHorAccCBody) -> bool;
    fn sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerAccHorAccCBody>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerAccHorAccCBody>);
    fn sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerAccHorAccCBody>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerAccHorAccCBody>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerAccHorAccCBody
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAccHorAccCBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerAccHorAccCBody__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerAccHorAccCBody__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerAccHorAccCBody {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAccHorAccCBody__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerAccHorAccCBody {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerAccHorAccCBody where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerAccHorAccCBody";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAccHorAccCBody() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAngVelBody() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerAngVelBody__init(msg: *mut KistlerAngVelBody) -> bool;
    fn sd_can_msgs__msg__KistlerAngVelBody__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelBody>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerAngVelBody__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelBody>);
    fn sd_can_msgs__msg__KistlerAngVelBody__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerAngVelBody>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelBody>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerAngVelBody
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAngVelBody {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_x_body: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_y_body: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_z_body: f64,

}



impl Default for KistlerAngVelBody {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerAngVelBody__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerAngVelBody__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerAngVelBody {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelBody__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelBody__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelBody__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerAngVelBody {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerAngVelBody where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerAngVelBody";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAngVelBody() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAngVelHor() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerAngVelHor__init(msg: *mut KistlerAngVelHor) -> bool;
    fn sd_can_msgs__msg__KistlerAngVelHor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelHor>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerAngVelHor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelHor>);
    fn sd_can_msgs__msg__KistlerAngVelHor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerAngVelHor>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerAngVelHor>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerAngVelHor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerAngVelHor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_x_hor: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_y_hor: f64,

    /// Range: -15000..15000 (-300..300 °/s), Scale: 0.02, Offset: 0
    pub ang_vel_z_hor: f64,

}



impl Default for KistlerAngVelHor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerAngVelHor__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerAngVelHor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerAngVelHor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelHor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelHor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerAngVelHor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerAngVelHor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerAngVelHor where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerAngVelHor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerAngVelHor() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerCorrevit() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerCorrevit__init(msg: *mut KistlerCorrevit) -> bool;
    fn sd_can_msgs__msg__KistlerCorrevit__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerCorrevit>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerCorrevit__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerCorrevit>);
    fn sd_can_msgs__msg__KistlerCorrevit__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerCorrevit>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerCorrevit>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerCorrevit
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerCorrevit {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerCorrevit__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerCorrevit__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerCorrevit {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerCorrevit__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerCorrevit__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerCorrevit__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerCorrevit {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerCorrevit where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerCorrevit";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerCorrevit() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerDistance() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerDistance__init(msg: *mut KistlerDistance) -> bool;
    fn sd_can_msgs__msg__KistlerDistance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerDistance>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerDistance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerDistance>);
    fn sd_can_msgs__msg__KistlerDistance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerDistance>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerDistance>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerDistance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerDistance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Range: -2147480000..2147480000 (-2147480.0..2147480.0 m), Scale: 0.001, Offset: 0
    pub distance: f64,

}



impl Default for KistlerDistance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerDistance__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerDistance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerDistance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerDistance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerDistance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerDistance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerDistance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerDistance where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerDistance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerDistance() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerPitchRoll() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerPitchRoll__init(msg: *mut KistlerPitchRoll) -> bool;
    fn sd_can_msgs__msg__KistlerPitchRoll__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerPitchRoll>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerPitchRoll__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerPitchRoll>);
    fn sd_can_msgs__msg__KistlerPitchRoll__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerPitchRoll>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerPitchRoll>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerPitchRoll
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerPitchRoll {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerPitchRoll__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerPitchRoll__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerPitchRoll {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerPitchRoll__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerPitchRoll__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerPitchRoll__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerPitchRoll {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerPitchRoll where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerPitchRoll";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerPitchRoll() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerStatus() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerStatus__init(msg: *mut KistlerStatus) -> bool;
    fn sd_can_msgs__msg__KistlerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerStatus>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerStatus>);
    fn sd_can_msgs__msg__KistlerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerStatus>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerStatus__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerStatus() }
  }
}


#[link(name = "sd_can_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerVelAngle() -> *const std::ffi::c_void;
}

#[link(name = "sd_can_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_can_msgs__msg__KistlerVelAngle__init(msg: *mut KistlerVelAngle) -> bool;
    fn sd_can_msgs__msg__KistlerVelAngle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KistlerVelAngle>, size: usize) -> bool;
    fn sd_can_msgs__msg__KistlerVelAngle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KistlerVelAngle>);
    fn sd_can_msgs__msg__KistlerVelAngle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KistlerVelAngle>, out_seq: *mut rosidl_runtime_rs::Sequence<KistlerVelAngle>) -> bool;
}

// Corresponds to sd_can_msgs__msg__KistlerVelAngle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KistlerVelAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_can_msgs__msg__KistlerVelAngle__init(&mut msg as *mut _) {
        panic!("Call to sd_can_msgs__msg__KistlerVelAngle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KistlerVelAngle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerVelAngle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerVelAngle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_can_msgs__msg__KistlerVelAngle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KistlerVelAngle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KistlerVelAngle where Self: Sized {
  const TYPE_NAME: &'static str = "sd_can_msgs/msg/KistlerVelAngle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_can_msgs__msg__KistlerVelAngle() }
  }
}


