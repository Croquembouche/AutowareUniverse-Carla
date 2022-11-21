# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RequestorPositionVector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestorPositionVector(type):
    """Metaclass of message 'RequestorPositionVector'."""

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
                'v2x_msg.msg.RequestorPositionVector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__requestor_position_vector
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__requestor_position_vector
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__requestor_position_vector
            cls._TYPE_SUPPORT = module.type_support_msg__msg__requestor_position_vector
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__requestor_position_vector

            from v2x_msg.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

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


class RequestorPositionVector(metaclass=Metaclass_RequestorPositionVector):
    """Message class 'RequestorPositionVector'."""

    __slots__ = [
        '_position',
        '_heading',
        '_speed',
    ]

    _fields_and_field_types = {
        'position': 'v2x_msg/Position3D',
        'heading': 'int64',
        'speed': 'v2x_msg/TransmissionAndSpeed',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'TransmissionAndSpeed'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import Position3D
        self.position = kwargs.get('position', Position3D())
        self.heading = kwargs.get('heading', int())
        from v2x_msg.msg import TransmissionAndSpeed
        self.speed = kwargs.get('speed', TransmissionAndSpeed())

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
        if self.position != other.position:
            return False
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from v2x_msg.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'position' field must be a sub message of type 'Position3D'"
        self._position = value

    @property
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

    @property
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
