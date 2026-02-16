# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grab2_msgs:action/ComputePlanToTargetIK.idl
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


class Metaclass_ComputePlanToTargetIK_Goal(type):
    """Metaclass of message 'ComputePlanToTargetIK_Goal'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INTERPOLATION_DT__DEFAULT': 0.1,
        }

    @property
    def INTERPOLATION_DT__DEFAULT(cls):
        """Return default value for message field 'interpolation_dt'."""
        return 0.1


class ComputePlanToTargetIK_Goal(metaclass=Metaclass_ComputePlanToTargetIK_Goal):
    """Message class 'ComputePlanToTargetIK_Goal'."""

    __slots__ = [
        '_target_pose',
        '_interpolation_dt',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/PoseStamped',
        'interpolation_dt': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.interpolation_dt = kwargs.get(
            'interpolation_dt', ComputePlanToTargetIK_Goal.INTERPOLATION_DT__DEFAULT)

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
        if self.target_pose != other.target_pose:
            return False
        if self.interpolation_dt != other.interpolation_dt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def interpolation_dt(self):
        """Message field 'interpolation_dt'."""
        return self._interpolation_dt

    @interpolation_dt.setter
    def interpolation_dt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'interpolation_dt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'interpolation_dt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._interpolation_dt = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_Result(type):
    """Metaclass of message 'ComputePlanToTargetIK_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESSFUL': 0,
        'INVALID_GOAL': -1,
        'INVALID_JOINTS': -2,
        'OLD_HEADER_TIMESTAMP': -3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__result

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESSFUL': cls.__constants['SUCCESSFUL'],
            'INVALID_GOAL': cls.__constants['INVALID_GOAL'],
            'INVALID_JOINTS': cls.__constants['INVALID_JOINTS'],
            'OLD_HEADER_TIMESTAMP': cls.__constants['OLD_HEADER_TIMESTAMP'],
        }

    @property
    def SUCCESSFUL(self):
        """Message constant 'SUCCESSFUL'."""
        return Metaclass_ComputePlanToTargetIK_Result.__constants['SUCCESSFUL']

    @property
    def INVALID_GOAL(self):
        """Message constant 'INVALID_GOAL'."""
        return Metaclass_ComputePlanToTargetIK_Result.__constants['INVALID_GOAL']

    @property
    def INVALID_JOINTS(self):
        """Message constant 'INVALID_JOINTS'."""
        return Metaclass_ComputePlanToTargetIK_Result.__constants['INVALID_JOINTS']

    @property
    def OLD_HEADER_TIMESTAMP(self):
        """Message constant 'OLD_HEADER_TIMESTAMP'."""
        return Metaclass_ComputePlanToTargetIK_Result.__constants['OLD_HEADER_TIMESTAMP']


