# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/VehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

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
                'v2x_msg.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

            from v2x_msg.msg import AccelSets
            if AccelSets.__class__._TYPE_SUPPORT is None:
                AccelSets.__class__.__import_type_support__()

            from v2x_msg.msg import BrakeSystemStatus
            if BrakeSystemStatus.__class__._TYPE_SUPPORT is None:
                BrakeSystemStatus.__class__.__import_type_support__()

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import J1939data
            if J1939data.__class__._TYPE_SUPPORT is None:
                J1939data.__class__.__import_type_support__()

            from v2x_msg.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

            from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
            if SpeedandHeadingandThrottleConfidence.__class__._TYPE_SUPPORT is None:
                SpeedandHeadingandThrottleConfidence.__class__.__import_type_support__()

            from v2x_msg.msg import Steering
            if Steering.__class__._TYPE_SUPPORT is None:
                Steering.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleData
            if VehicleData.__class__._TYPE_SUPPORT is None:
                VehicleData.__class__.__import_type_support__()

            from v2x_msg.msg import VehicleIdent
            if VehicleIdent.__class__._TYPE_SUPPORT is None:
                VehicleIdent.__class__.__import_type_support__()

            from v2x_msg.msg import WeatherReport
            if WeatherReport.__class__._TYPE_SUPPORT is None:
                WeatherReport.__class__.__import_type_support__()

            from v2x_msg.msg import WiperSet
            if WiperSet.__class__._TYPE_SUPPORT is None:
                WiperSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """Message class 'VehicleStatus'."""

    __slots__ = [
        '_lights',
        '_lightbar',
        '_wipers',
        '_brakestatus',
        '_roadfriction',
        '_sundata',
        '_raindata',
        '_airtemp',
        '_airpres',
        '_steering',
        '_accelsets',
        '_object',
        '_fullpos',
        '_throttlepos',
        '_speedheadc',
        '_speedc',
        '_vehicledata',
        '_vehicleident',
        '_j1939data',
        '_weatherreport',
        '_gnssstatus',
    ]

    _fields_and_field_types = {
        'lights': 'string',
        'lightbar': 'int64',
        'wipers': 'v2x_msg/WiperSet',
        'brakestatus': 'v2x_msg/BrakeSystemStatus',
        'roadfriction': 'int64',
        'sundata': 'int64',
        'raindata': 'int64',
        'airtemp': 'int64',
        'airpres': 'int64',
        'steering': 'v2x_msg/Steering',
        'accelsets': 'v2x_msg/AccelSets',
        'object': 'v2x_msg/Object',
        'fullpos': 'v2x_msg/FullPositionVector',
        'throttlepos': 'int64',
        'speedheadc': 'v2x_msg/SpeedandHeadingandThrottleConfidence',
        'speedc': 'int64',
        'vehicledata': 'v2x_msg/VehicleData',
        'vehicleident': 'v2x_msg/VehicleIdent',
        'j1939data': 'v2x_msg/J1939data',
        'weatherreport': 'v2x_msg/WeatherReport',
        'gnssstatus': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'WiperSet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'BrakeSystemStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Steering'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'AccelSets'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'SpeedandHeadingandThrottleConfidence'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'VehicleIdent'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'J1939data'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'WeatherReport'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lights = kwargs.get('lights', str())
        self.lightbar = kwargs.get('lightbar', int())
        from v2x_msg.msg import WiperSet
        self.wipers = kwargs.get('wipers', WiperSet())
        from v2x_msg.msg import BrakeSystemStatus
        self.brakestatus = kwargs.get('brakestatus', BrakeSystemStatus())
        self.roadfriction = kwargs.get('roadfriction', int())
        self.sundata = kwargs.get('sundata', int())
        self.raindata = kwargs.get('raindata', int())
        self.airtemp = kwargs.get('airtemp', int())
        self.airpres = kwargs.get('airpres', int())
        from v2x_msg.msg import Steering
        self.steering = kwargs.get('steering', Steering())
        from v2x_msg.msg import AccelSets
        self.accelsets = kwargs.get('accelsets', AccelSets())
        from v2x_msg.msg import Object
        self.object = kwargs.get('object', Object())
        from v2x_msg.msg import FullPositionVector
        self.fullpos = kwargs.get('fullpos', FullPositionVector())
        self.throttlepos = kwargs.get('throttlepos', int())
        from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
        self.speedheadc = kwargs.get('speedheadc', SpeedandHeadingandThrottleConfidence())
        self.speedc = kwargs.get('speedc', int())
        from v2x_msg.msg import VehicleData
        self.vehicledata = kwargs.get('vehicledata', VehicleData())
        from v2x_msg.msg import VehicleIdent
        self.vehicleident = kwargs.get('vehicleident', VehicleIdent())
        from v2x_msg.msg import J1939data
        self.j1939data = kwargs.get('j1939data', J1939data())
        from v2x_msg.msg import WeatherReport
        self.weatherreport = kwargs.get('weatherreport', WeatherReport())
        self.gnssstatus = kwargs.get('gnssstatus', str())

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
        if self.lights != other.lights:
            return False
        if self.lightbar != other.lightbar:
            return False
        if self.wipers != other.wipers:
            return False
        if self.brakestatus != other.brakestatus:
            return False
        if self.roadfriction != other.roadfriction:
            return False
        if self.sundata != other.sundata:
            return False
        if self.raindata != other.raindata:
            return False
        if self.airtemp != other.airtemp:
            return False
        if self.airpres != other.airpres:
            return False
        if self.steering != other.steering:
            return False
        if self.accelsets != other.accelsets:
            return False
        if self.object != other.object:
            return False
        if self.fullpos != other.fullpos:
            return False
        if self.throttlepos != other.throttlepos:
            return False
        if self.speedheadc != other.speedheadc:
            return False
        if self.speedc != other.speedc:
            return False
        if self.vehicledata != other.vehicledata:
            return False
        if self.vehicleident != other.vehicleident:
            return False
        if self.j1939data != other.j1939data:
            return False
        if self.weatherreport != other.weatherreport:
            return False
        if self.gnssstatus != other.gnssstatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lights(self):
        """Message field 'lights'."""
        return self._lights

    @lights.setter
    def lights(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lights' field must be of type 'str'"
        self._lights = value

    @builtins.property
    def lightbar(self):
        """Message field 'lightbar'."""
        return self._lightbar

    @lightbar.setter
    def lightbar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lightbar' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lightbar' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lightbar = value

    @builtins.property
    def wipers(self):
        """Message field 'wipers'."""
        return self._wipers

    @wipers.setter
    def wipers(self, value):
        if __debug__:
            from v2x_msg.msg import WiperSet
            assert \
                isinstance(value, WiperSet), \
                "The 'wipers' field must be a sub message of type 'WiperSet'"
        self._wipers = value

    @builtins.property
    def brakestatus(self):
        """Message field 'brakestatus'."""
        return self._brakestatus

    @brakestatus.setter
    def brakestatus(self, value):
        if __debug__:
            from v2x_msg.msg import BrakeSystemStatus
            assert \
                isinstance(value, BrakeSystemStatus), \
                "The 'brakestatus' field must be a sub message of type 'BrakeSystemStatus'"
        self._brakestatus = value

    @builtins.property
    def roadfriction(self):
        """Message field 'roadfriction'."""
        return self._roadfriction

    @roadfriction.setter
    def roadfriction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roadfriction' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'roadfriction' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._roadfriction = value

    @builtins.property
    def sundata(self):
        """Message field 'sundata'."""
        return self._sundata

    @sundata.setter
    def sundata(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sundata' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sundata' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sundata = value

    @builtins.property
    def raindata(self):
        """Message field 'raindata'."""
        return self._raindata

    @raindata.setter
    def raindata(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'raindata' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'raindata' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._raindata = value

    @builtins.property
    def airtemp(self):
        """Message field 'airtemp'."""
        return self._airtemp

    @airtemp.setter
    def airtemp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airtemp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'airtemp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._airtemp = value

    @builtins.property
    def airpres(self):
        """Message field 'airpres'."""
        return self._airpres

    @airpres.setter
    def airpres(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airpres' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'airpres' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._airpres = value

    @builtins.property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            from v2x_msg.msg import Steering
            assert \
                isinstance(value, Steering), \
                "The 'steering' field must be a sub message of type 'Steering'"
        self._steering = value

    @builtins.property
    def accelsets(self):
        """Message field 'accelsets'."""
        return self._accelsets

    @accelsets.setter
    def accelsets(self, value):
        if __debug__:
            from v2x_msg.msg import AccelSets
            assert \
                isinstance(value, AccelSets), \
                "The 'accelsets' field must be a sub message of type 'AccelSets'"
        self._accelsets = value

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object' field must be a sub message of type 'Object'"
        self._object = value

    @builtins.property
    def fullpos(self):
        """Message field 'fullpos'."""
        return self._fullpos

    @fullpos.setter
    def fullpos(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'fullpos' field must be a sub message of type 'FullPositionVector'"
        self._fullpos = value

    @builtins.property
    def throttlepos(self):
        """Message field 'throttlepos'."""
        return self._throttlepos

    @throttlepos.setter
    def throttlepos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttlepos' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'throttlepos' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._throttlepos = value

    @builtins.property
    def speedheadc(self):
        """Message field 'speedheadc'."""
        return self._speedheadc

    @speedheadc.setter
    def speedheadc(self, value):
        if __debug__:
            from v2x_msg.msg import SpeedandHeadingandThrottleConfidence
            assert \
                isinstance(value, SpeedandHeadingandThrottleConfidence), \
                "The 'speedheadc' field must be a sub message of type 'SpeedandHeadingandThrottleConfidence'"
        self._speedheadc = value

    @builtins.property
    def speedc(self):
        """Message field 'speedc'."""
        return self._speedc

    @speedc.setter
    def speedc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speedc' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speedc' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speedc = value

    @builtins.property
    def vehicledata(self):
        """Message field 'vehicledata'."""
        return self._vehicledata

    @vehicledata.setter
    def vehicledata(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleData
            assert \
                isinstance(value, VehicleData), \
                "The 'vehicledata' field must be a sub message of type 'VehicleData'"
        self._vehicledata = value

    @builtins.property
    def vehicleident(self):
        """Message field 'vehicleident'."""
        return self._vehicleident

    @vehicleident.setter
    def vehicleident(self, value):
        if __debug__:
            from v2x_msg.msg import VehicleIdent
            assert \
                isinstance(value, VehicleIdent), \
                "The 'vehicleident' field must be a sub message of type 'VehicleIdent'"
        self._vehicleident = value

    @builtins.property
    def j1939data(self):
        """Message field 'j1939data'."""
        return self._j1939data

    @j1939data.setter
    def j1939data(self, value):
        if __debug__:
            from v2x_msg.msg import J1939data
            assert \
                isinstance(value, J1939data), \
                "The 'j1939data' field must be a sub message of type 'J1939data'"
        self._j1939data = value

    @builtins.property
    def weatherreport(self):
        """Message field 'weatherreport'."""
        return self._weatherreport

    @weatherreport.setter
    def weatherreport(self, value):
        if __debug__:
            from v2x_msg.msg import WeatherReport
            assert \
                isinstance(value, WeatherReport), \
                "The 'weatherreport' field must be a sub message of type 'WeatherReport'"
        self._weatherreport = value

    @builtins.property
    def gnssstatus(self):
        """Message field 'gnssstatus'."""
        return self._gnssstatus

    @gnssstatus.setter
    def gnssstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gnssstatus' field must be of type 'str'"
        self._gnssstatus = value
