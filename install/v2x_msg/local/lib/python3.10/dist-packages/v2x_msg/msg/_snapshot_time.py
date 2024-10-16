# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SnapshotTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SnapshotTime(type):
    """Metaclass of message 'SnapshotTime'."""

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
                'v2x_msg.msg.SnapshotTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__snapshot_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__snapshot_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__snapshot_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__snapshot_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__snapshot_time

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SnapshotTime(metaclass=Metaclass_SnapshotTime):
    """Message class 'SnapshotTime'."""

    __slots__ = [
        '_speed1',
        '_time1',
        '_speed2',
        '_time2',
    ]

    _fields_and_field_types = {
        'speed1': 'int64',
        'time1': 'int64',
        'speed2': 'int64',
        'time2': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed1 = kwargs.get('speed1', int())
        self.time1 = kwargs.get('time1', int())
        self.speed2 = kwargs.get('speed2', int())
        self.time2 = kwargs.get('time2', int())

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
        if self.speed1 != other.speed1:
            return False
        if self.time1 != other.time1:
            return False
        if self.speed2 != other.speed2:
            return False
        if self.time2 != other.time2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed1(self):
        """Message field 'speed1'."""
        return self._speed1

    @speed1.setter
    def speed1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed1 = value

    @builtins.property
    def time1(self):
        """Message field 'time1'."""
        return self._time1

    @time1.setter
    def time1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time1 = value

    @builtins.property
    def speed2(self):
        """Message field 'speed2'."""
        return self._speed2

    @speed2.setter
    def speed2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed2 = value

    @builtins.property
    def time2(self):
        """Message field 'time2'."""
        return self._time2

    @time2.setter
    def time2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time2 = value
