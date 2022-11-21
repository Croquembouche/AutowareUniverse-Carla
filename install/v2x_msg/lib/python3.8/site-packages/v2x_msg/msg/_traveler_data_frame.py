# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/TravelerDataFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TravelerDataFrame(type):
    """Metaclass of message 'TravelerDataFrame'."""

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
                'v2x_msg.msg.TravelerDataFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traveler_data_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traveler_data_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traveler_data_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traveler_data_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traveler_data_frame

            from v2x_msg.msg import Content
            if Content.__class__._TYPE_SUPPORT is None:
                Content.__class__.__import_type_support__()

            from v2x_msg.msg import GeographicalPath
            if GeographicalPath.__class__._TYPE_SUPPORT is None:
                GeographicalPath.__class__.__import_type_support__()

            from v2x_msg.msg import MsgID
            if MsgID.__class__._TYPE_SUPPORT is None:
                MsgID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TravelerDataFrame(metaclass=Metaclass_TravelerDataFrame):
    """Message class 'TravelerDataFrame'."""

    __slots__ = [
        '_notused',
        '_frametype',
        '_msgid',
        '_startyear',
        '_starttime',
        '_durationtime',
        '_priority',
        '_notused1',
        '_regions',
        '_notused2',
        '_notused3',
        '_content',
        '_url',
    ]

    _fields_and_field_types = {
        'notused': 'int64',
        'frametype': 'int64',
        'msgid': 'v2x_msg/MsgID',
        'startyear': 'int64',
        'starttime': 'int64',
        'durationtime': 'int64',
        'priority': 'int64',
        'notused1': 'int64',
        'regions': 'sequence<v2x_msg/GeographicalPath>',
        'notused2': 'int64',
        'notused3': 'int64',
        'content': 'v2x_msg/Content',
        'url': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'MsgID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'GeographicalPath')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Content'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.notused = kwargs.get('notused', int())
        self.frametype = kwargs.get('frametype', int())
        from v2x_msg.msg import MsgID
        self.msgid = kwargs.get('msgid', MsgID())
        self.startyear = kwargs.get('startyear', int())
        self.starttime = kwargs.get('starttime', int())
        self.durationtime = kwargs.get('durationtime', int())
        self.priority = kwargs.get('priority', int())
        self.notused1 = kwargs.get('notused1', int())
        self.regions = kwargs.get('regions', [])
        self.notused2 = kwargs.get('notused2', int())
        self.notused3 = kwargs.get('notused3', int())
        from v2x_msg.msg import Content
        self.content = kwargs.get('content', Content())
        self.url = kwargs.get('url', str())

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
        if self.notused != other.notused:
            return False
        if self.frametype != other.frametype:
            return False
        if self.msgid != other.msgid:
            return False
        if self.startyear != other.startyear:
            return False
        if self.starttime != other.starttime:
            return False
        if self.durationtime != other.durationtime:
            return False
        if self.priority != other.priority:
            return False
        if self.notused1 != other.notused1:
            return False
        if self.regions != other.regions:
            return False
        if self.notused2 != other.notused2:
            return False
        if self.notused3 != other.notused3:
            return False
        if self.content != other.content:
            return False
        if self.url != other.url:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def notused(self):
        """Message field 'notused'."""
        return self._notused

    @notused.setter
    def notused(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notused' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'notused' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._notused = value

    @property
    def frametype(self):
        """Message field 'frametype'."""
        return self._frametype

    @frametype.setter
    def frametype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frametype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'frametype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._frametype = value

    @property
    def msgid(self):
        """Message field 'msgid'."""
        return self._msgid

    @msgid.setter
    def msgid(self, value):
        if __debug__:
            from v2x_msg.msg import MsgID
            assert \
                isinstance(value, MsgID), \
                "The 'msgid' field must be a sub message of type 'MsgID'"
        self._msgid = value

    @property
    def startyear(self):
        """Message field 'startyear'."""
        return self._startyear

    @startyear.setter
    def startyear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'startyear' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'startyear' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._startyear = value

    @property
    def starttime(self):
        """Message field 'starttime'."""
        return self._starttime

    @starttime.setter
    def starttime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'starttime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'starttime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._starttime = value

    @property
    def durationtime(self):
        """Message field 'durationtime'."""
        return self._durationtime

    @durationtime.setter
    def durationtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'durationtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'durationtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._durationtime = value

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'priority' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._priority = value

    @property
    def notused1(self):
        """Message field 'notused1'."""
        return self._notused1

    @notused1.setter
    def notused1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notused1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'notused1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._notused1 = value

    @property
    def regions(self):
        """Message field 'regions'."""
        return self._regions

    @regions.setter
    def regions(self, value):
        if __debug__:
            from v2x_msg.msg import GeographicalPath
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
                 all(isinstance(v, GeographicalPath) for v in value) and
                 True), \
                "The 'regions' field must be a set or sequence and each value of type 'GeographicalPath'"
        self._regions = value

    @property
    def notused2(self):
        """Message field 'notused2'."""
        return self._notused2

    @notused2.setter
    def notused2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notused2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'notused2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._notused2 = value

    @property
    def notused3(self):
        """Message field 'notused3'."""
        return self._notused3

    @notused3.setter
    def notused3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notused3' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'notused3' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._notused3 = value

    @property
    def content(self):
        """Message field 'content'."""
        return self._content

    @content.setter
    def content(self, value):
        if __debug__:
            from v2x_msg.msg import Content
            assert \
                isinstance(value, Content), \
                "The 'content' field must be a sub message of type 'Content'"
        self._content = value

    @property
    def url(self):
        """Message field 'url'."""
        return self._url

    @url.setter
    def url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'url' field must be of type 'str'"
        self._url = value
