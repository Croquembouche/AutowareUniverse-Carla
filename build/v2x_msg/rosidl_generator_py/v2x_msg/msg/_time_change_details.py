# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/TimeChangeDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimeChangeDetails(type):
    """Metaclass of message 'TimeChangeDetails'."""

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
                'v2x_msg.msg.TimeChangeDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__time_change_details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__time_change_details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__time_change_details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__time_change_details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__time_change_details

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimeChangeDetails(metaclass=Metaclass_TimeChangeDetails):
    """Message class 'TimeChangeDetails'."""

    __slots__ = [
        '_startime',
        '_minendtime',
        '_maxendtime',
        '_likelytime',
        '_confidence',
        '_nexttime',
    ]

    _fields_and_field_types = {
        'startime': 'int64',
        'minendtime': 'int64',
        'maxendtime': 'int64',
        'likelytime': 'int64',
        'confidence': 'int64',
        'nexttime': 'int64',
    }

    SLOT_TYPES = (
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
        self.startime = kwargs.get('startime', int())
        self.minendtime = kwargs.get('minendtime', int())
        self.maxendtime = kwargs.get('maxendtime', int())
        self.likelytime = kwargs.get('likelytime', int())
        self.confidence = kwargs.get('confidence', int())
        self.nexttime = kwargs.get('nexttime', int())

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
        if self.startime != other.startime:
            return False
        if self.minendtime != other.minendtime:
            return False
        if self.maxendtime != other.maxendtime:
            return False
        if self.likelytime != other.likelytime:
            return False
        if self.confidence != other.confidence:
            return False
        if self.nexttime != other.nexttime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def startime(self):
        """Message field 'startime'."""
        return self._startime

    @startime.setter
    def startime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'startime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'startime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._startime = value

    @builtins.property
    def minendtime(self):
        """Message field 'minendtime'."""
        return self._minendtime

    @minendtime.setter
    def minendtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minendtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'minendtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._minendtime = value

    @builtins.property
    def maxendtime(self):
        """Message field 'maxendtime'."""
        return self._maxendtime

    @maxendtime.setter
    def maxendtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maxendtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maxendtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maxendtime = value

    @builtins.property
    def likelytime(self):
        """Message field 'likelytime'."""
        return self._likelytime

    @likelytime.setter
    def likelytime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'likelytime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'likelytime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._likelytime = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'confidence' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._confidence = value

    @builtins.property
    def nexttime(self):
        """Message field 'nexttime'."""
        return self._nexttime

    @nexttime.setter
    def nexttime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nexttime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'nexttime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._nexttime = value
