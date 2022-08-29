# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RequestorType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestorType(type):
    """Metaclass of message 'RequestorType'."""

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
                'v2x_msg.msg.RequestorType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__requestor_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__requestor_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__requestor_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__requestor_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__requestor_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestorType(metaclass=Metaclass_RequestorType):
    """Message class 'RequestorType'."""

    __slots__ = [
        '_role',
        '_subrole',
        '_request',
        '_iso3833vehicletype',
        '_hpmstype',
    ]

    _fields_and_field_types = {
        'role': 'int64',
        'subrole': 'int64',
        'request': 'int64',
        'iso3833vehicletype': 'int64',
        'hpmstype': 'int64',
    }

    SLOT_TYPES = (
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
        self.role = kwargs.get('role', int())
        self.subrole = kwargs.get('subrole', int())
        self.request = kwargs.get('request', int())
        self.iso3833vehicletype = kwargs.get('iso3833vehicletype', int())
        self.hpmstype = kwargs.get('hpmstype', int())

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
        if self.role != other.role:
            return False
        if self.subrole != other.subrole:
            return False
        if self.request != other.request:
            return False
        if self.iso3833vehicletype != other.iso3833vehicletype:
            return False
        if self.hpmstype != other.hpmstype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'role' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'role' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._role = value

    @property
    def subrole(self):
        """Message field 'subrole'."""
        return self._subrole

    @subrole.setter
    def subrole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'subrole' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'subrole' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._subrole = value

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'request' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._request = value

    @property
    def iso3833vehicletype(self):
        """Message field 'iso3833vehicletype'."""
        return self._iso3833vehicletype

    @iso3833vehicletype.setter
    def iso3833vehicletype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iso3833vehicletype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'iso3833vehicletype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._iso3833vehicletype = value

    @property
    def hpmstype(self):
        """Message field 'hpmstype'."""
        return self._hpmstype

    @hpmstype.setter
    def hpmstype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hpmstype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'hpmstype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._hpmstype = value
