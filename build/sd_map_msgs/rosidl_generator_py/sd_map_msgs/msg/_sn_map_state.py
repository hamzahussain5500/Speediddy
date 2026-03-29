# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_map_msgs:msg/SnMapState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SnMapState(type):
    """Metaclass of message 'SnMapState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sd_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sd_map_msgs.msg.SnMapState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sn_map_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sn_map_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sn_map_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sn_map_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sn_map_state

            from sd_map_msgs.msg import SnLaneState
            if SnLaneState.__class__._TYPE_SUPPORT is None:
                SnLaneState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SnMapState(metaclass=Metaclass_SnMapState):
    """Message class 'SnMapState'."""

    __slots__ = [
        '_current_lane',
        '_track_sn_state',
        '_pitlane_sn_state',
    ]

    _fields_and_field_types = {
        'current_lane': 'uint8',
        'track_sn_state': 'sd_map_msgs/SnLaneState',
        'pitlane_sn_state': 'sd_map_msgs/SnLaneState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sd_map_msgs', 'msg'], 'SnLaneState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sd_map_msgs', 'msg'], 'SnLaneState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_lane = kwargs.get('current_lane', int())
        from sd_map_msgs.msg import SnLaneState
        self.track_sn_state = kwargs.get('track_sn_state', SnLaneState())
        from sd_map_msgs.msg import SnLaneState
        self.pitlane_sn_state = kwargs.get('pitlane_sn_state', SnLaneState())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_lane != other.current_lane:
            return False
        if self.track_sn_state != other.track_sn_state:
            return False
        if self.pitlane_sn_state != other.pitlane_sn_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_lane(self):
        """Message field 'current_lane'."""
        return self._current_lane

    @current_lane.setter
    def current_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_lane' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_lane' field must be an unsigned integer in [0, 255]"
        self._current_lane = value

    @builtins.property
    def track_sn_state(self):
        """Message field 'track_sn_state'."""
        return self._track_sn_state

    @track_sn_state.setter
    def track_sn_state(self, value):
        if __debug__:
            from sd_map_msgs.msg import SnLaneState
            assert \
                isinstance(value, SnLaneState), \
                "The 'track_sn_state' field must be a sub message of type 'SnLaneState'"
        self._track_sn_state = value

    @builtins.property
    def pitlane_sn_state(self):
        """Message field 'pitlane_sn_state'."""
        return self._pitlane_sn_state

    @pitlane_sn_state.setter
    def pitlane_sn_state(self, value):
        if __debug__:
            from sd_map_msgs.msg import SnLaneState
            assert \
                isinstance(value, SnLaneState), \
                "The 'pitlane_sn_state' field must be a sub message of type 'SnLaneState'"
        self._pitlane_sn_state = value
