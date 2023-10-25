# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectKinematics(type):
    """Metaclass of message 'DetectedObjectKinematics'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'SIGN_UNKNOWN': 1,
        'AVAILABLE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_perception_msgs.msg.DetectedObjectKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_kinematics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_kinematics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_kinematics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_kinematics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_kinematics

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'SIGN_UNKNOWN': cls.__constants['SIGN_UNKNOWN'],
            'AVAILABLE': cls.__constants['AVAILABLE'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_DetectedObjectKinematics.__constants['UNAVAILABLE']

    @property
    def SIGN_UNKNOWN(self):
        """Message constant 'SIGN_UNKNOWN'."""
        return Metaclass_DetectedObjectKinematics.__constants['SIGN_UNKNOWN']

    @property
    def AVAILABLE(self):
        """Message constant 'AVAILABLE'."""
        return Metaclass_DetectedObjectKinematics.__constants['AVAILABLE']


class DetectedObjectKinematics(metaclass=Metaclass_DetectedObjectKinematics):
    """
    Message class 'DetectedObjectKinematics'.

    Constants:
      UNAVAILABLE
      SIGN_UNKNOWN
      AVAILABLE
    """

    __slots__ = [
        '_pose_with_covariance',
        '_has_position_covariance',
        '_orientation_availability',
        '_twist_with_covariance',
        '_has_twist',
        '_has_twist_covariance',
    ]

    _fields_and_field_types = {
        'pose_with_covariance': 'geometry_msgs/PoseWithCovariance',
        'has_position_covariance': 'boolean',
        'orientation_availability': 'uint8',
        'twist_with_covariance': 'geometry_msgs/TwistWithCovariance',
        'has_twist': 'boolean',
        'has_twist_covariance': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseWithCovariance
        self.pose_with_covariance = kwargs.get('pose_with_covariance', PoseWithCovariance())
        self.has_position_covariance = kwargs.get('has_position_covariance', bool())
        self.orientation_availability = kwargs.get('orientation_availability', int())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist_with_covariance = kwargs.get('twist_with_covariance', TwistWithCovariance())
        self.has_twist = kwargs.get('has_twist', bool())
        self.has_twist_covariance = kwargs.get('has_twist_covariance', bool())

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
        if self.pose_with_covariance != other.pose_with_covariance:
            return False
        if self.has_position_covariance != other.has_position_covariance:
            return False
        if self.orientation_availability != other.orientation_availability:
            return False
        if self.twist_with_covariance != other.twist_with_covariance:
            return False
        if self.has_twist != other.has_twist:
            return False
        if self.has_twist_covariance != other.has_twist_covariance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_with_covariance(self):
        """Message field 'pose_with_covariance'."""
        return self._pose_with_covariance

    @pose_with_covariance.setter
    def pose_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose_with_covariance' field must be a sub message of type 'PoseWithCovariance'"
        self._pose_with_covariance = value

    @builtins.property
    def has_position_covariance(self):
        """Message field 'has_position_covariance'."""
        return self._has_position_covariance

    @has_position_covariance.setter
    def has_position_covariance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_position_covariance' field must be of type 'bool'"
        self._has_position_covariance = value

    @builtins.property
    def orientation_availability(self):
        """Message field 'orientation_availability'."""
        return self._orientation_availability

    @orientation_availability.setter
    def orientation_availability(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation_availability' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'orientation_availability' field must be an unsigned integer in [0, 255]"
        self._orientation_availability = value

    @builtins.property
    def twist_with_covariance(self):
        """Message field 'twist_with_covariance'."""
        return self._twist_with_covariance

    @twist_with_covariance.setter
    def twist_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'twist_with_covariance' field must be a sub message of type 'TwistWithCovariance'"
        self._twist_with_covariance = value

    @builtins.property
    def has_twist(self):
        """Message field 'has_twist'."""
        return self._has_twist

    @has_twist.setter
    def has_twist(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_twist' field must be of type 'bool'"
        self._has_twist = value

    @builtins.property
    def has_twist_covariance(self):
        """Message field 'has_twist_covariance'."""
        return self._has_twist_covariance

    @has_twist_covariance.setter
    def has_twist_covariance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_twist_covariance' field must be of type 'bool'"
        self._has_twist_covariance = value
