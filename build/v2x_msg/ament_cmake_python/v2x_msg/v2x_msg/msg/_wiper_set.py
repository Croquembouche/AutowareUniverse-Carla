# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/WiperSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WiperSet(type):
    """Metaclass of message 'WiperSet'."""

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
                'v2x_msg.msg.WiperSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper_set

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WiperSet(metaclass=Metaclass_WiperSet):
    """Message class 'WiperSet'."""

    __slots__ = [
        '_statusfront',
        '_ratefront',
        '_statusrear',
        '_raterear',
    ]

    _fields_and_field_types = {
        'statusfront': 'int64',
        'ratefront': 'int64',
        'statusrear': 'int64',
        'raterear': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.statusfront = kwargs.get('statusfront', int())
        self.ratefront = kwargs.get('ratefront', int())
        self.statusrear = kwargs.get('statusrear', int())
        self.raterear = kwargs.get('raterear', int())

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
        if self.statusfront != other.statusfront:
            return False
        if self.ratefront != other.ratefront:
            return False
        if self.statusrear != other.statusrear:
            return False
        if self.raterear != other.raterear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def statusfront(self):
        """Message field 'statusfront'."""
        return self._statusfront

    @statusfront.setter
    def statusfront(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'statusfront' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'statusfront' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._statusfront = value

    @builtins.property
    def ratefront(self):
        """Message field 'ratefront'."""
        return self._ratefront

    @ratefront.setter
    def ratefront(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ratefront' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ratefront' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ratefront = value

    @builtins.property
    def statusrear(self):
        """Message field 'statusrear'."""
        return self._statusrear

    @statusrear.setter
    def statusrear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'statusrear' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'statusrear' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._statusrear = value

    @builtins.property
    def raterear(self):
        """Message field 'raterear'."""
        return self._raterear

    @raterear.setter
    def raterear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'raterear' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'raterear' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._raterear = value
