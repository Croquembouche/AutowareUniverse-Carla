# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/ICA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ICA(type):
    """Metaclass of message 'ICA'."""

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
                'v2x_msg.msg.ICA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ica
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ica
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ica
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ica
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ica

            from v2x_msg.msg import ApproachOrLane
            if ApproachOrLane.__class__._TYPE_SUPPORT is None:
                ApproachOrLane.__class__.__import_type_support__()

            from v2x_msg.msg import BSMCoreData
            if BSMCoreData.__class__._TYPE_SUPPORT is None:
                BSMCoreData.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from v2x_msg.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from v2x_msg.msg import PathPrediction
            if PathPrediction.__class__._TYPE_SUPPORT is None:
                PathPrediction.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ICA(metaclass=Metaclass_ICA):
    """Message class 'ICA'."""

    __slots__ = [
        '_msgcnt',
        '_id',
        '_timestamp',
        '_partone',
        '_path',
        '_pathprediction',
        '_intersectionid',
        '_lanenumber',
        '_eventflag',
    ]

    _fields_and_field_types = {
        'msgcnt': 'int64',
        'id': 'string',
        'timestamp': 'int64',
        'partone': 'v2x_msg/BSMCoreData',
        'path': 'v2x_msg/PathHistory',
        'pathprediction': 'v2x_msg/PathPrediction',
        'intersectionid': 'v2x_msg/IntersectionReferenceID',
        'lanenumber': 'v2x_msg/ApproachOrLane',
        'eventflag': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'BSMCoreData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathHistory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathPrediction'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ApproachOrLane'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgcnt = kwargs.get('msgcnt', int())
        self.id = kwargs.get('id', str())
        self.timestamp = kwargs.get('timestamp', int())
        from v2x_msg.msg import BSMCoreData
        self.partone = kwargs.get('partone', BSMCoreData())
        from v2x_msg.msg import PathHistory
        self.path = kwargs.get('path', PathHistory())
        from v2x_msg.msg import PathPrediction
        self.pathprediction = kwargs.get('pathprediction', PathPrediction())
        from v2x_msg.msg import IntersectionReferenceID
        self.intersectionid = kwargs.get('intersectionid', IntersectionReferenceID())
        from v2x_msg.msg import ApproachOrLane
        self.lanenumber = kwargs.get('lanenumber', ApproachOrLane())
        self.eventflag = kwargs.get('eventflag', str())

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
        if self.msgcnt != other.msgcnt:
            return False
        if self.id != other.id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.partone != other.partone:
            return False
        if self.path != other.path:
            return False
        if self.pathprediction != other.pathprediction:
            return False
        if self.intersectionid != other.intersectionid:
            return False
        if self.lanenumber != other.lanenumber:
            return False
        if self.eventflag != other.eventflag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgcnt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgcnt = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def partone(self):
        """Message field 'partone'."""
        return self._partone

    @partone.setter
    def partone(self, value):
        if __debug__:
            from v2x_msg.msg import BSMCoreData
            assert \
                isinstance(value, BSMCoreData), \
                "The 'partone' field must be a sub message of type 'BSMCoreData'"
        self._partone = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from v2x_msg.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'path' field must be a sub message of type 'PathHistory'"
        self._path = value

    @builtins.property
    def pathprediction(self):
        """Message field 'pathprediction'."""
        return self._pathprediction

    @pathprediction.setter
    def pathprediction(self, value):
        if __debug__:
            from v2x_msg.msg import PathPrediction
            assert \
                isinstance(value, PathPrediction), \
                "The 'pathprediction' field must be a sub message of type 'PathPrediction'"
        self._pathprediction = value

    @builtins.property
    def intersectionid(self):
        """Message field 'intersectionid'."""
        return self._intersectionid

    @intersectionid.setter
    def intersectionid(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'intersectionid' field must be a sub message of type 'IntersectionReferenceID'"
        self._intersectionid = value

    @builtins.property
    def lanenumber(self):
        """Message field 'lanenumber'."""
        return self._lanenumber

    @lanenumber.setter
    def lanenumber(self, value):
        if __debug__:
            from v2x_msg.msg import ApproachOrLane
            assert \
                isinstance(value, ApproachOrLane), \
                "The 'lanenumber' field must be a sub message of type 'ApproachOrLane'"
        self._lanenumber = value

    @builtins.property
    def eventflag(self):
        """Message field 'eventflag'."""
        return self._eventflag

    @eventflag.setter
    def eventflag(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eventflag' field must be of type 'str'"
        self._eventflag = value
