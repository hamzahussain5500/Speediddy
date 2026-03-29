#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sd_map_msgs__msg__SnLaneState
/// Projection and geometry relative to the lane's ref_curv

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SnLaneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sn_state: super::msg::SnState,

    /// True if the point is inside the lane borders
    pub is_inside_borders: bool,

    /// Distance to nearest border; 0 if inside
    pub dist_to_border: f64,

}



impl Default for SnLaneState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SnLaneState::default())
  }
}

impl rosidl_runtime_rs::Message for SnLaneState {
  type RmwMsg = super::msg::rmw::SnLaneState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sn_state: super::msg::SnState::into_rmw_message(std::borrow::Cow::Owned(msg.sn_state)).into_owned(),
        is_inside_borders: msg.is_inside_borders,
        dist_to_border: msg.dist_to_border,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sn_state: super::msg::SnState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sn_state)).into_owned(),
      is_inside_borders: msg.is_inside_borders,
      dist_to_border: msg.dist_to_border,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sn_state: super::msg::SnState::from_rmw_message(msg.sn_state),
      is_inside_borders: msg.is_inside_borders,
      dist_to_border: msg.dist_to_border,
    }
  }
}


// Corresponds to sd_map_msgs__msg__SnMapState
/// Classification of the point's location

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SnMapState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_lane: u8,

    /// Projection and border data for the track lane
    pub track_sn_state: super::msg::SnLaneState,

    /// Projection and border data for the pitlane lane
    pub pitlane_sn_state: super::msg::SnLaneState,

}



impl Default for SnMapState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SnMapState::default())
  }
}

impl rosidl_runtime_rs::Message for SnMapState {
  type RmwMsg = super::msg::rmw::SnMapState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_lane: msg.current_lane,
        track_sn_state: super::msg::SnLaneState::into_rmw_message(std::borrow::Cow::Owned(msg.track_sn_state)).into_owned(),
        pitlane_sn_state: super::msg::SnLaneState::into_rmw_message(std::borrow::Cow::Owned(msg.pitlane_sn_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_lane: msg.current_lane,
        track_sn_state: super::msg::SnLaneState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.track_sn_state)).into_owned(),
        pitlane_sn_state: super::msg::SnLaneState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pitlane_sn_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_lane: msg.current_lane,
      track_sn_state: super::msg::SnLaneState::from_rmw_message(msg.track_sn_state),
      pitlane_sn_state: super::msg::SnLaneState::from_rmw_message(msg.pitlane_sn_state),
    }
  }
}


// Corresponds to sd_map_msgs__msg__SnState
/// Index on the reference line. -1 means uninitialized.
/// Closest reference line index

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SnState::default())
  }
}

impl rosidl_runtime_rs::Message for SnState {
  type RmwMsg = super::msg::rmw::SnState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        idx: msg.idx,
        ds: msg.ds,
        d_idx: msg.d_idx,
        n: msg.n,
        epsi: msg.epsi,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      idx: msg.idx,
      ds: msg.ds,
      d_idx: msg.d_idx,
      n: msg.n,
      epsi: msg.epsi,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      idx: msg.idx,
      ds: msg.ds,
      d_idx: msg.d_idx,
      n: msg.n,
      epsi: msg.epsi,
      status: msg.status,
    }
  }
}


