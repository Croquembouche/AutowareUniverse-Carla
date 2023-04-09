# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/NodeAttributeSetLL.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'localnode'
# Member 'disabled'
# Member 'enabled'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeAttributeSetLL(type):
    """Metaclass of message 'NodeAttributeSetLL'."""

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
                'v2x_msg.msg.NodeAttributeSetLL')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_attribute_set_ll
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_attribute_set_ll
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_attribute_set_ll
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_attribute_set_ll
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_attribute_set_ll

            from v2x_msg.msg import LaneDataAttribute
            if LaneDataAttribute.__class__._TYPE_SUPPORT is None:
                LaneDataAttribute.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeAttributeSetLL(metaclass=Metaclass_NodeAttributeSetLL):
    """Message class 'NodeAttributeSetLL'."""

    __slots__ = [
        '_localnode',
        '_disabled',
        '_enabled',
        '_data',
        '_dwidth',
        '_delevation',
    ]

    _fields_and_field_types = {
        'localnode': 'sequence<int64>',
        'disabled': 'sequence<int64>',
        'enabled': 'sequence<int64>',
        'data': 'sequence<v2x_msg/LaneDataAttribute>',
        'dwidth': 'int64',
        'delevation': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'LaneDataAttribute')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.localnode = array.array('q', kwargs.get('localnode', []))
        self.disabled = array.array('q', kwargs.get('disabled', []))
        self.enabled = array.array('q', kwargs.get('enabled', []))
        self.data = kwargs.get('data', [])
        self.dwidth = kwargs.get('dwidth', int())
        self.delevation = kwargs.get('delevation', int())

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
        if self.localnode != other.localnode:
            return False
        if self.disabled != other.disabled:
            return False
        if self.enabled != other.enabled:
            return False
        if self.data != other.data:
            return False
        if self.dwidth != other.dwidth:
            return False
        if self.delevation != other.delevation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def localnode(self):
        """Message field 'localnode'."""
        return self._localnode

    @localnode.setter
    def localnode(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'localnode' array.array() must have the type code of 'q'"
            self._localnode = value
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
                "The 'localnode' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._localnode = array.array('q', value)

    @builtins.property
    def disabled(self):
        """Message field 'disabled'."""
        return self._disabled

    @disabled.setter
    def disabled(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'disabled' array.array() must have the type code of 'q'"
            self._disabled = value
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
                "The 'disabled' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._disabled = array.array('q', value)

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'enabled' array.array() must have the type code of 'q'"
            self._enabled = value
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
                "The 'enabled' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._enabled = array.array('q', value)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from v2x_msg.msg import LaneDataAttribute
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
                 all(isinstance(v, LaneDataAttribute) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'LaneDataAttribute'"
        self._data = value

    @builtins.property
    def dwidth(self):
        """Message field 'dwidth'."""
        return self._dwidth

    @dwidth.setter
    def dwidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dwidth' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'dwidth' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._dwidth = value

    @builtins.property
    def delevation(self):
        """Message field 'delevation'."""
        return self._delevation

    @delevation.setter
    def delevation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delevation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'delevation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._delevation = value
