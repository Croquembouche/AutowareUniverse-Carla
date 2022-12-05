# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RequestorDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestorDescription(type):
    """Metaclass of message 'RequestorDescription'."""

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
                'v2x_msg.msg.RequestorDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__requestor_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__requestor_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__requestor_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__requestor_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__requestor_description

            from v2x_msg.msg import RequestorPositionVector
            if RequestorPositionVector.__class__._TYPE_SUPPORT is None:
                RequestorPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import RequestorType
            if RequestorType.__class__._TYPE_SUPPORT is None:
                RequestorType.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleID
            if VehicleID.__class__._TYPE_SUPPORT is None:
                VehicleID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestorDescription(metaclass=Metaclass_RequestorDescription):
    """Message class 'RequestorDescription'."""

    __slots__ = [
        '_id',
        '_type',
        '_position',
        '_name',
        '_routename',
        '_transitstatus',
        '_transitoccupancy',
        '_transitschedule',
    ]

    _fields_and_field_types = {
        'id': 'v2x_msg/VehicleID',
        'type': 'v2x_msg/RequestorType',
        'position': 'v2x_msg/RequestorPositionVector',
        'name': 'string',
        'routename': 'string',
        'transitstatus': 'string',
        'transitoccupancy': 'int64',
        'transitschedule': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RequestorType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RequestorPositionVector'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import VehicleID
        self.id = kwargs.get('id', VehicleID())
        from v2x_msg.msg import RequestorType
        self.type = kwargs.get('type', RequestorType())
        from v2x_msg.msg import RequestorPositionVector
        self.position = kwargs.get('position', RequestorPositionVector())
        self.name = kwargs.get('name', str())
        self.routename = kwargs.get('routename', str())
        self.transitstatus = kwargs.get('transitstatus', str())
        self.transitoccupancy = kwargs.get('transitoccupancy', int())
        self.transitschedule = kwargs.get('transitschedule', int())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.position != other.position:
            return False
        if self.name != other.name:
            return False
        if self.routename != other.routename:
            return False
        if self.transitstatus != other.transitstatus:
            return False
        if self.transitoccupancy != other.transitoccupancy:
            return False
        if self.transitschedule != other.transitschedule:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import VehicleID
            assert \
                isinstance(value, VehicleID), \
                "The 'id' field must be a sub message of type 'VehicleID'"
        self._id = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import RequestorType
            assert \
                isinstance(value, RequestorType), \
                "The 'type' field must be a sub message of type 'RequestorType'"
        self._type = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from v2x_msg.msg import RequestorPositionVector
            assert \
                isinstance(value, RequestorPositionVector), \
                "The 'position' field must be a sub message of type 'RequestorPositionVector'"
        self._position = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def routename(self):
        """Message field 'routename'."""
        return self._routename

    @routename.setter
    def routename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'routename' field must be of type 'str'"
        self._routename = value

    @property
    def transitstatus(self):
        """Message field 'transitstatus'."""
        return self._transitstatus

    @transitstatus.setter
    def transitstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'transitstatus' field must be of type 'str'"
        self._transitstatus = value

    @property
    def transitoccupancy(self):
        """Message field 'transitoccupancy'."""
        return self._transitoccupancy

    @transitoccupancy.setter
    def transitoccupancy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transitoccupancy' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'transitoccupancy' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._transitoccupancy = value

    @property
    def transitschedule(self):
        """Message field 'transitschedule'."""
        return self._transitschedule

    @transitschedule.setter
    def transitschedule(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transitschedule' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'transitschedule' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._transitschedule = value
