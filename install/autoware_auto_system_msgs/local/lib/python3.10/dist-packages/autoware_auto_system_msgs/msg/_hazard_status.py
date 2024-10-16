# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_system_msgs:msg/HazardStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HazardStatus(type):
    """Metaclass of message 'HazardStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_FAULT': 0,
        'SAFE_FAULT': 1,
        'LATENT_FAULT': 2,
        'SINGLE_POINT_FAULT': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_system_msgs.msg.HazardStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hazard_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hazard_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hazard_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hazard_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hazard_status

            from diagnostic_msgs.msg import DiagnosticStatus
            if DiagnosticStatus.__class__._TYPE_SUPPORT is None:
                DiagnosticStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_FAULT': cls.__constants['NO_FAULT'],
            'SAFE_FAULT': cls.__constants['SAFE_FAULT'],
            'LATENT_FAULT': cls.__constants['LATENT_FAULT'],
            'SINGLE_POINT_FAULT': cls.__constants['SINGLE_POINT_FAULT'],
            'LEVEL__DEFAULT': 0,
            'EMERGENCY__DEFAULT': False,
            'EMERGENCY_HOLDING__DEFAULT': False,
        }

    @property
    def NO_FAULT(self):
        """Message constant 'NO_FAULT'."""
        return Metaclass_HazardStatus.__constants['NO_FAULT']

    @property
    def SAFE_FAULT(self):
        """Message constant 'SAFE_FAULT'."""
        return Metaclass_HazardStatus.__constants['SAFE_FAULT']

    @property
    def LATENT_FAULT(self):
        """Message constant 'LATENT_FAULT'."""
        return Metaclass_HazardStatus.__constants['LATENT_FAULT']

    @property
    def SINGLE_POINT_FAULT(self):
        """Message constant 'SINGLE_POINT_FAULT'."""
        return Metaclass_HazardStatus.__constants['SINGLE_POINT_FAULT']

    @property
    def LEVEL__DEFAULT(cls):
        """Return default value for message field 'level'."""
        return 0

    @property
    def EMERGENCY__DEFAULT(cls):
        """Return default value for message field 'emergency'."""
        return False

    @property
    def EMERGENCY_HOLDING__DEFAULT(cls):
        """Return default value for message field 'emergency_holding'."""
        return False


class HazardStatus(metaclass=Metaclass_HazardStatus):
    """
    Message class 'HazardStatus'.

    Constants:
      NO_FAULT
      SAFE_FAULT
      LATENT_FAULT
      SINGLE_POINT_FAULT
    """

    __slots__ = [
        '_level',
        '_emergency',
        '_emergency_holding',
        '_diag_no_fault',
        '_diag_safe_fault',
        '_diag_latent_fault',
        '_diag_single_point_fault',
    ]

    _fields_and_field_types = {
        'level': 'uint8',
        'emergency': 'boolean',
        'emergency_holding': 'boolean',
        'diag_no_fault': 'sequence<diagnostic_msgs/DiagnosticStatus>',
        'diag_safe_fault': 'sequence<diagnostic_msgs/DiagnosticStatus>',
        'diag_latent_fault': 'sequence<diagnostic_msgs/DiagnosticStatus>',
        'diag_single_point_fault': 'sequence<diagnostic_msgs/DiagnosticStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.level = kwargs.get(
            'level', HazardStatus.LEVEL__DEFAULT)
        self.emergency = kwargs.get(
            'emergency', HazardStatus.EMERGENCY__DEFAULT)
        self.emergency_holding = kwargs.get(
            'emergency_holding', HazardStatus.EMERGENCY_HOLDING__DEFAULT)
        self.diag_no_fault = kwargs.get('diag_no_fault', [])
        self.diag_safe_fault = kwargs.get('diag_safe_fault', [])
        self.diag_latent_fault = kwargs.get('diag_latent_fault', [])
        self.diag_single_point_fault = kwargs.get('diag_single_point_fault', [])

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
        if self.level != other.level:
            return False
        if self.emergency != other.emergency:
            return False
        if self.emergency_holding != other.emergency_holding:
            return False
        if self.diag_no_fault != other.diag_no_fault:
            return False
        if self.diag_safe_fault != other.diag_safe_fault:
            return False
        if self.diag_latent_fault != other.diag_latent_fault:
            return False
        if self.diag_single_point_fault != other.diag_single_point_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'level' field must be an unsigned integer in [0, 255]"
        self._level = value

    @builtins.property
    def emergency(self):
        """Message field 'emergency'."""
        return self._emergency

    @emergency.setter
    def emergency(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency' field must be of type 'bool'"
        self._emergency = value

    @builtins.property
    def emergency_holding(self):
        """Message field 'emergency_holding'."""
        return self._emergency_holding

    @emergency_holding.setter
    def emergency_holding(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_holding' field must be of type 'bool'"
        self._emergency_holding = value

    @builtins.property
    def diag_no_fault(self):
        """Message field 'diag_no_fault'."""
        return self._diag_no_fault

    @diag_no_fault.setter
    def diag_no_fault(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'diag_no_fault' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._diag_no_fault = value

    @builtins.property
    def diag_safe_fault(self):
        """Message field 'diag_safe_fault'."""
        return self._diag_safe_fault

    @diag_safe_fault.setter
    def diag_safe_fault(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'diag_safe_fault' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._diag_safe_fault = value

    @builtins.property
    def diag_latent_fault(self):
        """Message field 'diag_latent_fault'."""
        return self._diag_latent_fault

    @diag_latent_fault.setter
    def diag_latent_fault(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'diag_latent_fault' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._diag_latent_fault = value

    @builtins.property
    def diag_single_point_fault(self):
        """Message field 'diag_single_point_fault'."""
        return self._diag_single_point_fault

    @diag_single_point_fault.setter
    def diag_single_point_fault(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'diag_single_point_fault' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._diag_single_point_fault = value
