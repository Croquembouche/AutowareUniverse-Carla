# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Content.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Content(type):
    """Metaclass of message 'Content'."""

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
                'v2x_msg.msg.Content')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__content
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__content
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__content
            cls._TYPE_SUPPORT = module.type_support_msg__msg__content
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__content

            from v2x_msg.msg import ExitService
            if ExitService.__class__._TYPE_SUPPORT is None:
                ExitService.__class__.__import_type_support__()

            from v2x_msg.msg import GenericSignage
            if GenericSignage.__class__._TYPE_SUPPORT is None:
                GenericSignage.__class__.__import_type_support__()

            from v2x_msg.msg import ITISSpeedLimit
            if ITISSpeedLimit.__class__._TYPE_SUPPORT is None:
                ITISSpeedLimit.__class__.__import_type_support__()

            from v2x_msg.msg import ITIScodesandtext
            if ITIScodesandtext.__class__._TYPE_SUPPORT is None:
                ITIScodesandtext.__class__.__import_type_support__()

            from v2x_msg.msg import WorkZone
            if WorkZone.__class__._TYPE_SUPPORT is None:
                WorkZone.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Content(metaclass=Metaclass_Content):
    """Message class 'Content'."""

    __slots__ = [
        '_advisory',
        '_workzone',
        '_genericsign',
        '_speedlimit',
        '_exitservice',
    ]

    _fields_and_field_types = {
        'advisory': 'sequence<v2x_msg/ITIScodesandtext>',
        'workzone': 'sequence<v2x_msg/WorkZone>',
        'genericsign': 'sequence<v2x_msg/GenericSignage>',
        'speedlimit': 'sequence<v2x_msg/ITISSpeedLimit>',
        'exitservice': 'sequence<v2x_msg/ExitService>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ITIScodesandtext')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'WorkZone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'GenericSignage')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ITISSpeedLimit')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ExitService')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.advisory = kwargs.get('advisory', [])
        self.workzone = kwargs.get('workzone', [])
        self.genericsign = kwargs.get('genericsign', [])
        self.speedlimit = kwargs.get('speedlimit', [])
        self.exitservice = kwargs.get('exitservice', [])

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
        if self.advisory != other.advisory:
            return False
        if self.workzone != other.workzone:
            return False
        if self.genericsign != other.genericsign:
            return False
        if self.speedlimit != other.speedlimit:
            return False
        if self.exitservice != other.exitservice:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def advisory(self):
        """Message field 'advisory'."""
        return self._advisory

    @advisory.setter
    def advisory(self, value):
        if __debug__:
            from v2x_msg.msg import ITIScodesandtext
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
                 all(isinstance(v, ITIScodesandtext) for v in value) and
                 True), \
                "The 'advisory' field must be a set or sequence and each value of type 'ITIScodesandtext'"
        self._advisory = value

    @builtins.property
    def workzone(self):
        """Message field 'workzone'."""
        return self._workzone

    @workzone.setter
    def workzone(self, value):
        if __debug__:
            from v2x_msg.msg import WorkZone
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
                 all(isinstance(v, WorkZone) for v in value) and
                 True), \
                "The 'workzone' field must be a set or sequence and each value of type 'WorkZone'"
        self._workzone = value

    @builtins.property
    def genericsign(self):
        """Message field 'genericsign'."""
        return self._genericsign

    @genericsign.setter
    def genericsign(self, value):
        if __debug__:
            from v2x_msg.msg import GenericSignage
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
                 all(isinstance(v, GenericSignage) for v in value) and
                 True), \
                "The 'genericsign' field must be a set or sequence and each value of type 'GenericSignage'"
        self._genericsign = value

    @builtins.property
    def speedlimit(self):
        """Message field 'speedlimit'."""
        return self._speedlimit

    @speedlimit.setter
    def speedlimit(self, value):
        if __debug__:
            from v2x_msg.msg import ITISSpeedLimit
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
                 all(isinstance(v, ITISSpeedLimit) for v in value) and
                 True), \
                "The 'speedlimit' field must be a set or sequence and each value of type 'ITISSpeedLimit'"
        self._speedlimit = value

    @builtins.property
    def exitservice(self):
        """Message field 'exitservice'."""
        return self._exitservice

    @exitservice.setter
    def exitservice(self, value):
        if __debug__:
            from v2x_msg.msg import ExitService
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
                 all(isinstance(v, ExitService) for v in value) and
                 True), \
                "The 'exitservice' field must be a set or sequence and each value of type 'ExitService'"
        self._exitservice = value
