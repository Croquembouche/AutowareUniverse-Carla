# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/WeatherReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WeatherReport(type):
    """Metaclass of message 'WeatherReport'."""

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
                'v2x_msg.msg.WeatherReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__weather_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__weather_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__weather_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__weather_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__weather_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WeatherReport(metaclass=Metaclass_WeatherReport):
    """Message class 'WeatherReport'."""

    __slots__ = [
        '_israining',
        '_rainrate',
        '_precipsituation',
        '_solarradiation',
        '_friction',
    ]

    _fields_and_field_types = {
        'israining': 'int64',
        'rainrate': 'int64',
        'precipsituation': 'int64',
        'solarradiation': 'int64',
        'friction': 'int64',
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
        self.israining = kwargs.get('israining', int())
        self.rainrate = kwargs.get('rainrate', int())
        self.precipsituation = kwargs.get('precipsituation', int())
        self.solarradiation = kwargs.get('solarradiation', int())
        self.friction = kwargs.get('friction', int())

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
        if self.israining != other.israining:
            return False
        if self.rainrate != other.rainrate:
            return False
        if self.precipsituation != other.precipsituation:
            return False
        if self.solarradiation != other.solarradiation:
            return False
        if self.friction != other.friction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def israining(self):
        """Message field 'israining'."""
        return self._israining

    @israining.setter
    def israining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'israining' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'israining' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._israining = value

    @builtins.property
    def rainrate(self):
        """Message field 'rainrate'."""
        return self._rainrate

    @rainrate.setter
    def rainrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rainrate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rainrate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rainrate = value

    @builtins.property
    def precipsituation(self):
        """Message field 'precipsituation'."""
        return self._precipsituation

    @precipsituation.setter
    def precipsituation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'precipsituation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'precipsituation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._precipsituation = value

    @builtins.property
    def solarradiation(self):
        """Message field 'solarradiation'."""
        return self._solarradiation

    @solarradiation.setter
    def solarradiation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solarradiation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'solarradiation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._solarradiation = value

    @builtins.property
    def friction(self):
        """Message field 'friction'."""
        return self._friction

    @friction.setter
    def friction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'friction' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'friction' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._friction = value
