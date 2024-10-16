# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/FullPositionVector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FullPositionVector(type):
    """Metaclass of message 'FullPositionVector'."""

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
                'v2x_msg.msg.FullPositionVector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__full_position_vector
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__full_position_vector
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__full_position_vector
            cls._TYPE_SUPPORT = module.type_support_msg__msg__full_position_vector
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__full_position_vector

            from v2x_msg.msg import DDateTime
            if DDateTime.__class__._TYPE_SUPPORT is None:
                DDateTime.__class__.__import_type_support__()

            from v2x_msg.msg import PositionConfidenceSet
            if PositionConfidenceSet.__class__._TYPE_SUPPORT is None:
                PositionConfidenceSet.__class__.__import_type_support__()

            from v2x_msg.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
            if SpeedandHeadingandThrottleConfidence.__class__._TYPE_SUPPORT is None:
                SpeedandHeadingandThrottleConfidence.__class__.__import_type_support__()

            from v2x_msg.msg import TransmissionAndSpeed
            if TransmissionAndSpeed.__class__._TYPE_SUPPORT is None:
                TransmissionAndSpeed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FullPositionVector(metaclass=Metaclass_FullPositionVector):
    """Message class 'FullPositionVector'."""

    __slots__ = [
        '_utctime',
        '_longitude',
        '_lat',
        '_elevation',
        '_heading',
        '_speed',
        '_posaccuracy',
        '_timeconfidence',
        '_posconfidence',
        '_speedconfidence',
    ]

    _fields_and_field_types = {
        'utctime': 'v2x_msg/DDateTime',
        'longitude': 'int64',
        'lat': 'int64',
        'elevation': 'int64',
        'heading': 'int64',
        'speed': 'v2x_msg/TransmissionAndSpeed',
        'posaccuracy': 'v2x_msg/PositionalAccuracy',
        'timeconfidence': 'int64',
        'posconfidence': 'v2x_msg/PositionConfidenceSet',
        'speedconfidence': 'v2x_msg/SpeedandHeadingandThrottleConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'DDateTime'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'TransmissionAndSpeed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PositionConfidenceSet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SpeedandHeadingandThrottleConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import DDateTime
        self.utctime = kwargs.get('utctime', DDateTime())
        self.longitude = kwargs.get('longitude', int())
        self.lat = kwargs.get('lat', int())
        self.elevation = kwargs.get('elevation', int())
        self.heading = kwargs.get('heading', int())
        from v2x_msg.msg import TransmissionAndSpeed
        self.speed = kwargs.get('speed', TransmissionAndSpeed())
        from v2x_msg.msg import PositionalAccuracy
        self.posaccuracy = kwargs.get('posaccuracy', PositionalAccuracy())
        self.timeconfidence = kwargs.get('timeconfidence', int())
        from v2x_msg.msg import PositionConfidenceSet
        self.posconfidence = kwargs.get('posconfidence', PositionConfidenceSet())
        from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
        self.speedconfidence = kwargs.get('speedconfidence', SpeedandHeadingandThrottleConfidence())

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
        if self.utctime != other.utctime:
            return False
        if self.longitude != other.longitude:
            return False
        if self.lat != other.lat:
            return False
        if self.elevation != other.elevation:
            return False
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        if self.posaccuracy != other.posaccuracy:
            return False
        if self.timeconfidence != other.timeconfidence:
            return False
        if self.posconfidence != other.posconfidence:
            return False
        if self.speedconfidence != other.speedconfidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def utctime(self):
        """Message field 'utctime'."""
        return self._utctime

    @utctime.setter
    def utctime(self, value):
        if __debug__:
            from v2x_msg.msg import DDateTime
            assert \
                isinstance(value, DDateTime), \
                "The 'utctime' field must be a sub message of type 'DDateTime'"
        self._utctime = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longitude' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'longitude' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._longitude = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lat' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lat' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lat = value

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elevation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'elevation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._elevation = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'heading' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._heading = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from v2x_msg.msg import TransmissionAndSpeed
            assert \
                isinstance(value, TransmissionAndSpeed), \
                "The 'speed' field must be a sub message of type 'TransmissionAndSpeed'"
        self._speed = value

    @builtins.property
    def posaccuracy(self):
        """Message field 'posaccuracy'."""
        return self._posaccuracy

    @posaccuracy.setter
    def posaccuracy(self, value):
        if __debug__:
            from v2x_msg.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'posaccuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._posaccuracy = value

    @builtins.property
    def timeconfidence(self):
        """Message field 'timeconfidence'."""
        return self._timeconfidence

    @timeconfidence.setter
    def timeconfidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeconfidence' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timeconfidence' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timeconfidence = value

    @builtins.property
    def posconfidence(self):
        """Message field 'posconfidence'."""
        return self._posconfidence

    @posconfidence.setter
    def posconfidence(self, value):
        if __debug__:
            from v2x_msg.msg import PositionConfidenceSet
            assert \
                isinstance(value, PositionConfidenceSet), \
                "The 'posconfidence' field must be a sub message of type 'PositionConfidenceSet'"
        self._posconfidence = value

    @builtins.property
    def speedconfidence(self):
        """Message field 'speedconfidence'."""
        return self._speedconfidence

    @speedconfidence.setter
    def speedconfidence(self, value):
        if __debug__:
            from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
            assert \
                isinstance(value, SpeedandHeadingandThrottleConfidence), \
                "The 'speedconfidence' field must be a sub message of type 'SpeedandHeadingandThrottleConfidence'"
        self._speedconfidence = value
