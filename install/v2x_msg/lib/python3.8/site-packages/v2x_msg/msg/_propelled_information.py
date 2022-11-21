# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PropelledInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PropelledInformation(type):
    """Metaclass of message 'PropelledInformation'."""

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
                'v2x_msg.msg.PropelledInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__propelled_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__propelled_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__propelled_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__propelled_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__propelled_information

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PropelledInformation(metaclass=Metaclass_PropelledInformation):
    """Message class 'PropelledInformation'."""

    __slots__ = [
        '_human',
        '_animal',
        '_motor',
    ]

    _fields_and_field_types = {
        'human': 'int64',
        'animal': 'int64',
        'motor': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.human = kwargs.get('human', int())
        self.animal = kwargs.get('animal', int())
        self.motor = kwargs.get('motor', int())

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
        if self.human != other.human:
            return False
        if self.animal != other.animal:
            return False
        if self.motor != other.motor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def human(self):
        """Message field 'human'."""
        return self._human

    @human.setter
    def human(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'human' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'human' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._human = value

    @property
    def animal(self):
        """Message field 'animal'."""
        return self._animal

    @animal.setter
    def animal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'animal' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'animal' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._animal = value

    @property
    def motor(self):
        """Message field 'motor'."""
        return self._motor

    @motor.setter
    def motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'motor' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._motor = value
