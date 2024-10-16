# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OperationModeState(type):
    """Metaclass of message 'OperationModeState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'STOP': 1,
        'AUTONOMOUS': 2,
        'LOCAL': 3,
        'REMOTE': 4,
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
                'autoware_adapi_v1_msgs.msg.OperationModeState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__operation_mode_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__operation_mode_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__operation_mode_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__operation_mode_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__operation_mode_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'STOP': cls.__constants['STOP'],
            'AUTONOMOUS': cls.__constants['AUTONOMOUS'],
            'LOCAL': cls.__constants['LOCAL'],
            'REMOTE': cls.__constants['REMOTE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_OperationModeState.__constants['UNKNOWN']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_OperationModeState.__constants['STOP']

    @property
    def AUTONOMOUS(self):
        """Message constant 'AUTONOMOUS'."""
        return Metaclass_OperationModeState.__constants['AUTONOMOUS']

    @property
    def LOCAL(self):
        """Message constant 'LOCAL'."""
        return Metaclass_OperationModeState.__constants['LOCAL']

    @property
    def REMOTE(self):
        """Message constant 'REMOTE'."""
        return Metaclass_OperationModeState.__constants['REMOTE']


class OperationModeState(metaclass=Metaclass_OperationModeState):
    """
    Message class 'OperationModeState'.

    Constants:
      UNKNOWN
      STOP
      AUTONOMOUS
      LOCAL
      REMOTE
    """

    __slots__ = [
        '_stamp',
        '_mode',
        '_is_autoware_control_enabled',
        '_is_in_transition',
        '_is_stop_mode_available',
        '_is_autonomous_mode_available',
        '_is_local_mode_available',
        '_is_remote_mode_available',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'mode': 'uint8',
        'is_autoware_control_enabled': 'boolean',
        'is_in_transition': 'boolean',
        'is_stop_mode_available': 'boolean',
        'is_autonomous_mode_available': 'boolean',
        'is_local_mode_available': 'boolean',
        'is_remote_mode_available': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.mode = kwargs.get('mode', int())
        self.is_autoware_control_enabled = kwargs.get('is_autoware_control_enabled', bool())
        self.is_in_transition = kwargs.get('is_in_transition', bool())
        self.is_stop_mode_available = kwargs.get('is_stop_mode_available', bool())
        self.is_autonomous_mode_available = kwargs.get('is_autonomous_mode_available', bool())
        self.is_local_mode_available = kwargs.get('is_local_mode_available', bool())
        self.is_remote_mode_available = kwargs.get('is_remote_mode_available', bool())

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
        if self.mode != other.mode:
            return False
        if self.is_autoware_control_enabled != other.is_autoware_control_enabled:
            return False
        if self.is_in_transition != other.is_in_transition:
            return False
        if self.is_stop_mode_available != other.is_stop_mode_available:
            return False
        if self.is_autonomous_mode_available != other.is_autonomous_mode_available:
            return False
        if self.is_local_mode_available != other.is_local_mode_available:
            return False
        if self.is_remote_mode_available != other.is_remote_mode_available:
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
    def is_autoware_control_enabled(self):
        """Message field 'is_autoware_control_enabled'."""
        return self._is_autoware_control_enabled

    @is_autoware_control_enabled.setter
    def is_autoware_control_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_autoware_control_enabled' field must be of type 'bool'"
        self._is_autoware_control_enabled = value

    @builtins.property
    def is_in_transition(self):
        """Message field 'is_in_transition'."""
        return self._is_in_transition

    @is_in_transition.setter
    def is_in_transition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_in_transition' field must be of type 'bool'"
        self._is_in_transition = value

    @builtins.property
    def is_stop_mode_available(self):
        """Message field 'is_stop_mode_available'."""
        return self._is_stop_mode_available

    @is_stop_mode_available.setter
    def is_stop_mode_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stop_mode_available' field must be of type 'bool'"
        self._is_stop_mode_available = value

    @builtins.property
    def is_autonomous_mode_available(self):
        """Message field 'is_autonomous_mode_available'."""
        return self._is_autonomous_mode_available

    @is_autonomous_mode_available.setter
    def is_autonomous_mode_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_autonomous_mode_available' field must be of type 'bool'"
        self._is_autonomous_mode_available = value

    @builtins.property
    def is_local_mode_available(self):
        """Message field 'is_local_mode_available'."""
        return self._is_local_mode_available

    @is_local_mode_available.setter
    def is_local_mode_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_local_mode_available' field must be of type 'bool'"
        self._is_local_mode_available = value

    @builtins.property
    def is_remote_mode_available(self):
        """Message field 'is_remote_mode_available'."""
        return self._is_remote_mode_available

    @is_remote_mode_available.setter
    def is_remote_mode_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_remote_mode_available' field must be of type 'bool'"
        self._is_remote_mode_available = value
