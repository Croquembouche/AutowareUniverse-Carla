# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PathHistory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathHistory(type):
    """Metaclass of message 'PathHistory'."""

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
                'v2x_msg.msg.PathHistory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_history
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_history
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_history
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_history
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_history

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import PathHistoryPoint
            if PathHistoryPoint.__class__._TYPE_SUPPORT is None:
                PathHistoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathHistory(metaclass=Metaclass_PathHistory):
    """Message class 'PathHistory'."""

    __slots__ = [
        '_initialposition',
        '_currgnssstatus',
        '_crumbdata',
    ]

    _fields_and_field_types = {
        'initialposition': 'v2x_msg/FullPositionVector',
        'currgnssstatus': 'string',
        'crumbdata': 'sequence<v2x_msg/PathHistoryPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathHistoryPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import FullPositionVector
        self.initialposition = kwargs.get('initialposition', FullPositionVector())
        self.currgnssstatus = kwargs.get('currgnssstatus', str())
        self.crumbdata = kwargs.get('crumbdata', [])

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
        if self.initialposition != other.initialposition:
            return False
        if self.currgnssstatus != other.currgnssstatus:
            return False
        if self.crumbdata != other.crumbdata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def initialposition(self):
        """Message field 'initialposition'."""
        return self._initialposition

    @initialposition.setter
    def initialposition(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'initialposition' field must be a sub message of type 'FullPositionVector'"
        self._initialposition = value

    @property
    def currgnssstatus(self):
        """Message field 'currgnssstatus'."""
        return self._currgnssstatus

    @currgnssstatus.setter
    def currgnssstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'currgnssstatus' field must be of type 'str'"
        self._currgnssstatus = value

    @property
    def crumbdata(self):
        """Message field 'crumbdata'."""
        return self._crumbdata

    @crumbdata.setter
    def crumbdata(self, value):
        if __debug__:
            from v2x_msg.msg import PathHistoryPoint
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
                 all(isinstance(v, PathHistoryPoint) for v in value) and
                 True), \
                "The 'crumbdata' field must be a set or sequence and each value of type 'PathHistoryPoint'"
        self._crumbdata = value
