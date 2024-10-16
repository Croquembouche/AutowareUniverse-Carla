# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutonomyModeChange_Request(type):
    """Metaclass of message 'AutonomyModeChange_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_MANUAL': 0,
        'MODE_AUTONOMOUS': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_vehicle_msgs.srv.AutonomyModeChange_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__autonomy_mode_change__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__autonomy_mode_change__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__autonomy_mode_change__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__autonomy_mode_change__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__autonomy_mode_change__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_MANUAL': cls.__constants['MODE_MANUAL'],
            'MODE_AUTONOMOUS': cls.__constants['MODE_AUTONOMOUS'],
        }

    @property
    def MODE_MANUAL(self):
        """Message constant 'MODE_MANUAL'."""
        return Metaclass_AutonomyModeChange_Request.__constants['MODE_MANUAL']

    @property
    def MODE_AUTONOMOUS(self):
        """Message constant 'MODE_AUTONOMOUS'."""
        return Metaclass_AutonomyModeChange_Request.__constants['MODE_AUTONOMOUS']


class AutonomyModeChange_Request(metaclass=Metaclass_AutonomyModeChange_Request):
    """
    Message class 'AutonomyModeChange_Request'.

    Constants:
      MODE_MANUAL
      MODE_AUTONOMOUS
    """

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AutonomyModeChange_Response(type):
    """Metaclass of message 'AutonomyModeChange_Response'."""

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
            module = import_type_support('autoware_auto_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_vehicle_msgs.srv.AutonomyModeChange_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__autonomy_mode_change__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__autonomy_mode_change__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__autonomy_mode_change__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__autonomy_mode_change__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__autonomy_mode_change__response

            from std_msgs.msg import Empty
            if Empty.__class__._TYPE_SUPPORT is None:
                Empty.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutonomyModeChange_Response(metaclass=Metaclass_AutonomyModeChange_Response):
    """Message class 'AutonomyModeChange_Response'."""

    __slots__ = [
        '_empty',
    ]

    _fields_and_field_types = {
        'empty': 'std_msgs/Empty',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Empty'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Empty
        self.empty = kwargs.get('empty', Empty())

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
        if self.empty != other.empty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def empty(self):
        """Message field 'empty'."""
        return self._empty

    @empty.setter
    def empty(self, value):
        if __debug__:
            from std_msgs.msg import Empty
            assert \
                isinstance(value, Empty), \
                "The 'empty' field must be a sub message of type 'Empty'"
        self._empty = value


class Metaclass_AutonomyModeChange(type):
    """Metaclass of service 'AutonomyModeChange'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_vehicle_msgs.srv.AutonomyModeChange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__autonomy_mode_change

            from autoware_auto_vehicle_msgs.srv import _autonomy_mode_change
            if _autonomy_mode_change.Metaclass_AutonomyModeChange_Request._TYPE_SUPPORT is None:
                _autonomy_mode_change.Metaclass_AutonomyModeChange_Request.__import_type_support__()
            if _autonomy_mode_change.Metaclass_AutonomyModeChange_Response._TYPE_SUPPORT is None:
                _autonomy_mode_change.Metaclass_AutonomyModeChange_Response.__import_type_support__()


class AutonomyModeChange(metaclass=Metaclass_AutonomyModeChange):
    from autoware_auto_vehicle_msgs.srv._autonomy_mode_change import AutonomyModeChange_Request as Request
    from autoware_auto_vehicle_msgs.srv._autonomy_mode_change import AutonomyModeChange_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
