# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLight(type):
    """Metaclass of message 'TrafficLight'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RED': 1,
        'AMBER': 2,
        'GREEN': 3,
        'WHITE': 4,
        'CIRCLE': 5,
        'LEFT_ARROW': 6,
        'RIGHT_ARROW': 7,
        'UP_ARROW': 8,
        'DOWN_ARROW': 9,
        'DOWN_LEFT_ARROW': 10,
        'DOWN_RIGHT_ARROW': 11,
        'CROSS': 12,
        'SOLID_OFF': 13,
        'SOLID_ON': 14,
        'FLASHING': 15,
        'UNKNOWN': 16,
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
                'autoware_auto_perception_msgs.msg.TrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RED': cls.__constants['RED'],
            'AMBER': cls.__constants['AMBER'],
            'GREEN': cls.__constants['GREEN'],
            'WHITE': cls.__constants['WHITE'],
            'CIRCLE': cls.__constants['CIRCLE'],
            'LEFT_ARROW': cls.__constants['LEFT_ARROW'],
            'RIGHT_ARROW': cls.__constants['RIGHT_ARROW'],
            'UP_ARROW': cls.__constants['UP_ARROW'],
            'DOWN_ARROW': cls.__constants['DOWN_ARROW'],
            'DOWN_LEFT_ARROW': cls.__constants['DOWN_LEFT_ARROW'],
            'DOWN_RIGHT_ARROW': cls.__constants['DOWN_RIGHT_ARROW'],
            'CROSS': cls.__constants['CROSS'],
            'SOLID_OFF': cls.__constants['SOLID_OFF'],
            'SOLID_ON': cls.__constants['SOLID_ON'],
            'FLASHING': cls.__constants['FLASHING'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'COLOR__DEFAULT': 0,
            'SHAPE__DEFAULT': 0,
            'STATUS__DEFAULT': 0,
            'CONFIDENCE__DEFAULT': 0.0,
        }

    @property
    def RED(self):
        """Message constant 'RED'."""
        return Metaclass_TrafficLight.__constants['RED']

    @property
    def AMBER(self):
        """Message constant 'AMBER'."""
        return Metaclass_TrafficLight.__constants['AMBER']

    @property
    def GREEN(self):
        """Message constant 'GREEN'."""
        return Metaclass_TrafficLight.__constants['GREEN']

    @property
    def WHITE(self):
        """Message constant 'WHITE'."""
        return Metaclass_TrafficLight.__constants['WHITE']

    @property
    def CIRCLE(self):
        """Message constant 'CIRCLE'."""
        return Metaclass_TrafficLight.__constants['CIRCLE']

    @property
    def LEFT_ARROW(self):
        """Message constant 'LEFT_ARROW'."""
        return Metaclass_TrafficLight.__constants['LEFT_ARROW']

    @property
    def RIGHT_ARROW(self):
        """Message constant 'RIGHT_ARROW'."""
        return Metaclass_TrafficLight.__constants['RIGHT_ARROW']

    @property
    def UP_ARROW(self):
        """Message constant 'UP_ARROW'."""
        return Metaclass_TrafficLight.__constants['UP_ARROW']

    @property
    def DOWN_ARROW(self):
        """Message constant 'DOWN_ARROW'."""
        return Metaclass_TrafficLight.__constants['DOWN_ARROW']

    @property
    def DOWN_LEFT_ARROW(self):
        """Message constant 'DOWN_LEFT_ARROW'."""
        return Metaclass_TrafficLight.__constants['DOWN_LEFT_ARROW']

    @property
    def DOWN_RIGHT_ARROW(self):
        """Message constant 'DOWN_RIGHT_ARROW'."""
        return Metaclass_TrafficLight.__constants['DOWN_RIGHT_ARROW']

    @property
    def CROSS(self):
        """Message constant 'CROSS'."""
        return Metaclass_TrafficLight.__constants['CROSS']

    @property
    def SOLID_OFF(self):
        """Message constant 'SOLID_OFF'."""
        return Metaclass_TrafficLight.__constants['SOLID_OFF']

    @property
    def SOLID_ON(self):
        """Message constant 'SOLID_ON'."""
        return Metaclass_TrafficLight.__constants['SOLID_ON']

    @property
    def FLASHING(self):
        """Message constant 'FLASHING'."""
        return Metaclass_TrafficLight.__constants['FLASHING']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_TrafficLight.__constants['UNKNOWN']

    @property
    def COLOR__DEFAULT(cls):
        """Return default value for message field 'color'."""
        return 0

    @property
    def SHAPE__DEFAULT(cls):
        """Return default value for message field 'shape'."""
        return 0

    @property
    def STATUS__DEFAULT(cls):
        """Return default value for message field 'status'."""
        return 0

    @property
    def CONFIDENCE__DEFAULT(cls):
        """Return default value for message field 'confidence'."""
        return 0.0


class TrafficLight(metaclass=Metaclass_TrafficLight):
    """
    Message class 'TrafficLight'.

    Constants:
      RED
      AMBER
      GREEN
      WHITE
      CIRCLE
      LEFT_ARROW
      RIGHT_ARROW
      UP_ARROW
      DOWN_ARROW
      DOWN_LEFT_ARROW
      DOWN_RIGHT_ARROW
      CROSS
      SOLID_OFF
      SOLID_ON
      FLASHING
      UNKNOWN
    """

    __slots__ = [
        '_color',
        '_shape',
        '_status',
        '_confidence',
    ]

    _fields_and_field_types = {
        'color': 'uint8',
        'shape': 'uint8',
        'status': 'uint8',
        'confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get(
            'color', TrafficLight.COLOR__DEFAULT)
        self.shape = kwargs.get(
            'shape', TrafficLight.SHAPE__DEFAULT)
        self.status = kwargs.get(
            'status', TrafficLight.STATUS__DEFAULT)
        self.confidence = kwargs.get(
            'confidence', TrafficLight.CONFIDENCE__DEFAULT)

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
        if self.color != other.color:
            return False
        if self.shape != other.shape:
            return False
        if self.status != other.status:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shape' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shape' field must be an unsigned integer in [0, 255]"
        self._shape = value

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
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value
