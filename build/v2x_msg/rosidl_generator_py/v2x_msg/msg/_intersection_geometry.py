# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/IntersectionGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionGeometry(type):
    """Metaclass of message 'IntersectionGeometry'."""

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
                'v2x_msg.msg.IntersectionGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_geometry

            from v2x_msg.msg import GenericLane
            if GenericLane.__class__._TYPE_SUPPORT is None:
                GenericLane.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from v2x_msg.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from v2x_msg.msg import SpeedLimit
            if SpeedLimit.__class__._TYPE_SUPPORT is None:
                SpeedLimit.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionGeometry(metaclass=Metaclass_IntersectionGeometry):
    """Message class 'IntersectionGeometry'."""

    __slots__ = [
        '_name',
        '_id',
        '_revision',
        '_refpoint',
        '_lanewidth',
        '_speedlimits',
        '_laneset',
        '_preemptprioritydata',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'v2x_msg/IntersectionReferenceID',
        'revision': 'int64',
        'refpoint': 'v2x_msg/Position3D',
        'lanewidth': 'int64',
        'speedlimits': 'sequence<v2x_msg/SpeedLimit>',
        'laneset': 'sequence<v2x_msg/GenericLane>',
        'preemptprioritydata': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SpeedLimit')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'GenericLane')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from v2x_msg.msg import IntersectionReferenceID
        self.id = kwargs.get('id', IntersectionReferenceID())
        self.revision = kwargs.get('revision', int())
        from v2x_msg.msg import Position3D
        self.refpoint = kwargs.get('refpoint', Position3D())
        self.lanewidth = kwargs.get('lanewidth', int())
        self.speedlimits = kwargs.get('speedlimits', [])
        self.laneset = kwargs.get('laneset', [])
        self.preemptprioritydata = kwargs.get('preemptprioritydata', str())

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
        if self.name != other.name:
            return False
        if self.id != other.id:
            return False
        if self.revision != other.revision:
            return False
        if self.refpoint != other.refpoint:
            return False
        if self.lanewidth != other.lanewidth:
            return False
        if self.speedlimits != other.speedlimits:
            return False
        if self.laneset != other.laneset:
            return False
        if self.preemptprioritydata != other.preemptprioritydata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'id' field must be a sub message of type 'IntersectionReferenceID'"
        self._id = value

    @property
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'revision' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._revision = value

    @property
    def refpoint(self):
        """Message field 'refpoint'."""
        return self._refpoint

    @refpoint.setter
    def refpoint(self, value):
        if __debug__:
            from v2x_msg.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'refpoint' field must be a sub message of type 'Position3D'"
        self._refpoint = value

    @property
    def lanewidth(self):
        """Message field 'lanewidth'."""
        return self._lanewidth

    @lanewidth.setter
    def lanewidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanewidth' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lanewidth' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lanewidth = value

    @property
    def speedlimits(self):
        """Message field 'speedlimits'."""
        return self._speedlimits

    @speedlimits.setter
    def speedlimits(self, value):
        if __debug__:
            from v2x_msg.msg import SpeedLimit
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
                 all(isinstance(v, SpeedLimit) for v in value) and
                 True), \
                "The 'speedlimits' field must be a set or sequence and each value of type 'SpeedLimit'"
        self._speedlimits = value

    @property
    def laneset(self):
        """Message field 'laneset'."""
        return self._laneset

    @laneset.setter
    def laneset(self, value):
        if __debug__:
            from v2x_msg.msg import GenericLane
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
                 all(isinstance(v, GenericLane) for v in value) and
                 True), \
                "The 'laneset' field must be a set or sequence and each value of type 'GenericLane'"
        self._laneset = value

    @property
    def preemptprioritydata(self):
        """Message field 'preemptprioritydata'."""
        return self._preemptprioritydata

    @preemptprioritydata.setter
    def preemptprioritydata(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'preemptprioritydata' field must be of type 'str'"
        self._preemptprioritydata = value
