# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'variance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoundingBox(type):
    """Metaclass of message 'BoundingBox'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_LABEL': 0,
        'CAR': 1,
        'PEDESTRIAN': 2,
        'CYCLIST': 3,
        'MOTORCYCLE': 4,
        'NO_SIGNAL': 0,
        'LEFT_SIGNAL': 1,
        'RIGHT_SIGNAL': 2,
        'BRAKE': 3,
        'POSE_X': 0,
        'POSE_Y': 1,
        'VELOCITY': 2,
        'HEADING': 3,
        'TURN_RATE': 4,
        'SIZE_X': 5,
        'SIZE_Y': 6,
        'ACCELERATION': 7,
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
                'autoware_auto_perception_msgs.msg.BoundingBox')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bounding_box
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bounding_box
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bounding_box
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bounding_box
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bounding_box

            from autoware_auto_geometry_msgs.msg import Quaternion32
            if Quaternion32.__class__._TYPE_SUPPORT is None:
                Quaternion32.__class__.__import_type_support__()

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_LABEL': cls.__constants['NO_LABEL'],
            'CAR': cls.__constants['CAR'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'NO_SIGNAL': cls.__constants['NO_SIGNAL'],
            'LEFT_SIGNAL': cls.__constants['LEFT_SIGNAL'],
            'RIGHT_SIGNAL': cls.__constants['RIGHT_SIGNAL'],
            'BRAKE': cls.__constants['BRAKE'],
            'POSE_X': cls.__constants['POSE_X'],
            'POSE_Y': cls.__constants['POSE_Y'],
            'VELOCITY': cls.__constants['VELOCITY'],
            'HEADING': cls.__constants['HEADING'],
            'TURN_RATE': cls.__constants['TURN_RATE'],
            'SIZE_X': cls.__constants['SIZE_X'],
            'SIZE_Y': cls.__constants['SIZE_Y'],
            'ACCELERATION': cls.__constants['ACCELERATION'],
            'VELOCITY__DEFAULT': 0.0,
            'HEADING__DEFAULT': 0.0,
            'HEADING_RATE__DEFAULT': 0.0,
            'VEHICLE_LABEL__DEFAULT': 0,
            'SIGNAL_LABEL__DEFAULT': 0,
        }

    @property
    def NO_LABEL(self):
        """Message constant 'NO_LABEL'."""
        return Metaclass_BoundingBox.__constants['NO_LABEL']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_BoundingBox.__constants['CAR']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_BoundingBox.__constants['PEDESTRIAN']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_BoundingBox.__constants['CYCLIST']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_BoundingBox.__constants['MOTORCYCLE']

    @property
    def NO_SIGNAL(self):
        """Message constant 'NO_SIGNAL'."""
        return Metaclass_BoundingBox.__constants['NO_SIGNAL']

    @property
    def LEFT_SIGNAL(self):
        """Message constant 'LEFT_SIGNAL'."""
        return Metaclass_BoundingBox.__constants['LEFT_SIGNAL']

    @property
    def RIGHT_SIGNAL(self):
        """Message constant 'RIGHT_SIGNAL'."""
        return Metaclass_BoundingBox.__constants['RIGHT_SIGNAL']

    @property
    def BRAKE(self):
        """Message constant 'BRAKE'."""
        return Metaclass_BoundingBox.__constants['BRAKE']

    @property
    def POSE_X(self):
        """Message constant 'POSE_X'."""
        return Metaclass_BoundingBox.__constants['POSE_X']

    @property
    def POSE_Y(self):
        """Message constant 'POSE_Y'."""
        return Metaclass_BoundingBox.__constants['POSE_Y']

    @property
    def VELOCITY(self):
        """Message constant 'VELOCITY'."""
        return Metaclass_BoundingBox.__constants['VELOCITY']

    @property
    def HEADING(self):
        """Message constant 'HEADING'."""
        return Metaclass_BoundingBox.__constants['HEADING']

    @property
    def TURN_RATE(self):
        """Message constant 'TURN_RATE'."""
        return Metaclass_BoundingBox.__constants['TURN_RATE']

    @property
    def SIZE_X(self):
        """Message constant 'SIZE_X'."""
        return Metaclass_BoundingBox.__constants['SIZE_X']

    @property
    def SIZE_Y(self):
        """Message constant 'SIZE_Y'."""
        return Metaclass_BoundingBox.__constants['SIZE_Y']

    @property
    def ACCELERATION(self):
        """Message constant 'ACCELERATION'."""
        return Metaclass_BoundingBox.__constants['ACCELERATION']

    @property
    def VELOCITY__DEFAULT(cls):
        """Return default value for message field 'velocity'."""
        return 0.0

    @property
    def HEADING__DEFAULT(cls):
        """Return default value for message field 'heading'."""
        return 0.0

    @property
    def HEADING_RATE__DEFAULT(cls):
        """Return default value for message field 'heading_rate'."""
        return 0.0

    @property
    def VEHICLE_LABEL__DEFAULT(cls):
        """Return default value for message field 'vehicle_label'."""
        return 0

    @property
    def SIGNAL_LABEL__DEFAULT(cls):
        """Return default value for message field 'signal_label'."""
        return 0


class BoundingBox(metaclass=Metaclass_BoundingBox):
    """
    Message class 'BoundingBox'.

    Constants:
      NO_LABEL
      CAR
      PEDESTRIAN
      CYCLIST
      MOTORCYCLE
      NO_SIGNAL
      LEFT_SIGNAL
      RIGHT_SIGNAL
      BRAKE
      POSE_X
      POSE_Y
      VELOCITY
      HEADING
      TURN_RATE
      SIZE_X
      SIZE_Y
      ACCELERATION
    """

    __slots__ = [
        '_centroid',
        '_size',
        '_orientation',
        '_velocity',
        '_heading',
        '_heading_rate',
        '_corners',
        '_variance',
        '_value',
        '_vehicle_label',
        '_signal_label',
        '_class_likelihood',
    ]

    _fields_and_field_types = {
        'centroid': 'geometry_msgs/Point32',
        'size': 'geometry_msgs/Point32',
        'orientation': 'autoware_auto_geometry_msgs/Quaternion32',
        'velocity': 'float',
        'heading': 'float',
        'heading_rate': 'float',
        'corners': 'geometry_msgs/Point32[4]',
        'variance': 'float[8]',
        'value': 'float',
        'vehicle_label': 'uint8',
        'signal_label': 'uint8',
        'class_likelihood': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_geometry_msgs', 'msg'], 'Quaternion32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point32
        self.centroid = kwargs.get('centroid', Point32())
        from geometry_msgs.msg import Point32
        self.size = kwargs.get('size', Point32())
        from autoware_auto_geometry_msgs.msg import Quaternion32
        self.orientation = kwargs.get('orientation', Quaternion32())
        self.velocity = kwargs.get(
            'velocity', BoundingBox.VELOCITY__DEFAULT)
        self.heading = kwargs.get(
            'heading', BoundingBox.HEADING__DEFAULT)
        self.heading_rate = kwargs.get(
            'heading_rate', BoundingBox.HEADING_RATE__DEFAULT)
        from geometry_msgs.msg import Point32
        self.corners = kwargs.get(
            'corners',
            [Point32() for x in range(4)]
        )
        if 'variance' not in kwargs:
            self.variance = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.variance = numpy.array(kwargs.get('variance'), dtype=numpy.float32)
            assert self.variance.shape == (8, )
        self.value = kwargs.get('value', float())
        self.vehicle_label = kwargs.get(
            'vehicle_label', BoundingBox.VEHICLE_LABEL__DEFAULT)
        self.signal_label = kwargs.get(
            'signal_label', BoundingBox.SIGNAL_LABEL__DEFAULT)
        self.class_likelihood = kwargs.get('class_likelihood', float())

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
        if self.centroid != other.centroid:
            return False
        if self.size != other.size:
            return False
        if self.orientation != other.orientation:
            return False
        if self.velocity != other.velocity:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_rate != other.heading_rate:
            return False
        if self.corners != other.corners:
            return False
        if all(self.variance != other.variance):
            return False
        if self.value != other.value:
            return False
        if self.vehicle_label != other.vehicle_label:
            return False
        if self.signal_label != other.signal_label:
            return False
        if self.class_likelihood != other.class_likelihood:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def centroid(self):
        """Message field 'centroid'."""
        return self._centroid

    @centroid.setter
    def centroid(self, value):
        if __debug__:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'centroid' field must be a sub message of type 'Point32'"
        self._centroid = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'size' field must be a sub message of type 'Point32'"
        self._size = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from autoware_auto_geometry_msgs.msg import Quaternion32
            assert \
                isinstance(value, Quaternion32), \
                "The 'orientation' field must be a sub message of type 'Quaternion32'"
        self._orientation = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def heading_rate(self):
        """Message field 'heading_rate'."""
        return self._heading_rate

    @heading_rate.setter
    def heading_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_rate = value

    @builtins.property
    def corners(self):
        """Message field 'corners'."""
        return self._corners

    @corners.setter
    def corners(self, value):
        if __debug__:
            from geometry_msgs.msg import Point32
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
                 len(value) == 4 and
                 all(isinstance(v, Point32) for v in value) and
                 True), \
                "The 'corners' field must be a set or sequence with length 4 and each value of type 'Point32'"
        self._corners = value

    @builtins.property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 8, \
                "The 'variance' numpy.ndarray() must have a size of 8"
            self._variance = value
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
                 len(value) == 8 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'variance' field must be a set or sequence with length 8 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value = value

    @builtins.property
    def vehicle_label(self):
        """Message field 'vehicle_label'."""
        return self._vehicle_label

    @vehicle_label.setter
    def vehicle_label(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_label' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_label' field must be an unsigned integer in [0, 255]"
        self._vehicle_label = value

    @builtins.property
    def signal_label(self):
        """Message field 'signal_label'."""
        return self._signal_label

    @signal_label.setter
    def signal_label(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_label' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_label' field must be an unsigned integer in [0, 255]"
        self._signal_label = value

    @builtins.property
    def class_likelihood(self):
        """Message field 'class_likelihood'."""
        return self._class_likelihood

    @class_likelihood.setter
    def class_likelihood(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'class_likelihood' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'class_likelihood' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._class_likelihood = value
