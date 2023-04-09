# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Description.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Description(type):
    """Metaclass of message 'Description'."""

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
                'v2x_msg.msg.Description')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__description

            from v2x_msg.msg import GeometricProjection
            if GeometricProjection.__class__._TYPE_SUPPORT is None:
                GeometricProjection.__class__.__import_type_support__()

            from v2x_msg.msg import OffsetSystem
            if OffsetSystem.__class__._TYPE_SUPPORT is None:
                OffsetSystem.__class__.__import_type_support__()

            from v2x_msg.msg import ValidRegion
            if ValidRegion.__class__._TYPE_SUPPORT is None:
                ValidRegion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Description(metaclass=Metaclass_Description):
    """Message class 'Description'."""

    __slots__ = [
        '_path',
        '_geometry',
        '_oldregion',
    ]

    _fields_and_field_types = {
        'path': 'v2x_msg/OffsetSystem',
        'geometry': 'v2x_msg/GeometricProjection',
        'oldregion': 'v2x_msg/ValidRegion',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'OffsetSystem'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'GeometricProjection'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'ValidRegion'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import OffsetSystem
        self.path = kwargs.get('path', OffsetSystem())
        from v2x_msg.msg import GeometricProjection
        self.geometry = kwargs.get('geometry', GeometricProjection())
        from v2x_msg.msg import ValidRegion
        self.oldregion = kwargs.get('oldregion', ValidRegion())

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
        if self.path != other.path:
            return False
        if self.geometry != other.geometry:
            return False
        if self.oldregion != other.oldregion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from v2x_msg.msg import OffsetSystem
            assert \
                isinstance(value, OffsetSystem), \
                "The 'path' field must be a sub message of type 'OffsetSystem'"
        self._path = value

    @builtins.property
    def geometry(self):
        """Message field 'geometry'."""
        return self._geometry

    @geometry.setter
    def geometry(self, value):
        if __debug__:
            from v2x_msg.msg import GeometricProjection
            assert \
                isinstance(value, GeometricProjection), \
                "The 'geometry' field must be a sub message of type 'GeometricProjection'"
        self._geometry = value

    @builtins.property
    def oldregion(self):
        """Message field 'oldregion'."""
        return self._oldregion

    @oldregion.setter
    def oldregion(self, value):
        if __debug__:
            from v2x_msg.msg import ValidRegion
            assert \
                isinstance(value, ValidRegion), \
                "The 'oldregion' field must be a sub message of type 'ValidRegion'"
        self._oldregion = value
