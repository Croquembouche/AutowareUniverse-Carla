# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/ValidRegion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ValidRegion(type):
    """Metaclass of message 'ValidRegion'."""

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
                'v2x_msg.msg.ValidRegion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__valid_region
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__valid_region
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__valid_region
            cls._TYPE_SUPPORT = module.type_support_msg__msg__valid_region
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__valid_region

            from v2x_msg.msg import Area
            if Area.__class__._TYPE_SUPPORT is None:
                Area.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ValidRegion(metaclass=Metaclass_ValidRegion):
    """Message class 'ValidRegion'."""

    __slots__ = [
        '_direction',
        '_extent',
        '_area',
    ]

    _fields_and_field_types = {
        'direction': 'string',
        'extent': 'int64',
        'area': 'v2x_msg/Area',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Area'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.direction = kwargs.get('direction', str())
        self.extent = kwargs.get('extent', int())
        from v2x_msg.msg import Area
        self.area = kwargs.get('area', Area())

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
        if self.direction != other.direction:
            return False
        if self.extent != other.extent:
            return False
        if self.area != other.area:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value

    @property
    def extent(self):
        """Message field 'extent'."""
        return self._extent

    @extent.setter
    def extent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extent' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'extent' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._extent = value

    @property
    def area(self):
        """Message field 'area'."""
        return self._area

    @area.setter
    def area(self, value):
        if __debug__:
            from v2x_msg.msg import Area
            assert \
                isinstance(value, Area), \
                "The 'area' field must be a sub message of type 'Area'"
        self._area = value
