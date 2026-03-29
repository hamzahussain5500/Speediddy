# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sd_can_msgs:msg/KistlerAccHorAccCBody.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KistlerAccHorAccCBody(type):
    """Metaclass of message 'KistlerAccHorAccCBody'."""

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
                'sd_can_msgs.msg.KistlerAccHorAccCBody')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kistler_acc_hor_acc_c_body
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kistler_acc_hor_acc_c_body
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kistler_acc_hor_acc_c_body
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kistler_acc_hor_acc_c_body
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kistler_acc_hor_acc_c_body

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


class KistlerAccHorAccCBody(metaclass=Metaclass_KistlerAccHorAccCBody):
    """Message class 'KistlerAccHorAccCBody'."""

    __slots__ = [
        '_header',
        '_acc_x_hor',
        '_acc_y_hor',
        '_acc_z_hor',
        '_acc_c_body',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'acc_x_hor': 'double',
        'acc_y_hor': 'double',
        'acc_z_hor': 'double',
        'acc_c_body': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.acc_x_hor = kwargs.get('acc_x_hor', float())
        self.acc_y_hor = kwargs.get('acc_y_hor', float())
        self.acc_z_hor = kwargs.get('acc_z_hor', float())
        self.acc_c_body = kwargs.get('acc_c_body', float())

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
        if self.acc_x_hor != other.acc_x_hor:
            return False
        if self.acc_y_hor != other.acc_y_hor:
            return False
        if self.acc_z_hor != other.acc_z_hor:
            return False
        if self.acc_c_body != other.acc_c_body:
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
    def acc_x_hor(self):
        """Message field 'acc_x_hor'."""
        return self._acc_x_hor

    @acc_x_hor.setter
    def acc_x_hor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_x_hor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_x_hor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_x_hor = value

    @builtins.property
    def acc_y_hor(self):
        """Message field 'acc_y_hor'."""
        return self._acc_y_hor

    @acc_y_hor.setter
    def acc_y_hor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_y_hor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_y_hor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_y_hor = value

    @builtins.property
    def acc_z_hor(self):
        """Message field 'acc_z_hor'."""
        return self._acc_z_hor

    @acc_z_hor.setter
    def acc_z_hor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_z_hor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_z_hor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_z_hor = value

    @builtins.property
    def acc_c_body(self):
        """Message field 'acc_c_body'."""
        return self._acc_c_body

    @acc_c_body.setter
    def acc_c_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_c_body' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_c_body' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_c_body = value
