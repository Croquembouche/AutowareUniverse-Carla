# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/IntersectionStatusObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionStatusObject(type):
    """Metaclass of message 'IntersectionStatusObject'."""

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
                'v2x_msg.msg.IntersectionStatusObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_status_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_status_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_status_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_status_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_status_object

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionStatusObject(metaclass=Metaclass_IntersectionStatusObject):
    """Message class 'IntersectionStatusObject'."""

    __slots__ = [
        '_manualcontrolisenabled',
        '_stoptimeisactivated',
        '_failureflash',
        '_preemptisactive',
        '_signalpriorityisactive',
        '_fixedtimeoperation',
        '_trafficdependentoperation',
        '_standbyoperation',
        '_failuremode',
        '_off',
        '_recentmapmessageupdate',
        '_recentchangeinmapassignedlanesidsused',
        '_novalidmapisabilableatthistime',
        '_nobalidspatisabilableatthistime',
        '_reserve14',
        '_reserve15',
    ]

    _fields_and_field_types = {
        'manualcontrolisenabled': 'int64',
        'stoptimeisactivated': 'int64',
        'failureflash': 'int64',
        'preemptisactive': 'int64',
        'signalpriorityisactive': 'int64',
        'fixedtimeoperation': 'int64',
        'trafficdependentoperation': 'int64',
        'standbyoperation': 'int64',
        'failuremode': 'int64',
        'off': 'int64',
        'recentmapmessageupdate': 'int64',
        'recentchangeinmapassignedlanesidsused': 'int64',
        'novalidmapisabilableatthistime': 'int64',
        'nobalidspatisabilableatthistime': 'int64',
        'reserve14': 'int64',
        'reserve15': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.manualcontrolisenabled = kwargs.get('manualcontrolisenabled', int())
        self.stoptimeisactivated = kwargs.get('stoptimeisactivated', int())
        self.failureflash = kwargs.get('failureflash', int())
        self.preemptisactive = kwargs.get('preemptisactive', int())
        self.signalpriorityisactive = kwargs.get('signalpriorityisactive', int())
        self.fixedtimeoperation = kwargs.get('fixedtimeoperation', int())
        self.trafficdependentoperation = kwargs.get('trafficdependentoperation', int())
        self.standbyoperation = kwargs.get('standbyoperation', int())
        self.failuremode = kwargs.get('failuremode', int())
        self.off = kwargs.get('off', int())
        self.recentmapmessageupdate = kwargs.get('recentmapmessageupdate', int())
        self.recentchangeinmapassignedlanesidsused = kwargs.get('recentchangeinmapassignedlanesidsused', int())
        self.novalidmapisabilableatthistime = kwargs.get('novalidmapisabilableatthistime', int())
        self.nobalidspatisabilableatthistime = kwargs.get('nobalidspatisabilableatthistime', int())
        self.reserve14 = kwargs.get('reserve14', int())
        self.reserve15 = kwargs.get('reserve15', int())

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
        if self.manualcontrolisenabled != other.manualcontrolisenabled:
            return False
        if self.stoptimeisactivated != other.stoptimeisactivated:
            return False
        if self.failureflash != other.failureflash:
            return False
        if self.preemptisactive != other.preemptisactive:
            return False
        if self.signalpriorityisactive != other.signalpriorityisactive:
            return False
        if self.fixedtimeoperation != other.fixedtimeoperation:
            return False
        if self.trafficdependentoperation != other.trafficdependentoperation:
            return False
        if self.standbyoperation != other.standbyoperation:
            return False
        if self.failuremode != other.failuremode:
            return False
        if self.off != other.off:
            return False
        if self.recentmapmessageupdate != other.recentmapmessageupdate:
            return False
        if self.recentchangeinmapassignedlanesidsused != other.recentchangeinmapassignedlanesidsused:
            return False
        if self.novalidmapisabilableatthistime != other.novalidmapisabilableatthistime:
            return False
        if self.nobalidspatisabilableatthistime != other.nobalidspatisabilableatthistime:
            return False
        if self.reserve14 != other.reserve14:
            return False
        if self.reserve15 != other.reserve15:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def manualcontrolisenabled(self):
        """Message field 'manualcontrolisenabled'."""
        return self._manualcontrolisenabled

    @manualcontrolisenabled.setter
    def manualcontrolisenabled(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manualcontrolisenabled' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'manualcontrolisenabled' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._manualcontrolisenabled = value

    @builtins.property
    def stoptimeisactivated(self):
        """Message field 'stoptimeisactivated'."""
        return self._stoptimeisactivated

    @stoptimeisactivated.setter
    def stoptimeisactivated(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stoptimeisactivated' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'stoptimeisactivated' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._stoptimeisactivated = value

    @builtins.property
    def failureflash(self):
        """Message field 'failureflash'."""
        return self._failureflash

    @failureflash.setter
    def failureflash(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failureflash' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'failureflash' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._failureflash = value

    @builtins.property
    def preemptisactive(self):
        """Message field 'preemptisactive'."""
        return self._preemptisactive

    @preemptisactive.setter
    def preemptisactive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'preemptisactive' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'preemptisactive' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._preemptisactive = value

    @builtins.property
    def signalpriorityisactive(self):
        """Message field 'signalpriorityisactive'."""
        return self._signalpriorityisactive

    @signalpriorityisactive.setter
    def signalpriorityisactive(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signalpriorityisactive' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'signalpriorityisactive' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._signalpriorityisactive = value

    @builtins.property
    def fixedtimeoperation(self):
        """Message field 'fixedtimeoperation'."""
        return self._fixedtimeoperation

    @fixedtimeoperation.setter
    def fixedtimeoperation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fixedtimeoperation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'fixedtimeoperation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._fixedtimeoperation = value

    @builtins.property
    def trafficdependentoperation(self):
        """Message field 'trafficdependentoperation'."""
        return self._trafficdependentoperation

    @trafficdependentoperation.setter
    def trafficdependentoperation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trafficdependentoperation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'trafficdependentoperation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._trafficdependentoperation = value

    @builtins.property
    def standbyoperation(self):
        """Message field 'standbyoperation'."""
        return self._standbyoperation

    @standbyoperation.setter
    def standbyoperation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'standbyoperation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'standbyoperation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._standbyoperation = value

    @builtins.property
    def failuremode(self):
        """Message field 'failuremode'."""
        return self._failuremode

    @failuremode.setter
    def failuremode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failuremode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'failuremode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._failuremode = value

    @builtins.property
    def off(self):
        """Message field 'off'."""
        return self._off

    @off.setter
    def off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'off' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'off' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._off = value

    @builtins.property
    def recentmapmessageupdate(self):
        """Message field 'recentmapmessageupdate'."""
        return self._recentmapmessageupdate

    @recentmapmessageupdate.setter
    def recentmapmessageupdate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'recentmapmessageupdate' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'recentmapmessageupdate' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._recentmapmessageupdate = value

    @builtins.property
    def recentchangeinmapassignedlanesidsused(self):
        """Message field 'recentchangeinmapassignedlanesidsused'."""
        return self._recentchangeinmapassignedlanesidsused

    @recentchangeinmapassignedlanesidsused.setter
    def recentchangeinmapassignedlanesidsused(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'recentchangeinmapassignedlanesidsused' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'recentchangeinmapassignedlanesidsused' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._recentchangeinmapassignedlanesidsused = value

    @builtins.property
    def novalidmapisabilableatthistime(self):
        """Message field 'novalidmapisabilableatthistime'."""
        return self._novalidmapisabilableatthistime

    @novalidmapisabilableatthistime.setter
    def novalidmapisabilableatthistime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'novalidmapisabilableatthistime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'novalidmapisabilableatthistime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._novalidmapisabilableatthistime = value

    @builtins.property
    def nobalidspatisabilableatthistime(self):
        """Message field 'nobalidspatisabilableatthistime'."""
        return self._nobalidspatisabilableatthistime

    @nobalidspatisabilableatthistime.setter
    def nobalidspatisabilableatthistime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nobalidspatisabilableatthistime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'nobalidspatisabilableatthistime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._nobalidspatisabilableatthistime = value

    @builtins.property
    def reserve14(self):
        """Message field 'reserve14'."""
        return self._reserve14

    @reserve14.setter
    def reserve14(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve14' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve14' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve14 = value

    @builtins.property
    def reserve15(self):
        """Message field 'reserve15'."""
        return self._reserve15

    @reserve15.setter
    def reserve15(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve15' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve15' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve15 = value
