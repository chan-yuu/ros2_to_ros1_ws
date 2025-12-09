# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/GlobalPathPlanningInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'startpoint'
# Member 'endpoint'
# Member 'routedata'
# Member 'back_point'
# Member 'end_obu_point'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalPathPlanningInterface(type):
    """Metaclass of message 'GlobalPathPlanningInterface'."""

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
                'car_interfaces.msg.GlobalPathPlanningInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_path_planning_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_path_planning_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_path_planning_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_path_planning_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_path_planning_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalPathPlanningInterface(metaclass=Metaclass_GlobalPathPlanningInterface):
    """Message class 'GlobalPathPlanningInterface'."""

    __slots__ = [
        '_timestamp',
        '_startpoint',
        '_endpoint',
        '_routedata',
        '_back_point',
        '_end_obu_point',
        '_process_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'startpoint': 'sequence<double>',
        'endpoint': 'sequence<double>',
        'routedata': 'sequence<double>',
        'back_point': 'sequence<float>',
        'end_obu_point': 'sequence<float>',
        'process_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.startpoint = array.array('d', kwargs.get('startpoint', []))
        self.endpoint = array.array('d', kwargs.get('endpoint', []))
        self.routedata = array.array('d', kwargs.get('routedata', []))
        self.back_point = array.array('f', kwargs.get('back_point', []))
        self.end_obu_point = array.array('f', kwargs.get('end_obu_point', []))
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
        if self.routedata != other.routedata:
            return False
        if self.back_point != other.back_point:
            return False
        if self.end_obu_point != other.end_obu_point:
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
    def routedata(self):
        """Message field 'routedata'."""
        return self._routedata

    @routedata.setter
    def routedata(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'routedata' array.array() must have the type code of 'd'"
            self._routedata = value
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
                "The 'routedata' field must be a set or sequence and each value of type 'float'"
        self._routedata = array.array('d', value)

    @property
    def back_point(self):
        """Message field 'back_point'."""
        return self._back_point

    @back_point.setter
    def back_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'back_point' array.array() must have the type code of 'f'"
            self._back_point = value
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
                "The 'back_point' field must be a set or sequence and each value of type 'float'"
        self._back_point = array.array('f', value)

    @property
    def end_obu_point(self):
        """Message field 'end_obu_point'."""
        return self._end_obu_point

    @end_obu_point.setter
    def end_obu_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'end_obu_point' array.array() must have the type code of 'f'"
            self._end_obu_point = value
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
                "The 'end_obu_point' field must be a set or sequence and each value of type 'float'"
        self._end_obu_point = array.array('f', value)

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
