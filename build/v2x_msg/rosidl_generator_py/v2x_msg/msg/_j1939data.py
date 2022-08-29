# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/J1939data.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J1939data(type):
    """Metaclass of message 'J1939data'."""

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
                'v2x_msg.msg.J1939data')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j1939data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j1939data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j1939data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j1939data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j1939data

            from v2x_msg.msg import AxleWeight
            if AxleWeight.__class__._TYPE_SUPPORT is None:
                AxleWeight.__class__.__import_type_support__()

            from v2x_msg.msg import TireData
            if TireData.__class__._TYPE_SUPPORT is None:
                TireData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class J1939data(metaclass=Metaclass_J1939data):
    """Message class 'J1939data'."""

    __slots__ = [
        '_tires',
        '_axles',
        '_trailerweight',
        '_cargoweight',
        '_steeringaxletemperture',
        '_driveaxlelocation',
        '_driveaxleliftairpressure',
        '_driveaxletemperature',
        '_driveaxlelubpressure',
        '_steeringaxlelubepressure',
    ]

    _fields_and_field_types = {
        'tires': 'sequence<v2x_msg/TireData>',
        'axles': 'sequence<v2x_msg/AxleWeight>',
        'trailerweight': 'int64',
        'cargoweight': 'int64',
        'steeringaxletemperture': 'int64',
        'driveaxlelocation': 'int64',
        'driveaxleliftairpressure': 'int64',
        'driveaxletemperature': 'int64',
        'driveaxlelubpressure': 'int64',
        'steeringaxlelubepressure': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'TireData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AxleWeight')),  # noqa: E501
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
        self.tires = kwargs.get('tires', [])
        self.axles = kwargs.get('axles', [])
        self.trailerweight = kwargs.get('trailerweight', int())
        self.cargoweight = kwargs.get('cargoweight', int())
        self.steeringaxletemperture = kwargs.get('steeringaxletemperture', int())
        self.driveaxlelocation = kwargs.get('driveaxlelocation', int())
        self.driveaxleliftairpressure = kwargs.get('driveaxleliftairpressure', int())
        self.driveaxletemperature = kwargs.get('driveaxletemperature', int())
        self.driveaxlelubpressure = kwargs.get('driveaxlelubpressure', int())
        self.steeringaxlelubepressure = kwargs.get('steeringaxlelubepressure', int())

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
        if self.tires != other.tires:
            return False
        if self.axles != other.axles:
            return False
        if self.trailerweight != other.trailerweight:
            return False
        if self.cargoweight != other.cargoweight:
            return False
        if self.steeringaxletemperture != other.steeringaxletemperture:
            return False
        if self.driveaxlelocation != other.driveaxlelocation:
            return False
        if self.driveaxleliftairpressure != other.driveaxleliftairpressure:
            return False
        if self.driveaxletemperature != other.driveaxletemperature:
            return False
        if self.driveaxlelubpressure != other.driveaxlelubpressure:
            return False
        if self.steeringaxlelubepressure != other.steeringaxlelubepressure:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tires(self):
        """Message field 'tires'."""
        return self._tires

    @tires.setter
    def tires(self, value):
        if __debug__:
            from v2x_msg.msg import TireData
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TireData) for v in value) and
                 True), \
                "The 'tires' field must be a set or sequence and each value of type 'TireData'"
        self._tires = value

    @property
    def axles(self):
        """Message field 'axles'."""
        return self._axles

    @axles.setter
    def axles(self, value):
        if __debug__:
            from v2x_msg.msg import AxleWeight
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, AxleWeight) for v in value) and
                 True), \
                "The 'axles' field must be a set or sequence and each value of type 'AxleWeight'"
        self._axles = value

    @property
    def trailerweight(self):
        """Message field 'trailerweight'."""
        return self._trailerweight

    @trailerweight.setter
    def trailerweight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trailerweight' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'trailerweight' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._trailerweight = value

    @property
    def cargoweight(self):
        """Message field 'cargoweight'."""
        return self._cargoweight

    @cargoweight.setter
    def cargoweight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cargoweight' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'cargoweight' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._cargoweight = value

    @property
    def steeringaxletemperture(self):
        """Message field 'steeringaxletemperture'."""
        return self._steeringaxletemperture

    @steeringaxletemperture.setter
    def steeringaxletemperture(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringaxletemperture' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'steeringaxletemperture' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._steeringaxletemperture = value

    @property
    def driveaxlelocation(self):
        """Message field 'driveaxlelocation'."""
        return self._driveaxlelocation

    @driveaxlelocation.setter
    def driveaxlelocation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driveaxlelocation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'driveaxlelocation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._driveaxlelocation = value

    @property
    def driveaxleliftairpressure(self):
        """Message field 'driveaxleliftairpressure'."""
        return self._driveaxleliftairpressure

    @driveaxleliftairpressure.setter
    def driveaxleliftairpressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driveaxleliftairpressure' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'driveaxleliftairpressure' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._driveaxleliftairpressure = value

    @property
    def driveaxletemperature(self):
        """Message field 'driveaxletemperature'."""
        return self._driveaxletemperature

    @driveaxletemperature.setter
    def driveaxletemperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driveaxletemperature' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'driveaxletemperature' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._driveaxletemperature = value

    @property
    def driveaxlelubpressure(self):
        """Message field 'driveaxlelubpressure'."""
        return self._driveaxlelubpressure

    @driveaxlelubpressure.setter
    def driveaxlelubpressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driveaxlelubpressure' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'driveaxlelubpressure' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._driveaxlelubpressure = value

    @property
    def steeringaxlelubepressure(self):
        """Message field 'steeringaxlelubepressure'."""
        return self._steeringaxlelubepressure

    @steeringaxlelubepressure.setter
    def steeringaxlelubepressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringaxlelubepressure' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'steeringaxlelubepressure' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._steeringaxlelubepressure = value
