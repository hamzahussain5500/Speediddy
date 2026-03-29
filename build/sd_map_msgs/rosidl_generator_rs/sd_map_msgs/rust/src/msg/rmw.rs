#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sd_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnLaneState() -> *const std::ffi::c_void;
}

#[link(name = "sd_map_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_map_msgs__msg__SnLaneState__init(msg: *mut SnLaneState) -> bool;
    fn sd_map_msgs__msg__SnLaneState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SnLaneState>, size: usize) -> bool;
    fn sd_map_msgs__msg__SnLaneState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SnLaneState>);
    fn sd_map_msgs__msg__SnLaneState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SnLaneState>, out_seq: *mut rosidl_runtime_rs::Sequence<SnLaneState>) -> bool;
}

// Corresponds to sd_map_msgs__msg__SnLaneState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Projection and geometry relative to the lane's ref_curv

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SnLaneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sn_state: super::super::msg::rmw::SnState,

    /// True if the point is inside the lane borders
    pub is_inside_borders: bool,

    /// Distance to nearest border; 0 if inside
    pub dist_to_border: f64,

}



impl Default for SnLaneState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_map_msgs__msg__SnLaneState__init(&mut msg as *mut _) {
        panic!("Call to sd_map_msgs__msg__SnLaneState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SnLaneState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnLaneState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnLaneState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnLaneState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SnLaneState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SnLaneState where Self: Sized {
  const TYPE_NAME: &'static str = "sd_map_msgs/msg/SnLaneState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnLaneState() }
  }
}


#[link(name = "sd_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnMapState() -> *const std::ffi::c_void;
}

#[link(name = "sd_map_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_map_msgs__msg__SnMapState__init(msg: *mut SnMapState) -> bool;
    fn sd_map_msgs__msg__SnMapState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SnMapState>, size: usize) -> bool;
    fn sd_map_msgs__msg__SnMapState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SnMapState>);
    fn sd_map_msgs__msg__SnMapState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SnMapState>, out_seq: *mut rosidl_runtime_rs::Sequence<SnMapState>) -> bool;
}

// Corresponds to sd_map_msgs__msg__SnMapState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Classification of the point's location

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SnMapState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_lane: u8,

    /// Projection and border data for the track lane
    pub track_sn_state: super::super::msg::rmw::SnLaneState,

    /// Projection and border data for the pitlane lane
    pub pitlane_sn_state: super::super::msg::rmw::SnLaneState,

}



impl Default for SnMapState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_map_msgs__msg__SnMapState__init(&mut msg as *mut _) {
        panic!("Call to sd_map_msgs__msg__SnMapState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SnMapState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnMapState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnMapState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnMapState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SnMapState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SnMapState where Self: Sized {
  const TYPE_NAME: &'static str = "sd_map_msgs/msg/SnMapState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnMapState() }
  }
}


#[link(name = "sd_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnState() -> *const std::ffi::c_void;
}

#[link(name = "sd_map_msgs__rosidl_generator_c")]
extern "C" {
    fn sd_map_msgs__msg__SnState__init(msg: *mut SnState) -> bool;
    fn sd_map_msgs__msg__SnState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SnState>, size: usize) -> bool;
    fn sd_map_msgs__msg__SnState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SnState>);
    fn sd_map_msgs__msg__SnState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SnState>, out_seq: *mut rosidl_runtime_rs::Sequence<SnState>) -> bool;
}

// Corresponds to sd_map_msgs__msg__SnState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Index on the reference line. -1 means uninitialized.
/// Closest reference line index

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SnState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub idx: u32,

    /// Longitudinal offset (progress) from x_ref[idx], y_ref[idx], e.g 0.5m
    /// always less than 1.1m.
    /// Distance along the curve from the reference point to the projection
    pub ds: f64,

    /// ds / ds_curv_step. Progress in terms of index general coordinates.
    pub d_idx: f64,

    /// Lateral offset from the reference curve
    pub n: f64,

    /// Heading error w.r.t the reference curve
    pub epsi: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}



impl Default for SnState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sd_map_msgs__msg__SnState__init(&mut msg as *mut _) {
        panic!("Call to sd_map_msgs__msg__SnState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SnState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sd_map_msgs__msg__SnState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SnState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SnState where Self: Sized {
  const TYPE_NAME: &'static str = "sd_map_msgs/msg/SnState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sd_map_msgs__msg__SnState() }
  }
}


