# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/NodeListXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeListXY(type):
    """Metaclass of message 'NodeListXY'."""

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
                'v2x_msg.msg.NodeListXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_list_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_list_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_list_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_list_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_list_xy

            from v2x_msg.msg import ComputedLane
            if ComputedLane.__class__._TYPE_SUPPORT is None:
                ComputedLane.__class__.__import_type_support__()

            from v2x_msg.msg import NodeXY
            if NodeXY.__class__._TYPE_SUPPORT is None:
                NodeXY.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeListXY(metaclass=Metaclass_NodeListXY):
    """Message class 'NodeListXY'."""

    __slots__ = [
        '_nodes',
        '_computed',
    ]

    _fields_and_field_types = {
        'nodes': 'sequence<v2x_msg/NodeXY>',
        'computed': 'v2x_msg/ComputedLane',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ComputedLane'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nodes = kwargs.get('nodes', [])
        from v2x_msg.msg import ComputedLane
        self.computed = kwargs.get('computed', ComputedLane())

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
        if self.nodes != other.nodes:
            return False
        if self.computed != other.computed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nodes(self):
        """Message field 'nodes'."""
        return self._nodes

    @nodes.setter
    def nodes(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY
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
                 all(isinstance(v, NodeXY) for v in value) and
                 True), \
                "The 'nodes' field must be a set or sequence and each value of type 'NodeXY'"
        self._nodes = value

    @builtins.property
    def computed(self):
        """Message field 'computed'."""
        return self._computed

    @computed.setter
    def computed(self, value):
        if __debug__:
            from v2x_msg.msg import ComputedLane
            assert \
                isinstance(value, ComputedLane), \
                "The 'computed' field must be a sub message of type 'ComputedLane'"
        self._computed = value
