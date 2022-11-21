# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/AccelSets.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelSets(type):
    """Metaclass of message 'AccelSets'."""

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
                'v2x_msg.msg.AccelSets')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__accel_sets
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__accel_sets
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__accel_sets
            cls._TYPE_SUPPORT = module.type_support_msg__msg__accel_sets
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__accel_sets

            from v2x_msg.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from v2x_msg.msg import ConfidenceSet
            if ConfidenceSet.__class__._TYPE_SUPPORT is None:
                ConfidenceSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccelSets(metaclass=Metaclass_AccelSets):
    """Message class 'AccelSets'."""

    __slots__ = [
        '_angle',
        '_certaccelthres',
        '_yawratecon',
        '_hozaccelcon',
        '_confidenceset',
    ]

    _fields_and_field_types = {
        'angle': 'v2x_msg/AccelerationSet4Way',
        'certaccelthres': 'int64',
        'yawratecon': 'int64',
        'hozaccelcon': 'int64',
        'confidenceset': 'v2x_msg/ConfidenceSet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ConfidenceSet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import AccelerationSet4Way
        self.angle = kwargs.get('angle', AccelerationSet4Way())
        self.certaccelthres = kwargs.get('certaccelthres', int())
        self.yawratecon = kwargs.get('yawratecon', int())
        self.hozaccelcon = kwargs.get('hozaccelcon', int())
        from v2x_msg.msg import ConfidenceSet
        self.confidenceset = kwargs.get('confidenceset', ConfidenceSet())

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
        if self.angle != other.angle:
            return False
        if self.certaccelthres != other.certaccelthres:
            return False
        if self.yawratecon != other.yawratecon:
            return False
        if self.hozaccelcon != other.hozaccelcon:
            return False
        if self.confidenceset != other.confidenceset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            from v2x_msg.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'angle' field must be a sub message of type 'AccelerationSet4Way'"
        self._angle = value

    @property
    def certaccelthres(self):
        """Message field 'certaccelthres'."""
        return self._certaccelthres

    @certaccelthres.setter
    def certaccelthres(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'certaccelthres' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'certaccelthres' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._certaccelthres = value

    @property
    def yawratecon(self):
        """Message field 'yawratecon'."""
        return self._yawratecon

    @yawratecon.setter
    def yawratecon(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yawratecon' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'yawratecon' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._yawratecon = value

    @property
    def hozaccelcon(self):
        """Message field 'hozaccelcon'."""
        return self._hozaccelcon

    @hozaccelcon.setter
    def hozaccelcon(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hozaccelcon' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'hozaccelcon' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._hozaccelcon = value

    @property
    def confidenceset(self):
        """Message field 'confidenceset'."""
        return self._confidenceset

    @confidenceset.setter
    def confidenceset(self, value):
        if __debug__:
            from v2x_msg.msg import ConfidenceSet
            assert \
                isinstance(value, ConfidenceSet), \
                "The 'confidenceset' field must be a sub message of type 'ConfidenceSet'"
        self._confidenceset = value
