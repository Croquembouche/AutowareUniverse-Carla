# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SignalRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignalRequest(type):
    """Metaclass of message 'SignalRequest'."""

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
                'v2x_msg.msg.SignalRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__signal_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__signal_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__signal_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__signal_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__signal_request

            from v2x_msg.msg import IntersectionAccessPoint
            if IntersectionAccessPoint.__class__._TYPE_SUPPORT is None:
                IntersectionAccessPoint.__class__.__import_type_support__()

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


class SignalRequest(metaclass=Metaclass_SignalRequest):
    """Message class 'SignalRequest'."""

    __slots__ = [
        '_id',
        '_requestid',
        '_requesttype',
        '_inboundlane',
        '_outboundlane',
    ]

    _fields_and_field_types = {
        'id': 'v2x_msg/IntersectionReferenceID',
        'requestid': 'int64',
        'requesttype': 'int64',
        'inboundlane': 'v2x_msg/IntersectionAccessPoint',
        'outboundlane': 'v2x_msg/IntersectionAccessPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionAccessPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionAccessPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import IntersectionReferenceID
        self.id = kwargs.get('id', IntersectionReferenceID())
        self.requestid = kwargs.get('requestid', int())
        self.requesttype = kwargs.get('requesttype', int())
        from v2x_msg.msg import IntersectionAccessPoint
        self.inboundlane = kwargs.get('inboundlane', IntersectionAccessPoint())
        from v2x_msg.msg import IntersectionAccessPoint
        self.outboundlane = kwargs.get('outboundlane', IntersectionAccessPoint())

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
        if self.id != other.id:
            return False
        if self.requestid != other.requestid:
            return False
        if self.requesttype != other.requesttype:
            return False
        if self.inboundlane != other.inboundlane:
            return False
        if self.outboundlane != other.outboundlane:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'id' field must be a sub message of type 'IntersectionReferenceID'"
        self._id = value

    @builtins.property
    def requestid(self):
        """Message field 'requestid'."""
        return self._requestid

    @requestid.setter
    def requestid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'requestid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'requestid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._requestid = value

    @builtins.property
    def requesttype(self):
        """Message field 'requesttype'."""
        return self._requesttype

    @requesttype.setter
    def requesttype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'requesttype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'requesttype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._requesttype = value

    @builtins.property
    def inboundlane(self):
        """Message field 'inboundlane'."""
        return self._inboundlane

    @inboundlane.setter
    def inboundlane(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionAccessPoint
            assert \
                isinstance(value, IntersectionAccessPoint), \
                "The 'inboundlane' field must be a sub message of type 'IntersectionAccessPoint'"
        self._inboundlane = value

    @builtins.property
    def outboundlane(self):
        """Message field 'outboundlane'."""
        return self._outboundlane

    @outboundlane.setter
    def outboundlane(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionAccessPoint
            assert \
                isinstance(value, IntersectionAccessPoint), \
                "The 'outboundlane' field must be a sub message of type 'IntersectionAccessPoint'"
        self._outboundlane = value
