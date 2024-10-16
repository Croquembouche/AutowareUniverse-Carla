# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/VehicleStatusRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatusRequest(type):
    """Metaclass of message 'VehicleStatusRequest'."""

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
                'v2x_msg.msg.VehicleStatusRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatusRequest(metaclass=Metaclass_VehicleStatusRequest):
    """Message class 'VehicleStatusRequest'."""

    __slots__ = [
        '_datatype',
        '_subtype',
        '_sendonlessthenvalue',
        '_sendonmorethenvalue',
        '_sendall',
    ]

    _fields_and_field_types = {
        'datatype': 'int64',
        'subtype': 'int64',
        'sendonlessthenvalue': 'int64',
        'sendonmorethenvalue': 'int64',
        'sendall': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.datatype = kwargs.get('datatype', int())
        self.subtype = kwargs.get('subtype', int())
        self.sendonlessthenvalue = kwargs.get('sendonlessthenvalue', int())
        self.sendonmorethenvalue = kwargs.get('sendonmorethenvalue', int())
        self.sendall = kwargs.get('sendall', bool())

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
        if self.datatype != other.datatype:
            return False
        if self.subtype != other.subtype:
            return False
        if self.sendonlessthenvalue != other.sendonlessthenvalue:
            return False
        if self.sendonmorethenvalue != other.sendonmorethenvalue:
            return False
        if self.sendall != other.sendall:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def datatype(self):
        """Message field 'datatype'."""
        return self._datatype

    @datatype.setter
    def datatype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'datatype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'datatype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._datatype = value

    @builtins.property
    def subtype(self):
        """Message field 'subtype'."""
        return self._subtype

    @subtype.setter
    def subtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'subtype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'subtype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._subtype = value

    @builtins.property
    def sendonlessthenvalue(self):
        """Message field 'sendonlessthenvalue'."""
        return self._sendonlessthenvalue

    @sendonlessthenvalue.setter
    def sendonlessthenvalue(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sendonlessthenvalue' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sendonlessthenvalue' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sendonlessthenvalue = value

    @builtins.property
    def sendonmorethenvalue(self):
        """Message field 'sendonmorethenvalue'."""
        return self._sendonmorethenvalue

    @sendonmorethenvalue.setter
    def sendonmorethenvalue(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sendonmorethenvalue' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sendonmorethenvalue' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sendonmorethenvalue = value

    @builtins.property
    def sendall(self):
        """Message field 'sendall'."""
        return self._sendall

    @sendall.setter
    def sendall(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sendall' field must be of type 'bool'"
        self._sendall = value
