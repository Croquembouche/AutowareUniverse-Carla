# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/VehicleStateReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStateReport(type):
    """Metaclass of message 'VehicleStateReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLINKER_OFF': 1,
        'BLINKER_LEFT': 2,
        'BLINKER_RIGHT': 3,
        'BLINKER_HAZARD': 4,
        'HEADLIGHT_OFF': 1,
        'HEADLIGHT_ON': 2,
        'HEADLIGHT_HIGH': 3,
        'WIPER_OFF': 1,
        'WIPER_LOW': 2,
        'WIPER_HIGH': 3,
        'WIPER_CLEAN': 14,
        'GEAR_DRIVE': 1,
        'GEAR_REVERSE': 2,
        'GEAR_PARK': 3,
        'GEAR_LOW': 4,
        'GEAR_NEUTRAL': 5,
        'MODE_AUTONOMOUS': 1,
        'MODE_MANUAL': 2,
        'MODE_DISENGAGED': 3,
        'MODE_NOT_READY': 4,
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
                'autoware_auto_vehicle_msgs.msg.VehicleStateReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state_report

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLINKER_OFF': cls.__constants['BLINKER_OFF'],
            'BLINKER_LEFT': cls.__constants['BLINKER_LEFT'],
            'BLINKER_RIGHT': cls.__constants['BLINKER_RIGHT'],
            'BLINKER_HAZARD': cls.__constants['BLINKER_HAZARD'],
            'HEADLIGHT_OFF': cls.__constants['HEADLIGHT_OFF'],
            'HEADLIGHT_ON': cls.__constants['HEADLIGHT_ON'],
            'HEADLIGHT_HIGH': cls.__constants['HEADLIGHT_HIGH'],
            'WIPER_OFF': cls.__constants['WIPER_OFF'],
            'WIPER_LOW': cls.__constants['WIPER_LOW'],
            'WIPER_HIGH': cls.__constants['WIPER_HIGH'],
            'WIPER_CLEAN': cls.__constants['WIPER_CLEAN'],
            'GEAR_DRIVE': cls.__constants['GEAR_DRIVE'],
            'GEAR_REVERSE': cls.__constants['GEAR_REVERSE'],
            'GEAR_PARK': cls.__constants['GEAR_PARK'],
            'GEAR_LOW': cls.__constants['GEAR_LOW'],
            'GEAR_NEUTRAL': cls.__constants['GEAR_NEUTRAL'],
            'MODE_AUTONOMOUS': cls.__constants['MODE_AUTONOMOUS'],
            'MODE_MANUAL': cls.__constants['MODE_MANUAL'],
            'MODE_DISENGAGED': cls.__constants['MODE_DISENGAGED'],
            'MODE_NOT_READY': cls.__constants['MODE_NOT_READY'],
        }

    @property
    def BLINKER_OFF(self):
        """Message constant 'BLINKER_OFF'."""
        return Metaclass_VehicleStateReport.__constants['BLINKER_OFF']

    @property
    def BLINKER_LEFT(self):
        """Message constant 'BLINKER_LEFT'."""
        return Metaclass_VehicleStateReport.__constants['BLINKER_LEFT']

    @property
    def BLINKER_RIGHT(self):
        """Message constant 'BLINKER_RIGHT'."""
        return Metaclass_VehicleStateReport.__constants['BLINKER_RIGHT']

    @property
    def BLINKER_HAZARD(self):
        """Message constant 'BLINKER_HAZARD'."""
        return Metaclass_VehicleStateReport.__constants['BLINKER_HAZARD']

    @property
    def HEADLIGHT_OFF(self):
        """Message constant 'HEADLIGHT_OFF'."""
        return Metaclass_VehicleStateReport.__constants['HEADLIGHT_OFF']

    @property
    def HEADLIGHT_ON(self):
        """Message constant 'HEADLIGHT_ON'."""
        return Metaclass_VehicleStateReport.__constants['HEADLIGHT_ON']

    @property
    def HEADLIGHT_HIGH(self):
        """Message constant 'HEADLIGHT_HIGH'."""
        return Metaclass_VehicleStateReport.__constants['HEADLIGHT_HIGH']

    @property
    def WIPER_OFF(self):
        """Message constant 'WIPER_OFF'."""
        return Metaclass_VehicleStateReport.__constants['WIPER_OFF']

    @property
    def WIPER_LOW(self):
        """Message constant 'WIPER_LOW'."""
        return Metaclass_VehicleStateReport.__constants['WIPER_LOW']

    @property
    def WIPER_HIGH(self):
        """Message constant 'WIPER_HIGH'."""
        return Metaclass_VehicleStateReport.__constants['WIPER_HIGH']

    @property
    def WIPER_CLEAN(self):
        """Message constant 'WIPER_CLEAN'."""
        return Metaclass_VehicleStateReport.__constants['WIPER_CLEAN']

    @property
    def GEAR_DRIVE(self):
        """Message constant 'GEAR_DRIVE'."""
        return Metaclass_VehicleStateReport.__constants['GEAR_DRIVE']

    @property
    def GEAR_REVERSE(self):
        """Message constant 'GEAR_REVERSE'."""
        return Metaclass_VehicleStateReport.__constants['GEAR_REVERSE']

    @property
    def GEAR_PARK(self):
        """Message constant 'GEAR_PARK'."""
        return Metaclass_VehicleStateReport.__constants['GEAR_PARK']

    @property
    def GEAR_LOW(self):
        """Message constant 'GEAR_LOW'."""
        return Metaclass_VehicleStateReport.__constants['GEAR_LOW']

    @property
    def GEAR_NEUTRAL(self):
        """Message constant 'GEAR_NEUTRAL'."""
        return Metaclass_VehicleStateReport.__constants['GEAR_NEUTRAL']

    @property
    def MODE_AUTONOMOUS(self):
        """Message constant 'MODE_AUTONOMOUS'."""
        return Metaclass_VehicleStateReport.__constants['MODE_AUTONOMOUS']

    @property
    def MODE_MANUAL(self):
        """Message constant 'MODE_MANUAL'."""
        return Metaclass_VehicleStateReport.__constants['MODE_MANUAL']

    @property
    def MODE_DISENGAGED(self):
        """Message constant 'MODE_DISENGAGED'."""
        return Metaclass_VehicleStateReport.__constants['MODE_DISENGAGED']

    @property
    def MODE_NOT_READY(self):
        """Message constant 'MODE_NOT_READY'."""
        return Metaclass_VehicleStateReport.__constants['MODE_NOT_READY']


class VehicleStateReport(metaclass=Metaclass_VehicleStateReport):
    """
    Message class 'VehicleStateReport'.

    Constants:
      BLINKER_OFF
      BLINKER_LEFT
      BLINKER_RIGHT
      BLINKER_HAZARD
      HEADLIGHT_OFF
      HEADLIGHT_ON
      HEADLIGHT_HIGH
      WIPER_OFF
      WIPER_LOW
      WIPER_HIGH
      WIPER_CLEAN
      GEAR_DRIVE
      GEAR_REVERSE
      GEAR_PARK
      GEAR_LOW
      GEAR_NEUTRAL
      MODE_AUTONOMOUS
      MODE_MANUAL
      MODE_DISENGAGED
      MODE_NOT_READY
    """

    __slots__ = [
        '_stamp',
        '_fuel',
        '_blinker',
        '_headlight',
        '_wiper',
        '_gear',
        '_mode',
        '_hand_brake',
        '_horn',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'fuel': 'uint8',
        'blinker': 'uint8',
        'headlight': 'uint8',
        'wiper': 'uint8',
        'gear': 'uint8',
        'mode': 'uint8',
        'hand_brake': 'boolean',
        'horn': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.fuel = kwargs.get('fuel', int())
        self.blinker = kwargs.get('blinker', int())
        self.headlight = kwargs.get('headlight', int())
        self.wiper = kwargs.get('wiper', int())
        self.gear = kwargs.get('gear', int())
        self.mode = kwargs.get('mode', int())
        self.hand_brake = kwargs.get('hand_brake', bool())
        self.horn = kwargs.get('horn', bool())

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
        if self.fuel != other.fuel:
            return False
        if self.blinker != other.blinker:
            return False
        if self.headlight != other.headlight:
            return False
        if self.wiper != other.wiper:
            return False
        if self.gear != other.gear:
            return False
        if self.mode != other.mode:
            return False
        if self.hand_brake != other.hand_brake:
            return False
        if self.horn != other.horn:
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
    def fuel(self):
        """Message field 'fuel'."""
        return self._fuel

    @fuel.setter
    def fuel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fuel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fuel' field must be an unsigned integer in [0, 255]"
        self._fuel = value

    @builtins.property
    def blinker(self):
        """Message field 'blinker'."""
        return self._blinker

    @blinker.setter
    def blinker(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blinker' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blinker' field must be an unsigned integer in [0, 255]"
        self._blinker = value

    @builtins.property
    def headlight(self):
        """Message field 'headlight'."""
        return self._headlight

    @headlight.setter
    def headlight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'headlight' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'headlight' field must be an unsigned integer in [0, 255]"
        self._headlight = value

    @builtins.property
    def wiper(self):
        """Message field 'wiper'."""
        return self._wiper

    @wiper.setter
    def wiper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wiper' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wiper' field must be an unsigned integer in [0, 255]"
        self._wiper = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def hand_brake(self):
        """Message field 'hand_brake'."""
        return self._hand_brake

    @hand_brake.setter
    def hand_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hand_brake' field must be of type 'bool'"
        self._hand_brake = value

    @builtins.property
    def horn(self):
        """Message field 'horn'."""
        return self._horn

    @horn.setter
    def horn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horn' field must be of type 'bool'"
        self._horn = value
