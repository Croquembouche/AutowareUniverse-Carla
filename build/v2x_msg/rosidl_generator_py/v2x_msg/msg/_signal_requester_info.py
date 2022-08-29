# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/SignalRequesterInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignalRequesterInfo(type):
    """Metaclass of message 'SignalRequesterInfo'."""

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
                'v2x_msg.msg.SignalRequesterInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__signal_requester_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__signal_requester_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__signal_requester_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__signal_requester_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__signal_requester_info

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


class SignalRequesterInfo(metaclass=Metaclass_SignalRequesterInfo):
    """Message class 'SignalRequesterInfo'."""

    __slots__ = [
        '_id',
        '_request',
        '_sequencenumber',
        '_basicvehiclerole',
        '_typedata',
    ]

    _fields_and_field_types = {
        'id': 'v2x_msg/VehicleID',
        'request': 'int64',
        'sequencenumber': 'int64',
        'basicvehiclerole': 'int64',
        'typedata': 'v2x_msg/RequestorType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleID'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RequestorType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from v2x_msg.msg import VehicleID
        self.id = kwargs.get('id', VehicleID())
        self.request = kwargs.get('request', int())
        self.sequencenumber = kwargs.get('sequencenumber', int())
        self.basicvehiclerole = kwargs.get('basicvehiclerole', int())
        from v2x_msg.msg import RequestorType
        self.typedata = kwargs.get('typedata', RequestorType())

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
        if self.request != other.request:
            return False
        if self.sequencenumber != other.sequencenumber:
            return False
        if self.basicvehiclerole != other.basicvehiclerole:
            return False
        if self.typedata != other.typedata:
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

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'request' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._request = value

    @property
    def sequencenumber(self):
        """Message field 'sequencenumber'."""
        return self._sequencenumber

    @sequencenumber.setter
    def sequencenumber(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequencenumber' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sequencenumber' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sequencenumber = value

    @property
    def basicvehiclerole(self):
        """Message field 'basicvehiclerole'."""
        return self._basicvehiclerole

    @basicvehiclerole.setter
    def basicvehiclerole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basicvehiclerole' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'basicvehiclerole' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._basicvehiclerole = value

    @property
    def typedata(self):
        """Message field 'typedata'."""
        return self._typedata

    @typedata.setter
    def typedata(self, value):
        if __debug__:
            from v2x_msg.msg import RequestorType
            assert \
                isinstance(value, RequestorType), \
                "The 'typedata' field must be a sub message of type 'RequestorType'"
        self._typedata = value
