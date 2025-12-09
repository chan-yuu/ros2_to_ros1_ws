# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/GpsInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpsInterface(type):
    """Metaclass of message 'GpsInterface'."""

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
                'car_interfaces.msg.GpsInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GpsInterface(metaclass=Metaclass_GpsInterface):
    """Message class 'GpsInterface'."""

    __slots__ = [
        '_timestamp',
        '_id',
        '_yaw',
        '_pitch',
        '_roll',
        '_wx',
        '_wy',
        '_wz',
        '_ax',
        '_ay',
        '_az',
        '_longitude',
        '_latitude',
        '_height',
        '_eastvelocity',
        '_northvelocity',
        '_skyvelocity',
        '_process_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'id': 'uint8',
        'yaw': 'float',
        'pitch': 'float',
        'roll': 'float',
        'wx': 'float',
        'wy': 'float',
        'wz': 'float',
        'ax': 'float',
        'ay': 'float',
        'az': 'float',
        'longitude': 'double',
        'latitude': 'double',
        'height': 'double',
        'eastvelocity': 'float',
        'northvelocity': 'float',
        'skyvelocity': 'float',
        'process_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.id = kwargs.get('id', int())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.wx = kwargs.get('wx', float())
        self.wy = kwargs.get('wy', float())
        self.wz = kwargs.get('wz', float())
        self.ax = kwargs.get('ax', float())
        self.ay = kwargs.get('ay', float())
        self.az = kwargs.get('az', float())
        self.longitude = kwargs.get('longitude', float())
        self.latitude = kwargs.get('latitude', float())
        self.height = kwargs.get('height', float())
        self.eastvelocity = kwargs.get('eastvelocity', float())
        self.northvelocity = kwargs.get('northvelocity', float())
        self.skyvelocity = kwargs.get('skyvelocity', float())
        self.process_time = kwargs.get('process_time', float())

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
        if self.id != other.id:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.wx != other.wx:
            return False
        if self.wy != other.wy:
            return False
        if self.wz != other.wz:
            return False
        if self.ax != other.ax:
            return False
        if self.ay != other.ay:
            return False
        if self.az != other.az:
            return False
        if self.longitude != other.longitude:
            return False
        if self.latitude != other.latitude:
            return False
        if self.height != other.height:
            return False
        if self.eastvelocity != other.eastvelocity:
            return False
        if self.northvelocity != other.northvelocity:
            return False
        if self.skyvelocity != other.skyvelocity:
            return False
        if self.process_time != other.process_time:
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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def wx(self):
        """Message field 'wx'."""
        return self._wx

    @wx.setter
    def wx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wx' field must be of type 'float'"
        self._wx = value

    @property
    def wy(self):
        """Message field 'wy'."""
        return self._wy

    @wy.setter
    def wy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wy' field must be of type 'float'"
        self._wy = value

    @property
    def wz(self):
        """Message field 'wz'."""
        return self._wz

    @wz.setter
    def wz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wz' field must be of type 'float'"
        self._wz = value

    @property
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
        self._ax = value

    @property
    def ay(self):
        """Message field 'ay'."""
        return self._ay

    @ay.setter
    def ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay' field must be of type 'float'"
        self._ay = value

    @property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
        self._az = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
        self._longitude = value

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
        self._latitude = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
        self._height = value

    @property
    def eastvelocity(self):
        """Message field 'eastvelocity'."""
        return self._eastvelocity

    @eastvelocity.setter
    def eastvelocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eastvelocity' field must be of type 'float'"
        self._eastvelocity = value

    @property
    def northvelocity(self):
        """Message field 'northvelocity'."""
        return self._northvelocity

    @northvelocity.setter
    def northvelocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'northvelocity' field must be of type 'float'"
        self._northvelocity = value

    @property
    def skyvelocity(self):
        """Message field 'skyvelocity'."""
        return self._skyvelocity

    @skyvelocity.setter
    def skyvelocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'skyvelocity' field must be of type 'float'"
        self._skyvelocity = value

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
