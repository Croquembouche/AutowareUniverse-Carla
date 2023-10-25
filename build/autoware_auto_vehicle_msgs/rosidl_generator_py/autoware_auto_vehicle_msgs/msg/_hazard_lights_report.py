# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_vehicle_msgs:msg/HazardLightsReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HazardLightsReport(type):
    """Metaclass of message 'HazardLightsReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISABLE': 1,
        'ENABLE': 2,
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
                'autoware_auto_vehicle_msgs.msg.HazardLightsReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hazard_lights_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hazard_lights_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hazard_lights_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hazard_lights_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hazard_lights_report

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISABLE': cls.__constants['DISABLE'],
            'ENABLE': cls.__constants['ENABLE'],
            'REPORT__DEFAULT': 0,
        }

    @property
    def DISABLE(self):
        """Message constant 'DISABLE'."""
        return Metaclass_HazardLightsReport.__constants['DISABLE']

    @property
    def ENABLE(self):
        """Message constant 'ENABLE'."""
        return Metaclass_HazardLightsReport.__constants['ENABLE']

    @property
    def REPORT__DEFAULT(cls):
        """Return default value for message field 'report'."""
        return 0


class HazardLightsReport(metaclass=Metaclass_HazardLightsReport):
    """
    Message class 'HazardLightsReport'.

    Constants:
      DISABLE
      ENABLE
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
            'report', HazardLightsReport.REPORT__DEFAULT)

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
