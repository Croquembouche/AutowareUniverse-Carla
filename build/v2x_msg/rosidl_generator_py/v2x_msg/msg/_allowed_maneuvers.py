# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/AllowedManeuvers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AllowedManeuvers(type):
    """Metaclass of message 'AllowedManeuvers'."""

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
                'v2x_msg.msg.AllowedManeuvers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__allowed_maneuvers
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__allowed_maneuvers
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__allowed_maneuvers
            cls._TYPE_SUPPORT = module.type_support_msg__msg__allowed_maneuvers
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__allowed_maneuvers

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AllowedManeuvers(metaclass=Metaclass_AllowedManeuvers):
    """Message class 'AllowedManeuvers'."""

    __slots__ = [
        '_maneuverstraightallowed',
        '_maneuverleftallowed',
        '_maneuverrightallowed',
        '_maneuveruturnallowed',
        '_maneuverleftturnonredallowed',
        '_maneverrightturnonredallowed',
        '_maneuverlanechangeallowed',
        '_maneuvernostoppingallowed',
        '_yieldallwaysrequired',
        '_gowithhalt',
        '_caution',
        '_reserved1',
    ]

    _fields_and_field_types = {
        'maneuverstraightallowed': 'int64',
        'maneuverleftallowed': 'int64',
        'maneuverrightallowed': 'int64',
        'maneuveruturnallowed': 'int64',
        'maneuverleftturnonredallowed': 'int64',
        'maneverrightturnonredallowed': 'int64',
        'maneuverlanechangeallowed': 'int64',
        'maneuvernostoppingallowed': 'int64',
        'yieldallwaysrequired': 'int64',
        'gowithhalt': 'int64',
        'caution': 'int64',
        'reserved1': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.maneuverstraightallowed = kwargs.get('maneuverstraightallowed', int())
        self.maneuverleftallowed = kwargs.get('maneuverleftallowed', int())
        self.maneuverrightallowed = kwargs.get('maneuverrightallowed', int())
        self.maneuveruturnallowed = kwargs.get('maneuveruturnallowed', int())
        self.maneuverleftturnonredallowed = kwargs.get('maneuverleftturnonredallowed', int())
        self.maneverrightturnonredallowed = kwargs.get('maneverrightturnonredallowed', int())
        self.maneuverlanechangeallowed = kwargs.get('maneuverlanechangeallowed', int())
        self.maneuvernostoppingallowed = kwargs.get('maneuvernostoppingallowed', int())
        self.yieldallwaysrequired = kwargs.get('yieldallwaysrequired', int())
        self.gowithhalt = kwargs.get('gowithhalt', int())
        self.caution = kwargs.get('caution', int())
        self.reserved1 = kwargs.get('reserved1', int())

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
        if self.maneuverstraightallowed != other.maneuverstraightallowed:
            return False
        if self.maneuverleftallowed != other.maneuverleftallowed:
            return False
        if self.maneuverrightallowed != other.maneuverrightallowed:
            return False
        if self.maneuveruturnallowed != other.maneuveruturnallowed:
            return False
        if self.maneuverleftturnonredallowed != other.maneuverleftturnonredallowed:
            return False
        if self.maneverrightturnonredallowed != other.maneverrightturnonredallowed:
            return False
        if self.maneuverlanechangeallowed != other.maneuverlanechangeallowed:
            return False
        if self.maneuvernostoppingallowed != other.maneuvernostoppingallowed:
            return False
        if self.yieldallwaysrequired != other.yieldallwaysrequired:
            return False
        if self.gowithhalt != other.gowithhalt:
            return False
        if self.caution != other.caution:
            return False
        if self.reserved1 != other.reserved1:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def maneuverstraightallowed(self):
        """Message field 'maneuverstraightallowed'."""
        return self._maneuverstraightallowed

    @maneuverstraightallowed.setter
    def maneuverstraightallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuverstraightallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuverstraightallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuverstraightallowed = value

    @property
    def maneuverleftallowed(self):
        """Message field 'maneuverleftallowed'."""
        return self._maneuverleftallowed

    @maneuverleftallowed.setter
    def maneuverleftallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuverleftallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuverleftallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuverleftallowed = value

    @property
    def maneuverrightallowed(self):
        """Message field 'maneuverrightallowed'."""
        return self._maneuverrightallowed

    @maneuverrightallowed.setter
    def maneuverrightallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuverrightallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuverrightallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuverrightallowed = value

    @property
    def maneuveruturnallowed(self):
        """Message field 'maneuveruturnallowed'."""
        return self._maneuveruturnallowed

    @maneuveruturnallowed.setter
    def maneuveruturnallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuveruturnallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuveruturnallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuveruturnallowed = value

    @property
    def maneuverleftturnonredallowed(self):
        """Message field 'maneuverleftturnonredallowed'."""
        return self._maneuverleftturnonredallowed

    @maneuverleftturnonredallowed.setter
    def maneuverleftturnonredallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuverleftturnonredallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuverleftturnonredallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuverleftturnonredallowed = value

    @property
    def maneverrightturnonredallowed(self):
        """Message field 'maneverrightturnonredallowed'."""
        return self._maneverrightturnonredallowed

    @maneverrightturnonredallowed.setter
    def maneverrightturnonredallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneverrightturnonredallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneverrightturnonredallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneverrightturnonredallowed = value

    @property
    def maneuverlanechangeallowed(self):
        """Message field 'maneuverlanechangeallowed'."""
        return self._maneuverlanechangeallowed

    @maneuverlanechangeallowed.setter
    def maneuverlanechangeallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuverlanechangeallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuverlanechangeallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuverlanechangeallowed = value

    @property
    def maneuvernostoppingallowed(self):
        """Message field 'maneuvernostoppingallowed'."""
        return self._maneuvernostoppingallowed

    @maneuvernostoppingallowed.setter
    def maneuvernostoppingallowed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuvernostoppingallowed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maneuvernostoppingallowed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maneuvernostoppingallowed = value

    @property
    def yieldallwaysrequired(self):
        """Message field 'yieldallwaysrequired'."""
        return self._yieldallwaysrequired

    @yieldallwaysrequired.setter
    def yieldallwaysrequired(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yieldallwaysrequired' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'yieldallwaysrequired' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._yieldallwaysrequired = value

    @property
    def gowithhalt(self):
        """Message field 'gowithhalt'."""
        return self._gowithhalt

    @gowithhalt.setter
    def gowithhalt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gowithhalt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'gowithhalt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._gowithhalt = value

    @property
    def caution(self):
        """Message field 'caution'."""
        return self._caution

    @caution.setter
    def caution(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'caution' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'caution' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._caution = value

    @property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserved1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserved1 = value
