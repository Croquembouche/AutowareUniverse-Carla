# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/ResponseStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResponseStatus(type):
    """Metaclass of message 'ResponseStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 50000,
        'SERVICE_UNREADY': 50001,
        'SERVICE_TIMEOUT': 50002,
        'TRANSFORM_ERROR': 50003,
        'PARAMETER_ERROR': 50004,
        'DEPRECATED': 60000,
        'NO_EFFECT': 60001,
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
                'autoware_adapi_v1_msgs.msg.ResponseStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__response_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__response_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__response_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__response_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__response_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SERVICE_UNREADY': cls.__constants['SERVICE_UNREADY'],
            'SERVICE_TIMEOUT': cls.__constants['SERVICE_TIMEOUT'],
            'TRANSFORM_ERROR': cls.__constants['TRANSFORM_ERROR'],
            'PARAMETER_ERROR': cls.__constants['PARAMETER_ERROR'],
            'DEPRECATED': cls.__constants['DEPRECATED'],
            'NO_EFFECT': cls.__constants['NO_EFFECT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ResponseStatus.__constants['UNKNOWN']

    @property
    def SERVICE_UNREADY(self):
        """Message constant 'SERVICE_UNREADY'."""
        return Metaclass_ResponseStatus.__constants['SERVICE_UNREADY']

    @property
    def SERVICE_TIMEOUT(self):
        """Message constant 'SERVICE_TIMEOUT'."""
        return Metaclass_ResponseStatus.__constants['SERVICE_TIMEOUT']

    @property
    def TRANSFORM_ERROR(self):
        """Message constant 'TRANSFORM_ERROR'."""
        return Metaclass_ResponseStatus.__constants['TRANSFORM_ERROR']

    @property
    def PARAMETER_ERROR(self):
        """Message constant 'PARAMETER_ERROR'."""
        return Metaclass_ResponseStatus.__constants['PARAMETER_ERROR']

    @property
    def DEPRECATED(self):
        """Message constant 'DEPRECATED'."""
        return Metaclass_ResponseStatus.__constants['DEPRECATED']

    @property
    def NO_EFFECT(self):
        """Message constant 'NO_EFFECT'."""
        return Metaclass_ResponseStatus.__constants['NO_EFFECT']


class ResponseStatus(metaclass=Metaclass_ResponseStatus):
    """
    Message class 'ResponseStatus'.

    Constants:
      UNKNOWN
      SERVICE_UNREADY
      SERVICE_TIMEOUT
      TRANSFORM_ERROR
      PARAMETER_ERROR
      DEPRECATED
      NO_EFFECT
    """

    __slots__ = [
        '_success',
        '_code',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'code': 'uint16',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.code = kwargs.get('code', int())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'code' field must be an unsigned integer in [0, 65535]"
        self._code = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
