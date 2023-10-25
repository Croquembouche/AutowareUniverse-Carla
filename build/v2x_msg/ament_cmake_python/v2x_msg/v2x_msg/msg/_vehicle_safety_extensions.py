# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/VehicleSafetyExtensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSafetyExtensions(type):
    """Metaclass of message 'VehicleSafetyExtensions'."""

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
                'v2x_msg.msg.VehicleSafetyExtensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_safety_extensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_safety_extensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_safety_extensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_safety_extensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_safety_extensions

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


class VehicleSafetyExtensions(metaclass=Metaclass_VehicleSafetyExtensions):
    """Message class 'VehicleSafetyExtensions'."""

    __slots__ = [
        '_vehicleeventflags',
        '_pathhistory',
        '_pathprediction',
        '_texteriorlights',
    ]

    _fields_and_field_types = {
        'vehicleeventflags': 'string',
        'pathhistory': 'v2x_msg/PathHistory',
        'pathprediction': 'v2x_msg/PathPrediction',
        'texteriorlights': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathHistory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathPrediction'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicleeventflags = kwargs.get('vehicleeventflags', str())
        from v2x_msg.msg import PathHistory
        self.pathhistory = kwargs.get('pathhistory', PathHistory())
        from v2x_msg.msg import PathPrediction
        self.pathprediction = kwargs.get('pathprediction', PathPrediction())
        self.texteriorlights = kwargs.get('texteriorlights', str())

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
        if self.vehicleeventflags != other.vehicleeventflags:
            return False
        if self.pathhistory != other.pathhistory:
            return False
        if self.pathprediction != other.pathprediction:
            return False
        if self.texteriorlights != other.texteriorlights:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicleeventflags(self):
        """Message field 'vehicleeventflags'."""
        return self._vehicleeventflags

    @vehicleeventflags.setter
    def vehicleeventflags(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicleeventflags' field must be of type 'str'"
        self._vehicleeventflags = value

    @builtins.property
    def pathhistory(self):
        """Message field 'pathhistory'."""
        return self._pathhistory

    @pathhistory.setter
    def pathhistory(self, value):
        if __debug__:
            from v2x_msg.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'pathhistory' field must be a sub message of type 'PathHistory'"
        self._pathhistory = value

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
    def texteriorlights(self):
        """Message field 'texteriorlights'."""
        return self._texteriorlights

    @texteriorlights.setter
    def texteriorlights(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'texteriorlights' field must be of type 'str'"
        self._texteriorlights = value
