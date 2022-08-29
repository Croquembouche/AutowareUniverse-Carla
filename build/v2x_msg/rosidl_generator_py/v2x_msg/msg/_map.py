# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/MAP.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MAP(type):
    """Metaclass of message 'MAP'."""

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
                'v2x_msg.msg.MAP')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map

            from v2x_msg.msg import DataParameters
            if DataParameters.__class__._TYPE_SUPPORT is None:
                DataParameters.__class__.__import_type_support__()

            from v2x_msg.msg import IntersectionGeometry
            if IntersectionGeometry.__class__._TYPE_SUPPORT is None:
                IntersectionGeometry.__class__.__import_type_support__()

            from v2x_msg.msg import RestrictionClassAssignment
            if RestrictionClassAssignment.__class__._TYPE_SUPPORT is None:
                RestrictionClassAssignment.__class__.__import_type_support__()

            from v2x_msg.msg import RoadSegment
            if RoadSegment.__class__._TYPE_SUPPORT is None:
                RoadSegment.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MAP(metaclass=Metaclass_MAP):
    """Message class 'MAP'."""

    __slots__ = [
        '_timestamp',
        '_msgissuerevision',
        '_layertype',
        '_layerid',
        '_intersections',
        '_roadsegments',
        '_dataparameters',
        '_restrictionlist',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'msgissuerevision': 'int64',
        'layertype': 'int64',
        'layerid': 'int64',
        'intersections': 'sequence<v2x_msg/IntersectionGeometry>',
        'roadsegments': 'sequence<v2x_msg/RoadSegment>',
        'dataparameters': 'v2x_msg/DataParameters',
        'restrictionlist': 'sequence<v2x_msg/RestrictionClassAssignment>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'IntersectionGeometry')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RoadSegment')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'DataParameters'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RestrictionClassAssignment')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.msgissuerevision = kwargs.get('msgissuerevision', int())
        self.layertype = kwargs.get('layertype', int())
        self.layerid = kwargs.get('layerid', int())
        self.intersections = kwargs.get('intersections', [])
        self.roadsegments = kwargs.get('roadsegments', [])
        from v2x_msg.msg import DataParameters
        self.dataparameters = kwargs.get('dataparameters', DataParameters())
        self.restrictionlist = kwargs.get('restrictionlist', [])

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
        if self.msgissuerevision != other.msgissuerevision:
            return False
        if self.layertype != other.layertype:
            return False
        if self.layerid != other.layerid:
            return False
        if self.intersections != other.intersections:
            return False
        if self.roadsegments != other.roadsegments:
            return False
        if self.dataparameters != other.dataparameters:
            return False
        if self.restrictionlist != other.restrictionlist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
    def msgissuerevision(self):
        """Message field 'msgissuerevision'."""
        return self._msgissuerevision

    @msgissuerevision.setter
    def msgissuerevision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgissuerevision' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgissuerevision' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgissuerevision = value

    @property
    def layertype(self):
        """Message field 'layertype'."""
        return self._layertype

    @layertype.setter
    def layertype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layertype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'layertype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._layertype = value

    @property
    def layerid(self):
        """Message field 'layerid'."""
        return self._layerid

    @layerid.setter
    def layerid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layerid' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'layerid' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._layerid = value

    @property
    def intersections(self):
        """Message field 'intersections'."""
        return self._intersections

    @intersections.setter
    def intersections(self, value):
        if __debug__:
            from v2x_msg.msg import IntersectionGeometry
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
                 all(isinstance(v, IntersectionGeometry) for v in value) and
                 True), \
                "The 'intersections' field must be a set or sequence and each value of type 'IntersectionGeometry'"
        self._intersections = value

    @property
    def roadsegments(self):
        """Message field 'roadsegments'."""
        return self._roadsegments

    @roadsegments.setter
    def roadsegments(self, value):
        if __debug__:
            from v2x_msg.msg import RoadSegment
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
                 all(isinstance(v, RoadSegment) for v in value) and
                 True), \
                "The 'roadsegments' field must be a set or sequence and each value of type 'RoadSegment'"
        self._roadsegments = value

    @property
    def dataparameters(self):
        """Message field 'dataparameters'."""
        return self._dataparameters

    @dataparameters.setter
    def dataparameters(self, value):
        if __debug__:
            from v2x_msg.msg import DataParameters
            assert \
                isinstance(value, DataParameters), \
                "The 'dataparameters' field must be a sub message of type 'DataParameters'"
        self._dataparameters = value

    @property
    def restrictionlist(self):
        """Message field 'restrictionlist'."""
        return self._restrictionlist

    @restrictionlist.setter
    def restrictionlist(self, value):
        if __debug__:
            from v2x_msg.msg import RestrictionClassAssignment
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
                 all(isinstance(v, RestrictionClassAssignment) for v in value) and
                 True), \
                "The 'restrictionlist' field must be a set or sequence and each value of type 'RestrictionClassAssignment'"
        self._restrictionlist = value
