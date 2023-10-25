# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPointWithLaneId(type):
    """Metaclass of message 'PathPointWithLaneId'."""

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
            module = import_type_support('autoware_auto_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_planning_msgs.msg.PathPointWithLaneId')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_point_with_lane_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_point_with_lane_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_point_with_lane_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_point_with_lane_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_point_with_lane_id

            from autoware_auto_planning_msgs.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPointWithLaneId(metaclass=Metaclass_PathPointWithLaneId):
    """Message class 'PathPointWithLaneId'."""

    __slots__ = [
        '_point',
        '_lane_ids',
    ]

    _fields_and_field_types = {
        'point': 'autoware_auto_planning_msgs/PathPoint',
        'lane_ids': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_planning_msgs', 'msg'], 'PathPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_planning_msgs.msg import PathPoint
        self.point = kwargs.get('point', PathPoint())
        self.lane_ids = array.array('q', kwargs.get('lane_ids', []))

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
        if self.point != other.point:
            return False
        if self.lane_ids != other.lane_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from autoware_auto_planning_msgs.msg import PathPoint
            assert \
                isinstance(value, PathPoint), \
                "The 'point' field must be a sub message of type 'PathPoint'"
        self._point = value

    @builtins.property
    def lane_ids(self):
        """Message field 'lane_ids'."""
        return self._lane_ids

    @lane_ids.setter
    def lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'lane_ids' array.array() must have the type code of 'q'"
            self._lane_ids = value
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
                "The 'lane_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._lane_ids = array.array('q', value)
