# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/EmergencyDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmergencyDetails(type):
    """Metaclass of message 'EmergencyDetails'."""

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
                'v2x_msg.msg.EmergencyDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__emergency_details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__emergency_details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__emergency_details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__emergency_details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__emergency_details

            from v2x_msg.msg import PrivilegedEvents
            if PrivilegedEvents.__class__._TYPE_SUPPORT is None:
                PrivilegedEvents.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EmergencyDetails(metaclass=Metaclass_EmergencyDetails):
    """Message class 'EmergencyDetails'."""

    __slots__ = [
        '_notused',
        '_sirenuse',
        '_lightsuse',
        '_multi',
        '_events',
        '_responsetype',
    ]

    _fields_and_field_types = {
        'notused': 'int64',
        'sirenuse': 'int64',
        'lightsuse': 'int64',
        'multi': 'int64',
        'events': 'v2x_msg/PrivilegedEvents',
        'responsetype': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PrivilegedEvents'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.notused = kwargs.get('notused', int())
        self.sirenuse = kwargs.get('sirenuse', int())
        self.lightsuse = kwargs.get('lightsuse', int())
        self.multi = kwargs.get('multi', int())
        from v2x_msg.msg import PrivilegedEvents
        self.events = kwargs.get('events', PrivilegedEvents())
        self.responsetype = kwargs.get('responsetype', int())

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
        if self.notused != other.notused:
            return False
        if self.sirenuse != other.sirenuse:
            return False
        if self.lightsuse != other.lightsuse:
            return False
        if self.multi != other.multi:
            return False
        if self.events != other.events:
            return False
        if self.responsetype != other.responsetype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def notused(self):
        """Message field 'notused'."""
        return self._notused

    @notused.setter
    def notused(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notused' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'notused' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._notused = value

    @builtins.property
    def sirenuse(self):
        """Message field 'sirenuse'."""
        return self._sirenuse

    @sirenuse.setter
    def sirenuse(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sirenuse' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sirenuse' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sirenuse = value

    @builtins.property
    def lightsuse(self):
        """Message field 'lightsuse'."""
        return self._lightsuse

    @lightsuse.setter
    def lightsuse(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lightsuse' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lightsuse' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lightsuse = value

    @builtins.property
    def multi(self):
        """Message field 'multi'."""
        return self._multi

    @multi.setter
    def multi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'multi' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'multi' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._multi = value

    @builtins.property
    def events(self):
        """Message field 'events'."""
        return self._events

    @events.setter
    def events(self, value):
        if __debug__:
            from v2x_msg.msg import PrivilegedEvents
            assert \
                isinstance(value, PrivilegedEvents), \
                "The 'events' field must be a sub message of type 'PrivilegedEvents'"
        self._events = value

    @builtins.property
    def responsetype(self):
        """Message field 'responsetype'."""
        return self._responsetype

    @responsetype.setter
    def responsetype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'responsetype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'responsetype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._responsetype = value
