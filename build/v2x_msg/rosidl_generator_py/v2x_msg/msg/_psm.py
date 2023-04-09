# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/PSM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PSM(type):
    """Metaclass of message 'PSM'."""

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
                'v2x_msg.msg.PSM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__psm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__psm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__psm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__psm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__psm

            from v2x_msg.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from v2x_msg.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from v2x_msg.msg import PathPrediction
            if PathPrediction.__class__._TYPE_SUPPORT is None:
                PathPrediction.__class__.__import_type_support__()

            from v2x_msg.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from v2x_msg.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from v2x_msg.msg import PropelledInformation
            if PropelledInformation.__class__._TYPE_SUPPORT is None:
                PropelledInformation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PSM(metaclass=Metaclass_PSM):
    """Message class 'PSM'."""

    __slots__ = [
        '_basictype',
        '_secmark',
        '_msgcnt',
        '_id',
        '_position',
        '_accuracy',
        '_speed',
        '_heading',
        '_accelset',
        '_pathhistory',
        '_pathprediction',
        '_propulsion',
        '_usestate',
        '_crossrequest',
        '_crossstate',
        '_clustersize',
        '_clusterradius',
        '_eventrespondertype',
        '_activitytype',
        '_activitysubtype',
        '_assisttype',
        '_sizing',
        '_attachment',
        '_attachmentradius',
        '_animaltype',
    ]

    _fields_and_field_types = {
        'basictype': 'int64',
        'secmark': 'int64',
        'msgcnt': 'int64',
        'id': 'string',
        'position': 'v2x_msg/Position3D',
        'accuracy': 'v2x_msg/PositionalAccuracy',
        'speed': 'int64',
        'heading': 'int64',
        'accelset': 'v2x_msg/AccelerationSet4Way',
        'pathhistory': 'v2x_msg/PathHistory',
        'pathprediction': 'v2x_msg/PathPrediction',
        'propulsion': 'v2x_msg/PropelledInformation',
        'usestate': 'string',
        'crossrequest': 'boolean',
        'crossstate': 'boolean',
        'clustersize': 'int64',
        'clusterradius': 'int64',
        'eventrespondertype': 'int64',
        'activitytype': 'string',
        'activitysubtype': 'string',
        'assisttype': 'string',
        'sizing': 'string',
        'attachment': 'int64',
        'attachmentradius': 'int64',
        'animaltype': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathHistory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PathPrediction'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'PropelledInformation'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.basictype = kwargs.get('basictype', int())
        self.secmark = kwargs.get('secmark', int())
        self.msgcnt = kwargs.get('msgcnt', int())
        self.id = kwargs.get('id', str())
        from v2x_msg.msg import Position3D
        self.position = kwargs.get('position', Position3D())
        from v2x_msg.msg import PositionalAccuracy
        self.accuracy = kwargs.get('accuracy', PositionalAccuracy())
        self.speed = kwargs.get('speed', int())
        self.heading = kwargs.get('heading', int())
        from v2x_msg.msg import AccelerationSet4Way
        self.accelset = kwargs.get('accelset', AccelerationSet4Way())
        from v2x_msg.msg import PathHistory
        self.pathhistory = kwargs.get('pathhistory', PathHistory())
        from v2x_msg.msg import PathPrediction
        self.pathprediction = kwargs.get('pathprediction', PathPrediction())
        from v2x_msg.msg import PropelledInformation
        self.propulsion = kwargs.get('propulsion', PropelledInformation())
        self.usestate = kwargs.get('usestate', str())
        self.crossrequest = kwargs.get('crossrequest', bool())
        self.crossstate = kwargs.get('crossstate', bool())
        self.clustersize = kwargs.get('clustersize', int())
        self.clusterradius = kwargs.get('clusterradius', int())
        self.eventrespondertype = kwargs.get('eventrespondertype', int())
        self.activitytype = kwargs.get('activitytype', str())
        self.activitysubtype = kwargs.get('activitysubtype', str())
        self.assisttype = kwargs.get('assisttype', str())
        self.sizing = kwargs.get('sizing', str())
        self.attachment = kwargs.get('attachment', int())
        self.attachmentradius = kwargs.get('attachmentradius', int())
        self.animaltype = kwargs.get('animaltype', int())

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
        if self.basictype != other.basictype:
            return False
        if self.secmark != other.secmark:
            return False
        if self.msgcnt != other.msgcnt:
            return False
        if self.id != other.id:
            return False
        if self.position != other.position:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.speed != other.speed:
            return False
        if self.heading != other.heading:
            return False
        if self.accelset != other.accelset:
            return False
        if self.pathhistory != other.pathhistory:
            return False
        if self.pathprediction != other.pathprediction:
            return False
        if self.propulsion != other.propulsion:
            return False
        if self.usestate != other.usestate:
            return False
        if self.crossrequest != other.crossrequest:
            return False
        if self.crossstate != other.crossstate:
            return False
        if self.clustersize != other.clustersize:
            return False
        if self.clusterradius != other.clusterradius:
            return False
        if self.eventrespondertype != other.eventrespondertype:
            return False
        if self.activitytype != other.activitytype:
            return False
        if self.activitysubtype != other.activitysubtype:
            return False
        if self.assisttype != other.assisttype:
            return False
        if self.sizing != other.sizing:
            return False
        if self.attachment != other.attachment:
            return False
        if self.attachmentradius != other.attachmentradius:
            return False
        if self.animaltype != other.animaltype:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def basictype(self):
        """Message field 'basictype'."""
        return self._basictype

    @basictype.setter
    def basictype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basictype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'basictype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._basictype = value

    @builtins.property
    def secmark(self):
        """Message field 'secmark'."""
        return self._secmark

    @secmark.setter
    def secmark(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'secmark' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'secmark' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._secmark = value

    @builtins.property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgcnt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgcnt = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from v2x_msg.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'position' field must be a sub message of type 'Position3D'"
        self._position = value

    @builtins.property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            from v2x_msg.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._accuracy = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'heading' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._heading = value

    @builtins.property
    def accelset(self):
        """Message field 'accelset'."""
        return self._accelset

    @accelset.setter
    def accelset(self, value):
        if __debug__:
            from v2x_msg.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'accelset' field must be a sub message of type 'AccelerationSet4Way'"
        self._accelset = value

    @builtins.property
    def pathhistory(self):
        """Message field 'pathhistory'."""
        return self._pathhistory

    @pathhistory.setter
    def pathhistory(self, value):
        if __debug__:
            from v2x_msg.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'pathhistory' field must be a sub message of type 'PathHistory'"
        self._pathhistory = value

    @builtins.property
    def pathprediction(self):
        """Message field 'pathprediction'."""
        return self._pathprediction

    @pathprediction.setter
    def pathprediction(self, value):
        if __debug__:
            from v2x_msg.msg import PathPrediction
            assert \
                isinstance(value, PathPrediction), \
                "The 'pathprediction' field must be a sub message of type 'PathPrediction'"
        self._pathprediction = value

    @builtins.property
    def propulsion(self):
        """Message field 'propulsion'."""
        return self._propulsion

    @propulsion.setter
    def propulsion(self, value):
        if __debug__:
            from v2x_msg.msg import PropelledInformation
            assert \
                isinstance(value, PropelledInformation), \
                "The 'propulsion' field must be a sub message of type 'PropelledInformation'"
        self._propulsion = value

    @builtins.property
    def usestate(self):
        """Message field 'usestate'."""
        return self._usestate

    @usestate.setter
    def usestate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'usestate' field must be of type 'str'"
        self._usestate = value

    @builtins.property
    def crossrequest(self):
        """Message field 'crossrequest'."""
        return self._crossrequest

    @crossrequest.setter
    def crossrequest(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'crossrequest' field must be of type 'bool'"
        self._crossrequest = value

    @builtins.property
    def crossstate(self):
        """Message field 'crossstate'."""
        return self._crossstate

    @crossstate.setter
    def crossstate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'crossstate' field must be of type 'bool'"
        self._crossstate = value

    @builtins.property
    def clustersize(self):
        """Message field 'clustersize'."""
        return self._clustersize

    @clustersize.setter
    def clustersize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clustersize' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'clustersize' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._clustersize = value

    @builtins.property
    def clusterradius(self):
        """Message field 'clusterradius'."""
        return self._clusterradius

    @clusterradius.setter
    def clusterradius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clusterradius' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'clusterradius' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._clusterradius = value

    @builtins.property
    def eventrespondertype(self):
        """Message field 'eventrespondertype'."""
        return self._eventrespondertype

    @eventrespondertype.setter
    def eventrespondertype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eventrespondertype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'eventrespondertype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._eventrespondertype = value

    @builtins.property
    def activitytype(self):
        """Message field 'activitytype'."""
        return self._activitytype

    @activitytype.setter
    def activitytype(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'activitytype' field must be of type 'str'"
        self._activitytype = value

    @builtins.property
    def activitysubtype(self):
        """Message field 'activitysubtype'."""
        return self._activitysubtype

    @activitysubtype.setter
    def activitysubtype(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'activitysubtype' field must be of type 'str'"
        self._activitysubtype = value

    @builtins.property
    def assisttype(self):
        """Message field 'assisttype'."""
        return self._assisttype

    @assisttype.setter
    def assisttype(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'assisttype' field must be of type 'str'"
        self._assisttype = value

    @builtins.property
    def sizing(self):
        """Message field 'sizing'."""
        return self._sizing

    @sizing.setter
    def sizing(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sizing' field must be of type 'str'"
        self._sizing = value

    @builtins.property
    def attachment(self):
        """Message field 'attachment'."""
        return self._attachment

    @attachment.setter
    def attachment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attachment' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'attachment' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._attachment = value

    @builtins.property
    def attachmentradius(self):
        """Message field 'attachmentradius'."""
        return self._attachmentradius

    @attachmentradius.setter
    def attachmentradius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attachmentradius' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'attachmentradius' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._attachmentradius = value

    @builtins.property
    def animaltype(self):
        """Message field 'animaltype'."""
        return self._animaltype

    @animaltype.setter
    def animaltype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'animaltype' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'animaltype' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._animaltype = value
