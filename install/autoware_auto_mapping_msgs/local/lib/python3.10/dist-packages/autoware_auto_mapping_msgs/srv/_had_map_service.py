# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'requested_primitives'
# Member 'geom_upper_bound'
# Member 'geom_lower_bound'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HADMapService_Request(type):
    """Metaclass of message 'HADMapService_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FULL_MAP': 0,
        'ALL_PRIMITIVES': 1,
        'DRIVEABLE_GEOMETRY': 2,
        'REGULATORY_ELEMENTS': 3,
        'STATIC_OBJECTS': 4,
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
                'autoware_auto_mapping_msgs.srv.HADMapService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__had_map_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__had_map_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__had_map_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__had_map_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__had_map_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FULL_MAP': cls.__constants['FULL_MAP'],
            'ALL_PRIMITIVES': cls.__constants['ALL_PRIMITIVES'],
            'DRIVEABLE_GEOMETRY': cls.__constants['DRIVEABLE_GEOMETRY'],
            'REGULATORY_ELEMENTS': cls.__constants['REGULATORY_ELEMENTS'],
            'STATIC_OBJECTS': cls.__constants['STATIC_OBJECTS'],
        }

    @property
    def FULL_MAP(self):
        """Message constant 'FULL_MAP'."""
        return Metaclass_HADMapService_Request.__constants['FULL_MAP']

    @property
    def ALL_PRIMITIVES(self):
        """Message constant 'ALL_PRIMITIVES'."""
        return Metaclass_HADMapService_Request.__constants['ALL_PRIMITIVES']

    @property
    def DRIVEABLE_GEOMETRY(self):
        """Message constant 'DRIVEABLE_GEOMETRY'."""
        return Metaclass_HADMapService_Request.__constants['DRIVEABLE_GEOMETRY']

    @property
    def REGULATORY_ELEMENTS(self):
        """Message constant 'REGULATORY_ELEMENTS'."""
        return Metaclass_HADMapService_Request.__constants['REGULATORY_ELEMENTS']

    @property
    def STATIC_OBJECTS(self):
        """Message constant 'STATIC_OBJECTS'."""
        return Metaclass_HADMapService_Request.__constants['STATIC_OBJECTS']


class HADMapService_Request(metaclass=Metaclass_HADMapService_Request):
    """
    Message class 'HADMapService_Request'.

    Constants:
      FULL_MAP
      ALL_PRIMITIVES
      DRIVEABLE_GEOMETRY
      REGULATORY_ELEMENTS
      STATIC_OBJECTS
    """

    __slots__ = [
        '_requested_primitives',
        '_geom_upper_bound',
        '_geom_lower_bound',
    ]

    _fields_and_field_types = {
        'requested_primitives': 'sequence<uint8>',
        'geom_upper_bound': 'sequence<double, 3>',
        'geom_lower_bound': 'sequence<double, 3>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.requested_primitives = array.array('B', kwargs.get('requested_primitives', []))
        self.geom_upper_bound = array.array('d', kwargs.get('geom_upper_bound', []))
        self.geom_lower_bound = array.array('d', kwargs.get('geom_lower_bound', []))

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
        if self.requested_primitives != other.requested_primitives:
            return False
        if self.geom_upper_bound != other.geom_upper_bound:
            return False
        if self.geom_lower_bound != other.geom_lower_bound:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def requested_primitives(self):
        """Message field 'requested_primitives'."""
        return self._requested_primitives

    @requested_primitives.setter
    def requested_primitives(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'requested_primitives' array.array() must have the type code of 'B'"
            self._requested_primitives = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'requested_primitives' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._requested_primitives = array.array('B', value)

    @builtins.property
    def geom_upper_bound(self):
        """Message field 'geom_upper_bound'."""
        return self._geom_upper_bound

    @geom_upper_bound.setter
    def geom_upper_bound(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'geom_upper_bound' array.array() must have the type code of 'd'"
            assert len(value) <= 3, \
                "The 'geom_upper_bound' array.array() must have a size <= 3"
            self._geom_upper_bound = value
            return
        if __debug__:
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
                 len(value) <= 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'geom_upper_bound' field must be a set or sequence with length <= 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._geom_upper_bound = array.array('d', value)

    @builtins.property
    def geom_lower_bound(self):
        """Message field 'geom_lower_bound'."""
        return self._geom_lower_bound

    @geom_lower_bound.setter
    def geom_lower_bound(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'geom_lower_bound' array.array() must have the type code of 'd'"
            assert len(value) <= 3, \
                "The 'geom_lower_bound' array.array() must have a size <= 3"
            self._geom_lower_bound = value
            return
        if __debug__:
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
                 len(value) <= 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'geom_lower_bound' field must be a set or sequence with length <= 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._geom_lower_bound = array.array('d', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HADMapService_Response(type):
    """Metaclass of message 'HADMapService_Response'."""

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
                'autoware_auto_mapping_msgs.srv.HADMapService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__had_map_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__had_map_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__had_map_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__had_map_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__had_map_service__response

            from autoware_auto_mapping_msgs.msg import HADMapBin
            if HADMapBin.__class__._TYPE_SUPPORT is None:
                HADMapBin.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HADMapService_Response(metaclass=Metaclass_HADMapService_Response):
    """Message class 'HADMapService_Response'."""

    __slots__ = [
        '_map',
        '_answer',
    ]

    _fields_and_field_types = {
        'map': 'autoware_auto_mapping_msgs/HADMapBin',
        'answer': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_mapping_msgs', 'msg'], 'HADMapBin'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_mapping_msgs.msg import HADMapBin
        self.map = kwargs.get('map', HADMapBin())
        self.answer = kwargs.get('answer', int())

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
        if self.map != other.map:
            return False
        if self.answer != other.answer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if __debug__:
            from autoware_auto_mapping_msgs.msg import HADMapBin
            assert \
                isinstance(value, HADMapBin), \
                "The 'map' field must be a sub message of type 'HADMapBin'"
        self._map = value

    @builtins.property
    def answer(self):
        """Message field 'answer'."""
        return self._answer

    @answer.setter
    def answer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'answer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'answer' field must be an integer in [-2147483648, 2147483647]"
        self._answer = value


class Metaclass_HADMapService(type):
    """Metaclass of service 'HADMapService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_mapping_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_mapping_msgs.srv.HADMapService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__had_map_service

            from autoware_auto_mapping_msgs.srv import _had_map_service
            if _had_map_service.Metaclass_HADMapService_Request._TYPE_SUPPORT is None:
                _had_map_service.Metaclass_HADMapService_Request.__import_type_support__()
            if _had_map_service.Metaclass_HADMapService_Response._TYPE_SUPPORT is None:
                _had_map_service.Metaclass_HADMapService_Response.__import_type_support__()


class HADMapService(metaclass=Metaclass_HADMapService):
    from autoware_auto_mapping_msgs.srv._had_map_service import HADMapService_Request as Request
    from autoware_auto_mapping_msgs.srv._had_map_service import HADMapService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
