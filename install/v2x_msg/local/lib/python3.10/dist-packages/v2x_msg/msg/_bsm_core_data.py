# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/BSMCoreData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSMCoreData(type):
    """Metaclass of message 'BSMCoreData'."""

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
                'v2x_msg.msg.BSMCoreData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm_core_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm_core_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm_core_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm_core_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm_core_data

            from v2x_msg.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from v2x_msg.msg import BrakeSystemStatus
            if BrakeSystemStatus.__class__._TYPE_SUPPORT is None:
                BrakeSystemStatus.__class__.__import_type_support__()

            from v2x_msg.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleSize
            if VehicleSize.__class__._TYPE_SUPPORT is None:
                VehicleSize.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BSMCoreData(metaclass=Metaclass_BSMCoreData):
    """Message class 'BSMCoreData'."""

    __slots__ = [
        '_msgcnt',
        '_id',
        '_secmark',
        '_lat',
        '_longitude',
        '_elev',
        '_accuracy',
        '_transmission',
        '_speed',
        '_heading',
        '_angle',
        '_accelset',
        '_brakes',
        '_size',
    ]

    _fields_and_field_types = {
        'msgcnt': 'int64',
        'id': 'string',
        'secmark': 'int64',
        'lat': 'int64',
        'longitude': 'int64',
        'elev': 'int64',
        'accuracy': 'v2x_msg/PositionalAccuracy',
        'transmission': 'int64',
        'speed': 'int64',
        'heading': 'int64',
        'angle': 'int64',
        'accelset': 'v2x_msg/AccelerationSet4Way',
        'brakes': 'v2x_msg/BrakeSystemStatus',
        'size': 'v2x_msg/VehicleSize',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'BrakeSystemStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleSize'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgcnt = kwargs.get('msgcnt', int())
        self.id = kwargs.get('id', str())
        self.secmark = kwargs.get('secmark', int())
        self.lat = kwargs.get('lat', int())
        self.longitude = kwargs.get('longitude', int())
        self.elev = kwargs.get('elev', int())
        from v2x_msg.msg import PositionalAccuracy
        self.accuracy = kwargs.get('accuracy', PositionalAccuracy())
        self.transmission = kwargs.get('transmission', int())
        self.speed = kwargs.get('speed', int())
        self.heading = kwargs.get('heading', int())
        self.angle = kwargs.get('angle', int())
        from v2x_msg.msg import AccelerationSet4Way
        self.accelset = kwargs.get('accelset', AccelerationSet4Way())
        from v2x_msg.msg import BrakeSystemStatus
        self.brakes = kwargs.get('brakes', BrakeSystemStatus())
        from v2x_msg.msg import VehicleSize
        self.size = kwargs.get('size', VehicleSize())

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
        if self.msgcnt != other.msgcnt:
            return False
        if self.id != other.id:
            return False
        if self.secmark != other.secmark:
            return False
        if self.lat != other.lat:
            return False
        if self.longitude != other.longitude:
            return False
        if self.elev != other.elev:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.transmission != other.transmission:
            return False
        if self.speed != other.speed:
            return False
        if self.heading != other.heading:
            return False
        if self.angle != other.angle:
            return False
        if self.accelset != other.accelset:
            return False
        if self.brakes != other.brakes:
            return False
        if self.size != other.size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgcnt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgcnt = value

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
    def secmark(self):
        """Message field 'secmark'."""
        return self._secmark

    @secmark.setter
    def secmark(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'secmark' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'secmark' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._secmark = value

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
    def elev(self):
        """Message field 'elev'."""
        return self._elev

    @elev.setter
    def elev(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elev' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'elev' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._elev = value

    @builtins.property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            from v2x_msg.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._accuracy = value

    @builtins.property
    def transmission(self):
        """Message field 'transmission'."""
        return self._transmission

    @transmission.setter
    def transmission(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transmission' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'transmission' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._transmission = value

    @builtins.property
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
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._angle = value

    @builtins.property
    def accelset(self):
        """Message field 'accelset'."""
        return self._accelset

    @accelset.setter
    def accelset(self, value):
        if __debug__:
            from v2x_msg.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'accelset' field must be a sub message of type 'AccelerationSet4Way'"
        self._accelset = value

    @builtins.property
    def brakes(self):
        """Message field 'brakes'."""
        return self._brakes

    @brakes.setter
    def brakes(self, value):
        if __debug__:
            from v2x_msg.msg import BrakeSystemStatus
            assert \
                isinstance(value, BrakeSystemStatus), \
                "The 'brakes' field must be a sub message of type 'BrakeSystemStatus'"
        self._brakes = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleSize
            assert \
                isinstance(value, VehicleSize), \
                "The 'size' field must be a sub message of type 'VehicleSize'"
        self._size = value
