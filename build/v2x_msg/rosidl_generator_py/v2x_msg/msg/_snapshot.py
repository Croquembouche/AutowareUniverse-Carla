# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/Snapshot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Snapshot(type):
    """Metaclass of message 'Snapshot'."""

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
                'v2x_msg.msg.Snapshot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__snapshot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__snapshot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__snapshot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__snapshot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__snapshot

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleSafetyExtensions
            if VehicleSafetyExtensions.__class__._TYPE_SUPPORT is None:
                VehicleSafetyExtensions.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleStatus
            if VehicleStatus.__class__._TYPE_SUPPORT is None:
                VehicleStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Snapshot(metaclass=Metaclass_Snapshot):
    """Message class 'Snapshot'."""

    __slots__ = [
        '_theposition',
        '_safetyext',
        '_dataset',
    ]

    _fields_and_field_types = {
        'theposition': 'v2x_msg/FullPositionVector',
        'safetyext': 'v2x_msg/VehicleSafetyExtensions',
        'dataset': 'v2x_msg/VehicleStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleSafetyExtensions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import FullPositionVector
        self.theposition = kwargs.get('theposition', FullPositionVector())
        from v2x_msg.msg import VehicleSafetyExtensions
        self.safetyext = kwargs.get('safetyext', VehicleSafetyExtensions())
        from v2x_msg.msg import VehicleStatus
        self.dataset = kwargs.get('dataset', VehicleStatus())

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
        if self.theposition != other.theposition:
            return False
        if self.safetyext != other.safetyext:
            return False
        if self.dataset != other.dataset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def theposition(self):
        """Message field 'theposition'."""
        return self._theposition

    @theposition.setter
    def theposition(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'theposition' field must be a sub message of type 'FullPositionVector'"
        self._theposition = value

    @builtins.property
    def safetyext(self):
        """Message field 'safetyext'."""
        return self._safetyext

    @safetyext.setter
    def safetyext(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleSafetyExtensions
            assert \
                isinstance(value, VehicleSafetyExtensions), \
                "The 'safetyext' field must be a sub message of type 'VehicleSafetyExtensions'"
        self._safetyext = value

    @builtins.property
    def dataset(self):
        """Message field 'dataset'."""
        return self._dataset

    @dataset.setter
    def dataset(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleStatus
            assert \
                isinstance(value, VehicleStatus), \
                "The 'dataset' field must be a sub message of type 'VehicleStatus'"
        self._dataset = value
