# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/SwVersions02.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SwVersions02(type):
    """Metaclass of message 'SwVersions02'."""

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
                'sd_can_msgs.msg.SwVersions02')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sw_versions02
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sw_versions02
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sw_versions02
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sw_versions02
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sw_versions02

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


class SwVersions02(metaclass=Metaclass_SwVersions02):
    """Message class 'SwVersions02'."""

    __slots__ = [
        '_header',
        '_cba_fl_sw_minor_version',
        '_cba_fl_sw_major_version',
        '_cba_fl_sw_build_version',
        '_cba_fr_sw_minor_version',
        '_cba_fr_sw_major_version',
        '_cba_fr_sw_build_version',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cba_fl_sw_minor_version': 'uint8',
        'cba_fl_sw_major_version': 'uint8',
        'cba_fl_sw_build_version': 'uint16',
        'cba_fr_sw_minor_version': 'uint8',
        'cba_fr_sw_major_version': 'uint8',
        'cba_fr_sw_build_version': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cba_fl_sw_minor_version = kwargs.get('cba_fl_sw_minor_version', int())
        self.cba_fl_sw_major_version = kwargs.get('cba_fl_sw_major_version', int())
        self.cba_fl_sw_build_version = kwargs.get('cba_fl_sw_build_version', int())
        self.cba_fr_sw_minor_version = kwargs.get('cba_fr_sw_minor_version', int())
        self.cba_fr_sw_major_version = kwargs.get('cba_fr_sw_major_version', int())
        self.cba_fr_sw_build_version = kwargs.get('cba_fr_sw_build_version', int())

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
        if self.cba_fl_sw_minor_version != other.cba_fl_sw_minor_version:
            return False
        if self.cba_fl_sw_major_version != other.cba_fl_sw_major_version:
            return False
        if self.cba_fl_sw_build_version != other.cba_fl_sw_build_version:
            return False
        if self.cba_fr_sw_minor_version != other.cba_fr_sw_minor_version:
            return False
        if self.cba_fr_sw_major_version != other.cba_fr_sw_major_version:
            return False
        if self.cba_fr_sw_build_version != other.cba_fr_sw_build_version:
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
    def cba_fl_sw_minor_version(self):
        """Message field 'cba_fl_sw_minor_version'."""
        return self._cba_fl_sw_minor_version

    @cba_fl_sw_minor_version.setter
    def cba_fl_sw_minor_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_sw_minor_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_sw_minor_version' field must be an unsigned integer in [0, 255]"
        self._cba_fl_sw_minor_version = value

    @builtins.property
    def cba_fl_sw_major_version(self):
        """Message field 'cba_fl_sw_major_version'."""
        return self._cba_fl_sw_major_version

    @cba_fl_sw_major_version.setter
    def cba_fl_sw_major_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_sw_major_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fl_sw_major_version' field must be an unsigned integer in [0, 255]"
        self._cba_fl_sw_major_version = value

    @builtins.property
    def cba_fl_sw_build_version(self):
        """Message field 'cba_fl_sw_build_version'."""
        return self._cba_fl_sw_build_version

    @cba_fl_sw_build_version.setter
    def cba_fl_sw_build_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fl_sw_build_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cba_fl_sw_build_version' field must be an unsigned integer in [0, 65535]"
        self._cba_fl_sw_build_version = value

    @builtins.property
    def cba_fr_sw_minor_version(self):
        """Message field 'cba_fr_sw_minor_version'."""
        return self._cba_fr_sw_minor_version

    @cba_fr_sw_minor_version.setter
    def cba_fr_sw_minor_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_sw_minor_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_sw_minor_version' field must be an unsigned integer in [0, 255]"
        self._cba_fr_sw_minor_version = value

    @builtins.property
    def cba_fr_sw_major_version(self):
        """Message field 'cba_fr_sw_major_version'."""
        return self._cba_fr_sw_major_version

    @cba_fr_sw_major_version.setter
    def cba_fr_sw_major_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_sw_major_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cba_fr_sw_major_version' field must be an unsigned integer in [0, 255]"
        self._cba_fr_sw_major_version = value

    @builtins.property
    def cba_fr_sw_build_version(self):
        """Message field 'cba_fr_sw_build_version'."""
        return self._cba_fr_sw_build_version

    @cba_fr_sw_build_version.setter
    def cba_fr_sw_build_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cba_fr_sw_build_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cba_fr_sw_build_version' field must be an unsigned integer in [0, 65535]"
        self._cba_fr_sw_build_version = value
