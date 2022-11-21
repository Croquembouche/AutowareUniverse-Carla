# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/IntersectionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionState(type):
    """Metaclass of message 'IntersectionState'."""

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
                'v2x_msg.msg.IntersectionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_state

            from v2x_msg.msg import ConnectionManeuverAssist
            if ConnectionManeuverAssist.__class__._TYPE_SUPPORT is None:
                ConnectionManeuverAssist.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionStatusObject
            if IntersectionStatusObject.__class__._TYPE_SUPPORT is None:
                IntersectionStatusObject.__class__.__import_type_support__()

            from v2x_msg.msg import LaneID
            if LaneID.__class__._TYPE_SUPPORT is None:
                LaneID.__class__.__import_type_support__()

            from v2x_msg.msg import MovementState
            if MovementState.__class__._TYPE_SUPPORT is None:
                MovementState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionState(metaclass=Metaclass_IntersectionState):
    """Message class 'IntersectionState'."""

    __slots__ = [
        '_name',
        '_id',
        '_revision',
        '_status',
        '_moy',
        '_timestamp',
        '_enabledlanes',
        '_states',
        '_maneuverassistlist',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'v2x_msg/IntersectionReferenceID',
        'revision': 'int64',
        'status': 'v2x_msg/IntersectionStatusObject',
        'moy': 'int64',
        'timestamp': 'int64',
        'enabledlanes': 'sequence<v2x_msg/LaneID>',
        'states': 'sequence<v2x_msg/MovementState>',
        'maneuverassistlist': 'sequence<v2x_msg/ConnectionManeuverAssist>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionStatusObject'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'LaneID')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'MovementState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ConnectionManeuverAssist')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from v2x_msg.msg import IntersectionReferenceID
        self.id = kwargs.get('id', IntersectionReferenceID())
        self.revision = kwargs.get('revision', int())
        from v2x_msg.msg import IntersectionStatusObject
        self.status = kwargs.get('status', IntersectionStatusObject())
        self.moy = kwargs.get('moy', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.enabledlanes = kwargs.get('enabledlanes', [])
        self.states = kwargs.get('states', [])
        self.maneuverassistlist = kwargs.get('maneuverassistlist', [])

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
        if self.status != other.status:
            return False
        if self.moy != other.moy:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.enabledlanes != other.enabledlanes:
            return False
        if self.states != other.states:
            return False
        if self.maneuverassistlist != other.maneuverassistlist:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionStatusObject
            assert \
                isinstance(value, IntersectionStatusObject), \
                "The 'status' field must be a sub message of type 'IntersectionStatusObject'"
        self._status = value

    @property
    def moy(self):
        """Message field 'moy'."""
        return self._moy

    @moy.setter
    def moy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moy' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'moy' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._moy = value

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
    def enabledlanes(self):
        """Message field 'enabledlanes'."""
        return self._enabledlanes

    @enabledlanes.setter
    def enabledlanes(self, value):
        if __debug__:
            from v2x_msg.msg import LaneID
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
                 all(isinstance(v, LaneID) for v in value) and
                 True), \
                "The 'enabledlanes' field must be a set or sequence and each value of type 'LaneID'"
        self._enabledlanes = value

    @property
    def states(self):
        """Message field 'states'."""
        return self._states

    @states.setter
    def states(self, value):
        if __debug__:
            from v2x_msg.msg import MovementState
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
                 all(isinstance(v, MovementState) for v in value) and
                 True), \
                "The 'states' field must be a set or sequence and each value of type 'MovementState'"
        self._states = value

    @property
    def maneuverassistlist(self):
        """Message field 'maneuverassistlist'."""
        return self._maneuverassistlist

    @maneuverassistlist.setter
    def maneuverassistlist(self, value):
        if __debug__:
            from v2x_msg.msg import ConnectionManeuverAssist
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
                 all(isinstance(v, ConnectionManeuverAssist) for v in value) and
                 True), \
                "The 'maneuverassistlist' field must be a set or sequence and each value of type 'ConnectionManeuverAssist'"
        self._maneuverassistlist = value
