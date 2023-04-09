# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/MovementEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementEvent(type):
    """Metaclass of message 'MovementEvent'."""

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
                'v2x_msg.msg.MovementEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_event

            from v2x_msg.msg import AdvisorySpeed
            if AdvisorySpeed.__class__._TYPE_SUPPORT is None:
                AdvisorySpeed.__class__.__import_type_support__()

            from v2x_msg.msg import TimeChangeDetails
            if TimeChangeDetails.__class__._TYPE_SUPPORT is None:
                TimeChangeDetails.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MovementEvent(metaclass=Metaclass_MovementEvent):
    """Message class 'MovementEvent'."""

    __slots__ = [
        '_movementphasestate',
        '_timing',
        '_speeds',
    ]

    _fields_and_field_types = {
        'movementphasestate': 'int64',
        'timing': 'v2x_msg/TimeChangeDetails',
        'speeds': 'sequence<v2x_msg/AdvisorySpeed>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'TimeChangeDetails'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AdvisorySpeed')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.movementphasestate = kwargs.get('movementphasestate', int())
        from v2x_msg.msg import TimeChangeDetails
        self.timing = kwargs.get('timing', TimeChangeDetails())
        self.speeds = kwargs.get('speeds', [])

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
        if self.movementphasestate != other.movementphasestate:
            return False
        if self.timing != other.timing:
            return False
        if self.speeds != other.speeds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def movementphasestate(self):
        """Message field 'movementphasestate'."""
        return self._movementphasestate

    @movementphasestate.setter
    def movementphasestate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'movementphasestate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'movementphasestate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._movementphasestate = value

    @builtins.property
    def timing(self):
        """Message field 'timing'."""
        return self._timing

    @timing.setter
    def timing(self, value):
        if __debug__:
            from v2x_msg.msg import TimeChangeDetails
            assert \
                isinstance(value, TimeChangeDetails), \
                "The 'timing' field must be a sub message of type 'TimeChangeDetails'"
        self._timing = value

    @builtins.property
    def speeds(self):
        """Message field 'speeds'."""
        return self._speeds

    @speeds.setter
    def speeds(self, value):
        if __debug__:
            from v2x_msg.msg import AdvisorySpeed
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
                 all(isinstance(v, AdvisorySpeed) for v in value) and
                 True), \
                "The 'speeds' field must be a set or sequence and each value of type 'AdvisorySpeed'"
        self._speeds = value
