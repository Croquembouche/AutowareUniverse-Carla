# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/VehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleData(type):
    """Metaclass of message 'VehicleData'."""

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
                'v2x_msg.msg.VehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_data

            from v2x_msg.msg import BumperHeights
            if BumperHeights.__class__._TYPE_SUPPORT is None:
                BumperHeights.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleData(metaclass=Metaclass_VehicleData):
    """Message class 'VehicleData'."""

    __slots__ = [
        '_height',
        '_bumpers',
        '_mass',
        '_trailerweight',
        '_type',
    ]

    _fields_and_field_types = {
        'height': 'int64',
        'bumpers': 'v2x_msg/BumperHeights',
        'mass': 'int64',
        'trailerweight': 'int64',
        'type': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'BumperHeights'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.height = kwargs.get('height', int())
        from v2x_msg.msg import BumperHeights
        self.bumpers = kwargs.get('bumpers', BumperHeights())
        self.mass = kwargs.get('mass', int())
        self.trailerweight = kwargs.get('trailerweight', int())
        self.type = kwargs.get('type', int())

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
        if self.height != other.height:
            return False
        if self.bumpers != other.bumpers:
            return False
        if self.mass != other.mass:
            return False
        if self.trailerweight != other.trailerweight:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'height' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._height = value

    @property
    def bumpers(self):
        """Message field 'bumpers'."""
        return self._bumpers

    @bumpers.setter
    def bumpers(self, value):
        if __debug__:
            from v2x_msg.msg import BumperHeights
            assert \
                isinstance(value, BumperHeights), \
                "The 'bumpers' field must be a sub message of type 'BumperHeights'"
        self._bumpers = value

    @property
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
