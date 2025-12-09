# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/PidInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PidInterface(type):
    """Metaclass of message 'PidInterface'."""

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
            module = import_type_support('car_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'car_interfaces.msg.PidInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PidInterface(metaclass=Metaclass_PidInterface):
    """Message class 'PidInterface'."""

    __slots__ = [
        '_timestamp',
        '_refspeed',
        '_nowspeed',
        '_angle',
        '_gear',
        '_throttle_percentage',
        '_braking_percentage',
        '_process_time',
        '_cte',
        '_dhead',
        '_curpos_x',
        '_curpos_y',
        '_refpox_x',
        '_refpox_y',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'refspeed': 'float',
        'nowspeed': 'float',
        'angle': 'float',
        'gear': 'uint8',
        'throttle_percentage': 'uint8',
        'braking_percentage': 'uint8',
        'process_time': 'float',
        'cte': 'float',
        'dhead': 'float',
        'curpos_x': 'float',
        'curpos_y': 'float',
        'refpox_x': 'float',
        'refpox_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.refspeed = kwargs.get('refspeed', float())
        self.nowspeed = kwargs.get('nowspeed', float())
        self.angle = kwargs.get('angle', float())
        self.gear = kwargs.get('gear', int())
        self.throttle_percentage = kwargs.get('throttle_percentage', int())
        self.braking_percentage = kwargs.get('braking_percentage', int())
        self.process_time = kwargs.get('process_time', float())
        self.cte = kwargs.get('cte', float())
        self.dhead = kwargs.get('dhead', float())
        self.curpos_x = kwargs.get('curpos_x', float())
        self.curpos_y = kwargs.get('curpos_y', float())
        self.refpox_x = kwargs.get('refpox_x', float())
        self.refpox_y = kwargs.get('refpox_y', float())

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
        if self.refspeed != other.refspeed:
            return False
        if self.nowspeed != other.nowspeed:
            return False
        if self.angle != other.angle:
            return False
        if self.gear != other.gear:
            return False
        if self.throttle_percentage != other.throttle_percentage:
            return False
        if self.braking_percentage != other.braking_percentage:
            return False
        if self.process_time != other.process_time:
            return False
        if self.cte != other.cte:
            return False
        if self.dhead != other.dhead:
            return False
        if self.curpos_x != other.curpos_x:
            return False
        if self.curpos_y != other.curpos_y:
            return False
        if self.refpox_x != other.refpox_x:
            return False
        if self.refpox_y != other.refpox_y:
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
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
        self._timestamp = value

    @property
    def refspeed(self):
        """Message field 'refspeed'."""
        return self._refspeed

    @refspeed.setter
    def refspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refspeed' field must be of type 'float'"
        self._refspeed = value

    @property
    def nowspeed(self):
        """Message field 'nowspeed'."""
        return self._nowspeed

    @nowspeed.setter
    def nowspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nowspeed' field must be of type 'float'"
        self._nowspeed = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value

    @property
    def throttle_percentage(self):
        """Message field 'throttle_percentage'."""
        return self._throttle_percentage

    @throttle_percentage.setter
    def throttle_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'throttle_percentage' field must be an unsigned integer in [0, 255]"
        self._throttle_percentage = value

    @property
    def braking_percentage(self):
        """Message field 'braking_percentage'."""
        return self._braking_percentage

    @braking_percentage.setter
    def braking_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'braking_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'braking_percentage' field must be an unsigned integer in [0, 255]"
        self._braking_percentage = value

    @property
    def process_time(self):
        """Message field 'process_time'."""
        return self._process_time

    @process_time.setter
    def process_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_time' field must be of type 'float'"
        self._process_time = value

    @property
    def cte(self):
        """Message field 'cte'."""
        return self._cte

    @cte.setter
    def cte(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cte' field must be of type 'float'"
        self._cte = value

    @property
    def dhead(self):
        """Message field 'dhead'."""
        return self._dhead

    @dhead.setter
    def dhead(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dhead' field must be of type 'float'"
        self._dhead = value

    @property
    def curpos_x(self):
        """Message field 'curpos_x'."""
        return self._curpos_x

    @curpos_x.setter
    def curpos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curpos_x' field must be of type 'float'"
        self._curpos_x = value

    @property
    def curpos_y(self):
        """Message field 'curpos_y'."""
        return self._curpos_y

    @curpos_y.setter
    def curpos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curpos_y' field must be of type 'float'"
        self._curpos_y = value

    @property
    def refpox_x(self):
        """Message field 'refpox_x'."""
        return self._refpox_x

    @refpox_x.setter
    def refpox_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refpox_x' field must be of type 'float'"
        self._refpox_x = value

    @property
    def refpox_y(self):
        """Message field 'refpox_y'."""
        return self._refpox_y

    @refpox_y.setter
    def refpox_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refpox_y' field must be of type 'float'"
        self._refpox_y = value
