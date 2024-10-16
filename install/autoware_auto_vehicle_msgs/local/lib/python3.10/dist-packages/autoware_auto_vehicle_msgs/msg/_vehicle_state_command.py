# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/VehicleStateCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStateCommand(type):
    """Metaclass of message 'VehicleStateCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLINKER_NO_COMMAND': 0,
        'BLINKER_OFF': 1,
        'BLINKER_LEFT': 2,
        'BLINKER_RIGHT': 3,
        'BLINKER_HAZARD': 4,
        'HEADLIGHT_NO_COMMAND': 0,
        'HEADLIGHT_OFF': 1,
        'HEADLIGHT_ON': 2,
        'HEADLIGHT_HIGH': 3,
        'WIPER_NO_COMMAND': 0,
        'WIPER_OFF': 1,
        'WIPER_LOW': 2,
        'WIPER_HIGH': 3,
        'WIPER_CLEAN': 14,
        'GEAR_NO_COMMAND': 0,
        'GEAR_DRIVE': 1,
        'GEAR_REVERSE': 2,
        'GEAR_PARK': 3,
        'GEAR_LOW': 4,
        'GEAR_NEUTRAL': 5,
        'MODE_NO_COMMAND': 0,
        'MODE_AUTONOMOUS': 1,
        'MODE_MANUAL': 2,
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
                'autoware_auto_vehicle_msgs.msg.VehicleStateCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLINKER_NO_COMMAND': cls.__constants['BLINKER_NO_COMMAND'],
            'BLINKER_OFF': cls.__constants['BLINKER_OFF'],
            'BLINKER_LEFT': cls.__constants['BLINKER_LEFT'],
            'BLINKER_RIGHT': cls.__constants['BLINKER_RIGHT'],
            'BLINKER_HAZARD': cls.__constants['BLINKER_HAZARD'],
            'HEADLIGHT_NO_COMMAND': cls.__constants['HEADLIGHT_NO_COMMAND'],
            'HEADLIGHT_OFF': cls.__constants['HEADLIGHT_OFF'],
            'HEADLIGHT_ON': cls.__constants['HEADLIGHT_ON'],
            'HEADLIGHT_HIGH': cls.__constants['HEADLIGHT_HIGH'],
            'WIPER_NO_COMMAND': cls.__constants['WIPER_NO_COMMAND'],
            'WIPER_OFF': cls.__constants['WIPER_OFF'],
            'WIPER_LOW': cls.__constants['WIPER_LOW'],
            'WIPER_HIGH': cls.__constants['WIPER_HIGH'],
            'WIPER_CLEAN': cls.__constants['WIPER_CLEAN'],
            'GEAR_NO_COMMAND': cls.__constants['GEAR_NO_COMMAND'],
            'GEAR_DRIVE': cls.__constants['GEAR_DRIVE'],
            'GEAR_REVERSE': cls.__constants['GEAR_REVERSE'],
            'GEAR_PARK': cls.__constants['GEAR_PARK'],
            'GEAR_LOW': cls.__constants['GEAR_LOW'],
            'GEAR_NEUTRAL': cls.__constants['GEAR_NEUTRAL'],
            'MODE_NO_COMMAND': cls.__constants['MODE_NO_COMMAND'],
            'MODE_AUTONOMOUS': cls.__constants['MODE_AUTONOMOUS'],
            'MODE_MANUAL': cls.__constants['MODE_MANUAL'],
            'BLINKER__DEFAULT': 0,
            'HEADLIGHT__DEFAULT': 0,
            'WIPER__DEFAULT': 0,
            'GEAR__DEFAULT': 0,
            'MODE__DEFAULT': 0,
            'HAND_BRAKE__DEFAULT': False,
            'HORN__DEFAULT': False,
        }

    @property
    def BLINKER_NO_COMMAND(self):
        """Message constant 'BLINKER_NO_COMMAND'."""
        return Metaclass_VehicleStateCommand.__constants['BLINKER_NO_COMMAND']

    @property
    def BLINKER_OFF(self):
        """Message constant 'BLINKER_OFF'."""
        return Metaclass_VehicleStateCommand.__constants['BLINKER_OFF']

    @property
    def BLINKER_LEFT(self):
        """Message constant 'BLINKER_LEFT'."""
        return Metaclass_VehicleStateCommand.__constants['BLINKER_LEFT']

    @property
    def BLINKER_RIGHT(self):
        """Message constant 'BLINKER_RIGHT'."""
        return Metaclass_VehicleStateCommand.__constants['BLINKER_RIGHT']

    @property
    def BLINKER_HAZARD(self):
        """Message constant 'BLINKER_HAZARD'."""
        return Metaclass_VehicleStateCommand.__constants['BLINKER_HAZARD']

    @property
    def HEADLIGHT_NO_COMMAND(self):
        """Message constant 'HEADLIGHT_NO_COMMAND'."""
        return Metaclass_VehicleStateCommand.__constants['HEADLIGHT_NO_COMMAND']

    @property
    def HEADLIGHT_OFF(self):
        """Message constant 'HEADLIGHT_OFF'."""
        return Metaclass_VehicleStateCommand.__constants['HEADLIGHT_OFF']

    @property
    def HEADLIGHT_ON(self):
        """Message constant 'HEADLIGHT_ON'."""
        return Metaclass_VehicleStateCommand.__constants['HEADLIGHT_ON']

    @property
    def HEADLIGHT_HIGH(self):
        """Message constant 'HEADLIGHT_HIGH'."""
        return Metaclass_VehicleStateCommand.__constants['HEADLIGHT_HIGH']

    @property
    def WIPER_NO_COMMAND(self):
        """Message constant 'WIPER_NO_COMMAND'."""
        return Metaclass_VehicleStateCommand.__constants['WIPER_NO_COMMAND']

    @property
    def WIPER_OFF(self):
        """Message constant 'WIPER_OFF'."""
        return Metaclass_VehicleStateCommand.__constants['WIPER_OFF']

    @property
    def WIPER_LOW(self):
        """Message constant 'WIPER_LOW'."""
        return Metaclass_VehicleStateCommand.__constants['WIPER_LOW']

    @property
    def WIPER_HIGH(self):
        """Message constant 'WIPER_HIGH'."""
        return Metaclass_VehicleStateCommand.__constants['WIPER_HIGH']

    @property
    def WIPER_CLEAN(self):
        """Message constant 'WIPER_CLEAN'."""
        return Metaclass_VehicleStateCommand.__constants['WIPER_CLEAN']

    @property
    def GEAR_NO_COMMAND(self):
        """Message constant 'GEAR_NO_COMMAND'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_NO_COMMAND']

    @property
    def GEAR_DRIVE(self):
        """Message constant 'GEAR_DRIVE'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_DRIVE']

    @property
    def GEAR_REVERSE(self):
        """Message constant 'GEAR_REVERSE'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_REVERSE']

    @property
    def GEAR_PARK(self):
        """Message constant 'GEAR_PARK'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_PARK']

    @property
    def GEAR_LOW(self):
        """Message constant 'GEAR_LOW'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_LOW']

    @property
    def GEAR_NEUTRAL(self):
        """Message constant 'GEAR_NEUTRAL'."""
        return Metaclass_VehicleStateCommand.__constants['GEAR_NEUTRAL']

    @property
    def MODE_NO_COMMAND(self):
        """Message constant 'MODE_NO_COMMAND'."""
        return Metaclass_VehicleStateCommand.__constants['MODE_NO_COMMAND']

    @property
    def MODE_AUTONOMOUS(self):
        """Message constant 'MODE_AUTONOMOUS'."""
        return Metaclass_VehicleStateCommand.__constants['MODE_AUTONOMOUS']

    @property
    def MODE_MANUAL(self):
        """Message constant 'MODE_MANUAL'."""
        return Metaclass_VehicleStateCommand.__constants['MODE_MANUAL']

    @property
    def BLINKER__DEFAULT(cls):
        """Return default value for message field 'blinker'."""
        return 0

    @property
    def HEADLIGHT__DEFAULT(cls):
        """Return default value for message field 'headlight'."""
        return 0

    @property
    def WIPER__DEFAULT(cls):
        """Return default value for message field 'wiper'."""
        return 0

    @property
    def GEAR__DEFAULT(cls):
        """Return default value for message field 'gear'."""
        return 0

    @property
    def MODE__DEFAULT(cls):
        """Return default value for message field 'mode'."""
        return 0

    @property
    def HAND_BRAKE__DEFAULT(cls):
        """Return default value for message field 'hand_brake'."""
        return False

    @property
    def HORN__DEFAULT(cls):
        """Return default value for message field 'horn'."""
        return False


