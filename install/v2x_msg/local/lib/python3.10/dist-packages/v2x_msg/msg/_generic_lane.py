# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/GenericLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'overlays'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenericLane(type):
    """Metaclass of message 'GenericLane'."""

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
                'v2x_msg.msg.GenericLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__generic_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__generic_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__generic_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__generic_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__generic_lane

            from v2x_msg.msg import Connection
            if Connection.__class__._TYPE_SUPPORT is None:
                Connection.__class__.__import_type_support__()

            from v2x_msg.msg import LaneAttributes
            if LaneAttributes.__class__._TYPE_SUPPORT is None:
                LaneAttributes.__class__.__import_type_support__()

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


class GenericLane(metaclass=Metaclass_GenericLane):
    """Message class 'GenericLane'."""

    __slots__ = [
        '_laneid',
        '_name',
        '_ingressapproach',
        '_egressapproach',
        '_laneattributes',
        '_maneuvers',
        '_nodelist',
        '_connectsto',
        '_overlays',
    ]

    _fields_and_field_types = {
        'laneid': 'int64',
        'name': 'string',
        'ingressapproach': 'int64',
        'egressapproach': 'int64',
        'laneattributes': 'v2x_msg/LaneAttributes',
        'maneuvers': 'string',
        'nodelist': 'sequence<v2x_msg/NodeListXY>',
        'connectsto': 'sequence<v2x_msg/Connection>',
        'overlays': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'LaneAttributes'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'NodeListXY')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Connection')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.laneid = kwargs.get('laneid', int())
        self.name = kwargs.get('name', str())
        self.ingressapproach = kwargs.get('ingressapproach', int())
        self.egressapproach = kwargs.get('egressapproach', int())
        from v2x_msg.msg import LaneAttributes
        self.laneattributes = kwargs.get('laneattributes', LaneAttributes())
        self.maneuvers = kwargs.get('maneuvers', str())
        self.nodelist = kwargs.get('nodelist', [])
        self.connectsto = kwargs.get('connectsto', [])
        self.overlays = array.array('q', kwargs.get('overlays', []))

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
        if self.laneid != other.laneid:
            return False
        if self.name != other.name:
            return False
        if self.ingressapproach != other.ingressapproach:
            return False
        if self.egressapproach != other.egressapproach:
            return False
        if self.laneattributes != other.laneattributes:
            return False
        if self.maneuvers != other.maneuvers:
            return False
        if self.nodelist != other.nodelist:
            return False
        if self.connectsto != other.connectsto:
            return False
        if self.overlays != other.overlays:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def laneid(self):
        """Message field 'laneid'."""
        return self._laneid

    @laneid.setter
    def laneid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laneid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'laneid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._laneid = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def ingressapproach(self):
        """Message field 'ingressapproach'."""
        return self._ingressapproach

    @ingressapproach.setter
    def ingressapproach(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ingressapproach' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ingressapproach' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ingressapproach = value

    @builtins.property
    def egressapproach(self):
        """Message field 'egressapproach'."""
        return self._egressapproach

    @egressapproach.setter
    def egressapproach(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'egressapproach' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'egressapproach' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._egressapproach = value

    @builtins.property
    def laneattributes(self):
        """Message field 'laneattributes'."""
        return self._laneattributes

    @laneattributes.setter
    def laneattributes(self, value):
        if __debug__:
            from v2x_msg.msg import LaneAttributes
            assert \
                isinstance(value, LaneAttributes), \
                "The 'laneattributes' field must be a sub message of type 'LaneAttributes'"
        self._laneattributes = value

    @builtins.property
    def maneuvers(self):
        """Message field 'maneuvers'."""
        return self._maneuvers

    @maneuvers.setter
    def maneuvers(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'maneuvers' field must be of type 'str'"
        self._maneuvers = value

    @builtins.property
    def nodelist(self):
        """Message field 'nodelist'."""
        return self._nodelist

    @nodelist.setter
    def nodelist(self, value):
        if __debug__:
            from v2x_msg.msg import NodeListXY
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
                 all(isinstance(v, NodeListXY) for v in value) and
                 True), \
                "The 'nodelist' field must be a set or sequence and each value of type 'NodeListXY'"
        self._nodelist = value

    @builtins.property
    def connectsto(self):
        """Message field 'connectsto'."""
        return self._connectsto

    @connectsto.setter
    def connectsto(self, value):
        if __debug__:
            from v2x_msg.msg import Connection
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
                 all(isinstance(v, Connection) for v in value) and
                 True), \
                "The 'connectsto' field must be a set or sequence and each value of type 'Connection'"
        self._connectsto = value

    @builtins.property
    def overlays(self):
        """Message field 'overlays'."""
        return self._overlays

    @overlays.setter
    def overlays(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'overlays' array.array() must have the type code of 'q'"
            self._overlays = value
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
                "The 'overlays' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._overlays = array.array('q', value)
