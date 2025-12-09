# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/ObuReceive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObuReceive(type):
    """Metaclass of message 'ObuReceive'."""

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
                'car_interfaces.msg.ObuReceive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obu_receive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obu_receive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obu_receive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obu_receive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obu_receive

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObuReceive(metaclass=Metaclass_ObuReceive):
    """Message class 'ObuReceive'."""

    __slots__ = [
        '_color',
        '_time',
        '_dis_to_stopline',
        '_cutin_flag',
        '_end_point_lat',
        '_end_point_lon',
        '_transit_point_1_lat',
        '_transit_point_1_lon',
        '_transit_point_2_lat',
        '_transit_point_2_lon',
    ]

    _fields_and_field_types = {
        'color': 'uint8',
        'time': 'uint8',
        'dis_to_stopline': 'float',
        'cutin_flag': 'uint8',
        'end_point_lat': 'double',
        'end_point_lon': 'double',
        'transit_point_1_lat': 'double',
        'transit_point_1_lon': 'double',
        'transit_point_2_lat': 'double',
        'transit_point_2_lon': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', int())
        self.time = kwargs.get('time', int())
        self.dis_to_stopline = kwargs.get('dis_to_stopline', float())
        self.cutin_flag = kwargs.get('cutin_flag', int())
        self.end_point_lat = kwargs.get('end_point_lat', float())
        self.end_point_lon = kwargs.get('end_point_lon', float())
        self.transit_point_1_lat = kwargs.get('transit_point_1_lat', float())
        self.transit_point_1_lon = kwargs.get('transit_point_1_lon', float())
        self.transit_point_2_lat = kwargs.get('transit_point_2_lat', float())
        self.transit_point_2_lon = kwargs.get('transit_point_2_lon', float())

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
        if self.color != other.color:
            return False
        if self.time != other.time:
            return False
        if self.dis_to_stopline != other.dis_to_stopline:
            return False
        if self.cutin_flag != other.cutin_flag:
            return False
        if self.end_point_lat != other.end_point_lat:
            return False
        if self.end_point_lon != other.end_point_lon:
            return False
        if self.transit_point_1_lat != other.transit_point_1_lat:
            return False
        if self.transit_point_1_lon != other.transit_point_1_lon:
            return False
        if self.transit_point_2_lat != other.transit_point_2_lat:
            return False
        if self.transit_point_2_lon != other.transit_point_2_lon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time' field must be an unsigned integer in [0, 255]"
        self._time = value

    @property
    def dis_to_stopline(self):
        """Message field 'dis_to_stopline'."""
        return self._dis_to_stopline

    @dis_to_stopline.setter
    def dis_to_stopline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dis_to_stopline' field must be of type 'float'"
        self._dis_to_stopline = value

    @property
    def cutin_flag(self):
        """Message field 'cutin_flag'."""
        return self._cutin_flag

    @cutin_flag.setter
    def cutin_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cutin_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cutin_flag' field must be an unsigned integer in [0, 255]"
        self._cutin_flag = value

    @property
    def end_point_lat(self):
        """Message field 'end_point_lat'."""
        return self._end_point_lat

    @end_point_lat.setter
    def end_point_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_point_lat' field must be of type 'float'"
        self._end_point_lat = value

    @property
    def end_point_lon(self):
        """Message field 'end_point_lon'."""
        return self._end_point_lon

    @end_point_lon.setter
    def end_point_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_point_lon' field must be of type 'float'"
        self._end_point_lon = value

    @property
    def transit_point_1_lat(self):
        """Message field 'transit_point_1_lat'."""
        return self._transit_point_1_lat

    @transit_point_1_lat.setter
    def transit_point_1_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transit_point_1_lat' field must be of type 'float'"
        self._transit_point_1_lat = value

    @property
    def transit_point_1_lon(self):
        """Message field 'transit_point_1_lon'."""
        return self._transit_point_1_lon

    @transit_point_1_lon.setter
    def transit_point_1_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transit_point_1_lon' field must be of type 'float'"
        self._transit_point_1_lon = value

    @property
    def transit_point_2_lat(self):
        """Message field 'transit_point_2_lat'."""
        return self._transit_point_2_lat

    @transit_point_2_lat.setter
    def transit_point_2_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transit_point_2_lat' field must be of type 'float'"
        self._transit_point_2_lat = value

    @property
    def transit_point_2_lon(self):
        """Message field 'transit_point_2_lon'."""
        return self._transit_point_2_lon

    @transit_point_2_lon.setter
    def transit_point_2_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'transit_point_2_lon' field must be of type 'float'"
        self._transit_point_2_lon = value
