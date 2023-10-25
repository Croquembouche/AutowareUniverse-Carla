# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LookingTrafficSignal(type):
    """Metaclass of message 'LookingTrafficSignal'."""

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
            module = import_type_support('autoware_auto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_perception_msgs.msg.LookingTrafficSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__looking_traffic_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__looking_traffic_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__looking_traffic_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__looking_traffic_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__looking_traffic_signal

            from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
            if TrafficSignalWithJudge.__class__._TYPE_SUPPORT is None:
                TrafficSignalWithJudge.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LookingTrafficSignal(metaclass=Metaclass_LookingTrafficSignal):
    """Message class 'LookingTrafficSignal'."""

    __slots__ = [
        '_header',
        '_is_module_running',
        '_perception',
        '_external',
        '_result',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_module_running': 'boolean',
        'perception': 'autoware_auto_perception_msgs/TrafficSignalWithJudge',
        'external': 'autoware_auto_perception_msgs/TrafficSignalWithJudge',
        'result': 'autoware_auto_perception_msgs/TrafficSignalWithJudge',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'TrafficSignalWithJudge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'TrafficSignalWithJudge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'TrafficSignalWithJudge'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_module_running = kwargs.get('is_module_running', bool())
        from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
        self.perception = kwargs.get('perception', TrafficSignalWithJudge())
        from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
        self.external = kwargs.get('external', TrafficSignalWithJudge())
        from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
        self.result = kwargs.get('result', TrafficSignalWithJudge())

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
        if self.header != other.header:
            return False
        if self.is_module_running != other.is_module_running:
            return False
        if self.perception != other.perception:
            return False
        if self.external != other.external:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def is_module_running(self):
        """Message field 'is_module_running'."""
        return self._is_module_running

    @is_module_running.setter
    def is_module_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_module_running' field must be of type 'bool'"
        self._is_module_running = value

    @builtins.property
    def perception(self):
        """Message field 'perception'."""
        return self._perception

    @perception.setter
    def perception(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
            assert \
                isinstance(value, TrafficSignalWithJudge), \
                "The 'perception' field must be a sub message of type 'TrafficSignalWithJudge'"
        self._perception = value

    @builtins.property
    def external(self):
        """Message field 'external'."""
        return self._external

    @external.setter
    def external(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
            assert \
                isinstance(value, TrafficSignalWithJudge), \
                "The 'external' field must be a sub message of type 'TrafficSignalWithJudge'"
        self._external = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import TrafficSignalWithJudge
            assert \
                isinstance(value, TrafficSignalWithJudge), \
                "The 'result' field must be a sub message of type 'TrafficSignalWithJudge'"
        self._result = value
