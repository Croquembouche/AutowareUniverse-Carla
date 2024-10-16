# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/RawControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawControlCommand(type):
    """Metaclass of message 'RawControlCommand'."""

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
                'autoware_auto_vehicle_msgs.msg.RawControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_control_command

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


class RawControlCommand(metaclass=Metaclass_RawControlCommand):
    """Message class 'RawControlCommand'."""

    __slots__ = [
        '_stamp',
        '_throttle',
        '_brake',
        '_front_steer',
        '_rear_steer',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'throttle': 'uint32',
        'brake': 'uint32',
        'front_steer': 'int32',
        'rear_steer': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.throttle = kwargs.get('throttle', int())
        self.brake = kwargs.get('brake', int())
        self.front_steer = kwargs.get('front_steer', int())
        self.rear_steer = kwargs.get('rear_steer', int())

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
        if self.throttle != other.throttle:
            return False
        if self.brake != other.brake:
            return False
        if self.front_steer != other.front_steer:
            return False
        if self.rear_steer != other.rear_steer:
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
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'throttle' field must be an unsigned integer in [0, 4294967295]"
        self._throttle = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'brake' field must be an unsigned integer in [0, 4294967295]"
        self._brake = value

    @builtins.property
    def front_steer(self):
        """Message field 'front_steer'."""
        return self._front_steer

    @front_steer.setter
    def front_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_steer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_steer' field must be an integer in [-2147483648, 2147483647]"
        self._front_steer = value

    @builtins.property
    def rear_steer(self):
        """Message field 'rear_steer'."""
        return self._rear_steer

    @rear_steer.setter
    def rear_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_steer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_steer' field must be an integer in [-2147483648, 2147483647]"
        self._rear_steer = value
