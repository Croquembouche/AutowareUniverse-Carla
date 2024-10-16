# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitializeLocalization_Request(type):
    """Metaclass of message 'InitializeLocalization_Request'."""

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
                'autoware_adapi_v1_msgs.srv.InitializeLocalization_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__initialize_localization__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__initialize_localization__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__initialize_localization__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__initialize_localization__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__initialize_localization__request

            from geometry_msgs.msg import PoseWithCovarianceStamped
            if PoseWithCovarianceStamped.__class__._TYPE_SUPPORT is None:
                PoseWithCovarianceStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitializeLocalization_Request(metaclass=Metaclass_InitializeLocalization_Request):
    """Message class 'InitializeLocalization_Request'."""

    __slots__ = [
        '_pose',
    ]

    _fields_and_field_types = {
        'pose': 'sequence<geometry_msgs/PoseWithCovarianceStamped, 1>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovarianceStamped'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pose = kwargs.get('pose', [])

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
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovarianceStamped
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
                 len(value) <= 1 and
                 all(isinstance(v, PoseWithCovarianceStamped) for v in value) and
                 True), \
                "The 'pose' field must be a set or sequence with length <= 1 and each value of type 'PoseWithCovarianceStamped'"
        self._pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InitializeLocalization_Response(type):
    """Metaclass of message 'InitializeLocalization_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_UNSAFE': 1,
        'ERROR_GNSS_SUPPORT': 2,
        'ERROR_GNSS': 3,
        'ERROR_ESTIMATION': 4,
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
                'autoware_adapi_v1_msgs.srv.InitializeLocalization_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__initialize_localization__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__initialize_localization__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__initialize_localization__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__initialize_localization__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__initialize_localization__response

            from autoware_adapi_v1_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_UNSAFE': cls.__constants['ERROR_UNSAFE'],
            'ERROR_GNSS_SUPPORT': cls.__constants['ERROR_GNSS_SUPPORT'],
            'ERROR_GNSS': cls.__constants['ERROR_GNSS'],
            'ERROR_ESTIMATION': cls.__constants['ERROR_ESTIMATION'],
        }

    @property
    def ERROR_UNSAFE(self):
        """Message constant 'ERROR_UNSAFE'."""
        return Metaclass_InitializeLocalization_Response.__constants['ERROR_UNSAFE']

    @property
    def ERROR_GNSS_SUPPORT(self):
        """Message constant 'ERROR_GNSS_SUPPORT'."""
        return Metaclass_InitializeLocalization_Response.__constants['ERROR_GNSS_SUPPORT']

    @property
    def ERROR_GNSS(self):
        """Message constant 'ERROR_GNSS'."""
        return Metaclass_InitializeLocalization_Response.__constants['ERROR_GNSS']

    @property
    def ERROR_ESTIMATION(self):
        """Message constant 'ERROR_ESTIMATION'."""
        return Metaclass_InitializeLocalization_Response.__constants['ERROR_ESTIMATION']


class InitializeLocalization_Response(metaclass=Metaclass_InitializeLocalization_Response):
    """
    Message class 'InitializeLocalization_Response'.

    Constants:
      ERROR_UNSAFE
      ERROR_GNSS_SUPPORT
      ERROR_GNSS
      ERROR_ESTIMATION
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


class Metaclass_InitializeLocalization(type):
    """Metaclass of service 'InitializeLocalization'."""

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
                'autoware_adapi_v1_msgs.srv.InitializeLocalization')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__initialize_localization

            from autoware_adapi_v1_msgs.srv import _initialize_localization
            if _initialize_localization.Metaclass_InitializeLocalization_Request._TYPE_SUPPORT is None:
                _initialize_localization.Metaclass_InitializeLocalization_Request.__import_type_support__()
            if _initialize_localization.Metaclass_InitializeLocalization_Response._TYPE_SUPPORT is None:
                _initialize_localization.Metaclass_InitializeLocalization_Response.__import_type_support__()


class InitializeLocalization(metaclass=Metaclass_InitializeLocalization):
    from autoware_adapi_v1_msgs.srv._initialize_localization import InitializeLocalization_Request as Request
    from autoware_adapi_v1_msgs.srv._initialize_localization import InitializeLocalization_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
