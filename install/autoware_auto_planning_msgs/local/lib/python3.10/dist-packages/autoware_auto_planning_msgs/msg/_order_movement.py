# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_planning_msgs:msg/OrderMovement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OrderMovement(type):
    """Metaclass of message 'OrderMovement'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOTSET': 0,
        'STOP': 1,
        'GO': 2,
        'SLOWDOWN': 3,
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
                'autoware_auto_planning_msgs.msg.OrderMovement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__order_movement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__order_movement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__order_movement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__order_movement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__order_movement

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOTSET': cls.__constants['NOTSET'],
            'STOP': cls.__constants['STOP'],
            'GO': cls.__constants['GO'],
            'SLOWDOWN': cls.__constants['SLOWDOWN'],
            'ORDER_MOVEMENT__DEFAULT': 0,
        }

    @property
    def NOTSET(self):
        """Message constant 'NOTSET'."""
        return Metaclass_OrderMovement.__constants['NOTSET']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_OrderMovement.__constants['STOP']

    @property
    def GO(self):
        """Message constant 'GO'."""
        return Metaclass_OrderMovement.__constants['GO']

    @property
    def SLOWDOWN(self):
        """Message constant 'SLOWDOWN'."""
        return Metaclass_OrderMovement.__constants['SLOWDOWN']

    @property
    def ORDER_MOVEMENT__DEFAULT(cls):
        """Return default value for message field 'order_movement'."""
        return 0


class OrderMovement(metaclass=Metaclass_OrderMovement):
    """
    Message class 'OrderMovement'.

    Constants:
      NOTSET
      STOP
      GO
      SLOWDOWN
    """

    __slots__ = [
        '_header',
        '_order_movement',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'order_movement': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.order_movement = kwargs.get(
            'order_movement', OrderMovement.ORDER_MOVEMENT__DEFAULT)

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
        if self.order_movement != other.order_movement:
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
    def order_movement(self):
        """Message field 'order_movement'."""
        return self._order_movement

    @order_movement.setter
    def order_movement(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'order_movement' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'order_movement' field must be an unsigned integer in [0, 255]"
        self._order_movement = value
