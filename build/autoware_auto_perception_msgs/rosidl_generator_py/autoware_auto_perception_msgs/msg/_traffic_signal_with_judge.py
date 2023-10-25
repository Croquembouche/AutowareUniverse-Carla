# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficSignalWithJudge(type):
    """Metaclass of message 'TrafficSignalWithJudge'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'JUDGE': 1,
        'NONE': 2,
        'STOP': 3,
        'GO': 4,
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
                'autoware_auto_perception_msgs.msg.TrafficSignalWithJudge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_signal_with_judge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_signal_with_judge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_signal_with_judge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_signal_with_judge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_signal_with_judge

            from autoware_auto_perception_msgs.msg import TrafficSignal
            if TrafficSignal.__class__._TYPE_SUPPORT is None:
                TrafficSignal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'JUDGE': cls.__constants['JUDGE'],
            'NONE': cls.__constants['NONE'],
            'STOP': cls.__constants['STOP'],
            'GO': cls.__constants['GO'],
        }

    @property
    def JUDGE(self):
        """Message constant 'JUDGE'."""
        return Metaclass_TrafficSignalWithJudge.__constants['JUDGE']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_TrafficSignalWithJudge.__constants['NONE']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_TrafficSignalWithJudge.__constants['STOP']

    @property
    def GO(self):
        """Message constant 'GO'."""
        return Metaclass_TrafficSignalWithJudge.__constants['GO']


class TrafficSignalWithJudge(metaclass=Metaclass_TrafficSignalWithJudge):
    """
    Message class 'TrafficSignalWithJudge'.

    Constants:
      JUDGE
      NONE
      STOP
      GO
    """

    __slots__ = [
        '_judge',
        '_has_state',
        '_signal',
    ]

    _fields_and_field_types = {
        'judge': 'uint8',
        'has_state': 'boolean',
        'signal': 'autoware_auto_perception_msgs/TrafficSignal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'TrafficSignal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.judge = kwargs.get('judge', int())
        self.has_state = kwargs.get('has_state', bool())
        from autoware_auto_perception_msgs.msg import TrafficSignal
        self.signal = kwargs.get('signal', TrafficSignal())

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
        if self.judge != other.judge:
            return False
        if self.has_state != other.has_state:
            return False
        if self.signal != other.signal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def judge(self):
        """Message field 'judge'."""
        return self._judge

    @judge.setter
    def judge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'judge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'judge' field must be an unsigned integer in [0, 255]"
        self._judge = value

    @builtins.property
    def has_state(self):
        """Message field 'has_state'."""
        return self._has_state

    @has_state.setter
    def has_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_state' field must be of type 'bool'"
        self._has_state = value

    @builtins.property
    def signal(self):
        """Message field 'signal'."""
        return self._signal

    @signal.setter
    def signal(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import TrafficSignal
            assert \
                isinstance(value, TrafficSignal), \
                "The 'signal' field must be a sub message of type 'TrafficSignal'"
        self._signal = value
