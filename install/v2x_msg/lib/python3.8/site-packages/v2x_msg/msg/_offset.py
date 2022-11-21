# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Offset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Offset(type):
    """Metaclass of message 'Offset'."""

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
                'v2x_msg.msg.Offset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__offset

            from v2x_msg.msg import NodeLL
            if NodeLL.__class__._TYPE_SUPPORT is None:
                NodeLL.__class__.__import_type_support__()

            from v2x_msg.msg import NodeListXY
            if NodeListXY.__class__._TYPE_SUPPORT is None:
                NodeListXY.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Offset(metaclass=Metaclass_Offset):
    """Message class 'Offset'."""

    __slots__ = [
        '_xy',
        '_nodes',
    ]

    _fields_and_field_types = {
        'xy': 'v2x_msg/NodeListXY',
        'nodes': 'sequence<v2x_msg/NodeLL>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeListXY'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import NodeListXY
        self.xy = kwargs.get('xy', NodeListXY())
        self.nodes = kwargs.get('nodes', [])

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
        if self.xy != other.xy:
            return False
        if self.nodes != other.nodes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def xy(self):
        """Message field 'xy'."""
        return self._xy

    @xy.setter
    def xy(self, value):
        if __debug__:
            from v2x_msg.msg import NodeListXY
            assert \
                isinstance(value, NodeListXY), \
                "The 'xy' field must be a sub message of type 'NodeListXY'"
        self._xy = value

    @property
    def nodes(self):
        """Message field 'nodes'."""
        return self._nodes

    @nodes.setter
    def nodes(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL
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
                 all(isinstance(v, NodeLL) for v in value) and
                 True), \
                "The 'nodes' field must be a set or sequence and each value of type 'NodeLL'"
        self._nodes = value
