# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HADMapBin(type):
    """Metaclass of message 'HADMapBin'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAP_FORMAT_LANELET2': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_mapping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_mapping_msgs.msg.HADMapBin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__had_map_bin
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__had_map_bin
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__had_map_bin
            cls._TYPE_SUPPORT = module.type_support_msg__msg__had_map_bin
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__had_map_bin

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAP_FORMAT_LANELET2': cls.__constants['MAP_FORMAT_LANELET2'],
            'FORMAT_VERSION__DEFAULT': '',
            'MAP_VERSION__DEFAULT': '',
        }

    @property
    def MAP_FORMAT_LANELET2(self):
        """Message constant 'MAP_FORMAT_LANELET2'."""
        return Metaclass_HADMapBin.__constants['MAP_FORMAT_LANELET2']

    @property
    def FORMAT_VERSION__DEFAULT(cls):
        """Return default value for message field 'format_version'."""
        return ''

    @property
    def MAP_VERSION__DEFAULT(cls):
        """Return default value for message field 'map_version'."""
        return ''


class HADMapBin(metaclass=Metaclass_HADMapBin):
    """
    Message class 'HADMapBin'.

    Constants:
      MAP_FORMAT_LANELET2
    """

    __slots__ = [
        '_header',
        '_map_format',
        '_format_version',
        '_map_version',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'map_format': 'uint8',
        'format_version': 'string',
        'map_version': 'string',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.map_format = kwargs.get('map_format', int())
        self.format_version = kwargs.get(
            'format_version', HADMapBin.FORMAT_VERSION__DEFAULT)
        self.map_version = kwargs.get(
            'map_version', HADMapBin.MAP_VERSION__DEFAULT)
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.header != other.header:
            return False
        if self.map_format != other.map_format:
            return False
        if self.format_version != other.format_version:
            return False
        if self.map_version != other.map_version:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def map_format(self):
        """Message field 'map_format'."""
        return self._map_format

    @map_format.setter
    def map_format(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_format' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_format' field must be an unsigned integer in [0, 255]"
        self._map_format = value

    @builtins.property
    def format_version(self):
        """Message field 'format_version'."""
        return self._format_version

    @format_version.setter
    def format_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'format_version' field must be of type 'str'"
        self._format_version = value

    @builtins.property
    def map_version(self):
        """Message field 'map_version'."""
        return self._map_version

    @map_version.setter
    def map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_version' field must be of type 'str'"
        self._map_version = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
