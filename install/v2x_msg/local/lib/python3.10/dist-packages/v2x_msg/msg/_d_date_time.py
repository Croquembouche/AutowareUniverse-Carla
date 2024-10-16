# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/DDateTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DDateTime(type):
    """Metaclass of message 'DDateTime'."""

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
                'v2x_msg.msg.DDateTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__d_date_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__d_date_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__d_date_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__d_date_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__d_date_time

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DDateTime(metaclass=Metaclass_DDateTime):
    """Message class 'DDateTime'."""

    __slots__ = [
        '_year',
        '_month',
        '_day',
        '_hour',
        '_minute',
        '_second',
        '_offset',
    ]

    _fields_and_field_types = {
        'year': 'int64',
        'month': 'int64',
        'day': 'int64',
        'hour': 'int64',
        'minute': 'int64',
        'second': 'int64',
        'offset': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.year = kwargs.get('year', int())
        self.month = kwargs.get('month', int())
        self.day = kwargs.get('day', int())
        self.hour = kwargs.get('hour', int())
        self.minute = kwargs.get('minute', int())
        self.second = kwargs.get('second', int())
        self.offset = kwargs.get('offset', int())

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
        if self.year != other.year:
            return False
        if self.month != other.month:
            return False
        if self.day != other.day:
            return False
        if self.hour != other.hour:
            return False
        if self.minute != other.minute:
            return False
        if self.second != other.second:
            return False
        if self.offset != other.offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def year(self):
        """Message field 'year'."""
        return self._year

    @year.setter
    def year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'year' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'year' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._year = value

    @builtins.property
    def month(self):
        """Message field 'month'."""
        return self._month

    @month.setter
    def month(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'month' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'month' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._month = value

    @builtins.property
    def day(self):
        """Message field 'day'."""
        return self._day

    @day.setter
    def day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'day' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'day' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._day = value

    @builtins.property
    def hour(self):
        """Message field 'hour'."""
        return self._hour

    @hour.setter
    def hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hour' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'hour' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._hour = value

    @builtins.property
    def minute(self):
        """Message field 'minute'."""
        return self._minute

    @minute.setter
    def minute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minute' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'minute' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._minute = value

    @builtins.property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'second' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._second = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'offset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._offset = value
