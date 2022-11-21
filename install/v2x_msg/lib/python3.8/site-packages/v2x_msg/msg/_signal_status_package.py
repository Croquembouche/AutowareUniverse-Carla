# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SignalStatusPackage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignalStatusPackage(type):
    """Metaclass of message 'SignalStatusPackage'."""

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
                'v2x_msg.msg.SignalStatusPackage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__signal_status_package
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__signal_status_package
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__signal_status_package
            cls._TYPE_SUPPORT = module.type_support_msg__msg__signal_status_package
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__signal_status_package

            from v2x_msg.msg import IntersectionAccessPoint
            if IntersectionAccessPoint.__class__._TYPE_SUPPORT is None:
                IntersectionAccessPoint.__class__.__import_type_support__()

            from v2x_msg.msg import SignalRequesterInfo
            if SignalRequesterInfo.__class__._TYPE_SUPPORT is None:
                SignalRequesterInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SignalStatusPackage(metaclass=Metaclass_SignalStatusPackage):
    """Message class 'SignalStatusPackage'."""

    __slots__ = [
        '_requester',
        '_inboundon',
        '_outboundon',
        '_minute',
        '_second',
        '_duration',
        '_status',
    ]

    _fields_and_field_types = {
        'requester': 'v2x_msg/SignalRequesterInfo',
        'inboundon': 'v2x_msg/IntersectionAccessPoint',
        'outboundon': 'v2x_msg/IntersectionAccessPoint',
        'minute': 'int64',
        'second': 'int64',
        'duration': 'int64',
        'status': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SignalRequesterInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionAccessPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionAccessPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import SignalRequesterInfo
        self.requester = kwargs.get('requester', SignalRequesterInfo())
        from v2x_msg.msg import IntersectionAccessPoint
        self.inboundon = kwargs.get('inboundon', IntersectionAccessPoint())
        from v2x_msg.msg import IntersectionAccessPoint
        self.outboundon = kwargs.get('outboundon', IntersectionAccessPoint())
        self.minute = kwargs.get('minute', int())
        self.second = kwargs.get('second', int())
        self.duration = kwargs.get('duration', int())
        self.status = kwargs.get('status', int())

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
        if self.requester != other.requester:
            return False
        if self.inboundon != other.inboundon:
            return False
        if self.outboundon != other.outboundon:
            return False
        if self.minute != other.minute:
            return False
        if self.second != other.second:
            return False
        if self.duration != other.duration:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def requester(self):
        """Message field 'requester'."""
        return self._requester

    @requester.setter
    def requester(self, value):
        if __debug__:
            from v2x_msg.msg import SignalRequesterInfo
            assert \
                isinstance(value, SignalRequesterInfo), \
                "The 'requester' field must be a sub message of type 'SignalRequesterInfo'"
        self._requester = value

    @property
    def inboundon(self):
        """Message field 'inboundon'."""
        return self._inboundon

    @inboundon.setter
    def inboundon(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionAccessPoint
            assert \
                isinstance(value, IntersectionAccessPoint), \
                "The 'inboundon' field must be a sub message of type 'IntersectionAccessPoint'"
        self._inboundon = value

    @property
    def outboundon(self):
        """Message field 'outboundon'."""
        return self._outboundon

    @outboundon.setter
    def outboundon(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionAccessPoint
            assert \
                isinstance(value, IntersectionAccessPoint), \
                "The 'outboundon' field must be a sub message of type 'IntersectionAccessPoint'"
        self._outboundon = value

    @property
    def minute(self):
        """Message field 'minute'."""
        return self._minute

    @minute.setter
    def minute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minute' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'minute' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._minute = value

    @property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'second' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._second = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'status' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._status = value
