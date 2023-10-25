# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PredictedObjectKinematics(type):
    """Metaclass of message 'PredictedObjectKinematics'."""

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
            module = import_type_support('autoware_auto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_perception_msgs.msg.PredictedObjectKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__predicted_object_kinematics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__predicted_object_kinematics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__predicted_object_kinematics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__predicted_object_kinematics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__predicted_object_kinematics

            from autoware_auto_perception_msgs.msg import PredictedPath
            if PredictedPath.__class__._TYPE_SUPPORT is None:
                PredictedPath.__class__.__import_type_support__()

            from geometry_msgs.msg import AccelWithCovariance
            if AccelWithCovariance.__class__._TYPE_SUPPORT is None:
                AccelWithCovariance.__class__.__import_type_support__()

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
        }


class PredictedObjectKinematics(metaclass=Metaclass_PredictedObjectKinematics):
    """Message class 'PredictedObjectKinematics'."""

    __slots__ = [
        '_initial_pose_with_covariance',
        '_initial_twist_with_covariance',
        '_initial_acceleration_with_covariance',
        '_predicted_paths',
    ]

    _fields_and_field_types = {
        'initial_pose_with_covariance': 'geometry_msgs/PoseWithCovariance',
        'initial_twist_with_covariance': 'geometry_msgs/TwistWithCovariance',
        'initial_acceleration_with_covariance': 'geometry_msgs/AccelWithCovariance',
        'predicted_paths': 'sequence<autoware_auto_perception_msgs/PredictedPath, 100>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'PredictedPath'), 100),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseWithCovariance
        self.initial_pose_with_covariance = kwargs.get('initial_pose_with_covariance', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.initial_twist_with_covariance = kwargs.get('initial_twist_with_covariance', TwistWithCovariance())
        from geometry_msgs.msg import AccelWithCovariance
        self.initial_acceleration_with_covariance = kwargs.get('initial_acceleration_with_covariance', AccelWithCovariance())
        self.predicted_paths = kwargs.get('predicted_paths', [])

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
        if self.initial_pose_with_covariance != other.initial_pose_with_covariance:
            return False
        if self.initial_twist_with_covariance != other.initial_twist_with_covariance:
            return False
        if self.initial_acceleration_with_covariance != other.initial_acceleration_with_covariance:
            return False
        if self.predicted_paths != other.predicted_paths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def initial_pose_with_covariance(self):
        """Message field 'initial_pose_with_covariance'."""
        return self._initial_pose_with_covariance

    @initial_pose_with_covariance.setter
    def initial_pose_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'initial_pose_with_covariance' field must be a sub message of type 'PoseWithCovariance'"
        self._initial_pose_with_covariance = value

    @builtins.property
    def initial_twist_with_covariance(self):
        """Message field 'initial_twist_with_covariance'."""
        return self._initial_twist_with_covariance

    @initial_twist_with_covariance.setter
    def initial_twist_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'initial_twist_with_covariance' field must be a sub message of type 'TwistWithCovariance'"
        self._initial_twist_with_covariance = value

    @builtins.property
    def initial_acceleration_with_covariance(self):
        """Message field 'initial_acceleration_with_covariance'."""
        return self._initial_acceleration_with_covariance

    @initial_acceleration_with_covariance.setter
    def initial_acceleration_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelWithCovariance
            assert \
                isinstance(value, AccelWithCovariance), \
                "The 'initial_acceleration_with_covariance' field must be a sub message of type 'AccelWithCovariance'"
        self._initial_acceleration_with_covariance = value

    @builtins.property
    def predicted_paths(self):
        """Message field 'predicted_paths'."""
        return self._predicted_paths

    @predicted_paths.setter
    def predicted_paths(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import PredictedPath
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
                 len(value) <= 100 and
                 all(isinstance(v, PredictedPath) for v in value) and
                 True), \
                "The 'predicted_paths' field must be a set or sequence with length <= 100 and each value of type 'PredictedPath'"
        self._predicted_paths = value
