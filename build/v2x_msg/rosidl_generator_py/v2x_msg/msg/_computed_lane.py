# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/ComputedLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputedLane(type):
    """Metaclass of message 'ComputedLane'."""

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
                'v2x_msg.msg.ComputedLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__computed_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__computed_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__computed_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__computed_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__computed_lane

            from v2x_msg.msg import OffsetXaxis
            if OffsetXaxis.__class__._TYPE_SUPPORT is None:
                OffsetXaxis.__class__.__import_type_support__()

            from v2x_msg.msg import OffsetYaxis
            if OffsetYaxis.__class__._TYPE_SUPPORT is None:
                OffsetYaxis.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputedLane(metaclass=Metaclass_ComputedLane):
    """Message class 'ComputedLane'."""

    __slots__ = [
        '_referencelaneid',
        '_offsetxaxis',
        '_offsetyaxis',
        '_rotatexy',
        '_scalexaxis',
        '_scaleyaxis',
    ]

    _fields_and_field_types = {
        'referencelaneid': 'int64',
        'offsetxaxis': 'v2x_msg/OffsetXaxis',
        'offsetyaxis': 'v2x_msg/OffsetYaxis',
        'rotatexy': 'int64',
        'scalexaxis': 'int64',
        'scaleyaxis': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'OffsetXaxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'OffsetYaxis'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.referencelaneid = kwargs.get('referencelaneid', int())
        from v2x_msg.msg import OffsetXaxis
        self.offsetxaxis = kwargs.get('offsetxaxis', OffsetXaxis())
        from v2x_msg.msg import OffsetYaxis
        self.offsetyaxis = kwargs.get('offsetyaxis', OffsetYaxis())
        self.rotatexy = kwargs.get('rotatexy', int())
        self.scalexaxis = kwargs.get('scalexaxis', int())
        self.scaleyaxis = kwargs.get('scaleyaxis', int())

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
        if self.referencelaneid != other.referencelaneid:
            return False
        if self.offsetxaxis != other.offsetxaxis:
            return False
        if self.offsetyaxis != other.offsetyaxis:
            return False
        if self.rotatexy != other.rotatexy:
            return False
        if self.scalexaxis != other.scalexaxis:
            return False
        if self.scaleyaxis != other.scaleyaxis:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def referencelaneid(self):
        """Message field 'referencelaneid'."""
        return self._referencelaneid

    @referencelaneid.setter
    def referencelaneid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'referencelaneid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'referencelaneid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._referencelaneid = value

    @property
    def offsetxaxis(self):
        """Message field 'offsetxaxis'."""
        return self._offsetxaxis

    @offsetxaxis.setter
    def offsetxaxis(self, value):
        if __debug__:
            from v2x_msg.msg import OffsetXaxis
            assert \
                isinstance(value, OffsetXaxis), \
                "The 'offsetxaxis' field must be a sub message of type 'OffsetXaxis'"
        self._offsetxaxis = value

    @property
    def offsetyaxis(self):
        """Message field 'offsetyaxis'."""
        return self._offsetyaxis

    @offsetyaxis.setter
    def offsetyaxis(self, value):
        if __debug__:
            from v2x_msg.msg import OffsetYaxis
            assert \
                isinstance(value, OffsetYaxis), \
                "The 'offsetyaxis' field must be a sub message of type 'OffsetYaxis'"
        self._offsetyaxis = value

    @property
    def rotatexy(self):
        """Message field 'rotatexy'."""
        return self._rotatexy

    @rotatexy.setter
    def rotatexy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rotatexy' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rotatexy' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rotatexy = value

    @property
    def scalexaxis(self):
        """Message field 'scalexaxis'."""
        return self._scalexaxis

    @scalexaxis.setter
    def scalexaxis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scalexaxis' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'scalexaxis' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._scalexaxis = value

    @property
    def scaleyaxis(self):
        """Message field 'scaleyaxis'."""
        return self._scaleyaxis

    @scaleyaxis.setter
    def scaleyaxis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scaleyaxis' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'scaleyaxis' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._scaleyaxis = value
