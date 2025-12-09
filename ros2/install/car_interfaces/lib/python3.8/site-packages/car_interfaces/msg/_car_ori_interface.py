# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_interfaces:msg/CarOriInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarOriInterface(type):
    """Metaclass of message 'CarOriInterface'."""

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
                'car_interfaces.msg.CarOriInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_ori_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_ori_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_ori_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_ori_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_ori_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarOriInterface(metaclass=Metaclass_CarOriInterface):
    """Message class 'CarOriInterface'."""

    __slots__ = [
        '_timestamp',
        '_id',
        '_carspeed',
        '_steerangle',
        '_gearpos',
        '_braketq',
        '_parkingstate',
        '_soc',
        '_batteryvol',
        '_batterydischargecur',
        '_car_run_mode',
        '_throttle_percentage',
        '_braking_percentage',
        '_left_light',
        '_right_light',
        '_reversing_light',
        '_speaker',
        '_start_button',
        '_stop_button',
        '_state',
        '_error',
        '_process_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'id': 'uint8',
        'carspeed': 'float',
        'steerangle': 'float',
        'gearpos': 'int8',
        'braketq': 'float',
        'parkingstate': 'uint8',
        'soc': 'uint8',
        'batteryvol': 'uint8',
        'batterydischargecur': 'uint16',
        'car_run_mode': 'uint8',
        'throttle_percentage': 'uint8',
        'braking_percentage': 'uint8',
        'left_light': 'boolean',
        'right_light': 'boolean',
        'reversing_light': 'boolean',
        'speaker': 'boolean',
        'start_button': 'boolean',
        'stop_button': 'boolean',
        'state': 'uint8',
        'error': 'uint8',
        'process_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.id = kwargs.get('id', int())
        self.carspeed = kwargs.get('carspeed', float())
        self.steerangle = kwargs.get('steerangle', float())
        self.gearpos = kwargs.get('gearpos', int())
        self.braketq = kwargs.get('braketq', float())
        self.parkingstate = kwargs.get('parkingstate', int())
        self.soc = kwargs.get('soc', int())
        self.batteryvol = kwargs.get('batteryvol', int())
        self.batterydischargecur = kwargs.get('batterydischargecur', int())
        self.car_run_mode = kwargs.get('car_run_mode', int())
        self.throttle_percentage = kwargs.get('throttle_percentage', int())
        self.braking_percentage = kwargs.get('braking_percentage', int())
        self.left_light = kwargs.get('left_light', bool())
        self.right_light = kwargs.get('right_light', bool())
        self.reversing_light = kwargs.get('reversing_light', bool())
        self.speaker = kwargs.get('speaker', bool())
        self.start_button = kwargs.get('start_button', bool())
        self.stop_button = kwargs.get('stop_button', bool())
        self.state = kwargs.get('state', int())
        self.error = kwargs.get('error', int())
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
        if self.carspeed != other.carspeed:
            return False
        if self.steerangle != other.steerangle:
            return False
        if self.gearpos != other.gearpos:
            return False
        if self.braketq != other.braketq:
            return False
        if self.parkingstate != other.parkingstate:
            return False
        if self.soc != other.soc:
            return False
        if self.batteryvol != other.batteryvol:
            return False
        if self.batterydischargecur != other.batterydischargecur:
            return False
        if self.car_run_mode != other.car_run_mode:
            return False
        if self.throttle_percentage != other.throttle_percentage:
            return False
        if self.braking_percentage != other.braking_percentage:
            return False
        if self.left_light != other.left_light:
            return False
        if self.right_light != other.right_light:
            return False
        if self.reversing_light != other.reversing_light:
            return False
        if self.speaker != other.speaker:
            return False
        if self.start_button != other.start_button:
            return False
        if self.stop_button != other.stop_button:
            return False
        if self.state != other.state:
            return False
        if self.error != other.error:
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
    def carspeed(self):
        """Message field 'carspeed'."""
        return self._carspeed

    @carspeed.setter
    def carspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'carspeed' field must be of type 'float'"
        self._carspeed = value

    @property
    def steerangle(self):
        """Message field 'steerangle'."""
        return self._steerangle

    @steerangle.setter
    def steerangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steerangle' field must be of type 'float'"
        self._steerangle = value

    @property
    def gearpos(self):
        """Message field 'gearpos'."""
        return self._gearpos

    @gearpos.setter
    def gearpos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gearpos' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gearpos' field must be an integer in [-128, 127]"
        self._gearpos = value

    @property
    def braketq(self):
        """Message field 'braketq'."""
        return self._braketq

    @braketq.setter
    def braketq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'braketq' field must be of type 'float'"
        self._braketq = value

    @property
    def parkingstate(self):
        """Message field 'parkingstate'."""
        return self._parkingstate

    @parkingstate.setter
    def parkingstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parkingstate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parkingstate' field must be an unsigned integer in [0, 255]"
        self._parkingstate = value

    @property
    def soc(self):
        """Message field 'soc'."""
        return self._soc

    @soc.setter
    def soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'soc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'soc' field must be an unsigned integer in [0, 255]"
        self._soc = value

    @property
    def batteryvol(self):
        """Message field 'batteryvol'."""
        return self._batteryvol

    @batteryvol.setter
    def batteryvol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batteryvol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'batteryvol' field must be an unsigned integer in [0, 255]"
        self._batteryvol = value

    @property
    def batterydischargecur(self):
        """Message field 'batterydischargecur'."""
        return self._batterydischargecur

    @batterydischargecur.setter
    def batterydischargecur(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batterydischargecur' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'batterydischargecur' field must be an unsigned integer in [0, 65535]"
        self._batterydischargecur = value

    @property
    def car_run_mode(self):
        """Message field 'car_run_mode'."""
        return self._car_run_mode

    @car_run_mode.setter
    def car_run_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'car_run_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'car_run_mode' field must be an unsigned integer in [0, 255]"
        self._car_run_mode = value

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
    def left_light(self):
        """Message field 'left_light'."""
        return self._left_light

    @left_light.setter
    def left_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_light' field must be of type 'bool'"
        self._left_light = value

    @property
    def right_light(self):
        """Message field 'right_light'."""
        return self._right_light

    @right_light.setter
    def right_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_light' field must be of type 'bool'"
        self._right_light = value

    @property
    def reversing_light(self):
        """Message field 'reversing_light'."""
        return self._reversing_light

    @reversing_light.setter
    def reversing_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reversing_light' field must be of type 'bool'"
        self._reversing_light = value

    @property
    def speaker(self):
        """Message field 'speaker'."""
        return self._speaker

    @speaker.setter
    def speaker(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speaker' field must be of type 'bool'"
        self._speaker = value

    @property
    def start_button(self):
        """Message field 'start_button'."""
        return self._start_button

    @start_button.setter
    def start_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_button' field must be of type 'bool'"
        self._start_button = value

    @property
    def stop_button(self):
        """Message field 'stop_button'."""
        return self._stop_button

    @stop_button.setter
    def stop_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stop_button' field must be of type 'bool'"
        self._stop_button = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error' field must be an unsigned integer in [0, 255]"
        self._error = value

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
