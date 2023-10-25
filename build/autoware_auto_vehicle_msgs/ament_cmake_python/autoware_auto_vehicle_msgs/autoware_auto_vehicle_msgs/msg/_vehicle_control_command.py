# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/VehicleControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleControlCommand(type):
    """Metaclass of message 'VehicleControlCommand'."""

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
            module = import_type_support('autoware_auto_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_vehicle_msgs.msg.VehicleControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_control_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LONG_ACCEL_MPS2__DEFAULT': 0.0,
            'VELOCITY_MPS__DEFAULT': 0.0,
            'FRONT_WHEEL_ANGLE_RAD__DEFAULT': 0.0,
            'REAR_WHEEL_ANGLE_RAD__DEFAULT': 0.0,
        }

    @property
    def LONG_ACCEL_MPS2__DEFAULT(cls):
        """Return default value for message field 'long_accel_mps2'."""
        return 0.0

    @property
    def VELOCITY_MPS__DEFAULT(cls):
        """Return default value for message field 'velocity_mps'."""
        return 0.0

    @property
    def FRONT_WHEEL_ANGLE_RAD__DEFAULT(cls):
        """Return default value for message field 'front_wheel_angle_rad'."""
        return 0.0

    @property
    def REAR_WHEEL_ANGLE_RAD__DEFAULT(cls):
        """Return default value for message field 'rear_wheel_angle_rad'."""
        return 0.0


class VehicleControlCommand(metaclass=Metaclass_VehicleControlCommand):
    """Message class 'VehicleControlCommand'."""

    __slots__ = [
        '_stamp',
        '_long_accel_mps2',
        '_velocity_mps',
        '_front_wheel_angle_rad',
        '_rear_wheel_angle_rad',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'long_accel_mps2': 'float',
        'velocity_mps': 'float',
        'front_wheel_angle_rad': 'float',
        'rear_wheel_angle_rad': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.long_accel_mps2 = kwargs.get(
            'long_accel_mps2', VehicleControlCommand.LONG_ACCEL_MPS2__DEFAULT)
        self.velocity_mps = kwargs.get(
            'velocity_mps', VehicleControlCommand.VELOCITY_MPS__DEFAULT)
        self.front_wheel_angle_rad = kwargs.get(
            'front_wheel_angle_rad', VehicleControlCommand.FRONT_WHEEL_ANGLE_RAD__DEFAULT)
        self.rear_wheel_angle_rad = kwargs.get(
            'rear_wheel_angle_rad', VehicleControlCommand.REAR_WHEEL_ANGLE_RAD__DEFAULT)

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
        if self.stamp != other.stamp:
            return False
        if self.long_accel_mps2 != other.long_accel_mps2:
            return False
        if self.velocity_mps != other.velocity_mps:
            return False
        if self.front_wheel_angle_rad != other.front_wheel_angle_rad:
            return False
        if self.rear_wheel_angle_rad != other.rear_wheel_angle_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def long_accel_mps2(self):
        """Message field 'long_accel_mps2'."""
        return self._long_accel_mps2

    @long_accel_mps2.setter
    def long_accel_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'long_accel_mps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'long_accel_mps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._long_accel_mps2 = value

    @builtins.property
    def velocity_mps(self):
        """Message field 'velocity_mps'."""
        return self._velocity_mps

    @velocity_mps.setter
    def velocity_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_mps = value

    @builtins.property
    def front_wheel_angle_rad(self):
        """Message field 'front_wheel_angle_rad'."""
        return self._front_wheel_angle_rad

    @front_wheel_angle_rad.setter
    def front_wheel_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_wheel_angle_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'front_wheel_angle_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._front_wheel_angle_rad = value

    @builtins.property
    def rear_wheel_angle_rad(self):
        """Message field 'rear_wheel_angle_rad'."""
        return self._rear_wheel_angle_rad

    @rear_wheel_angle_rad.setter
    def rear_wheel_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_wheel_angle_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rear_wheel_angle_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rear_wheel_angle_rad = value
