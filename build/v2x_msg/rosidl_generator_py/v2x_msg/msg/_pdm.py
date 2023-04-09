# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PDM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PDM(type):
    """Metaclass of message 'PDM'."""

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
                'v2x_msg.msg.PDM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pdm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pdm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pdm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pdm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pdm

            from v2x_msg.msg import Sample
            if Sample.__class__._TYPE_SUPPORT is None:
                Sample.__class__.__import_type_support__()

            from v2x_msg.msg import SnapshotDistance
            if SnapshotDistance.__class__._TYPE_SUPPORT is None:
                SnapshotDistance.__class__.__import_type_support__()

            from v2x_msg.msg import SnapshotTime
            if SnapshotTime.__class__._TYPE_SUPPORT is None:
                SnapshotTime.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleStatusRequest
            if VehicleStatusRequest.__class__._TYPE_SUPPORT is None:
                VehicleStatusRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PDM(metaclass=Metaclass_PDM):
    """Message class 'PDM'."""

    __slots__ = [
        '_timestamp',
        '_sample',
        '_directions',
        '_termtime',
        '_termdistance',
        '_snapshottime',
        '_snapshotdistance',
        '_txinterval',
        '_dataelements',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'sample': 'v2x_msg/Sample',
        'directions': 'string',
        'termtime': 'int64',
        'termdistance': 'int64',
        'snapshottime': 'v2x_msg/SnapshotTime',
        'snapshotdistance': 'v2x_msg/SnapshotDistance',
        'txinterval': 'int64',
        'dataelements': 'sequence<v2x_msg/VehicleStatusRequest>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Sample'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SnapshotTime'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SnapshotDistance'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleStatusRequest')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        from v2x_msg.msg import Sample
        self.sample = kwargs.get('sample', Sample())
        self.directions = kwargs.get('directions', str())
        self.termtime = kwargs.get('termtime', int())
        self.termdistance = kwargs.get('termdistance', int())
        from v2x_msg.msg import SnapshotTime
        self.snapshottime = kwargs.get('snapshottime', SnapshotTime())
        from v2x_msg.msg import SnapshotDistance
        self.snapshotdistance = kwargs.get('snapshotdistance', SnapshotDistance())
        self.txinterval = kwargs.get('txinterval', int())
        self.dataelements = kwargs.get('dataelements', [])

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
        if self.timestamp != other.timestamp:
            return False
        if self.sample != other.sample:
            return False
        if self.directions != other.directions:
            return False
        if self.termtime != other.termtime:
            return False
        if self.termdistance != other.termdistance:
            return False
        if self.snapshottime != other.snapshottime:
            return False
        if self.snapshotdistance != other.snapshotdistance:
            return False
        if self.txinterval != other.txinterval:
            return False
        if self.dataelements != other.dataelements:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def sample(self):
        """Message field 'sample'."""
        return self._sample

    @sample.setter
    def sample(self, value):
        if __debug__:
            from v2x_msg.msg import Sample
            assert \
                isinstance(value, Sample), \
                "The 'sample' field must be a sub message of type 'Sample'"
        self._sample = value

    @builtins.property
    def directions(self):
        """Message field 'directions'."""
        return self._directions

    @directions.setter
    def directions(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'directions' field must be of type 'str'"
        self._directions = value

    @builtins.property
    def termtime(self):
        """Message field 'termtime'."""
        return self._termtime

    @termtime.setter
    def termtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'termtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'termtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._termtime = value

    @builtins.property
    def termdistance(self):
        """Message field 'termdistance'."""
        return self._termdistance

    @termdistance.setter
    def termdistance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'termdistance' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'termdistance' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._termdistance = value

    @builtins.property
    def snapshottime(self):
        """Message field 'snapshottime'."""
        return self._snapshottime

    @snapshottime.setter
    def snapshottime(self, value):
        if __debug__:
            from v2x_msg.msg import SnapshotTime
            assert \
                isinstance(value, SnapshotTime), \
                "The 'snapshottime' field must be a sub message of type 'SnapshotTime'"
        self._snapshottime = value

    @builtins.property
    def snapshotdistance(self):
        """Message field 'snapshotdistance'."""
        return self._snapshotdistance

    @snapshotdistance.setter
    def snapshotdistance(self, value):
        if __debug__:
            from v2x_msg.msg import SnapshotDistance
            assert \
                isinstance(value, SnapshotDistance), \
                "The 'snapshotdistance' field must be a sub message of type 'SnapshotDistance'"
        self._snapshotdistance = value

    @builtins.property
    def txinterval(self):
        """Message field 'txinterval'."""
        return self._txinterval

    @txinterval.setter
    def txinterval(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'txinterval' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'txinterval' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._txinterval = value

    @builtins.property
    def dataelements(self):
        """Message field 'dataelements'."""
        return self._dataelements

    @dataelements.setter
    def dataelements(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleStatusRequest
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
                 all(isinstance(v, VehicleStatusRequest) for v in value) and
                 True), \
                "The 'dataelements' field must be a set or sequence and each value of type 'VehicleStatusRequest'"
        self._dataelements = value
