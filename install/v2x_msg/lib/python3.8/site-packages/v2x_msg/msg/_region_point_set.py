# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RegionPointSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegionPointSet(type):
    """Metaclass of message 'RegionPointSet'."""

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
                'v2x_msg.msg.RegionPointSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__region_point_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__region_point_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__region_point_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__region_point_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__region_point_set

            from v2x_msg.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from v2x_msg.msg import RegionOffsets
            if RegionOffsets.__class__._TYPE_SUPPORT is None:
                RegionOffsets.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegionPointSet(metaclass=Metaclass_RegionPointSet):
    """Message class 'RegionPointSet'."""

    __slots__ = [
        '_anchor',
        '_scale',
        '_nodelist',
    ]

    _fields_and_field_types = {
        'anchor': 'v2x_msg/Position3D',
        'scale': 'int64',
        'nodelist': 'sequence<v2x_msg/RegionOffsets>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RegionOffsets')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import Position3D
        self.anchor = kwargs.get('anchor', Position3D())
        self.scale = kwargs.get('scale', int())
        self.nodelist = kwargs.get('nodelist', [])

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
        if self.anchor != other.anchor:
            return False
        if self.scale != other.scale:
            return False
        if self.nodelist != other.nodelist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def anchor(self):
        """Message field 'anchor'."""
        return self._anchor

    @anchor.setter
    def anchor(self, value):
        if __debug__:
            from v2x_msg.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'anchor' field must be a sub message of type 'Position3D'"
        self._anchor = value

    @property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scale' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'scale' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._scale = value

    @property
    def nodelist(self):
        """Message field 'nodelist'."""
        return self._nodelist

    @nodelist.setter
    def nodelist(self, value):
        if __debug__:
            from v2x_msg.msg import RegionOffsets
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, RegionOffsets) for v in value) and
                 True), \
                "The 'nodelist' field must be a set or sequence and each value of type 'RegionOffsets'"
        self._nodelist = value