class VehicleStateCommand(metaclass=Metaclass_VehicleStateCommand):
    """
    Message class 'VehicleStateCommand'.

    Constants:
      BLINKER_NO_COMMAND
      BLINKER_OFF
      BLINKER_LEFT
      BLINKER_RIGHT
      BLINKER_HAZARD
      HEADLIGHT_NO_COMMAND
      HEADLIGHT_OFF
      HEADLIGHT_ON
      HEADLIGHT_HIGH
      WIPER_NO_COMMAND
      WIPER_OFF
      WIPER_LOW
      WIPER_HIGH
      WIPER_CLEAN
      GEAR_NO_COMMAND
      GEAR_DRIVE
      GEAR_REVERSE
      GEAR_PARK
      GEAR_LOW
      GEAR_NEUTRAL
      MODE_NO_COMMAND
      MODE_AUTONOMOUS
      MODE_MANUAL
    """

    __slots__ = [
        '_stamp',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.blinker = kwargs.get(
            'blinker', VehicleStateCommand.BLINKER__DEFAULT)
        self.headlight = kwargs.get(
            'headlight', VehicleStateCommand.HEADLIGHT__DEFAULT)
        self.wiper = kwargs.get(
            'wiper', VehicleStateCommand.WIPER__DEFAULT)
        self.gear = kwargs.get(
            'gear', VehicleStateCommand.GEAR__DEFAULT)
        self.mode = kwargs.get(
            'mode', VehicleStateCommand.MODE__DEFAULT)
        self.hand_brake = kwargs.get(
            'hand_brake', VehicleStateCommand.HAND_BRAKE__DEFAULT)
        self.horn = kwargs.get(
            'horn', VehicleStateCommand.HORN__DEFAULT)

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
