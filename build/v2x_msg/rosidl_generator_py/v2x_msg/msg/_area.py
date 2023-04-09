# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Area.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Area(type):
    """Metaclass of message 'Area'."""

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
                'v2x_msg.msg.Area')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__area
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__area
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__area
            cls._TYPE_SUPPORT = module.type_support_msg__msg__area
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__area

            from v2x_msg.msg import Circle
            if Circle.__class__._TYPE_SUPPORT is None:
                Circle.__class__.__import_type_support__()

            from v2x_msg.msg import RegionPointSet
            if RegionPointSet.__class__._TYPE_SUPPORT is None:
                RegionPointSet.__class__.__import_type_support__()

            from v2x_msg.msg import ShapePointSet
            if ShapePointSet.__class__._TYPE_SUPPORT is None:
                ShapePointSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Area(metaclass=Metaclass_Area):
    """Message class 'Area'."""

    __slots__ = [
        '_shapepointset',
        '_cirle',
        '_regionpointset',
    ]

    _fields_and_field_types = {
        'shapepointset': 'v2x_msg/ShapePointSet',
        'cirle': 'v2x_msg/Circle',
        'regionpointset': 'v2x_msg/RegionPointSet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ShapePointSet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Circle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RegionPointSet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import ShapePointSet
        self.shapepointset = kwargs.get('shapepointset', ShapePointSet())
        from v2x_msg.msg import Circle
        self.cirle = kwargs.get('cirle', Circle())
        from v2x_msg.msg import RegionPointSet
        self.regionpointset = kwargs.get('regionpointset', RegionPointSet())

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
        if self.shapepointset != other.shapepointset:
            return False
        if self.cirle != other.cirle:
            return False
        if self.regionpointset != other.regionpointset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def shapepointset(self):
        """Message field 'shapepointset'."""
        return self._shapepointset

    @shapepointset.setter
    def shapepointset(self, value):
        if __debug__:
            from v2x_msg.msg import ShapePointSet
            assert \
                isinstance(value, ShapePointSet), \
                "The 'shapepointset' field must be a sub message of type 'ShapePointSet'"
        self._shapepointset = value

    @builtins.property
    def cirle(self):
        """Message field 'cirle'."""
        return self._cirle

    @cirle.setter
    def cirle(self, value):
        if __debug__:
            from v2x_msg.msg import Circle
            assert \
                isinstance(value, Circle), \
                "The 'cirle' field must be a sub message of type 'Circle'"
        self._cirle = value

    @builtins.property
    def regionpointset(self):
        """Message field 'regionpointset'."""
        return self._regionpointset

    @regionpointset.setter
    def regionpointset(self, value):
        if __debug__:
            from v2x_msg.msg import RegionPointSet
            assert \
                isinstance(value, RegionPointSet), \
                "The 'regionpointset' field must be a sub message of type 'RegionPointSet'"
        self._regionpointset = value
