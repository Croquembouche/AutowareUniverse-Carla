# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_control_msgs:msg/AckermannControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AckermannControlCommand(type):
    """Metaclass of message 'AckermannControlCommand'."""

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
            module = import_type_support('autoware_auto_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_control_msgs.msg.AckermannControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ackermann_control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ackermann_control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ackermann_control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ackermann_control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ackermann_control_command

            from autoware_auto_control_msgs.msg import AckermannLateralCommand
            if AckermannLateralCommand.__class__._TYPE_SUPPORT is None:
                AckermannLateralCommand.__class__.__import_type_support__()

            from autoware_auto_control_msgs.msg import LongitudinalCommand
            if LongitudinalCommand.__class__._TYPE_SUPPORT is None:
                LongitudinalCommand.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AckermannControlCommand(metaclass=Metaclass_AckermannControlCommand):
    """Message class 'AckermannControlCommand'."""

    __slots__ = [
        '_stamp',
        '_lateral',
        '_longitudinal',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'lateral': 'autoware_auto_control_msgs/AckermannLateralCommand',
        'longitudinal': 'autoware_auto_control_msgs/LongitudinalCommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_control_msgs', 'msg'], 'AckermannLateralCommand'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_control_msgs', 'msg'], 'LongitudinalCommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from autoware_auto_control_msgs.msg import AckermannLateralCommand
        self.lateral = kwargs.get('lateral', AckermannLateralCommand())
        from autoware_auto_control_msgs.msg import LongitudinalCommand
        self.longitudinal = kwargs.get('longitudinal', LongitudinalCommand())

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
        if self.lateral != other.lateral:
            return False
        if self.longitudinal != other.longitudinal:
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
    def lateral(self):
        """Message field 'lateral'."""
        return self._lateral

    @lateral.setter
    def lateral(self, value):
        if __debug__:
            from autoware_auto_control_msgs.msg import AckermannLateralCommand
            assert \
                isinstance(value, AckermannLateralCommand), \
                "The 'lateral' field must be a sub message of type 'AckermannLateralCommand'"
        self._lateral = value

    @builtins.property
    def longitudinal(self):
        """Message field 'longitudinal'."""
        return self._longitudinal

    @longitudinal.setter
    def longitudinal(self, value):
        if __debug__:
            from autoware_auto_control_msgs.msg import LongitudinalCommand
            assert \
                isinstance(value, LongitudinalCommand), \
                "The 'longitudinal' field must be a sub message of type 'LongitudinalCommand'"
        self._longitudinal = value
