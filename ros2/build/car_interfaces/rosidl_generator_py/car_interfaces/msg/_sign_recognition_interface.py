# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/SignRecognitionInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'signdata'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignRecognitionInterface(type):
    """Metaclass of message 'SignRecognitionInterface'."""

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
                'car_interfaces.msg.SignRecognitionInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sign_recognition_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sign_recognition_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sign_recognition_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sign_recognition_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sign_recognition_interface

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SignRecognitionInterface(metaclass=Metaclass_SignRecognitionInterface):
    """Message class 'SignRecognitionInterface'."""

    __slots__ = [
        '_timestamp',
        '_id',
        '_signnumber',
        '_signdata',
        '_resultimage',
        '_process_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'id': 'uint8',
        'signnumber': 'uint8',
        'signdata': 'sequence<float>',
        'resultimage': 'sensor_msgs/Image',
        'process_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.id = kwargs.get('id', int())
        self.signnumber = kwargs.get('signnumber', int())
        self.signdata = array.array('f', kwargs.get('signdata', []))
        from sensor_msgs.msg import Image
        self.resultimage = kwargs.get('resultimage', Image())
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
        if self.signnumber != other.signnumber:
            return False
        if self.signdata != other.signdata:
            return False
        if self.resultimage != other.resultimage:
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
    def signnumber(self):
        """Message field 'signnumber'."""
        return self._signnumber

    @signnumber.setter
    def signnumber(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signnumber' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signnumber' field must be an unsigned integer in [0, 255]"
        self._signnumber = value

    @property
    def signdata(self):
        """Message field 'signdata'."""
        return self._signdata

    @signdata.setter
    def signdata(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'signdata' array.array() must have the type code of 'f'"
            self._signdata = value
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
                "The 'signdata' field must be a set or sequence and each value of type 'float'"
        self._signdata = array.array('f', value)

    @property
    def resultimage(self):
        """Message field 'resultimage'."""
        return self._resultimage

    @resultimage.setter
    def resultimage(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'resultimage' field must be a sub message of type 'Image'"
        self._resultimage = value

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
