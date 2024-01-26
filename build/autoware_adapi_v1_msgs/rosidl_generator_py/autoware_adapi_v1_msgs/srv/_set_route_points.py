# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:srv/SetRoutePoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetRoutePoints_Request(type):
    """Metaclass of message 'SetRoutePoints_Request'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.SetRoutePoints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_route_points__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_route_points__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_route_points__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_route_points__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_route_points__request

            from autoware_adapi_v1_msgs.msg import RouteOption
            if RouteOption.__class__._TYPE_SUPPORT is None:
                RouteOption.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetRoutePoints_Request(metaclass=Metaclass_SetRoutePoints_Request):
    """Message class 'SetRoutePoints_Request'."""

    __slots__ = [
        '_header',
        '_option',
        '_goal',
        '_waypoints',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'option': 'autoware_adapi_v1_msgs/RouteOption',
        'goal': 'geometry_msgs/Pose',
        'waypoints': 'sequence<geometry_msgs/Pose>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'RouteOption'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from autoware_adapi_v1_msgs.msg import RouteOption
        self.option = kwargs.get('option', RouteOption())
        from geometry_msgs.msg import Pose
        self.goal = kwargs.get('goal', Pose())
        self.waypoints = kwargs.get('waypoints', [])

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
        if self.header != other.header:
            return False
        if self.option != other.option:
            return False
        if self.goal != other.goal:
            return False
        if self.waypoints != other.waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def option(self):
        """Message field 'option'."""
        return self._option

    @option.setter
    def option(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import RouteOption
            assert \
                isinstance(value, RouteOption), \
                "The 'option' field must be a sub message of type 'RouteOption'"
        self._option = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'goal' field must be a sub message of type 'Pose'"
        self._goal = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Pose'"
        self._waypoints = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetRoutePoints_Response(type):
    """Metaclass of message 'SetRoutePoints_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_ROUTE_EXISTS': 1,
        'ERROR_INVALID_STATE': 1,
        'ERROR_PLANNER_UNREADY': 2,
        'ERROR_PLANNER_FAILED': 3,
        'ERROR_REROUTE_FAILED': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.SetRoutePoints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_route_points__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_route_points__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_route_points__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_route_points__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_route_points__response

            from autoware_adapi_v1_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_ROUTE_EXISTS': cls.__constants['ERROR_ROUTE_EXISTS'],
            'ERROR_INVALID_STATE': cls.__constants['ERROR_INVALID_STATE'],
            'ERROR_PLANNER_UNREADY': cls.__constants['ERROR_PLANNER_UNREADY'],
            'ERROR_PLANNER_FAILED': cls.__constants['ERROR_PLANNER_FAILED'],
            'ERROR_REROUTE_FAILED': cls.__constants['ERROR_REROUTE_FAILED'],
        }

    @property
    def ERROR_ROUTE_EXISTS(self):
        """Message constant 'ERROR_ROUTE_EXISTS'."""
        return Metaclass_SetRoutePoints_Response.__constants['ERROR_ROUTE_EXISTS']

    @property
    def ERROR_INVALID_STATE(self):
        """Message constant 'ERROR_INVALID_STATE'."""
        return Metaclass_SetRoutePoints_Response.__constants['ERROR_INVALID_STATE']

    @property
    def ERROR_PLANNER_UNREADY(self):
        """Message constant 'ERROR_PLANNER_UNREADY'."""
        return Metaclass_SetRoutePoints_Response.__constants['ERROR_PLANNER_UNREADY']

    @property
    def ERROR_PLANNER_FAILED(self):
        """Message constant 'ERROR_PLANNER_FAILED'."""
        return Metaclass_SetRoutePoints_Response.__constants['ERROR_PLANNER_FAILED']

    @property
    def ERROR_REROUTE_FAILED(self):
        """Message constant 'ERROR_REROUTE_FAILED'."""
        return Metaclass_SetRoutePoints_Response.__constants['ERROR_REROUTE_FAILED']


class SetRoutePoints_Response(metaclass=Metaclass_SetRoutePoints_Response):
    """
    Message class 'SetRoutePoints_Response'.

    Constants:
      ERROR_ROUTE_EXISTS
      ERROR_INVALID_STATE
      ERROR_PLANNER_UNREADY
      ERROR_PLANNER_FAILED
      ERROR_REROUTE_FAILED
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'autoware_adapi_v1_msgs/ResponseStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_adapi_v1_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value


class Metaclass_SetRoutePoints(type):
    """Metaclass of service 'SetRoutePoints'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.SetRoutePoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_route_points

            from autoware_adapi_v1_msgs.srv import _set_route_points
            if _set_route_points.Metaclass_SetRoutePoints_Request._TYPE_SUPPORT is None:
                _set_route_points.Metaclass_SetRoutePoints_Request.__import_type_support__()
            if _set_route_points.Metaclass_SetRoutePoints_Response._TYPE_SUPPORT is None:
                _set_route_points.Metaclass_SetRoutePoints_Response.__import_type_support__()


class SetRoutePoints(metaclass=Metaclass_SetRoutePoints):
    from autoware_adapi_v1_msgs.srv._set_route_points import SetRoutePoints_Request as Request
    from autoware_adapi_v1_msgs.srv._set_route_points import SetRoutePoints_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
