# generated from rosidl_generator_py/resource/_idl.py.em
# with input from play_motion2_msgs:msg/Motion.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'positions'
# Member 'times_from_start'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motion(type):
    """Metaclass of message 'Motion'."""

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
            module = import_type_support('play_motion2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'play_motion2_msgs.msg.Motion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motion(metaclass=Metaclass_Motion):
    """Message class 'Motion'."""

    __slots__ = [
        '_key',
        '_name',
        '_usage',
        '_description',
        '_joints',
        '_positions',
        '_times_from_start',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'key': 'string',
        'name': 'string',
        'usage': 'string',
        'description': 'string',
        'joints': 'sequence<string>',
        'positions': 'sequence<double>',
        'times_from_start': 'sequence<double>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.key = kwargs.get('key', str())
        self.name = kwargs.get('name', str())
        self.usage = kwargs.get('usage', str())
        self.description = kwargs.get('description', str())
        self.joints = kwargs.get('joints', [])
        self.positions = array.array('d', kwargs.get('positions', []))
        self.times_from_start = array.array('d', kwargs.get('times_from_start', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.key != other.key:
            return False
        if self.name != other.name:
            return False
        if self.usage != other.usage:
            return False
        if self.description != other.description:
            return False
        if self.joints != other.joints:
            return False
        if self.positions != other.positions:
            return False
        if self.times_from_start != other.times_from_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def key(self):
        """Message field 'key'."""
        return self._key

    @key.setter
    def key(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'key' field must be of type 'str'"
        self._key = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def usage(self):
        """Message field 'usage'."""
        return self._usage

    @usage.setter
    def usage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'usage' field must be of type 'str'"
        self._usage = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def joints(self):
        """Message field 'joints'."""
        return self._joints

    @joints.setter
    def joints(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'joints' field must be a set or sequence and each value of type 'str'"
        self._joints = value

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'positions' array.array() must have the type code of 'd'"
                self._positions = value
                return
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'positions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._positions = array.array('d', value)

    @builtins.property
    def times_from_start(self):
        """Message field 'times_from_start'."""
        return self._times_from_start

    @times_from_start.setter
    def times_from_start(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'times_from_start' array.array() must have the type code of 'd'"
                self._times_from_start = value
                return
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'times_from_start' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._times_from_start = array.array('d', value)
