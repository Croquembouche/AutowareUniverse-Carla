# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/NodeOffsetPointLL.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeOffsetPointLL(type):
    """Metaclass of message 'NodeOffsetPointLL'."""

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
                'v2x_msg.msg.NodeOffsetPointLL')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_offset_point_ll
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_offset_point_ll
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_offset_point_ll
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_offset_point_ll
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_offset_point_ll

            from v2x_msg.msg import NodeLL24B
            if NodeLL24B.__class__._TYPE_SUPPORT is None:
                NodeLL24B.__class__.__import_type_support__()

            from v2x_msg.msg import NodeLL28B
            if NodeLL28B.__class__._TYPE_SUPPORT is None:
                NodeLL28B.__class__.__import_type_support__()

            from v2x_msg.msg import NodeLL32B
            if NodeLL32B.__class__._TYPE_SUPPORT is None:
                NodeLL32B.__class__.__import_type_support__()

            from v2x_msg.msg import NodeLL36B
            if NodeLL36B.__class__._TYPE_SUPPORT is None:
                NodeLL36B.__class__.__import_type_support__()

            from v2x_msg.msg import NodeLL44B
            if NodeLL44B.__class__._TYPE_SUPPORT is None:
                NodeLL44B.__class__.__import_type_support__()

            from v2x_msg.msg import NodeLL48B
            if NodeLL48B.__class__._TYPE_SUPPORT is None:
                NodeLL48B.__class__.__import_type_support__()

            from v2x_msg.msg import Nodellmd64b
            if Nodellmd64b.__class__._TYPE_SUPPORT is None:
                Nodellmd64b.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeOffsetPointLL(metaclass=Metaclass_NodeOffsetPointLL):
    """Message class 'NodeOffsetPointLL'."""

    __slots__ = [
        '_nodell1',
        '_nodell2',
        '_nodell3',
        '_nodell4',
        '_nodell5',
        '_nodell6',
        '_nodelatlon',
    ]

    _fields_and_field_types = {
        'nodell1': 'v2x_msg/NodeLL24B',
        'nodell2': 'v2x_msg/NodeLL28B',
        'nodell3': 'v2x_msg/NodeLL32B',
        'nodell4': 'v2x_msg/NodeLL36B',
        'nodell5': 'v2x_msg/NodeLL44B',
        'nodell6': 'v2x_msg/NodeLL48B',
        'nodelatlon': 'v2x_msg/Nodellmd64b',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL24B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL28B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL32B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL36B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL44B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeLL48B'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Nodellmd64b'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import NodeLL24B
        self.nodell1 = kwargs.get('nodell1', NodeLL24B())
        from v2x_msg.msg import NodeLL28B
        self.nodell2 = kwargs.get('nodell2', NodeLL28B())
        from v2x_msg.msg import NodeLL32B
        self.nodell3 = kwargs.get('nodell3', NodeLL32B())
        from v2x_msg.msg import NodeLL36B
        self.nodell4 = kwargs.get('nodell4', NodeLL36B())
        from v2x_msg.msg import NodeLL44B
        self.nodell5 = kwargs.get('nodell5', NodeLL44B())
        from v2x_msg.msg import NodeLL48B
        self.nodell6 = kwargs.get('nodell6', NodeLL48B())
        from v2x_msg.msg import Nodellmd64b
        self.nodelatlon = kwargs.get('nodelatlon', Nodellmd64b())

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
        if self.nodell1 != other.nodell1:
            return False
        if self.nodell2 != other.nodell2:
            return False
        if self.nodell3 != other.nodell3:
            return False
        if self.nodell4 != other.nodell4:
            return False
        if self.nodell5 != other.nodell5:
            return False
        if self.nodell6 != other.nodell6:
            return False
        if self.nodelatlon != other.nodelatlon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nodell1(self):
        """Message field 'nodell1'."""
        return self._nodell1

    @nodell1.setter
    def nodell1(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL24B
            assert \
                isinstance(value, NodeLL24B), \
                "The 'nodell1' field must be a sub message of type 'NodeLL24B'"
        self._nodell1 = value

    @builtins.property
    def nodell2(self):
        """Message field 'nodell2'."""
        return self._nodell2

    @nodell2.setter
    def nodell2(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL28B
            assert \
                isinstance(value, NodeLL28B), \
                "The 'nodell2' field must be a sub message of type 'NodeLL28B'"
        self._nodell2 = value

    @builtins.property
    def nodell3(self):
        """Message field 'nodell3'."""
        return self._nodell3

    @nodell3.setter
    def nodell3(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL32B
            assert \
                isinstance(value, NodeLL32B), \
                "The 'nodell3' field must be a sub message of type 'NodeLL32B'"
        self._nodell3 = value

    @builtins.property
    def nodell4(self):
        """Message field 'nodell4'."""
        return self._nodell4

    @nodell4.setter
    def nodell4(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL36B
            assert \
                isinstance(value, NodeLL36B), \
                "The 'nodell4' field must be a sub message of type 'NodeLL36B'"
        self._nodell4 = value

    @builtins.property
    def nodell5(self):
        """Message field 'nodell5'."""
        return self._nodell5

    @nodell5.setter
    def nodell5(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL44B
            assert \
                isinstance(value, NodeLL44B), \
                "The 'nodell5' field must be a sub message of type 'NodeLL44B'"
        self._nodell5 = value

    @builtins.property
    def nodell6(self):
        """Message field 'nodell6'."""
        return self._nodell6

    @nodell6.setter
    def nodell6(self, value):
        if __debug__:
            from v2x_msg.msg import NodeLL48B
            assert \
                isinstance(value, NodeLL48B), \
                "The 'nodell6' field must be a sub message of type 'NodeLL48B'"
        self._nodell6 = value

    @builtins.property
    def nodelatlon(self):
        """Message field 'nodelatlon'."""
        return self._nodelatlon

    @nodelatlon.setter
    def nodelatlon(self, value):
        if __debug__:
            from v2x_msg.msg import Nodellmd64b
            assert \
                isinstance(value, Nodellmd64b), \
                "The 'nodelatlon' field must be a sub message of type 'Nodellmd64b'"
        self._nodelatlon = value
