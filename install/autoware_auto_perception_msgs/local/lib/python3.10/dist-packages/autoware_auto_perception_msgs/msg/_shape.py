# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/Shape.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Shape(type):
    """Metaclass of message 'Shape'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOUNDING_BOX': 0,
        'CYLINDER': 1,
        'POLYGON': 2,
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
                'autoware_auto_perception_msgs.msg.Shape')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shape
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shape
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shape
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shape
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shape

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOUNDING_BOX': cls.__constants['BOUNDING_BOX'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'POLYGON': cls.__constants['POLYGON'],
        }

    @property
    def BOUNDING_BOX(self):
        """Message constant 'BOUNDING_BOX'."""
        return Metaclass_Shape.__constants['BOUNDING_BOX']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass_Shape.__constants['CYLINDER']

    @property
    def POLYGON(self):
        """Message constant 'POLYGON'."""
        return Metaclass_Shape.__constants['POLYGON']


class Shape(metaclass=Metaclass_Shape):
    """
    Message class 'Shape'.

    Constants:
      BOUNDING_BOX
      CYLINDER
      POLYGON
    """

    __slots__ = [
        '_type',
        '_footprint',
        '_dimensions',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'footprint': 'geometry_msgs/Polygon',
        'dimensions': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from geometry_msgs.msg import Polygon
        self.footprint = kwargs.get('footprint', Polygon())
        from geometry_msgs.msg import Vector3
        self.dimensions = kwargs.get('dimensions', Vector3())

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
        if self.type != other.type:
            return False
        if self.footprint != other.footprint:
            return False
        if self.dimensions != other.dimensions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def footprint(self):
        """Message field 'footprint'."""
        return self._footprint

    @footprint.setter
    def footprint(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'footprint' field must be a sub message of type 'Polygon'"
        self._footprint = value

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'dimensions' field must be a sub message of type 'Vector3'"
        self._dimensions = value
