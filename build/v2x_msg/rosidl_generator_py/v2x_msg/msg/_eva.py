# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/EVA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EVA(type):
    """Metaclass of message 'EVA'."""

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
                'v2x_msg.msg.EVA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__eva
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__eva
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__eva
            cls._TYPE_SUPPORT = module.type_support_msg__msg__eva
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__eva

            from v2x_msg.msg import EmergencyDetails
            if EmergencyDetails.__class__._TYPE_SUPPORT is None:
                EmergencyDetails.__class__.__import_type_support__()

            from v2x_msg.msg import RSA
            if RSA.__class__._TYPE_SUPPORT is None:
                RSA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EVA(metaclass=Metaclass_EVA):
    """Message class 'EVA'."""

    __slots__ = [
        '_timestamp',
        '_id',
        '_rsamsg',
        '_responsetype',
        '_details',
        '_mass',
        '_basictype',
        '_vehicletype',
        '_responseequip',
        '_respondertype',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'id': 'string',
        'rsamsg': 'v2x_msg/RSA',
        'responsetype': 'int64',
        'details': 'v2x_msg/EmergencyDetails',
        'mass': 'int64',
        'basictype': 'int64',
        'vehicletype': 'int64',
        'responseequip': 'int64',
        'respondertype': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RSA'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'EmergencyDetails'),  # noqa: E501
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
        self.timestamp = kwargs.get('timestamp', int())
        self.id = kwargs.get('id', str())
        from v2x_msg.msg import RSA
        self.rsamsg = kwargs.get('rsamsg', RSA())
        self.responsetype = kwargs.get('responsetype', int())
        from v2x_msg.msg import EmergencyDetails
        self.details = kwargs.get('details', EmergencyDetails())
        self.mass = kwargs.get('mass', int())
        self.basictype = kwargs.get('basictype', int())
        self.vehicletype = kwargs.get('vehicletype', int())
        self.responseequip = kwargs.get('responseequip', int())
        self.respondertype = kwargs.get('respondertype', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.id != other.id:
            return False
        if self.rsamsg != other.rsamsg:
            return False
        if self.responsetype != other.responsetype:
            return False
        if self.details != other.details:
            return False
        if self.mass != other.mass:
            return False
        if self.basictype != other.basictype:
            return False
        if self.vehicletype != other.vehicletype:
            return False
        if self.responseequip != other.responseequip:
            return False
        if self.respondertype != other.respondertype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def rsamsg(self):
        """Message field 'rsamsg'."""
        return self._rsamsg

    @rsamsg.setter
    def rsamsg(self, value):
        if __debug__:
            from v2x_msg.msg import RSA
            assert \
                isinstance(value, RSA), \
                "The 'rsamsg' field must be a sub message of type 'RSA'"
        self._rsamsg = value

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

    @builtins.property
    def details(self):
        """Message field 'details'."""
        return self._details

    @details.setter
    def details(self, value):
        if __debug__:
            from v2x_msg.msg import EmergencyDetails
            assert \
                isinstance(value, EmergencyDetails), \
                "The 'details' field must be a sub message of type 'EmergencyDetails'"
        self._details = value

    @builtins.property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mass' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'mass' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._mass = value

    @builtins.property
    def basictype(self):
        """Message field 'basictype'."""
        return self._basictype

    @basictype.setter
    def basictype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basictype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'basictype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._basictype = value

    @builtins.property
    def vehicletype(self):
        """Message field 'vehicletype'."""
        return self._vehicletype

    @vehicletype.setter
    def vehicletype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicletype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'vehicletype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._vehicletype = value

    @builtins.property
    def responseequip(self):
        """Message field 'responseequip'."""
        return self._responseequip

    @responseequip.setter
    def responseequip(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'responseequip' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'responseequip' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._responseequip = value

    @builtins.property
    def respondertype(self):
        """Message field 'respondertype'."""
        return self._respondertype

    @respondertype.setter
    def respondertype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'respondertype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'respondertype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._respondertype = value
