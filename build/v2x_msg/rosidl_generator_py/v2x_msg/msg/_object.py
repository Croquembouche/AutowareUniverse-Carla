# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

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
                'v2x_msg.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from v2x_msg.msg import DDateTime
            if DDateTime.__class__._TYPE_SUPPORT is None:
                DDateTime.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_obdist',
        '_obdirect',
        '_datetime',
    ]

    _fields_and_field_types = {
        'obdist': 'int64',
        'obdirect': 'int64',
        'datetime': 'v2x_msg/DDateTime',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'DDateTime'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obdist = kwargs.get('obdist', int())
        self.obdirect = kwargs.get('obdirect', int())
        from v2x_msg.msg import DDateTime
        self.datetime = kwargs.get('datetime', DDateTime())

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
        if self.obdist != other.obdist:
            return False
        if self.obdirect != other.obdirect:
            return False
        if self.datetime != other.datetime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def obdist(self):
        """Message field 'obdist'."""
        return self._obdist

    @obdist.setter
    def obdist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obdist' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'obdist' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._obdist = value

    @property
    def obdirect(self):
        """Message field 'obdirect'."""
        return self._obdirect

    @obdirect.setter
    def obdirect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obdirect' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'obdirect' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._obdirect = value

    @property
    def datetime(self):
        """Message field 'datetime'."""
        return self._datetime

    @datetime.setter
    def datetime(self, value):
        if __debug__:
            from v2x_msg.msg import DDateTime
            assert \
                isinstance(value, DDateTime), \
                "The 'datetime' field must be a sub message of type 'DDateTime'"
        self._datetime = value
