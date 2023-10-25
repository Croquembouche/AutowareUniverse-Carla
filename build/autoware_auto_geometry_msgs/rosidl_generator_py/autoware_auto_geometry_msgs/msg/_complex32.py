# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_geometry_msgs:msg/Complex32.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Complex32(type):
    """Metaclass of message 'Complex32'."""

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
            module = import_type_support('autoware_auto_geometry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_geometry_msgs.msg.Complex32')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__complex32
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__complex32
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__complex32
            cls._TYPE_SUPPORT = module.type_support_msg__msg__complex32
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__complex32

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REAL__DEFAULT': 1.0,
            'IMAG__DEFAULT': 0.0,
        }

    @property
    def REAL__DEFAULT(cls):
        """Return default value for message field 'real'."""
        return 1.0

    @property
    def IMAG__DEFAULT(cls):
        """Return default value for message field 'imag'."""
        return 0.0


class Complex32(metaclass=Metaclass_Complex32):
    """Message class 'Complex32'."""

    __slots__ = [
        '_real',
        '_imag',
    ]

    _fields_and_field_types = {
        'real': 'float',
        'imag': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.real = kwargs.get(
            'real', Complex32.REAL__DEFAULT)
        self.imag = kwargs.get(
            'imag', Complex32.IMAG__DEFAULT)

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
        if self.real != other.real:
            return False
        if self.imag != other.imag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def real(self):
        """Message field 'real'."""
        return self._real

    @real.setter
    def real(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'real' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'real' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._real = value

    @builtins.property
    def imag(self):
        """Message field 'imag'."""
        return self._imag

    @imag.setter
    def imag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imag' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imag' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imag = value
