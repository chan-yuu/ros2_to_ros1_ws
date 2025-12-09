# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/LocalPathPlanningInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'startpoint'
# Member 'endpoint'
# Member 'longitude'
# Member 'latitude'
# Member 'speed'
# Member 'angle'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalPathPlanningInterface(type):
    """Metaclass of message 'LocalPathPlanningInterface'."""

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
                'car_interfaces.msg.LocalPathPlanningInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_path_planning_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_path_planning_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_path_planning_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_path_planning_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_path_planning_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalPathPlanningInterface(metaclass=Metaclass_LocalPathPlanningInterface):
    """Message class 'LocalPathPlanningInterface'."""

    __slots__ = [
        '_timestamp',
        '_startpoint',
        '_endpoint',
        '_longitude',
        '_latitude',
        '_speed',
        '_angle',
        '_control_mode',
        '_path_end_dis',
        '_process_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'startpoint': 'sequence<double>',
        'endpoint': 'sequence<double>',
        'longitude': 'sequence<double>',
        'latitude': 'sequence<double>',
        'speed': 'sequence<float>',
        'angle': 'sequence<float>',
        'control_mode': 'float',
        'path_end_dis': 'float',
        'process_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.startpoint = array.array('d', kwargs.get('startpoint', []))
        self.endpoint = array.array('d', kwargs.get('endpoint', []))
        self.longitude = array.array('d', kwargs.get('longitude', []))
        self.latitude = array.array('d', kwargs.get('latitude', []))
        self.speed = array.array('f', kwargs.get('speed', []))
        self.angle = array.array('f', kwargs.get('angle', []))
        self.control_mode = kwargs.get('control_mode', float())
        self.path_end_dis = kwargs.get('path_end_dis', float())
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
        if self.startpoint != other.startpoint:
            return False
        if self.endpoint != other.endpoint:
            return False
        if self.longitude != other.longitude:
            return False
        if self.latitude != other.latitude:
            return False
        if self.speed != other.speed:
            return False
        if self.angle != other.angle:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.path_end_dis != other.path_end_dis:
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

    @property
    def startpoint(self):
        """Message field 'startpoint'."""
        return self._startpoint

    @startpoint.setter
    def startpoint(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'startpoint' array.array() must have the type code of 'd'"
            self._startpoint = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'startpoint' field must be a set or sequence and each value of type 'float'"
        self._startpoint = array.array('d', value)

    @property
    def endpoint(self):
        """Message field 'endpoint'."""
        return self._endpoint

    @endpoint.setter
    def endpoint(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'endpoint' array.array() must have the type code of 'd'"
            self._endpoint = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'endpoint' field must be a set or sequence and each value of type 'float'"
        self._endpoint = array.array('d', value)

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'longitude' array.array() must have the type code of 'd'"
            self._longitude = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'longitude' field must be a set or sequence and each value of type 'float'"
        self._longitude = array.array('d', value)

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'latitude' array.array() must have the type code of 'd'"
            self._latitude = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'latitude' field must be a set or sequence and each value of type 'float'"
        self._latitude = array.array('d', value)

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'speed' array.array() must have the type code of 'f'"
            self._speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'speed' field must be a set or sequence and each value of type 'float'"
        self._speed = array.array('f', value)

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angle' array.array() must have the type code of 'f'"
            self._angle = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'angle' field must be a set or sequence and each value of type 'float'"
        self._angle = array.array('f', value)

    @property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_mode' field must be of type 'float'"
        self._control_mode = value

    @property
    def path_end_dis(self):
        """Message field 'path_end_dis'."""
        return self._path_end_dis

    @path_end_dis.setter
    def path_end_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_end_dis' field must be of type 'float'"
        self._path_end_dis = value

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
