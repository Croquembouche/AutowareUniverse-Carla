# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/TIM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TIM(type):
    """Metaclass of message 'TIM'."""

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
                'v2x_msg.msg.TIM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tim
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tim
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tim
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tim
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tim

            from v2x_msg.msg import TravelerDataFrame
            if TravelerDataFrame.__class__._TYPE_SUPPORT is None:
                TravelerDataFrame.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TIM(metaclass=Metaclass_TIM):
    """Message class 'TIM'."""

    __slots__ = [
        '_msgcnt',
        '_timestamp',
        '_packetid',
        '_urlb',
        '_dataframes',
    ]

    _fields_and_field_types = {
        'msgcnt': 'int64',
        'timestamp': 'int64',
        'packetid': 'int64',
        'urlb': 'string',
        'dataframes': 'sequence<v2x_msg/TravelerDataFrame>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'TravelerDataFrame')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgcnt = kwargs.get('msgcnt', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.packetid = kwargs.get('packetid', int())
        self.urlb = kwargs.get('urlb', str())
        self.dataframes = kwargs.get('dataframes', [])

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
        if self.msgcnt != other.msgcnt:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.packetid != other.packetid:
            return False
        if self.urlb != other.urlb:
            return False
        if self.dataframes != other.dataframes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgcnt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgcnt = value

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
    def packetid(self):
        """Message field 'packetid'."""
        return self._packetid

    @packetid.setter
    def packetid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'packetid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'packetid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._packetid = value

    @builtins.property
    def urlb(self):
        """Message field 'urlb'."""
        return self._urlb

    @urlb.setter
    def urlb(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'urlb' field must be of type 'str'"
        self._urlb = value

    @builtins.property
    def dataframes(self):
        """Message field 'dataframes'."""
        return self._dataframes

    @dataframes.setter
    def dataframes(self, value):
        if __debug__:
            from v2x_msg.msg import TravelerDataFrame
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TravelerDataFrame) for v in value) and
                 True), \
                "The 'dataframes' field must be a set or sequence and each value of type 'TravelerDataFrame'"
        self._dataframes = value
