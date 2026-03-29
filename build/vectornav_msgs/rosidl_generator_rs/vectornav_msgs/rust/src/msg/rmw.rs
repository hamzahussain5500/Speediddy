#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "vectornav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__DOP() -> *const std::ffi::c_void;
}

#[link(name = "vectornav_msgs__rosidl_generator_c")]
extern "C" {
    fn vectornav_msgs__msg__DOP__init(msg: *mut DOP) -> bool;
    fn vectornav_msgs__msg__DOP__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DOP>, size: usize) -> bool;
    fn vectornav_msgs__msg__DOP__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DOP>);
    fn vectornav_msgs__msg__DOP__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DOP>, out_seq: *mut rosidl_runtime_rs::Sequence<DOP>) -> bool;
}

// Corresponds to vectornav_msgs__msg__DOP
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// VectorNav Dilution of Precision
/// UM005 - 5.7.14

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DOP {

    // This member is not documented.
    #[allow(missing_docs)]
    pub g: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub p: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub t: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub h: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub e: f32,

}



impl Default for DOP {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vectornav_msgs__msg__DOP__init(&mut msg as *mut _) {
        panic!("Call to vectornav_msgs__msg__DOP__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DOP {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__DOP__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__DOP__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__DOP__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DOP {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DOP where Self: Sized {
  const TYPE_NAME: &'static str = "vectornav_msgs/msg/DOP";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__DOP() }
  }
}


#[link(name = "vectornav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__GpsGroup() -> *const std::ffi::c_void;
}

#[link(name = "vectornav_msgs__rosidl_generator_c")]
extern "C" {
    fn vectornav_msgs__msg__GpsGroup__init(msg: *mut GpsGroup) -> bool;
    fn vectornav_msgs__msg__GpsGroup__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GpsGroup>, size: usize) -> bool;
    fn vectornav_msgs__msg__GpsGroup__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GpsGroup>);
    fn vectornav_msgs__msg__GpsGroup__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GpsGroup>, out_seq: *mut rosidl_runtime_rs::Sequence<GpsGroup>) -> bool;
}

// Corresponds to vectornav_msgs__msg__GpsGroup
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// VectorNav Composite Data Packet
///
/// Only the enabled fields will be populated with data and only the fields
/// you require for your application should be enabled to conserve bandwidth
/// and increase the update rate.
///
/// TODO Requires rosidl patches

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpsGroup {
    /// Data Received (ROS Time)
    pub header: std_msgs::msg::rmw::Header,

    /// Field Enable Bits
    pub group_fields: u16,

    /// TODO vncxx does not support SatInfo or RawMeas
    /// Fields
    pub utc: super::super::msg::rmw::TimeUTC,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tow: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub week: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub numsats: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fix: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poslla: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posecef: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velned: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velecef: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posu: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velu: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeu: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeinfo_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeinfo_leapseconds: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dop: super::super::msg::rmw::DOP,

}

impl GpsGroup {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_UTC: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_TOW: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_WEEK: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_NUMSATS: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_FIX: u16 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_POSLLA: u16 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_POSECEF: u16 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_VELNED: u16 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_VELECEF: u16 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_POSU: u16 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_VELU: u16 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_TIMEU: u16 = 2048;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_TIMEINFO: u16 = 4096;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSGROUP_DOP: u16 = 8192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSFIX_NOFIX: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSFIX_TIMEONLY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSFIX_2D: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GPSFIX_3D: u8 = 3;

}


impl Default for GpsGroup {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vectornav_msgs__msg__GpsGroup__init(&mut msg as *mut _) {
        panic!("Call to vectornav_msgs__msg__GpsGroup__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GpsGroup {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__GpsGroup__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__GpsGroup__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__GpsGroup__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GpsGroup {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GpsGroup where Self: Sized {
  const TYPE_NAME: &'static str = "vectornav_msgs/msg/GpsGroup";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__GpsGroup() }
  }
}


#[link(name = "vectornav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__TimeUTC() -> *const std::ffi::c_void;
}

#[link(name = "vectornav_msgs__rosidl_generator_c")]
extern "C" {
    fn vectornav_msgs__msg__TimeUTC__init(msg: *mut TimeUTC) -> bool;
    fn vectornav_msgs__msg__TimeUTC__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimeUTC>, size: usize) -> bool;
    fn vectornav_msgs__msg__TimeUTC__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimeUTC>);
    fn vectornav_msgs__msg__TimeUTC__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimeUTC>, out_seq: *mut rosidl_runtime_rs::Sequence<TimeUTC>) -> bool;
}

// Corresponds to vectornav_msgs__msg__TimeUTC
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// VectorNav Timestamp (UTC)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimeUTC {

    // This member is not documented.
    #[allow(missing_docs)]
    pub year: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub month: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub day: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hour: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sec: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ms: u16,

}



impl Default for TimeUTC {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vectornav_msgs__msg__TimeUTC__init(&mut msg as *mut _) {
        panic!("Call to vectornav_msgs__msg__TimeUTC__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimeUTC {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__TimeUTC__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__TimeUTC__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vectornav_msgs__msg__TimeUTC__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimeUTC {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimeUTC where Self: Sized {
  const TYPE_NAME: &'static str = "vectornav_msgs/msg/TimeUTC";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vectornav_msgs__msg__TimeUTC() }
  }
}


