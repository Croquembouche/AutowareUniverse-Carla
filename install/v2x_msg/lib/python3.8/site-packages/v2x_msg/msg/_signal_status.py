# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SignalStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignalStatus(type):
    """Metaclass of message 'SignalStatus'."""

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
                'v2x_msg.msg.SignalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__signal_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__signal_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__signal_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__signal_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__signal_status

            from v2x_msg.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from v2x_msg.msg import SignalStatusPackage
            if SignalStatusPackage.__class__._TYPE_SUPPORT is None:
                SignalStatusPackage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SignalStatus(metaclass=Metaclass_SignalStatus):
    """Message class 'SignalStatus'."""

    __slots__ = [
        '_sequencenumber',
        '_id',
        '_sigstatus',
    ]

    _fields_and_field_types = {
        'sequencenumber': 'int64',
        'id': 'v2x_msg/IntersectionReferenceID',
        'sigstatus': 'sequence<v2x_msg/SignalStatusPackage>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SignalStatusPackage')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sequencenumber = kwargs.get('sequencenumber', int())
        from v2x_msg.msg import IntersectionReferenceID
        self.id = kwargs.get('id', IntersectionReferenceID())
        self.sigstatus = kwargs.get('sigstatus', [])

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
        if self.sequencenumber != other.sequencenumber:
            return False
        if self.id != other.id:
            return False
        if self.sigstatus != other.sigstatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sequencenumber(self):
        """Message field 'sequencenumber'."""
        return self._sequencenumber

    @sequencenumber.setter
    def sequencenumber(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequencenumber' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sequencenumber' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sequencenumber = value

    @property  # noqa: A003
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

    @property
    def sigstatus(self):
        """Message field 'sigstatus'."""
        return self._sigstatus

    @sigstatus.setter
    def sigstatus(self, value):
        if __debug__:
            from v2x_msg.msg import SignalStatusPackage
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
                 all(isinstance(v, SignalStatusPackage) for v in value) and
                 True), \
                "The 'sigstatus' field must be a set or sequence and each value of type 'SignalStatusPackage'"
        self._sigstatus = value
