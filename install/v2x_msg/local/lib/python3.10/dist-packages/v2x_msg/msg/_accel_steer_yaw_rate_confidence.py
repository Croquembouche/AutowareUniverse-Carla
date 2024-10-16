# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelSteerYawRateConfidence(type):
    """Metaclass of message 'AccelSteerYawRateConfidence'."""

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
                'v2x_msg.msg.AccelSteerYawRateConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__accel_steer_yaw_rate_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__accel_steer_yaw_rate_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__accel_steer_yaw_rate_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__accel_steer_yaw_rate_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__accel_steer_yaw_rate_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccelSteerYawRateConfidence(metaclass=Metaclass_AccelSteerYawRateConfidence):
    """Message class 'AccelSteerYawRateConfidence'."""

    __slots__ = [
        '_yawrate',
        '_acceleration',
        '_steeringwheelangle',
    ]

    _fields_and_field_types = {
        'yawrate': 'int64',
        'acceleration': 'int64',
        'steeringwheelangle': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yawrate = kwargs.get('yawrate', int())
        self.acceleration = kwargs.get('acceleration', int())
        self.steeringwheelangle = kwargs.get('steeringwheelangle', int())

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
        if self.yawrate != other.yawrate:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.steeringwheelangle != other.steeringwheelangle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def yawrate(self):
        """Message field 'yawrate'."""
        return self._yawrate

    @yawrate.setter
    def yawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yawrate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'yawrate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._yawrate = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acceleration' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'acceleration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._acceleration = value

    @builtins.property
    def steeringwheelangle(self):
        """Message field 'steeringwheelangle'."""
        return self._steeringwheelangle

    @steeringwheelangle.setter
    def steeringwheelangle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringwheelangle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'steeringwheelangle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._steeringwheelangle = value