class ComputePlanToTargetIK_Result(metaclass=Metaclass_ComputePlanToTargetIK_Result):
    """
    Message class 'ComputePlanToTargetIK_Result'.

    Constants:
      SUCCESSFUL
      INVALID_GOAL
      INVALID_JOINTS
      OLD_HEADER_TIMESTAMP
    """

    __slots__ = [
        '_trajectory',
        '_error_code',
        '_error_string',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'trajectory': 'trajectory_msgs/JointTrajectory',
        'error_code': 'int32',
        'error_string': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        from trajectory_msgs.msg import JointTrajectory
        self.trajectory = kwargs.get('trajectory', JointTrajectory())
        self.error_code = kwargs.get('error_code', int())
        self.error_string = kwargs.get('error_string', str())

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
        if self.trajectory != other.trajectory:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_string != other.error_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if self._check_fields:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'trajectory' field must be a sub message of type 'JointTrajectory'"
        self._trajectory = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_code' field must be an integer in [-2147483648, 2147483647]"
        self._error_code = value

    @builtins.property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_string' field must be of type 'str'"
        self._error_string = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_Feedback(type):
    """Metaclass of message 'ComputePlanToTargetIK_Feedback'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_Feedback(metaclass=Metaclass_ComputePlanToTargetIK_Feedback):
    """Message class 'ComputePlanToTargetIK_Feedback'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_SendGoal_Request(type):
    """Metaclass of message 'ComputePlanToTargetIK_SendGoal_Request'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__send_goal__request

            from grab2_msgs.action import ComputePlanToTargetIK
            if ComputePlanToTargetIK.Goal.__class__._TYPE_SUPPORT is None:
                ComputePlanToTargetIK.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_SendGoal_Request(metaclass=Metaclass_ComputePlanToTargetIK_SendGoal_Request):
    """Message class 'ComputePlanToTargetIK_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'grab2_msgs/ComputePlanToTargetIK_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_Goal'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Goal
        self.goal = kwargs.get('goal', ComputePlanToTargetIK_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Goal
            assert \
                isinstance(value, ComputePlanToTargetIK_Goal), \
                "The 'goal' field must be a sub message of type 'ComputePlanToTargetIK_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_SendGoal_Response(type):
    """Metaclass of message 'ComputePlanToTargetIK_SendGoal_Response'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_SendGoal_Response(metaclass=Metaclass_ComputePlanToTargetIK_SendGoal_Response):
    """Message class 'ComputePlanToTargetIK_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_SendGoal_Event(type):
    """Metaclass of message 'ComputePlanToTargetIK_SendGoal_Event'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__send_goal__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_SendGoal_Event(metaclass=Metaclass_ComputePlanToTargetIK_SendGoal_Event):
    """Message class 'ComputePlanToTargetIK_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<grab2_msgs/ComputePlanToTargetIK_SendGoal_Request, 1>',
        'response': 'sequence<grab2_msgs/ComputePlanToTargetIK_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_SendGoal_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from grab2_msgs.action import ComputePlanToTargetIK_SendGoal_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, ComputePlanToTargetIK_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ComputePlanToTargetIK_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from grab2_msgs.action import ComputePlanToTargetIK_SendGoal_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, ComputePlanToTargetIK_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ComputePlanToTargetIK_SendGoal_Response'"
        self._response = value


class Metaclass_ComputePlanToTargetIK_SendGoal(type):
    """Metaclass of service 'ComputePlanToTargetIK_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_plan_to_target_ik__send_goal

            from grab2_msgs.action import _compute_plan_to_target_ik
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Request._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Request.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Response._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Response.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Event._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal_Event.__import_type_support__()


class ComputePlanToTargetIK_SendGoal(metaclass=Metaclass_ComputePlanToTargetIK_SendGoal):
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_SendGoal_Request as Request
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_SendGoal_Response as Response
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_GetResult_Request(type):
    """Metaclass of message 'ComputePlanToTargetIK_GetResult_Request'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_GetResult_Request(metaclass=Metaclass_ComputePlanToTargetIK_GetResult_Request):
    """Message class 'ComputePlanToTargetIK_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_GetResult_Response(type):
    """Metaclass of message 'ComputePlanToTargetIK_GetResult_Response'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__get_result__response

            from grab2_msgs.action import ComputePlanToTargetIK
            if ComputePlanToTargetIK.Result.__class__._TYPE_SUPPORT is None:
                ComputePlanToTargetIK.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_GetResult_Response(metaclass=Metaclass_ComputePlanToTargetIK_GetResult_Response):
    """Message class 'ComputePlanToTargetIK_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'grab2_msgs/ComputePlanToTargetIK_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_Result'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Result
        self.result = kwargs.get('result', ComputePlanToTargetIK_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Result
            assert \
                isinstance(value, ComputePlanToTargetIK_Result), \
                "The 'result' field must be a sub message of type 'ComputePlanToTargetIK_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_GetResult_Event(type):
    """Metaclass of message 'ComputePlanToTargetIK_GetResult_Event'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__get_result__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_GetResult_Event(metaclass=Metaclass_ComputePlanToTargetIK_GetResult_Event):
    """Message class 'ComputePlanToTargetIK_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<grab2_msgs/ComputePlanToTargetIK_GetResult_Request, 1>',
        'response': 'sequence<grab2_msgs/ComputePlanToTargetIK_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_GetResult_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from grab2_msgs.action import ComputePlanToTargetIK_GetResult_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, ComputePlanToTargetIK_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ComputePlanToTargetIK_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from grab2_msgs.action import ComputePlanToTargetIK_GetResult_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, ComputePlanToTargetIK_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ComputePlanToTargetIK_GetResult_Response'"
        self._response = value


class Metaclass_ComputePlanToTargetIK_GetResult(type):
    """Metaclass of service 'ComputePlanToTargetIK_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_plan_to_target_ik__get_result

            from grab2_msgs.action import _compute_plan_to_target_ik
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Request._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Request.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Response._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Response.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Event._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult_Event.__import_type_support__()


class ComputePlanToTargetIK_GetResult(metaclass=Metaclass_ComputePlanToTargetIK_GetResult):
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_GetResult_Request as Request
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_GetResult_Response as Response
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanToTargetIK_FeedbackMessage(type):
    """Metaclass of message 'ComputePlanToTargetIK_FeedbackMessage'."""

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
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_plan_to_target_ik__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_plan_to_target_ik__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_plan_to_target_ik__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_plan_to_target_ik__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_plan_to_target_ik__feedback_message

            from grab2_msgs.action import ComputePlanToTargetIK
            if ComputePlanToTargetIK.Feedback.__class__._TYPE_SUPPORT is None:
                ComputePlanToTargetIK.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanToTargetIK_FeedbackMessage(metaclass=Metaclass_ComputePlanToTargetIK_FeedbackMessage):
    """Message class 'ComputePlanToTargetIK_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'grab2_msgs/ComputePlanToTargetIK_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'ComputePlanToTargetIK_Feedback'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Feedback
        self.feedback = kwargs.get('feedback', ComputePlanToTargetIK_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if self._check_fields:
            from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Feedback
            assert \
                isinstance(value, ComputePlanToTargetIK_Feedback), \
                "The 'feedback' field must be a sub message of type 'ComputePlanToTargetIK_Feedback'"
        self._feedback = value


class Metaclass_ComputePlanToTargetIK(type):
    """Metaclass of action 'ComputePlanToTargetIK'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.ComputePlanToTargetIK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__compute_plan_to_target_ik

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from grab2_msgs.action import _compute_plan_to_target_ik
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_SendGoal.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_GetResult.__import_type_support__()
            if _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_FeedbackMessage._TYPE_SUPPORT is None:
                _compute_plan_to_target_ik.Metaclass_ComputePlanToTargetIK_FeedbackMessage.__import_type_support__()


class ComputePlanToTargetIK(metaclass=Metaclass_ComputePlanToTargetIK):

    # The goal message defined in the action definition.
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Goal as Goal
    # The result message defined in the action definition.
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Result as Result
    # The feedback message defined in the action definition.
    from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from grab2_msgs.action._compute_plan_to_target_ik import ComputePlanToTargetIK_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
