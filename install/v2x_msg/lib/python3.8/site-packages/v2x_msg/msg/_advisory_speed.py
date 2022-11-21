# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/AdvisorySpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdvisorySpeed(type):
    """Metaclass of message 'AdvisorySpeed'."""

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
                'v2x_msg.msg.AdvisorySpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__advisory_speed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__advisory_speed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__advisory_speed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__advisory_speed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__advisory_speed

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdvisorySpeed(metaclass=Metaclass_AdvisorySpeed):
    """Message class 'AdvisorySpeed'."""

    __slots__ = [
        '_type',
        '_speed',
        '_confidence',
        '_zonelength',
        '_restrictionclassid',
    ]

    _fields_and_field_types = {
        'type': 'int64',
        'speed': 'int64',
        'confidence': 'int64',
        'zonelength': 'int64',
        'restrictionclassid': 'int64',
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
        self.type = kwargs.get('type', int())
        self.speed = kwargs.get('speed', int())
        self.confidence = kwargs.get('confidence', int())
        self.zonelength = kwargs.get('zonelength', int())
        self.restrictionclassid = kwargs.get('restrictionclassid', int())

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
        if self.type != other.type:
            return False
        if self.speed != other.speed:
            return False
        if self.confidence != other.confidence:
            return False
        if self.zonelength != other.zonelength:
            return False
        if self.restrictionclassid != other.restrictionclassid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'type' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._type = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'confidence' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._confidence = value

    @property
    def zonelength(self):
        """Message field 'zonelength'."""
        return self._zonelength

    @zonelength.setter
    def zonelength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zonelength' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'zonelength' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._zonelength = value

    @property
    def restrictionclassid(self):
        """Message field 'restrictionclassid'."""
        return self._restrictionclassid

    @restrictionclassid.setter
    def restrictionclassid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'restrictionclassid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'restrictionclassid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._restrictionclassid = value
