# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PVD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PVD(type):
    """Metaclass of message 'PVD'."""

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
                'v2x_msg.msg.PVD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pvd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pvd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pvd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pvd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pvd

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import Snapshot
            if Snapshot.__class__._TYPE_SUPPORT is None:
                Snapshot.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleClassification
            if VehicleClassification.__class__._TYPE_SUPPORT is None:
                VehicleClassification.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleIdent
            if VehicleIdent.__class__._TYPE_SUPPORT is None:
                VehicleIdent.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PVD(metaclass=Metaclass_PVD):
    """Message class 'PVD'."""

    __slots__ = [
        '_timstamp',
        '_segnum',
        '_probeid',
        '_startvector',
        '_vehicletype',
        '_snapshots',
    ]

    _fields_and_field_types = {
        'timstamp': 'int64',
        'segnum': 'int64',
        'probeid': 'v2x_msg/VehicleIdent',
        'startvector': 'v2x_msg/FullPositionVector',
        'vehicletype': 'v2x_msg/VehicleClassification',
        'snapshots': 'sequence<v2x_msg/Snapshot>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleIdent'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleClassification'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Snapshot')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timstamp = kwargs.get('timstamp', int())
        self.segnum = kwargs.get('segnum', int())
        from v2x_msg.msg import VehicleIdent
        self.probeid = kwargs.get('probeid', VehicleIdent())
        from v2x_msg.msg import FullPositionVector
        self.startvector = kwargs.get('startvector', FullPositionVector())
        from v2x_msg.msg import VehicleClassification
        self.vehicletype = kwargs.get('vehicletype', VehicleClassification())
        self.snapshots = kwargs.get('snapshots', [])

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
        if self.timstamp != other.timstamp:
            return False
        if self.segnum != other.segnum:
            return False
        if self.probeid != other.probeid:
            return False
        if self.startvector != other.startvector:
            return False
        if self.vehicletype != other.vehicletype:
            return False
        if self.snapshots != other.snapshots:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timstamp(self):
        """Message field 'timstamp'."""
        return self._timstamp

    @timstamp.setter
    def timstamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timstamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timstamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timstamp = value

    @property
    def segnum(self):
        """Message field 'segnum'."""
        return self._segnum

    @segnum.setter
    def segnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segnum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'segnum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._segnum = value

    @property
    def probeid(self):
        """Message field 'probeid'."""
        return self._probeid

    @probeid.setter
    def probeid(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleIdent
            assert \
                isinstance(value, VehicleIdent), \
                "The 'probeid' field must be a sub message of type 'VehicleIdent'"
        self._probeid = value

    @property
    def startvector(self):
        """Message field 'startvector'."""
        return self._startvector

    @startvector.setter
    def startvector(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'startvector' field must be a sub message of type 'FullPositionVector'"
        self._startvector = value

    @property
    def vehicletype(self):
        """Message field 'vehicletype'."""
        return self._vehicletype

    @vehicletype.setter
    def vehicletype(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleClassification
            assert \
                isinstance(value, VehicleClassification), \
                "The 'vehicletype' field must be a sub message of type 'VehicleClassification'"
        self._vehicletype = value

    @property
    def snapshots(self):
        """Message field 'snapshots'."""
        return self._snapshots

    @snapshots.setter
    def snapshots(self, value):
        if __debug__:
            from v2x_msg.msg import Snapshot
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
                 all(isinstance(v, Snapshot) for v in value) and
                 True), \
                "The 'snapshots' field must be a set or sequence and each value of type 'Snapshot'"
        self._snapshots = value
