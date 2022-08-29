# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RSA.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'desrciption'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RSA(type):
    """Metaclass of message 'RSA'."""

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
                'v2x_msg.msg.RSA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rsa
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rsa
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rsa
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rsa
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rsa

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RSA(metaclass=Metaclass_RSA):
    """Message class 'RSA'."""

    __slots__ = [
        '_msgcnt',
        '_timestamp',
        '_typeevent',
        '_desrciption',
        '_priority',
        '_heading',
        '_extent',
        '_position',
        '_furtherinfoid',
    ]

    _fields_and_field_types = {
        'msgcnt': 'int64',
        'timestamp': 'int64',
        'typeevent': 'int64',
        'desrciption': 'sequence<int64>',
        'priority': 'string',
        'heading': 'string',
        'extent': 'int64',
        'position': 'v2x_msg/FullPositionVector',
        'furtherinfoid': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgcnt = kwargs.get('msgcnt', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.typeevent = kwargs.get('typeevent', int())
        self.desrciption = array.array('q', kwargs.get('desrciption', []))
        self.priority = kwargs.get('priority', str())
        self.heading = kwargs.get('heading', str())
        self.extent = kwargs.get('extent', int())
        from v2x_msg.msg import FullPositionVector
        self.position = kwargs.get('position', FullPositionVector())
        self.furtherinfoid = kwargs.get('furtherinfoid', str())

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
        if self.typeevent != other.typeevent:
            return False
        if self.desrciption != other.desrciption:
            return False
        if self.priority != other.priority:
            return False
        if self.heading != other.heading:
            return False
        if self.extent != other.extent:
            return False
        if self.position != other.position:
            return False
        if self.furtherinfoid != other.furtherinfoid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
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

    @property
    def typeevent(self):
        """Message field 'typeevent'."""
        return self._typeevent

    @typeevent.setter
    def typeevent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'typeevent' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'typeevent' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._typeevent = value

    @property
    def desrciption(self):
        """Message field 'desrciption'."""
        return self._desrciption

    @desrciption.setter
    def desrciption(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'desrciption' array.array() must have the type code of 'q'"
            self._desrciption = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'desrciption' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._desrciption = array.array('q', value)

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'priority' field must be of type 'str'"
        self._priority = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'heading' field must be of type 'str'"
        self._heading = value

    @property
    def extent(self):
        """Message field 'extent'."""
        return self._extent

    @extent.setter
    def extent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extent' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'extent' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._extent = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'position' field must be a sub message of type 'FullPositionVector'"
        self._position = value

    @property
    def furtherinfoid(self):
        """Message field 'furtherinfoid'."""
        return self._furtherinfoid

    @furtherinfoid.setter
    def furtherinfoid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'furtherinfoid' field must be of type 'str'"
        self._furtherinfoid = value
