# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Connection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Connection(type):
    """Metaclass of message 'Connection'."""

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
                'v2x_msg.msg.Connection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection

            from v2x_msg.msg import ConnectingLane
            if ConnectingLane.__class__._TYPE_SUPPORT is None:
                ConnectingLane.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Connection(metaclass=Metaclass_Connection):
    """Message class 'Connection'."""

    __slots__ = [
        '_connectinglane',
        '_remoteintersection',
        '_signalgroup',
        '_userclass',
        '_laneconnectonid',
    ]

    _fields_and_field_types = {
        'connectinglane': 'v2x_msg/ConnectingLane',
        'remoteintersection': 'v2x_msg/IntersectionReferenceID',
        'signalgroup': 'int64',
        'userclass': 'int64',
        'laneconnectonid': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ConnectingLane'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import ConnectingLane
        self.connectinglane = kwargs.get('connectinglane', ConnectingLane())
        from v2x_msg.msg import IntersectionReferenceID
        self.remoteintersection = kwargs.get('remoteintersection', IntersectionReferenceID())
        self.signalgroup = kwargs.get('signalgroup', int())
        self.userclass = kwargs.get('userclass', int())
        self.laneconnectonid = kwargs.get('laneconnectonid', int())

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
        if self.connectinglane != other.connectinglane:
            return False
        if self.remoteintersection != other.remoteintersection:
            return False
        if self.signalgroup != other.signalgroup:
            return False
        if self.userclass != other.userclass:
            return False
        if self.laneconnectonid != other.laneconnectonid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connectinglane(self):
        """Message field 'connectinglane'."""
        return self._connectinglane

    @connectinglane.setter
    def connectinglane(self, value):
        if __debug__:
            from v2x_msg.msg import ConnectingLane
            assert \
                isinstance(value, ConnectingLane), \
                "The 'connectinglane' field must be a sub message of type 'ConnectingLane'"
        self._connectinglane = value

    @builtins.property
    def remoteintersection(self):
        """Message field 'remoteintersection'."""
        return self._remoteintersection

    @remoteintersection.setter
    def remoteintersection(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'remoteintersection' field must be a sub message of type 'IntersectionReferenceID'"
        self._remoteintersection = value

    @builtins.property
    def signalgroup(self):
        """Message field 'signalgroup'."""
        return self._signalgroup

    @signalgroup.setter
    def signalgroup(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signalgroup' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'signalgroup' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._signalgroup = value

    @builtins.property
    def userclass(self):
        """Message field 'userclass'."""
        return self._userclass

    @userclass.setter
    def userclass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'userclass' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'userclass' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._userclass = value

    @builtins.property
    def laneconnectonid(self):
        """Message field 'laneconnectonid'."""
        return self._laneconnectonid

    @laneconnectonid.setter
    def laneconnectonid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laneconnectonid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'laneconnectonid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._laneconnectonid = value
