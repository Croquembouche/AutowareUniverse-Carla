# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/NodeOffsetPointXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeOffsetPointXY(type):
    """Metaclass of message 'NodeOffsetPointXY'."""

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
                'v2x_msg.msg.NodeOffsetPointXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_offset_point_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_offset_point_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_offset_point_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_offset_point_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_offset_point_xy

            from v2x_msg.msg import NodeXY22b
            if NodeXY22b.__class__._TYPE_SUPPORT is None:
                NodeXY22b.__class__.__import_type_support__()

            from v2x_msg.msg import NodeXY24b
            if NodeXY24b.__class__._TYPE_SUPPORT is None:
                NodeXY24b.__class__.__import_type_support__()

            from v2x_msg.msg import NodeXY26b
            if NodeXY26b.__class__._TYPE_SUPPORT is None:
                NodeXY26b.__class__.__import_type_support__()

            from v2x_msg.msg import NodeXY28b
            if NodeXY28b.__class__._TYPE_SUPPORT is None:
                NodeXY28b.__class__.__import_type_support__()

            from v2x_msg.msg import NodeXY32b
            if NodeXY32b.__class__._TYPE_SUPPORT is None:
                NodeXY32b.__class__.__import_type_support__()

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


class NodeOffsetPointXY(metaclass=Metaclass_NodeOffsetPointXY):
    """Message class 'NodeOffsetPointXY'."""

    __slots__ = [
        '_nodexy1',
        '_nodexy2',
        '_nodexy3',
        '_nodexy4',
        '_nodexy5',
        '_nodelatlon',
    ]

    _fields_and_field_types = {
        'nodexy1': 'v2x_msg/NodeXY22b',
        'nodexy2': 'v2x_msg/NodeXY24b',
        'nodexy3': 'v2x_msg/NodeXY26b',
        'nodexy4': 'v2x_msg/NodeXY28b',
        'nodexy5': 'v2x_msg/NodeXY32b',
        'nodelatlon': 'v2x_msg/Nodellmd64b',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY22b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY24b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY26b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY28b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeXY32b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Nodellmd64b'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import NodeXY22b
        self.nodexy1 = kwargs.get('nodexy1', NodeXY22b())
        from v2x_msg.msg import NodeXY24b
        self.nodexy2 = kwargs.get('nodexy2', NodeXY24b())
        from v2x_msg.msg import NodeXY26b
        self.nodexy3 = kwargs.get('nodexy3', NodeXY26b())
        from v2x_msg.msg import NodeXY28b
        self.nodexy4 = kwargs.get('nodexy4', NodeXY28b())
        from v2x_msg.msg import NodeXY32b
        self.nodexy5 = kwargs.get('nodexy5', NodeXY32b())
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
        if self.nodexy1 != other.nodexy1:
            return False
        if self.nodexy2 != other.nodexy2:
            return False
        if self.nodexy3 != other.nodexy3:
            return False
        if self.nodexy4 != other.nodexy4:
            return False
        if self.nodexy5 != other.nodexy5:
            return False
        if self.nodelatlon != other.nodelatlon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def nodexy1(self):
        """Message field 'nodexy1'."""
        return self._nodexy1

    @nodexy1.setter
    def nodexy1(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY22b
            assert \
                isinstance(value, NodeXY22b), \
                "The 'nodexy1' field must be a sub message of type 'NodeXY22b'"
        self._nodexy1 = value

    @property
    def nodexy2(self):
        """Message field 'nodexy2'."""
        return self._nodexy2

    @nodexy2.setter
    def nodexy2(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY24b
            assert \
                isinstance(value, NodeXY24b), \
                "The 'nodexy2' field must be a sub message of type 'NodeXY24b'"
        self._nodexy2 = value

    @property
    def nodexy3(self):
        """Message field 'nodexy3'."""
        return self._nodexy3

    @nodexy3.setter
    def nodexy3(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY26b
            assert \
                isinstance(value, NodeXY26b), \
                "The 'nodexy3' field must be a sub message of type 'NodeXY26b'"
        self._nodexy3 = value

    @property
    def nodexy4(self):
        """Message field 'nodexy4'."""
        return self._nodexy4

    @nodexy4.setter
    def nodexy4(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY28b
            assert \
                isinstance(value, NodeXY28b), \
                "The 'nodexy4' field must be a sub message of type 'NodeXY28b'"
        self._nodexy4 = value

    @property
    def nodexy5(self):
        """Message field 'nodexy5'."""
        return self._nodexy5

    @nodexy5.setter
    def nodexy5(self, value):
        if __debug__:
            from v2x_msg.msg import NodeXY32b
            assert \
                isinstance(value, NodeXY32b), \
                "The 'nodexy5' field must be a sub message of type 'NodeXY32b'"
        self._nodexy5 = value

    @property
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
