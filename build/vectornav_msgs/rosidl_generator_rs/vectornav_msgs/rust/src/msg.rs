#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to vectornav_msgs__msg__DOP
/// VectorNav Dilution of Precision
/// UM005 - 5.7.14

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DOP::default())
  }
}

impl rosidl_runtime_rs::Message for DOP {
  type RmwMsg = super::msg::rmw::DOP;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        g: msg.g,
        p: msg.p,
        t: msg.t,
        v: msg.v,
        h: msg.h,
        n: msg.n,
        e: msg.e,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      g: msg.g,
      p: msg.p,
      t: msg.t,
      v: msg.v,
      h: msg.h,
      n: msg.n,
      e: msg.e,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      g: msg.g,
      p: msg.p,
      t: msg.t,
      v: msg.v,
      h: msg.h,
      n: msg.n,
      e: msg.e,
    }
  }
}


// Corresponds to vectornav_msgs__msg__GpsGroup
/// VectorNav Composite Data Packet
///
/// Only the enabled fields will be populated with data and only the fields
/// you require for your application should be enabled to conserve bandwidth
/// and increase the update rate.
///
/// TODO Requires rosidl patches

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpsGroup {
    /// Data Received (ROS Time)
    pub header: std_msgs::msg::Header,

    /// Field Enable Bits
    pub group_fields: u16,

    /// TODO vncxx does not support SatInfo or RawMeas
    /// Fields
    pub utc: super::msg::TimeUTC,


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
    pub poslla: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posecef: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velned: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velecef: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posu: geometry_msgs::msg::Vector3,


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
    pub dop: super::msg::DOP,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpsGroup::default())
  }
}

impl rosidl_runtime_rs::Message for GpsGroup {
  type RmwMsg = super::msg::rmw::GpsGroup;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        group_fields: msg.group_fields,
        utc: super::msg::TimeUTC::into_rmw_message(std::borrow::Cow::Owned(msg.utc)).into_owned(),
        tow: msg.tow,
        week: msg.week,
        numsats: msg.numsats,
        fix: msg.fix,
        poslla: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.poslla)).into_owned(),
        posecef: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.posecef)).into_owned(),
        velned: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.velned)).into_owned(),
        velecef: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.velecef)).into_owned(),
        posu: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.posu)).into_owned(),
        velu: msg.velu,
        timeu: msg.timeu,
        timeinfo_status: msg.timeinfo_status,
        timeinfo_leapseconds: msg.timeinfo_leapseconds,
        dop: super::msg::DOP::into_rmw_message(std::borrow::Cow::Owned(msg.dop)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      group_fields: msg.group_fields,
        utc: super::msg::TimeUTC::into_rmw_message(std::borrow::Cow::Borrowed(&msg.utc)).into_owned(),
      tow: msg.tow,
      week: msg.week,
      numsats: msg.numsats,
      fix: msg.fix,
        poslla: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.poslla)).into_owned(),
        posecef: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.posecef)).into_owned(),
        velned: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velned)).into_owned(),
        velecef: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velecef)).into_owned(),
        posu: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.posu)).into_owned(),
      velu: msg.velu,
      timeu: msg.timeu,
      timeinfo_status: msg.timeinfo_status,
      timeinfo_leapseconds: msg.timeinfo_leapseconds,
        dop: super::msg::DOP::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dop)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      group_fields: msg.group_fields,
      utc: super::msg::TimeUTC::from_rmw_message(msg.utc),
      tow: msg.tow,
      week: msg.week,
      numsats: msg.numsats,
      fix: msg.fix,
      poslla: geometry_msgs::msg::Point::from_rmw_message(msg.poslla),
      posecef: geometry_msgs::msg::Point::from_rmw_message(msg.posecef),
      velned: geometry_msgs::msg::Vector3::from_rmw_message(msg.velned),
      velecef: geometry_msgs::msg::Vector3::from_rmw_message(msg.velecef),
      posu: geometry_msgs::msg::Vector3::from_rmw_message(msg.posu),
      velu: msg.velu,
      timeu: msg.timeu,
      timeinfo_status: msg.timeinfo_status,
      timeinfo_leapseconds: msg.timeinfo_leapseconds,
      dop: super::msg::DOP::from_rmw_message(msg.dop),
    }
  }
}


// Corresponds to vectornav_msgs__msg__TimeUTC
/// VectorNav Timestamp (UTC)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TimeUTC::default())
  }
}

impl rosidl_runtime_rs::Message for TimeUTC {
  type RmwMsg = super::msg::rmw::TimeUTC;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        year: msg.year,
        month: msg.month,
        day: msg.day,
        hour: msg.hour,
        min: msg.min,
        sec: msg.sec,
        ms: msg.ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      year: msg.year,
      month: msg.month,
      day: msg.day,
      hour: msg.hour,
      min: msg.min,
      sec: msg.sec,
      ms: msg.ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      year: msg.year,
      month: msg.month,
      day: msg.day,
      hour: msg.hour,
      min: msg.min,
      sec: msg.sec,
      ms: msg.ms,
    }
  }
}


