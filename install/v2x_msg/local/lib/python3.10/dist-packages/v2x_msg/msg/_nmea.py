# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/NMEA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NMEA(type):
    """Metaclass of message 'NMEA'."""

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
            module = import_type_support('v2x_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2x_msg.msg.NMEA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nmea
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nmea
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nmea
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nmea
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nmea

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NMEA(metaclass=Metaclass_NMEA):
    """Message class 'NMEA'."""

    __slots__ = [
        '_timestamp',
        '_rev',
        '_msg',
        '_wdcount',
        '_payload',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'rev': 'int64',
        'msg': 'int64',
        'wdcount': 'int64',
        'payload': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.rev = kwargs.get('rev', int())
        self.msg = kwargs.get('msg', int())
        self.wdcount = kwargs.get('wdcount', int())
        self.payload = kwargs.get('payload', str())

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
        if self.timestamp != other.timestamp:
            return False
        if self.rev != other.rev:
            return False
        if self.msg != other.msg:
            return False
        if self.wdcount != other.wdcount:
            return False
        if self.payload != other.payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def rev(self):
        """Message field 'rev'."""
        return self._rev

    @rev.setter
    def rev(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rev' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rev' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rev = value

    @builtins.property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msg' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msg = value

    @builtins.property
    def wdcount(self):
        """Message field 'wdcount'."""
        return self._wdcount

    @wdcount.setter
    def wdcount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wdcount' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'wdcount' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._wdcount = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'payload' field must be of type 'str'"
        self._payload = value
