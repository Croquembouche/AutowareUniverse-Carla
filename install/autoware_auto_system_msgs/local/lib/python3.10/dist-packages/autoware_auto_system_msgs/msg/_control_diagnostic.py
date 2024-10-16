# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlDiagnostic(type):
    """Metaclass of message 'ControlDiagnostic'."""

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
            module = import_type_support('autoware_auto_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_system_msgs.msg.ControlDiagnostic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_diagnostic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_diagnostic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_diagnostic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_diagnostic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_diagnostic

            from autoware_auto_system_msgs.msg import DiagnosticHeader
            if DiagnosticHeader.__class__._TYPE_SUPPORT is None:
                DiagnosticHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlDiagnostic(metaclass=Metaclass_ControlDiagnostic):
    """Message class 'ControlDiagnostic'."""

    __slots__ = [
        '_diag_header',
        '_new_trajectory',
        '_trajectory_source',
        '_pose_source',
        '_lateral_error_m',
        '_longitudinal_error_m',
        '_velocity_error_mps',
        '_acceleration_error_mps2',
        '_yaw_error_rad',
        '_yaw_rate_error_rps',
    ]

    _fields_and_field_types = {
        'diag_header': 'autoware_auto_system_msgs/DiagnosticHeader',
        'new_trajectory': 'boolean',
        'trajectory_source': 'string<256>',
        'pose_source': 'string<256>',
        'lateral_error_m': 'float',
        'longitudinal_error_m': 'float',
        'velocity_error_mps': 'float',
        'acceleration_error_mps2': 'float',
        'yaw_error_rad': 'float',
        'yaw_rate_error_rps': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_system_msgs', 'msg'], 'DiagnosticHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BoundedString(256),  # noqa: E501
        rosidl_parser.definition.BoundedString(256),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_system_msgs.msg import DiagnosticHeader
        self.diag_header = kwargs.get('diag_header', DiagnosticHeader())
        self.new_trajectory = kwargs.get('new_trajectory', bool())
        self.trajectory_source = kwargs.get('trajectory_source', str())
        self.pose_source = kwargs.get('pose_source', str())
        self.lateral_error_m = kwargs.get('lateral_error_m', float())
        self.longitudinal_error_m = kwargs.get('longitudinal_error_m', float())
        self.velocity_error_mps = kwargs.get('velocity_error_mps', float())
        self.acceleration_error_mps2 = kwargs.get('acceleration_error_mps2', float())
        self.yaw_error_rad = kwargs.get('yaw_error_rad', float())
        self.yaw_rate_error_rps = kwargs.get('yaw_rate_error_rps', float())

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
        if self.diag_header != other.diag_header:
            return False
        if self.new_trajectory != other.new_trajectory:
            return False
        if self.trajectory_source != other.trajectory_source:
            return False
        if self.pose_source != other.pose_source:
            return False
        if self.lateral_error_m != other.lateral_error_m:
            return False
        if self.longitudinal_error_m != other.longitudinal_error_m:
            return False
        if self.velocity_error_mps != other.velocity_error_mps:
            return False
        if self.acceleration_error_mps2 != other.acceleration_error_mps2:
            return False
        if self.yaw_error_rad != other.yaw_error_rad:
            return False
        if self.yaw_rate_error_rps != other.yaw_rate_error_rps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def diag_header(self):
        """Message field 'diag_header'."""
        return self._diag_header

    @diag_header.setter
    def diag_header(self, value):
        if __debug__:
            from autoware_auto_system_msgs.msg import DiagnosticHeader
            assert \
                isinstance(value, DiagnosticHeader), \
                "The 'diag_header' field must be a sub message of type 'DiagnosticHeader'"
        self._diag_header = value

    @builtins.property
    def new_trajectory(self):
        """Message field 'new_trajectory'."""
        return self._new_trajectory

    @new_trajectory.setter
    def new_trajectory(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'new_trajectory' field must be of type 'bool'"
        self._new_trajectory = value

    @builtins.property
    def trajectory_source(self):
        """Message field 'trajectory_source'."""
        return self._trajectory_source

    @trajectory_source.setter
    def trajectory_source(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 256), \
                "The 'trajectory_source' field must be string value " \
                'not longer than 256'
        self._trajectory_source = value

    @builtins.property
    def pose_source(self):
        """Message field 'pose_source'."""
        return self._pose_source

    @pose_source.setter
    def pose_source(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 256), \
                "The 'pose_source' field must be string value " \
                'not longer than 256'
        self._pose_source = value

    @builtins.property
    def lateral_error_m(self):
        """Message field 'lateral_error_m'."""
        return self._lateral_error_m

    @lateral_error_m.setter
    def lateral_error_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_error_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_error_m = value

    @builtins.property
    def longitudinal_error_m(self):
        """Message field 'longitudinal_error_m'."""
        return self._longitudinal_error_m

    @longitudinal_error_m.setter
    def longitudinal_error_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_error_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitudinal_error_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitudinal_error_m = value

    @builtins.property
    def velocity_error_mps(self):
        """Message field 'velocity_error_mps'."""
        return self._velocity_error_mps

    @velocity_error_mps.setter
    def velocity_error_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_error_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_error_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_error_mps = value

    @builtins.property
    def acceleration_error_mps2(self):
        """Message field 'acceleration_error_mps2'."""
        return self._acceleration_error_mps2

    @acceleration_error_mps2.setter
    def acceleration_error_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_error_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_error_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_error_mps2 = value

    @builtins.property
    def yaw_error_rad(self):
        """Message field 'yaw_error_rad'."""
        return self._yaw_error_rad

    @yaw_error_rad.setter
    def yaw_error_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_error_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_error_rad = value

    @builtins.property
    def yaw_rate_error_rps(self):
        """Message field 'yaw_rate_error_rps'."""
        return self._yaw_rate_error_rps

    @yaw_rate_error_rps.setter
    def yaw_rate_error_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_error_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate_error_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate_error_rps = value
