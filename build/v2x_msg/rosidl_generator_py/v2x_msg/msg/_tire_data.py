# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/TireData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TireData(type):
    """Metaclass of message 'TireData'."""

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
                'v2x_msg.msg.TireData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tire_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tire_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tire_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tire_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tire_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TireData(metaclass=Metaclass_TireData):
    """Message class 'TireData'."""

    __slots__ = [
        '_location',
        '_pressure',
        '_temp',
        '_wheelsensorstatus',
        '_wheelendelectfault',
        '_leakagerate',
        '_detection',
    ]

    _fields_and_field_types = {
        'location': 'int64',
        'pressure': 'int64',
        'temp': 'int64',
        'wheelsensorstatus': 'int64',
        'wheelendelectfault': 'int64',
        'leakagerate': 'int64',
        'detection': 'int64',
    }

    SLOT_TYPES = (
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
        self.location = kwargs.get('location', int())
        self.pressure = kwargs.get('pressure', int())
        self.temp = kwargs.get('temp', int())
        self.wheelsensorstatus = kwargs.get('wheelsensorstatus', int())
        self.wheelendelectfault = kwargs.get('wheelendelectfault', int())
        self.leakagerate = kwargs.get('leakagerate', int())
        self.detection = kwargs.get('detection', int())

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
        if self.location != other.location:
            return False
        if self.pressure != other.pressure:
            return False
        if self.temp != other.temp:
            return False
        if self.wheelsensorstatus != other.wheelsensorstatus:
            return False
        if self.wheelendelectfault != other.wheelendelectfault:
            return False
        if self.leakagerate != other.leakagerate:
            return False
        if self.detection != other.detection:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'location' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'location' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._location = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pressure' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'pressure' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._pressure = value

    @builtins.property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temp = value

    @builtins.property
    def wheelsensorstatus(self):
        """Message field 'wheelsensorstatus'."""
        return self._wheelsensorstatus

    @wheelsensorstatus.setter
    def wheelsensorstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheelsensorstatus' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'wheelsensorstatus' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._wheelsensorstatus = value

    @builtins.property
    def wheelendelectfault(self):
        """Message field 'wheelendelectfault'."""
        return self._wheelendelectfault

    @wheelendelectfault.setter
    def wheelendelectfault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheelendelectfault' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'wheelendelectfault' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._wheelendelectfault = value

    @builtins.property
    def leakagerate(self):
        """Message field 'leakagerate'."""
        return self._leakagerate

    @leakagerate.setter
    def leakagerate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leakagerate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'leakagerate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._leakagerate = value

    @builtins.property
    def detection(self):
        """Message field 'detection'."""
        return self._detection

    @detection.setter
    def detection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detection' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'detection' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._detection = value
