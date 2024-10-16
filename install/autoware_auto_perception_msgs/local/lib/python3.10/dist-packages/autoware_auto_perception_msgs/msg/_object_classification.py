# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectClassification(type):
    """Metaclass of message 'ObjectClassification'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CAR': 1,
        'TRUCK': 2,
        'BUS': 3,
        'TRAILER': 4,
        'MOTORCYCLE': 5,
        'BICYCLE': 6,
        'PEDESTRIAN': 7,
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
                'autoware_auto_perception_msgs.msg.ObjectClassification')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_classification
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_classification
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_classification
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_classification
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_classification

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'BUS': cls.__constants['BUS'],
            'TRAILER': cls.__constants['TRAILER'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ObjectClassification.__constants['UNKNOWN']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_ObjectClassification.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_ObjectClassification.__constants['TRUCK']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_ObjectClassification.__constants['BUS']

    @property
    def TRAILER(self):
        """Message constant 'TRAILER'."""
        return Metaclass_ObjectClassification.__constants['TRAILER']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_ObjectClassification.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_ObjectClassification.__constants['BICYCLE']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_ObjectClassification.__constants['PEDESTRIAN']


class ObjectClassification(metaclass=Metaclass_ObjectClassification):
    """
    Message class 'ObjectClassification'.

    Constants:
      UNKNOWN
      CAR
      TRUCK
      BUS
      TRAILER
      MOTORCYCLE
      BICYCLE
      PEDESTRIAN
    """

    __slots__ = [
        '_label',
        '_probability',
    ]

    _fields_and_field_types = {
        'label': 'uint8',
        'probability': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.label = kwargs.get('label', int())
        self.probability = kwargs.get('probability', float())

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
        if self.label != other.label:
            return False
        if self.probability != other.probability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'label' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'label' field must be an unsigned integer in [0, 255]"
        self._label = value

    @builtins.property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._probability = value
