# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/HazardLightsCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HazardLightsCommand(type):
    """Metaclass of message 'HazardLightsCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_COMMAND': 0,
        'DISABLE': 1,
        'ENABLE': 2,
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
                'autoware_auto_vehicle_msgs.msg.HazardLightsCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hazard_lights_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hazard_lights_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hazard_lights_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hazard_lights_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hazard_lights_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_COMMAND': cls.__constants['NO_COMMAND'],
            'DISABLE': cls.__constants['DISABLE'],
            'ENABLE': cls.__constants['ENABLE'],
            'COMMAND__DEFAULT': 0,
        }

    @property
    def NO_COMMAND(self):
        """Message constant 'NO_COMMAND'."""
        return Metaclass_HazardLightsCommand.__constants['NO_COMMAND']

    @property
    def DISABLE(self):
        """Message constant 'DISABLE'."""
        return Metaclass_HazardLightsCommand.__constants['DISABLE']

    @property
    def ENABLE(self):
        """Message constant 'ENABLE'."""
        return Metaclass_HazardLightsCommand.__constants['ENABLE']

    @property
    def COMMAND__DEFAULT(cls):
        """Return default value for message field 'command'."""
        return 0


class HazardLightsCommand(metaclass=Metaclass_HazardLightsCommand):
    """
    Message class 'HazardLightsCommand'.

    Constants:
      NO_COMMAND
      DISABLE
      ENABLE
    """

    __slots__ = [
        '_stamp',
        '_command',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'command': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.command = kwargs.get(
            'command', HazardLightsCommand.COMMAND__DEFAULT)

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
        if self.command != other.command:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value
