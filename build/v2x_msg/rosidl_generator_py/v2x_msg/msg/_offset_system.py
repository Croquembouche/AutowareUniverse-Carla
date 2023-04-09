# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/OffsetSystem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OffsetSystem(type):
    """Metaclass of message 'OffsetSystem'."""

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
                'v2x_msg.msg.OffsetSystem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__offset_system
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__offset_system
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__offset_system
            cls._TYPE_SUPPORT = module.type_support_msg__msg__offset_system
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__offset_system

            from v2x_msg.msg import Offset
            if Offset.__class__._TYPE_SUPPORT is None:
                Offset.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OffsetSystem(metaclass=Metaclass_OffsetSystem):
    """Message class 'OffsetSystem'."""

    __slots__ = [
        '_scale',
        '_offset',
    ]

    _fields_and_field_types = {
        'scale': 'int64',
        'offset': 'v2x_msg/Offset',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Offset'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scale = kwargs.get('scale', int())
        from v2x_msg.msg import Offset
        self.offset = kwargs.get('offset', Offset())

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
        if self.scale != other.scale:
            return False
        if self.offset != other.offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scale' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'scale' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._scale = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            from v2x_msg.msg import Offset
            assert \
                isinstance(value, Offset), \
                "The 'offset' field must be a sub message of type 'Offset'"
        self._offset = value
