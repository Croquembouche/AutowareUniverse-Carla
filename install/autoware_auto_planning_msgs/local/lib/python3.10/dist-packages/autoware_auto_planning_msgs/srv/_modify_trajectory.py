# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModifyTrajectory_Request(type):
    """Metaclass of message 'ModifyTrajectory_Request'."""

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
            module = import_type_support('autoware_auto_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_planning_msgs.srv.ModifyTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__modify_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__modify_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__modify_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__modify_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__modify_trajectory__request

            from autoware_auto_planning_msgs.msg import Trajectory
            if Trajectory.__class__._TYPE_SUPPORT is None:
                Trajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModifyTrajectory_Request(metaclass=Metaclass_ModifyTrajectory_Request):
    """Message class 'ModifyTrajectory_Request'."""

    __slots__ = [
        '_original_trajectory',
    ]

    _fields_and_field_types = {
        'original_trajectory': 'autoware_auto_planning_msgs/Trajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_planning_msgs', 'msg'], 'Trajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_planning_msgs.msg import Trajectory
        self.original_trajectory = kwargs.get('original_trajectory', Trajectory())

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
        if self.original_trajectory != other.original_trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def original_trajectory(self):
        """Message field 'original_trajectory'."""
        return self._original_trajectory

    @original_trajectory.setter
    def original_trajectory(self, value):
        if __debug__:
            from autoware_auto_planning_msgs.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'original_trajectory' field must be a sub message of type 'Trajectory'"
        self._original_trajectory = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ModifyTrajectory_Response(type):
    """Metaclass of message 'ModifyTrajectory_Response'."""

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
            module = import_type_support('autoware_auto_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_planning_msgs.srv.ModifyTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__modify_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__modify_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__modify_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__modify_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__modify_trajectory__response

            from autoware_auto_planning_msgs.msg import Trajectory
            if Trajectory.__class__._TYPE_SUPPORT is None:
                Trajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModifyTrajectory_Response(metaclass=Metaclass_ModifyTrajectory_Response):
    """Message class 'ModifyTrajectory_Response'."""

    __slots__ = [
        '_modified_trajectory',
    ]

    _fields_and_field_types = {
        'modified_trajectory': 'autoware_auto_planning_msgs/Trajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_planning_msgs', 'msg'], 'Trajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_planning_msgs.msg import Trajectory
        self.modified_trajectory = kwargs.get('modified_trajectory', Trajectory())

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
        if self.modified_trajectory != other.modified_trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def modified_trajectory(self):
        """Message field 'modified_trajectory'."""
        return self._modified_trajectory

    @modified_trajectory.setter
    def modified_trajectory(self, value):
        if __debug__:
            from autoware_auto_planning_msgs.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'modified_trajectory' field must be a sub message of type 'Trajectory'"
        self._modified_trajectory = value


class Metaclass_ModifyTrajectory(type):
    """Metaclass of service 'ModifyTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_planning_msgs.srv.ModifyTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__modify_trajectory

            from autoware_auto_planning_msgs.srv import _modify_trajectory
            if _modify_trajectory.Metaclass_ModifyTrajectory_Request._TYPE_SUPPORT is None:
                _modify_trajectory.Metaclass_ModifyTrajectory_Request.__import_type_support__()
            if _modify_trajectory.Metaclass_ModifyTrajectory_Response._TYPE_SUPPORT is None:
                _modify_trajectory.Metaclass_ModifyTrajectory_Response.__import_type_support__()


class ModifyTrajectory(metaclass=Metaclass_ModifyTrajectory):
    from autoware_auto_planning_msgs.srv._modify_trajectory import ModifyTrajectory_Request as Request
    from autoware_auto_planning_msgs.srv._modify_trajectory import ModifyTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
