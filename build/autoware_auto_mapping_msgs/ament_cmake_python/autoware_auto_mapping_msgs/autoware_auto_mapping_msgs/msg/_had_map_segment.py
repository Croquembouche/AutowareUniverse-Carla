# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HADMapSegment(type):
    """Metaclass of message 'HADMapSegment'."""

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
            module = import_type_support('autoware_auto_mapping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_mapping_msgs.msg.HADMapSegment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__had_map_segment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__had_map_segment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__had_map_segment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__had_map_segment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__had_map_segment

            from autoware_auto_mapping_msgs.msg import MapPrimitive
            if MapPrimitive.__class__._TYPE_SUPPORT is None:
                MapPrimitive.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HADMapSegment(metaclass=Metaclass_HADMapSegment):
    """Message class 'HADMapSegment'."""

    __slots__ = [
        '_primitives',
        '_preferred_primitive_id',
    ]

    _fields_and_field_types = {
        'primitives': 'sequence<autoware_auto_mapping_msgs/MapPrimitive>',
        'preferred_primitive_id': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_auto_mapping_msgs', 'msg'], 'MapPrimitive')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.primitives = kwargs.get('primitives', [])
        self.preferred_primitive_id = kwargs.get('preferred_primitive_id', int())

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
        if self.primitives != other.primitives:
            return False
        if self.preferred_primitive_id != other.preferred_primitive_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def primitives(self):
        """Message field 'primitives'."""
        return self._primitives

    @primitives.setter
    def primitives(self, value):
        if __debug__:
            from autoware_auto_mapping_msgs.msg import MapPrimitive
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
                 all(isinstance(v, MapPrimitive) for v in value) and
                 True), \
                "The 'primitives' field must be a set or sequence and each value of type 'MapPrimitive'"
        self._primitives = value

    @builtins.property
    def preferred_primitive_id(self):
        """Message field 'preferred_primitive_id'."""
        return self._preferred_primitive_id

    @preferred_primitive_id.setter
    def preferred_primitive_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'preferred_primitive_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'preferred_primitive_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._preferred_primitive_id = value
