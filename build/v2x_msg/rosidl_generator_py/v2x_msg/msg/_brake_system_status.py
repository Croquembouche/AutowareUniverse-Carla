# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/BrakeSystemStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrakeSystemStatus(type):
    """Metaclass of message 'BrakeSystemStatus'."""

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
                'v2x_msg.msg.BrakeSystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_system_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_system_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_system_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_system_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_system_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BrakeSystemStatus(metaclass=Metaclass_BrakeSystemStatus):
    """Message class 'BrakeSystemStatus'."""

    __slots__ = [
        '_wheelbrakes',
        '_traction',
        '_abs',
        '_scs',
        '_brakeboost',
        '_auxbrakes',
    ]

    _fields_and_field_types = {
        'wheelbrakes': 'string',
        'traction': 'int64',
        'abs': 'int64',
        'scs': 'int64',
        'brakeboost': 'int64',
        'auxbrakes': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheelbrakes = kwargs.get('wheelbrakes', str())
        self.traction = kwargs.get('traction', int())
        self.abs = kwargs.get('abs', int())
        self.scs = kwargs.get('scs', int())
        self.brakeboost = kwargs.get('brakeboost', int())
        self.auxbrakes = kwargs.get('auxbrakes', int())

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
        if self.wheelbrakes != other.wheelbrakes:
            return False
        if self.traction != other.traction:
            return False
        if self.abs != other.abs:
            return False
        if self.scs != other.scs:
            return False
        if self.brakeboost != other.brakeboost:
            return False
        if self.auxbrakes != other.auxbrakes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wheelbrakes(self):
        """Message field 'wheelbrakes'."""
        return self._wheelbrakes

    @wheelbrakes.setter
    def wheelbrakes(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wheelbrakes' field must be of type 'str'"
        self._wheelbrakes = value

    @builtins.property
    def traction(self):
        """Message field 'traction'."""
        return self._traction

    @traction.setter
    def traction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traction' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'traction' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._traction = value

    @builtins.property  # noqa: A003
    def abs(self):  # noqa: A003
        """Message field 'abs'."""
        return self._abs

    @abs.setter  # noqa: A003
    def abs(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abs' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'abs' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._abs = value

    @builtins.property
    def scs(self):
        """Message field 'scs'."""
        return self._scs

    @scs.setter
    def scs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scs' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'scs' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._scs = value

    @builtins.property
    def brakeboost(self):
        """Message field 'brakeboost'."""
        return self._brakeboost

    @brakeboost.setter
    def brakeboost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brakeboost' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'brakeboost' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._brakeboost = value

    @builtins.property
    def auxbrakes(self):
        """Message field 'auxbrakes'."""
        return self._auxbrakes

    @auxbrakes.setter
    def auxbrakes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auxbrakes' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'auxbrakes' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._auxbrakes = value
