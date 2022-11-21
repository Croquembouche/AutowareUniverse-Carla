# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PathHistoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathHistoryPoint(type):
    """Metaclass of message 'PathHistoryPoint'."""

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
                'v2x_msg.msg.PathHistoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_history_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_history_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_history_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_history_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_history_point

            from v2x_msg.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathHistoryPoint(metaclass=Metaclass_PathHistoryPoint):
    """Message class 'PathHistoryPoint'."""

    __slots__ = [
        '_latoffset',
        '_lonoffset',
        '_elevationoffset',
        '_timeoffset',
        '_speed',
        '_accuracy',
        '_heading',
    ]

    _fields_and_field_types = {
        'latoffset': 'int64',
        'lonoffset': 'int64',
        'elevationoffset': 'int64',
        'timeoffset': 'int64',
        'speed': 'int64',
        'accuracy': 'v2x_msg/PositionalAccuracy',
        'heading': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.latoffset = kwargs.get('latoffset', int())
        self.lonoffset = kwargs.get('lonoffset', int())
        self.elevationoffset = kwargs.get('elevationoffset', int())
        self.timeoffset = kwargs.get('timeoffset', int())
        self.speed = kwargs.get('speed', int())
        from v2x_msg.msg import PositionalAccuracy
        self.accuracy = kwargs.get('accuracy', PositionalAccuracy())
        self.heading = kwargs.get('heading', int())

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
        if self.latoffset != other.latoffset:
            return False
        if self.lonoffset != other.lonoffset:
            return False
        if self.elevationoffset != other.elevationoffset:
            return False
        if self.timeoffset != other.timeoffset:
            return False
        if self.speed != other.speed:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.heading != other.heading:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def latoffset(self):
        """Message field 'latoffset'."""
        return self._latoffset

    @latoffset.setter
    def latoffset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latoffset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'latoffset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._latoffset = value

    @property
    def lonoffset(self):
        """Message field 'lonoffset'."""
        return self._lonoffset

    @lonoffset.setter
    def lonoffset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lonoffset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lonoffset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lonoffset = value

    @property
    def elevationoffset(self):
        """Message field 'elevationoffset'."""
        return self._elevationoffset

    @elevationoffset.setter
    def elevationoffset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elevationoffset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'elevationoffset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._elevationoffset = value

    @property
    def timeoffset(self):
        """Message field 'timeoffset'."""
        return self._timeoffset

    @timeoffset.setter
    def timeoffset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeoffset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timeoffset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timeoffset = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed = value

    @property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            from v2x_msg.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._accuracy = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'heading' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._heading = value
