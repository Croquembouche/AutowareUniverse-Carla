# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClassifiedRoi(type):
    """Metaclass of message 'ClassifiedRoi'."""

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
            module = import_type_support('autoware_auto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_perception_msgs.msg.ClassifiedRoi')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__classified_roi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__classified_roi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__classified_roi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__classified_roi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__classified_roi

            from autoware_auto_perception_msgs.msg import ObjectClassification
            if ObjectClassification.__class__._TYPE_SUPPORT is None:
                ObjectClassification.__class__.__import_type_support__()

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClassifiedRoi(metaclass=Metaclass_ClassifiedRoi):
    """Message class 'ClassifiedRoi'."""

    __slots__ = [
        '_classifications',
        '_polygon',
    ]

    _fields_and_field_types = {
        'classifications': 'sequence<autoware_auto_perception_msgs/ObjectClassification>',
        'polygon': 'geometry_msgs/Polygon',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'ObjectClassification')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.classifications = kwargs.get('classifications', [])
        from geometry_msgs.msg import Polygon
        self.polygon = kwargs.get('polygon', Polygon())

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
        if self.classifications != other.classifications:
            return False
        if self.polygon != other.polygon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def classifications(self):
        """Message field 'classifications'."""
        return self._classifications

    @classifications.setter
    def classifications(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import ObjectClassification
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
                 all(isinstance(v, ObjectClassification) for v in value) and
                 True), \
                "The 'classifications' field must be a set or sequence and each value of type 'ObjectClassification'"
        self._classifications = value

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'polygon' field must be a sub message of type 'Polygon'"
        self._polygon = value
