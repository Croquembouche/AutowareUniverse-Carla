# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/ConnectionManeuverAssist.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConnectionManeuverAssist(type):
    """Metaclass of message 'ConnectionManeuverAssist'."""

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
                'v2x_msg.msg.ConnectionManeuverAssist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection_maneuver_assist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection_maneuver_assist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection_maneuver_assist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection_maneuver_assist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection_maneuver_assist

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConnectionManeuverAssist(metaclass=Metaclass_ConnectionManeuverAssist):
    """Message class 'ConnectionManeuverAssist'."""

    __slots__ = [
        '_connectionid',
        '_queuelength',
        '_availablestoragelength',
        '_waitonstop',
        '_pedbicycledetect',
    ]

    _fields_and_field_types = {
        'connectionid': 'int64',
        'queuelength': 'int64',
        'availablestoragelength': 'int64',
        'waitonstop': 'boolean',
        'pedbicycledetect': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connectionid = kwargs.get('connectionid', int())
        self.queuelength = kwargs.get('queuelength', int())
        self.availablestoragelength = kwargs.get('availablestoragelength', int())
        self.waitonstop = kwargs.get('waitonstop', bool())
        self.pedbicycledetect = kwargs.get('pedbicycledetect', bool())

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
        if self.connectionid != other.connectionid:
            return False
        if self.queuelength != other.queuelength:
            return False
        if self.availablestoragelength != other.availablestoragelength:
            return False
        if self.waitonstop != other.waitonstop:
            return False
        if self.pedbicycledetect != other.pedbicycledetect:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def connectionid(self):
        """Message field 'connectionid'."""
        return self._connectionid

    @connectionid.setter
    def connectionid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'connectionid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'connectionid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._connectionid = value

    @property
    def queuelength(self):
        """Message field 'queuelength'."""
        return self._queuelength

    @queuelength.setter
    def queuelength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'queuelength' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'queuelength' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._queuelength = value

    @property
    def availablestoragelength(self):
        """Message field 'availablestoragelength'."""
        return self._availablestoragelength

    @availablestoragelength.setter
    def availablestoragelength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'availablestoragelength' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'availablestoragelength' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._availablestoragelength = value

    @property
    def waitonstop(self):
        """Message field 'waitonstop'."""
        return self._waitonstop

    @waitonstop.setter
    def waitonstop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'waitonstop' field must be of type 'bool'"
        self._waitonstop = value

    @property
    def pedbicycledetect(self):
        """Message field 'pedbicycledetect'."""
        return self._pedbicycledetect

    @pedbicycledetect.setter
    def pedbicycledetect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pedbicycledetect' field must be of type 'bool'"
        self._pedbicycledetect = value
