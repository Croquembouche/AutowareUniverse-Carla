# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityFactor(type):
    """Metaclass of message 'VelocityFactor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'SURROUNDING_OBSTACLE': 1,
        'ROUTE_OBSTACLE': 2,
        'INTERSECTION': 3,
        'CROSSWALK': 4,
        'REAR_CHECK': 5,
        'USER_DEFINED_DETECTION_AREA': 6,
        'NO_STOPPING_AREA': 7,
        'STOP_SIGN': 8,
        'TRAFFIC_SIGNAL': 9,
        'V2I_GATE_CONTROL_ENTER': 10,
        'V2I_GATE_CONTROL_LEAVE': 11,
        'MERGE': 12,
        'SIDEWALK': 13,
        'LANE_CHANGE': 14,
        'AVOIDANCE': 15,
        'EMERGENCY_STOP_OPERATION': 16,
        'APPROACHING': 1,
        'STOPPED': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.VelocityFactor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_factor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_factor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_factor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_factor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_factor

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SURROUNDING_OBSTACLE': cls.__constants['SURROUNDING_OBSTACLE'],
            'ROUTE_OBSTACLE': cls.__constants['ROUTE_OBSTACLE'],
            'INTERSECTION': cls.__constants['INTERSECTION'],
            'CROSSWALK': cls.__constants['CROSSWALK'],
            'REAR_CHECK': cls.__constants['REAR_CHECK'],
            'USER_DEFINED_DETECTION_AREA': cls.__constants['USER_DEFINED_DETECTION_AREA'],
            'NO_STOPPING_AREA': cls.__constants['NO_STOPPING_AREA'],
            'STOP_SIGN': cls.__constants['STOP_SIGN'],
            'TRAFFIC_SIGNAL': cls.__constants['TRAFFIC_SIGNAL'],
            'V2I_GATE_CONTROL_ENTER': cls.__constants['V2I_GATE_CONTROL_ENTER'],
            'V2I_GATE_CONTROL_LEAVE': cls.__constants['V2I_GATE_CONTROL_LEAVE'],
            'MERGE': cls.__constants['MERGE'],
            'SIDEWALK': cls.__constants['SIDEWALK'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'AVOIDANCE': cls.__constants['AVOIDANCE'],
            'EMERGENCY_STOP_OPERATION': cls.__constants['EMERGENCY_STOP_OPERATION'],
            'APPROACHING': cls.__constants['APPROACHING'],
            'STOPPED': cls.__constants['STOPPED'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_VelocityFactor.__constants['UNKNOWN']

    @property
    def SURROUNDING_OBSTACLE(self):
        """Message constant 'SURROUNDING_OBSTACLE'."""
        return Metaclass_VelocityFactor.__constants['SURROUNDING_OBSTACLE']

    @property
    def ROUTE_OBSTACLE(self):
        """Message constant 'ROUTE_OBSTACLE'."""
        return Metaclass_VelocityFactor.__constants['ROUTE_OBSTACLE']

    @property
    def INTERSECTION(self):
        """Message constant 'INTERSECTION'."""
        return Metaclass_VelocityFactor.__constants['INTERSECTION']

    @property
    def CROSSWALK(self):
        """Message constant 'CROSSWALK'."""
        return Metaclass_VelocityFactor.__constants['CROSSWALK']

    @property
    def REAR_CHECK(self):
        """Message constant 'REAR_CHECK'."""
        return Metaclass_VelocityFactor.__constants['REAR_CHECK']

    @property
    def USER_DEFINED_DETECTION_AREA(self):
        """Message constant 'USER_DEFINED_DETECTION_AREA'."""
        return Metaclass_VelocityFactor.__constants['USER_DEFINED_DETECTION_AREA']

    @property
    def NO_STOPPING_AREA(self):
        """Message constant 'NO_STOPPING_AREA'."""
        return Metaclass_VelocityFactor.__constants['NO_STOPPING_AREA']

    @property
    def STOP_SIGN(self):
        """Message constant 'STOP_SIGN'."""
        return Metaclass_VelocityFactor.__constants['STOP_SIGN']

    @property
    def TRAFFIC_SIGNAL(self):
        """Message constant 'TRAFFIC_SIGNAL'."""
        return Metaclass_VelocityFactor.__constants['TRAFFIC_SIGNAL']

    @property
    def V2I_GATE_CONTROL_ENTER(self):
        """Message constant 'V2I_GATE_CONTROL_ENTER'."""
        return Metaclass_VelocityFactor.__constants['V2I_GATE_CONTROL_ENTER']

    @property
    def V2I_GATE_CONTROL_LEAVE(self):
        """Message constant 'V2I_GATE_CONTROL_LEAVE'."""
        return Metaclass_VelocityFactor.__constants['V2I_GATE_CONTROL_LEAVE']

    @property
    def MERGE(self):
        """Message constant 'MERGE'."""
        return Metaclass_VelocityFactor.__constants['MERGE']

    @property
    def SIDEWALK(self):
        """Message constant 'SIDEWALK'."""
        return Metaclass_VelocityFactor.__constants['SIDEWALK']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_VelocityFactor.__constants['LANE_CHANGE']

    @property
    def AVOIDANCE(self):
        """Message constant 'AVOIDANCE'."""
        return Metaclass_VelocityFactor.__constants['AVOIDANCE']

    @property
    def EMERGENCY_STOP_OPERATION(self):
        """Message constant 'EMERGENCY_STOP_OPERATION'."""
        return Metaclass_VelocityFactor.__constants['EMERGENCY_STOP_OPERATION']

    @property
    def APPROACHING(self):
        """Message constant 'APPROACHING'."""
        return Metaclass_VelocityFactor.__constants['APPROACHING']

    @property
    def STOPPED(self):
        """Message constant 'STOPPED'."""
        return Metaclass_VelocityFactor.__constants['STOPPED']


class VelocityFactor(metaclass=Metaclass_VelocityFactor):
    """
    Message class 'VelocityFactor'.

    Constants:
      UNKNOWN
      SURROUNDING_OBSTACLE
      ROUTE_OBSTACLE
      INTERSECTION
      CROSSWALK
      REAR_CHECK
      USER_DEFINED_DETECTION_AREA
      NO_STOPPING_AREA
      STOP_SIGN
      TRAFFIC_SIGNAL
      V2I_GATE_CONTROL_ENTER
      V2I_GATE_CONTROL_LEAVE
      MERGE
      SIDEWALK
      LANE_CHANGE
      AVOIDANCE
      EMERGENCY_STOP_OPERATION
      APPROACHING
      STOPPED
    """

    __slots__ = [
        '_pose',
        '_distance',
        '_type',
        '_status',
        '_detail',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'distance': 'float',
        'type': 'uint16',
        'status': 'uint16',
        'detail': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.distance = kwargs.get('distance', float())
        self.type = kwargs.get('type', int())
        self.status = kwargs.get('status', int())
        self.detail = kwargs.get('detail', str())

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
        if self.distance != other.distance:
            return False
        if self.type != other.type:
            return False
        if self.status != other.status:
            return False
        if self.detail != other.detail:
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
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'type' field must be an unsigned integer in [0, 65535]"
        self._type = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status' field must be an unsigned integer in [0, 65535]"
        self._status = value

    @builtins.property
    def detail(self):
        """Message field 'detail'."""
        return self._detail

    @detail.setter
    def detail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'detail' field must be of type 'str'"
        self._detail = value
