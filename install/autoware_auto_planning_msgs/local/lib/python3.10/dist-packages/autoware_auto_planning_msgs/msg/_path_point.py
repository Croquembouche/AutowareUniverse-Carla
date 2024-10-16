# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_planning_msgs:msg/PathPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPoint(type):
    """Metaclass of message 'PathPoint'."""

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
                'autoware_auto_planning_msgs.msg.PathPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_point

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LONGITUDINAL_VELOCITY_MPS__DEFAULT': 0.0,
            'LATERAL_VELOCITY_MPS__DEFAULT': 0.0,
            'HEADING_RATE_RPS__DEFAULT': 0.0,
            'IS_FINAL__DEFAULT': False,
        }

    @property
    def LONGITUDINAL_VELOCITY_MPS__DEFAULT(cls):
        """Return default value for message field 'longitudinal_velocity_mps'."""
        return 0.0

    @property
    def LATERAL_VELOCITY_MPS__DEFAULT(cls):
        """Return default value for message field 'lateral_velocity_mps'."""
        return 0.0

    @property
    def HEADING_RATE_RPS__DEFAULT(cls):
        """Return default value for message field 'heading_rate_rps'."""
        return 0.0

    @property
    def IS_FINAL__DEFAULT(cls):
        """Return default value for message field 'is_final'."""
        return False


class PathPoint(metaclass=Metaclass_PathPoint):
    """Message class 'PathPoint'."""

    __slots__ = [
        '_pose',
        '_longitudinal_velocity_mps',
        '_lateral_velocity_mps',
        '_heading_rate_rps',
        '_is_final',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'longitudinal_velocity_mps': 'float',
        'lateral_velocity_mps': 'float',
        'heading_rate_rps': 'float',
        'is_final': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.longitudinal_velocity_mps = kwargs.get(
            'longitudinal_velocity_mps', PathPoint.LONGITUDINAL_VELOCITY_MPS__DEFAULT)
        self.lateral_velocity_mps = kwargs.get(
            'lateral_velocity_mps', PathPoint.LATERAL_VELOCITY_MPS__DEFAULT)
        self.heading_rate_rps = kwargs.get(
            'heading_rate_rps', PathPoint.HEADING_RATE_RPS__DEFAULT)
        self.is_final = kwargs.get(
            'is_final', PathPoint.IS_FINAL__DEFAULT)

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
        if self.pose != other.pose:
            return False
        if self.longitudinal_velocity_mps != other.longitudinal_velocity_mps:
            return False
        if self.lateral_velocity_mps != other.lateral_velocity_mps:
            return False
        if self.heading_rate_rps != other.heading_rate_rps:
            return False
        if self.is_final != other.is_final:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def longitudinal_velocity_mps(self):
        """Message field 'longitudinal_velocity_mps'."""
        return self._longitudinal_velocity_mps

    @longitudinal_velocity_mps.setter
    def longitudinal_velocity_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_velocity_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitudinal_velocity_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitudinal_velocity_mps = value

    @builtins.property
    def lateral_velocity_mps(self):
        """Message field 'lateral_velocity_mps'."""
        return self._lateral_velocity_mps

    @lateral_velocity_mps.setter
    def lateral_velocity_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_velocity_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_velocity_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_velocity_mps = value

    @builtins.property
    def heading_rate_rps(self):
        """Message field 'heading_rate_rps'."""
        return self._heading_rate_rps

    @heading_rate_rps.setter
    def heading_rate_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_rate_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_rate_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_rate_rps = value

    @builtins.property
    def is_final(self):
        """Message field 'is_final'."""
        return self._is_final

    @is_final.setter
    def is_final(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_final' field must be of type 'bool'"
        self._is_final = value
