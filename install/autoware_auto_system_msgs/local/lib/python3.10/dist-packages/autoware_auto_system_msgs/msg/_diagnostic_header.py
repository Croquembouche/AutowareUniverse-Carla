# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticHeader(type):
    """Metaclass of message 'DiagnosticHeader'."""

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
            module = import_type_support('autoware_auto_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_system_msgs.msg.DiagnosticHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_header

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DiagnosticHeader(metaclass=Metaclass_DiagnosticHeader):
    """Message class 'DiagnosticHeader'."""

    __slots__ = [
        '_name',
        '_data_stamp',
        '_computation_start',
        '_runtime',
        '_iterations',
    ]

    _fields_and_field_types = {
        'name': 'string<256>',
        'data_stamp': 'builtin_interfaces/Time',
        'computation_start': 'builtin_interfaces/Time',
        'runtime': 'builtin_interfaces/Duration',
        'iterations': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BoundedString(256),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from builtin_interfaces.msg import Time
        self.data_stamp = kwargs.get('data_stamp', Time())
        from builtin_interfaces.msg import Time
        self.computation_start = kwargs.get('computation_start', Time())
        from builtin_interfaces.msg import Duration
        self.runtime = kwargs.get('runtime', Duration())
        self.iterations = kwargs.get('iterations', int())

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
        if self.name != other.name:
            return False
        if self.data_stamp != other.data_stamp:
            return False
        if self.computation_start != other.computation_start:
            return False
        if self.runtime != other.runtime:
            return False
        if self.iterations != other.iterations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 256), \
                "The 'name' field must be string value " \
                'not longer than 256'
        self._name = value

    @builtins.property
    def data_stamp(self):
        """Message field 'data_stamp'."""
        return self._data_stamp

    @data_stamp.setter
    def data_stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'data_stamp' field must be a sub message of type 'Time'"
        self._data_stamp = value

    @builtins.property
    def computation_start(self):
        """Message field 'computation_start'."""
        return self._computation_start

    @computation_start.setter
    def computation_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'computation_start' field must be a sub message of type 'Time'"
        self._computation_start = value

    @builtins.property
    def runtime(self):
        """Message field 'runtime'."""
        return self._runtime

    @runtime.setter
    def runtime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'runtime' field must be a sub message of type 'Duration'"
        self._runtime = value

    @builtins.property
    def iterations(self):
        """Message field 'iterations'."""
        return self._iterations

    @iterations.setter
    def iterations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iterations' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'iterations' field must be an unsigned integer in [0, 4294967295]"
        self._iterations = value
