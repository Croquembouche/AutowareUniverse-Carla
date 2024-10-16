# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/TransitVehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransitVehicleStatus(type):
    """Metaclass of message 'TransitVehicleStatus'."""

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
                'v2x_msg.msg.TransitVehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transit_vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transit_vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transit_vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transit_vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transit_vehicle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransitVehicleStatus(metaclass=Metaclass_TransitVehicleStatus):
    """Message class 'TransitVehicleStatus'."""

    __slots__ = [
        '_loading',
        '_anadause',
        '_abikeload',
        '_dooropen',
        '_charging',
        '_atstopline',
    ]

    _fields_and_field_types = {
        'loading': 'int64',
        'anadause': 'int64',
        'abikeload': 'int64',
        'dooropen': 'int64',
        'charging': 'int64',
        'atstopline': 'int64',
    }

    SLOT_TYPES = (
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
        self.loading = kwargs.get('loading', int())
        self.anadause = kwargs.get('anadause', int())
        self.abikeload = kwargs.get('abikeload', int())
        self.dooropen = kwargs.get('dooropen', int())
        self.charging = kwargs.get('charging', int())
        self.atstopline = kwargs.get('atstopline', int())

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
        if self.loading != other.loading:
            return False
        if self.anadause != other.anadause:
            return False
        if self.abikeload != other.abikeload:
            return False
        if self.dooropen != other.dooropen:
            return False
        if self.charging != other.charging:
            return False
        if self.atstopline != other.atstopline:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def loading(self):
        """Message field 'loading'."""
        return self._loading

    @loading.setter
    def loading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loading' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'loading' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._loading = value

    @builtins.property
    def anadause(self):
        """Message field 'anadause'."""
        return self._anadause

    @anadause.setter
    def anadause(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'anadause' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'anadause' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._anadause = value

    @builtins.property
    def abikeload(self):
        """Message field 'abikeload'."""
        return self._abikeload

    @abikeload.setter
    def abikeload(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abikeload' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'abikeload' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._abikeload = value

    @builtins.property
    def dooropen(self):
        """Message field 'dooropen'."""
        return self._dooropen

    @dooropen.setter
    def dooropen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dooropen' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'dooropen' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._dooropen = value

    @builtins.property
    def charging(self):
        """Message field 'charging'."""
        return self._charging

    @charging.setter
    def charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'charging' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._charging = value

    @builtins.property
    def atstopline(self):
        """Message field 'atstopline'."""
        return self._atstopline

    @atstopline.setter
    def atstopline(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'atstopline' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'atstopline' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._atstopline = value
