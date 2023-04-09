# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SnapshotDistance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SnapshotDistance(type):
    """Metaclass of message 'SnapshotDistance'."""

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
                'v2x_msg.msg.SnapshotDistance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__snapshot_distance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__snapshot_distance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__snapshot_distance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__snapshot_distance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__snapshot_distance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SnapshotDistance(metaclass=Metaclass_SnapshotDistance):
    """Message class 'SnapshotDistance'."""

    __slots__ = [
        '_distance1',
        '_speed1',
        '_distance2',
        '_speed2',
    ]

    _fields_and_field_types = {
        'distance1': 'int64',
        'speed1': 'int64',
        'distance2': 'int64',
        'speed2': 'int64',
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
        self.distance1 = kwargs.get('distance1', int())
        self.speed1 = kwargs.get('speed1', int())
        self.distance2 = kwargs.get('distance2', int())
        self.speed2 = kwargs.get('speed2', int())

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
        if self.distance1 != other.distance1:
            return False
        if self.speed1 != other.speed1:
            return False
        if self.distance2 != other.distance2:
            return False
        if self.speed2 != other.speed2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance1(self):
        """Message field 'distance1'."""
        return self._distance1

    @distance1.setter
    def distance1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'distance1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._distance1 = value

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
    def distance2(self):
        """Message field 'distance2'."""
        return self._distance2

    @distance2.setter
    def distance2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'distance2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._distance2 = value

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
