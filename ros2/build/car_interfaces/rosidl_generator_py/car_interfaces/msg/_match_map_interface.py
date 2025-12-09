# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/MatchMapInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MatchMapInterface(type):
    """Metaclass of message 'MatchMapInterface'."""

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
                'car_interfaces.msg.MatchMapInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__match_map_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__match_map_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__match_map_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__match_map_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__match_map_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MatchMapInterface(metaclass=Metaclass_MatchMapInterface):
    """Message class 'MatchMapInterface'."""

    __slots__ = [
        '_timestamp',
        '_special_road',
        '_stopline_longitude',
        '_stopline_latitude',
        '_cross',
        '_light_recognition',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'special_road': 'uint8',
        'stopline_longitude': 'double',
        'stopline_latitude': 'double',
        'cross': 'boolean',
        'light_recognition': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.special_road = kwargs.get('special_road', int())
        self.stopline_longitude = kwargs.get('stopline_longitude', float())
        self.stopline_latitude = kwargs.get('stopline_latitude', float())
        self.cross = kwargs.get('cross', bool())
        self.light_recognition = kwargs.get('light_recognition', bool())

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
        if self.special_road != other.special_road:
            return False
        if self.stopline_longitude != other.stopline_longitude:
            return False
        if self.stopline_latitude != other.stopline_latitude:
            return False
        if self.cross != other.cross:
            return False
        if self.light_recognition != other.light_recognition:
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
    def special_road(self):
        """Message field 'special_road'."""
        return self._special_road

    @special_road.setter
    def special_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'special_road' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'special_road' field must be an unsigned integer in [0, 255]"
        self._special_road = value

    @property
    def stopline_longitude(self):
        """Message field 'stopline_longitude'."""
        return self._stopline_longitude

    @stopline_longitude.setter
    def stopline_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stopline_longitude' field must be of type 'float'"
        self._stopline_longitude = value

    @property
    def stopline_latitude(self):
        """Message field 'stopline_latitude'."""
        return self._stopline_latitude

    @stopline_latitude.setter
    def stopline_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stopline_latitude' field must be of type 'float'"
        self._stopline_latitude = value

    @property
    def cross(self):
        """Message field 'cross'."""
        return self._cross

    @cross.setter
    def cross(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cross' field must be of type 'bool'"
        self._cross = value

    @property
    def light_recognition(self):
        """Message field 'light_recognition'."""
        return self._light_recognition

    @light_recognition.setter
    def light_recognition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'light_recognition' field must be of type 'bool'"
        self._light_recognition = value
