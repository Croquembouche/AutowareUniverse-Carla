# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/VehicleClassification.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleClassification(type):
    """Metaclass of message 'VehicleClassification'."""

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
                'v2x_msg.msg.VehicleClassification')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_classification
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_classification
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_classification
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_classification
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_classification

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleClassification(metaclass=Metaclass_VehicleClassification):
    """Message class 'VehicleClassification'."""

    __slots__ = [
        '_keytype',
        '_role',
        '_iso3883',
        '_hpmstype',
        '_vehicletype',
        '_responseequip',
        '_respondertype',
        '_fueltype',
    ]

    _fields_and_field_types = {
        'keytype': 'int64',
        'role': 'int64',
        'iso3883': 'int64',
        'hpmstype': 'int64',
        'vehicletype': 'int64',
        'responseequip': 'int64',
        'respondertype': 'int64',
        'fueltype': 'int64',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.keytype = kwargs.get('keytype', int())
        self.role = kwargs.get('role', int())
        self.iso3883 = kwargs.get('iso3883', int())
        self.hpmstype = kwargs.get('hpmstype', int())
        self.vehicletype = kwargs.get('vehicletype', int())
        self.responseequip = kwargs.get('responseequip', int())
        self.respondertype = kwargs.get('respondertype', int())
        self.fueltype = kwargs.get('fueltype', int())

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
        if self.keytype != other.keytype:
            return False
        if self.role != other.role:
            return False
        if self.iso3883 != other.iso3883:
            return False
        if self.hpmstype != other.hpmstype:
            return False
        if self.vehicletype != other.vehicletype:
            return False
        if self.responseequip != other.responseequip:
            return False
        if self.respondertype != other.respondertype:
            return False
        if self.fueltype != other.fueltype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def keytype(self):
        """Message field 'keytype'."""
        return self._keytype

    @keytype.setter
    def keytype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'keytype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'keytype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._keytype = value

    @builtins.property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'role' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'role' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._role = value

    @builtins.property
    def iso3883(self):
        """Message field 'iso3883'."""
        return self._iso3883

    @iso3883.setter
    def iso3883(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iso3883' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'iso3883' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._iso3883 = value

    @builtins.property
    def hpmstype(self):
        """Message field 'hpmstype'."""
        return self._hpmstype

    @hpmstype.setter
    def hpmstype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hpmstype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'hpmstype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._hpmstype = value

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

    @builtins.property
    def fueltype(self):
        """Message field 'fueltype'."""
        return self._fueltype

    @fueltype.setter
    def fueltype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fueltype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'fueltype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._fueltype = value
