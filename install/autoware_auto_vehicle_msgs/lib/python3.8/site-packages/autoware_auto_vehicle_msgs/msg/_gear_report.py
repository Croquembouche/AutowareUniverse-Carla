# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/GearReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GearReport(type):
    """Metaclass of message 'GearReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'NEUTRAL': 1,
        'DRIVE': 2,
        'DRIVE_2': 3,
        'DRIVE_3': 4,
        'DRIVE_4': 5,
        'DRIVE_5': 6,
        'DRIVE_6': 7,
        'DRIVE_7': 8,
        'DRIVE_8': 9,
        'DRIVE_9': 10,
        'DRIVE_10': 11,
        'DRIVE_11': 12,
        'DRIVE_12': 13,
        'DRIVE_13': 14,
        'DRIVE_14': 15,
        'DRIVE_15': 16,
        'DRIVE_16': 17,
        'DRIVE_17': 18,
        'DRIVE_18': 19,
        'REVERSE': 20,
        'REVERSE_2': 21,
        'PARK': 22,
        'LOW': 23,
        'LOW_2': 24,
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
                'autoware_auto_vehicle_msgs.msg.GearReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gear_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gear_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gear_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gear_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gear_report

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'NEUTRAL': cls.__constants['NEUTRAL'],
            'DRIVE': cls.__constants['DRIVE'],
            'DRIVE_2': cls.__constants['DRIVE_2'],
            'DRIVE_3': cls.__constants['DRIVE_3'],
            'DRIVE_4': cls.__constants['DRIVE_4'],
            'DRIVE_5': cls.__constants['DRIVE_5'],
            'DRIVE_6': cls.__constants['DRIVE_6'],
            'DRIVE_7': cls.__constants['DRIVE_7'],
            'DRIVE_8': cls.__constants['DRIVE_8'],
            'DRIVE_9': cls.__constants['DRIVE_9'],
            'DRIVE_10': cls.__constants['DRIVE_10'],
            'DRIVE_11': cls.__constants['DRIVE_11'],
            'DRIVE_12': cls.__constants['DRIVE_12'],
            'DRIVE_13': cls.__constants['DRIVE_13'],
            'DRIVE_14': cls.__constants['DRIVE_14'],
            'DRIVE_15': cls.__constants['DRIVE_15'],
            'DRIVE_16': cls.__constants['DRIVE_16'],
            'DRIVE_17': cls.__constants['DRIVE_17'],
            'DRIVE_18': cls.__constants['DRIVE_18'],
            'REVERSE': cls.__constants['REVERSE'],
            'REVERSE_2': cls.__constants['REVERSE_2'],
            'PARK': cls.__constants['PARK'],
            'LOW': cls.__constants['LOW'],
            'LOW_2': cls.__constants['LOW_2'],
            'REPORT__DEFAULT': 0,
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_GearReport.__constants['NONE']

    @property
    def NEUTRAL(self):
        """Message constant 'NEUTRAL'."""
        return Metaclass_GearReport.__constants['NEUTRAL']

    @property
    def DRIVE(self):
        """Message constant 'DRIVE'."""
        return Metaclass_GearReport.__constants['DRIVE']

    @property
    def DRIVE_2(self):
        """Message constant 'DRIVE_2'."""
        return Metaclass_GearReport.__constants['DRIVE_2']

    @property
    def DRIVE_3(self):
        """Message constant 'DRIVE_3'."""
        return Metaclass_GearReport.__constants['DRIVE_3']

    @property
    def DRIVE_4(self):
        """Message constant 'DRIVE_4'."""
        return Metaclass_GearReport.__constants['DRIVE_4']

    @property
    def DRIVE_5(self):
        """Message constant 'DRIVE_5'."""
        return Metaclass_GearReport.__constants['DRIVE_5']

    @property
    def DRIVE_6(self):
        """Message constant 'DRIVE_6'."""
        return Metaclass_GearReport.__constants['DRIVE_6']

    @property
    def DRIVE_7(self):
        """Message constant 'DRIVE_7'."""
        return Metaclass_GearReport.__constants['DRIVE_7']

    @property
    def DRIVE_8(self):
        """Message constant 'DRIVE_8'."""
        return Metaclass_GearReport.__constants['DRIVE_8']

    @property
    def DRIVE_9(self):
        """Message constant 'DRIVE_9'."""
        return Metaclass_GearReport.__constants['DRIVE_9']

    @property
    def DRIVE_10(self):
        """Message constant 'DRIVE_10'."""
        return Metaclass_GearReport.__constants['DRIVE_10']

    @property
    def DRIVE_11(self):
        """Message constant 'DRIVE_11'."""
        return Metaclass_GearReport.__constants['DRIVE_11']

    @property
    def DRIVE_12(self):
        """Message constant 'DRIVE_12'."""
        return Metaclass_GearReport.__constants['DRIVE_12']

    @property
    def DRIVE_13(self):
        """Message constant 'DRIVE_13'."""
        return Metaclass_GearReport.__constants['DRIVE_13']

    @property
    def DRIVE_14(self):
        """Message constant 'DRIVE_14'."""
        return Metaclass_GearReport.__constants['DRIVE_14']

    @property
    def DRIVE_15(self):
        """Message constant 'DRIVE_15'."""
        return Metaclass_GearReport.__constants['DRIVE_15']

    @property
    def DRIVE_16(self):
        """Message constant 'DRIVE_16'."""
        return Metaclass_GearReport.__constants['DRIVE_16']

    @property
    def DRIVE_17(self):
        """Message constant 'DRIVE_17'."""
        return Metaclass_GearReport.__constants['DRIVE_17']

    @property
    def DRIVE_18(self):
        """Message constant 'DRIVE_18'."""
        return Metaclass_GearReport.__constants['DRIVE_18']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_GearReport.__constants['REVERSE']

    @property
    def REVERSE_2(self):
        """Message constant 'REVERSE_2'."""
        return Metaclass_GearReport.__constants['REVERSE_2']

    @property
    def PARK(self):
        """Message constant 'PARK'."""
        return Metaclass_GearReport.__constants['PARK']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_GearReport.__constants['LOW']

    @property
    def LOW_2(self):
        """Message constant 'LOW_2'."""
        return Metaclass_GearReport.__constants['LOW_2']

    @property
    def REPORT__DEFAULT(cls):
        """Return default value for message field 'report'."""
        return 0


class GearReport(metaclass=Metaclass_GearReport):
    """
    Message class 'GearReport'.

    Constants:
      NONE
      NEUTRAL
      DRIVE
      DRIVE_2
      DRIVE_3
      DRIVE_4
      DRIVE_5
      DRIVE_6
      DRIVE_7
      DRIVE_8
      DRIVE_9
      DRIVE_10
      DRIVE_11
      DRIVE_12
      DRIVE_13
      DRIVE_14
      DRIVE_15
      DRIVE_16
      DRIVE_17
      DRIVE_18
      REVERSE
      REVERSE_2
      PARK
      LOW
      LOW_2
    """

    __slots__ = [
        '_stamp',
        '_report',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'report': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.report = kwargs.get(
            'report', GearReport.REPORT__DEFAULT)

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
        if self.stamp != other.stamp:
            return False
        if self.report != other.report:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def report(self):
        """Message field 'report'."""
        return self._report

    @report.setter
    def report(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'report' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'report' field must be an unsigned integer in [0, 255]"
        self._report = value
