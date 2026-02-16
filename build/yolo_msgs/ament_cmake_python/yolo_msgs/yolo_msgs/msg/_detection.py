# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yolo_msgs:msg/Detection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Detection(type):
    """Metaclass of message 'Detection'."""

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
            module = import_type_support('yolo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yolo_msgs.msg.Detection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection

            from yolo_msgs.msg import BoundingBox2D
            if BoundingBox2D.__class__._TYPE_SUPPORT is None:
                BoundingBox2D.__class__.__import_type_support__()

            from yolo_msgs.msg import BoundingBox3D
            if BoundingBox3D.__class__._TYPE_SUPPORT is None:
                BoundingBox3D.__class__.__import_type_support__()

            from yolo_msgs.msg import KeyPoint2DArray
            if KeyPoint2DArray.__class__._TYPE_SUPPORT is None:
                KeyPoint2DArray.__class__.__import_type_support__()

            from yolo_msgs.msg import KeyPoint3DArray
            if KeyPoint3DArray.__class__._TYPE_SUPPORT is None:
                KeyPoint3DArray.__class__.__import_type_support__()

            from yolo_msgs.msg import Mask
            if Mask.__class__._TYPE_SUPPORT is None:
                Mask.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Detection(metaclass=Metaclass_Detection):
    """Message class 'Detection'."""

    __slots__ = [
        '_class_id',
        '_class_name',
        '_score',
        '_id',
        '_bbox',
        '_bbox3d',
        '_mask',
        '_keypoints',
        '_keypoints3d',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'class_id': 'int32',
        'class_name': 'string',
        'score': 'double',
        'id': 'string',
        'bbox': 'yolo_msgs/BoundingBox2D',
        'bbox3d': 'yolo_msgs/BoundingBox3D',
        'mask': 'yolo_msgs/Mask',
        'keypoints': 'yolo_msgs/KeyPoint2DArray',
        'keypoints3d': 'yolo_msgs/KeyPoint3DArray',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yolo_msgs', 'msg'], 'BoundingBox2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yolo_msgs', 'msg'], 'BoundingBox3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yolo_msgs', 'msg'], 'Mask'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yolo_msgs', 'msg'], 'KeyPoint2DArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yolo_msgs', 'msg'], 'KeyPoint3DArray'),  # noqa: E501
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
        self.class_id = kwargs.get('class_id', int())
        self.class_name = kwargs.get('class_name', str())
        self.score = kwargs.get('score', float())
        self.id = kwargs.get('id', str())
        from yolo_msgs.msg import BoundingBox2D
        self.bbox = kwargs.get('bbox', BoundingBox2D())
        from yolo_msgs.msg import BoundingBox3D
        self.bbox3d = kwargs.get('bbox3d', BoundingBox3D())
        from yolo_msgs.msg import Mask
        self.mask = kwargs.get('mask', Mask())
        from yolo_msgs.msg import KeyPoint2DArray
        self.keypoints = kwargs.get('keypoints', KeyPoint2DArray())
        from yolo_msgs.msg import KeyPoint3DArray
        self.keypoints3d = kwargs.get('keypoints3d', KeyPoint3DArray())

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
        if self.class_id != other.class_id:
            return False
        if self.class_name != other.class_name:
            return False
        if self.score != other.score:
            return False
        if self.id != other.id:
            return False
        if self.bbox != other.bbox:
            return False
        if self.bbox3d != other.bbox3d:
            return False
        if self.mask != other.mask:
            return False
        if self.keypoints != other.keypoints:
            return False
        if self.keypoints3d != other.keypoints3d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'class_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'class_id' field must be an integer in [-2147483648, 2147483647]"
        self._class_id = value

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._score = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if self._check_fields:
            from yolo_msgs.msg import BoundingBox2D
            assert \
                isinstance(value, BoundingBox2D), \
                "The 'bbox' field must be a sub message of type 'BoundingBox2D'"
        self._bbox = value

    @builtins.property
    def bbox3d(self):
        """Message field 'bbox3d'."""
        return self._bbox3d

    @bbox3d.setter
    def bbox3d(self, value):
        if self._check_fields:
            from yolo_msgs.msg import BoundingBox3D
            assert \
                isinstance(value, BoundingBox3D), \
                "The 'bbox3d' field must be a sub message of type 'BoundingBox3D'"
        self._bbox3d = value

    @builtins.property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if self._check_fields:
            from yolo_msgs.msg import Mask
            assert \
                isinstance(value, Mask), \
                "The 'mask' field must be a sub message of type 'Mask'"
        self._mask = value

    @builtins.property
    def keypoints(self):
        """Message field 'keypoints'."""
        return self._keypoints

    @keypoints.setter
    def keypoints(self, value):
        if self._check_fields:
            from yolo_msgs.msg import KeyPoint2DArray
            assert \
                isinstance(value, KeyPoint2DArray), \
                "The 'keypoints' field must be a sub message of type 'KeyPoint2DArray'"
        self._keypoints = value

    @builtins.property
    def keypoints3d(self):
        """Message field 'keypoints3d'."""
        return self._keypoints3d

    @keypoints3d.setter
    def keypoints3d(self, value):
        if self._check_fields:
            from yolo_msgs.msg import KeyPoint3DArray
            assert \
                isinstance(value, KeyPoint3DArray), \
                "The 'keypoints3d' field must be a sub message of type 'KeyPoint3DArray'"
        self._keypoints3d = value
