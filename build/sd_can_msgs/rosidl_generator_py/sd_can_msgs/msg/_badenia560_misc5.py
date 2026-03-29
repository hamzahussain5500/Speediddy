# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/Badenia560Misc5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Badenia560Misc5(type):
    """Metaclass of message 'Badenia560Misc5'."""

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
            module = import_type_support('sd_can_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sd_can_msgs.msg.Badenia560Misc5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__badenia560_misc5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__badenia560_misc5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__badenia560_misc5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__badenia560_misc5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__badenia560_misc5

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Badenia560Misc5(metaclass=Metaclass_Badenia560Misc5):
    """Message class 'Badenia560Misc5'."""

    __slots__ = [
        '_header',
        '_bad_tpms_tx_life_fl',
        '_bad_tpms_tx_life_fr',
        '_bad_tpms_tx_life_rl',
        '_bad_tpms_tx_life_rr',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bad_tpms_tx_life_fl': 'uint16',
        'bad_tpms_tx_life_fr': 'uint16',
        'bad_tpms_tx_life_rl': 'uint16',
        'bad_tpms_tx_life_rr': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bad_tpms_tx_life_fl = kwargs.get('bad_tpms_tx_life_fl', int())
        self.bad_tpms_tx_life_fr = kwargs.get('bad_tpms_tx_life_fr', int())
        self.bad_tpms_tx_life_rl = kwargs.get('bad_tpms_tx_life_rl', int())
        self.bad_tpms_tx_life_rr = kwargs.get('bad_tpms_tx_life_rr', int())

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
        if self.header != other.header:
            return False
        if self.bad_tpms_tx_life_fl != other.bad_tpms_tx_life_fl:
            return False
        if self.bad_tpms_tx_life_fr != other.bad_tpms_tx_life_fr:
            return False
        if self.bad_tpms_tx_life_rl != other.bad_tpms_tx_life_rl:
            return False
        if self.bad_tpms_tx_life_rr != other.bad_tpms_tx_life_rr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def bad_tpms_tx_life_fl(self):
        """Message field 'bad_tpms_tx_life_fl'."""
        return self._bad_tpms_tx_life_fl

    @bad_tpms_tx_life_fl.setter
    def bad_tpms_tx_life_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bad_tpms_tx_life_fl' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bad_tpms_tx_life_fl' field must be an unsigned integer in [0, 65535]"
        self._bad_tpms_tx_life_fl = value

    @builtins.property
    def bad_tpms_tx_life_fr(self):
        """Message field 'bad_tpms_tx_life_fr'."""
        return self._bad_tpms_tx_life_fr

    @bad_tpms_tx_life_fr.setter
    def bad_tpms_tx_life_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bad_tpms_tx_life_fr' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bad_tpms_tx_life_fr' field must be an unsigned integer in [0, 65535]"
        self._bad_tpms_tx_life_fr = value

    @builtins.property
    def bad_tpms_tx_life_rl(self):
        """Message field 'bad_tpms_tx_life_rl'."""
        return self._bad_tpms_tx_life_rl

    @bad_tpms_tx_life_rl.setter
    def bad_tpms_tx_life_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bad_tpms_tx_life_rl' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bad_tpms_tx_life_rl' field must be an unsigned integer in [0, 65535]"
        self._bad_tpms_tx_life_rl = value

    @builtins.property
    def bad_tpms_tx_life_rr(self):
        """Message field 'bad_tpms_tx_life_rr'."""
        return self._bad_tpms_tx_life_rr

    @bad_tpms_tx_life_rr.setter
    def bad_tpms_tx_life_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bad_tpms_tx_life_rr' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bad_tpms_tx_life_rr' field must be an unsigned integer in [0, 65535]"
        self._bad_tpms_tx_life_rr = value
