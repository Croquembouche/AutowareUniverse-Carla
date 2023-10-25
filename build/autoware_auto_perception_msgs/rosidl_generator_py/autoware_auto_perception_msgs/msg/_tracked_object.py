# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedObject(type):
    """Metaclass of message 'TrackedObject'."""

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
                'autoware_auto_perception_msgs.msg.TrackedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_object

            from autoware_auto_perception_msgs.msg import ObjectClassification
            if ObjectClassification.__class__._TYPE_SUPPORT is None:
                ObjectClassification.__class__.__import_type_support__()

            from autoware_auto_perception_msgs.msg import Shape
            if Shape.__class__._TYPE_SUPPORT is None:
                Shape.__class__.__import_type_support__()

            from autoware_auto_perception_msgs.msg import TrackedObjectKinematics
            if TrackedObjectKinematics.__class__._TYPE_SUPPORT is None:
                TrackedObjectKinematics.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackedObject(metaclass=Metaclass_TrackedObject):
    """Message class 'TrackedObject'."""

    __slots__ = [
        '_object_id',
        '_existence_probability',
        '_classification',
        '_kinematics',
        '_shape',
    ]

    _fields_and_field_types = {
        'object_id': 'unique_identifier_msgs/UUID',
        'existence_probability': 'float',
        'classification': 'sequence<autoware_auto_perception_msgs/ObjectClassification>',
        'kinematics': 'autoware_auto_perception_msgs/TrackedObjectKinematics',
        'shape': 'autoware_auto_perception_msgs/Shape',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'ObjectClassification')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'TrackedObjectKinematics'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'Shape'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.object_id = kwargs.get('object_id', UUID())
        self.existence_probability = kwargs.get('existence_probability', float())
        self.classification = kwargs.get('classification', [])
        from autoware_auto_perception_msgs.msg import TrackedObjectKinematics
        self.kinematics = kwargs.get('kinematics', TrackedObjectKinematics())
        from autoware_auto_perception_msgs.msg import Shape
        self.shape = kwargs.get('shape', Shape())

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
        if self.object_id != other.object_id:
            return False
        if self.existence_probability != other.existence_probability:
            return False
        if self.classification != other.classification:
            return False
        if self.kinematics != other.kinematics:
            return False
        if self.shape != other.shape:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'object_id' field must be a sub message of type 'UUID'"
        self._object_id = value

    @builtins.property
    def existence_probability(self):
        """Message field 'existence_probability'."""
        return self._existence_probability

    @existence_probability.setter
    def existence_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'existence_probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'existence_probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._existence_probability = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
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
                "The 'classification' field must be a set or sequence and each value of type 'ObjectClassification'"
        self._classification = value

    @builtins.property
    def kinematics(self):
        """Message field 'kinematics'."""
        return self._kinematics

    @kinematics.setter
    def kinematics(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import TrackedObjectKinematics
            assert \
                isinstance(value, TrackedObjectKinematics), \
                "The 'kinematics' field must be a sub message of type 'TrackedObjectKinematics'"
        self._kinematics = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import Shape
            assert \
                isinstance(value, Shape), \
                "The 'shape' field must be a sub message of type 'Shape'"
        self._shape = value
