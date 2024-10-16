# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/MrmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MrmState(type):
    """Metaclass of message 'MrmState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'NORMAL': 1,
        'MRM_OPERATING': 2,
        'MRM_SUCCEEDED': 3,
        'MRM_FAILED': 4,
        'NONE': 1,
        'EMERGENCY_STOP': 2,
        'COMFORTABLE_STOP': 3,
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
                'autoware_adapi_v1_msgs.msg.MrmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mrm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mrm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mrm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mrm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mrm_state

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
            'NORMAL': cls.__constants['NORMAL'],
            'MRM_OPERATING': cls.__constants['MRM_OPERATING'],
            'MRM_SUCCEEDED': cls.__constants['MRM_SUCCEEDED'],
            'MRM_FAILED': cls.__constants['MRM_FAILED'],
            'NONE': cls.__constants['NONE'],
            'EMERGENCY_STOP': cls.__constants['EMERGENCY_STOP'],
            'COMFORTABLE_STOP': cls.__constants['COMFORTABLE_STOP'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MrmState.__constants['UNKNOWN']

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_MrmState.__constants['NORMAL']

    @property
    def MRM_OPERATING(self):
        """Message constant 'MRM_OPERATING'."""
        return Metaclass_MrmState.__constants['MRM_OPERATING']

    @property
    def MRM_SUCCEEDED(self):
        """Message constant 'MRM_SUCCEEDED'."""
        return Metaclass_MrmState.__constants['MRM_SUCCEEDED']

    @property
    def MRM_FAILED(self):
        """Message constant 'MRM_FAILED'."""
        return Metaclass_MrmState.__constants['MRM_FAILED']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_MrmState.__constants['NONE']

    @property
    def EMERGENCY_STOP(self):
        """Message constant 'EMERGENCY_STOP'."""
        return Metaclass_MrmState.__constants['EMERGENCY_STOP']

    @property
    def COMFORTABLE_STOP(self):
        """Message constant 'COMFORTABLE_STOP'."""
        return Metaclass_MrmState.__constants['COMFORTABLE_STOP']


class MrmState(metaclass=Metaclass_MrmState):
    """
    Message class 'MrmState'.

    Constants:
      UNKNOWN
      NORMAL
      MRM_OPERATING
      MRM_SUCCEEDED
      MRM_FAILED
      NONE
      EMERGENCY_STOP
      COMFORTABLE_STOP
    """

    __slots__ = [
        '_stamp',
        '_state',
        '_behavior',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'state': 'uint16',
        'behavior': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.state = kwargs.get('state', int())
        self.behavior = kwargs.get('behavior', int())

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
        if self.state != other.state:
            return False
        if self.behavior != other.behavior:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state' field must be an unsigned integer in [0, 65535]"
        self._state = value

    @builtins.property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'behavior' field must be an unsigned integer in [0, 65535]"
        self._behavior = value
