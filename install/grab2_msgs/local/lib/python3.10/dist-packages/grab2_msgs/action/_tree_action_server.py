# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grab2_msgs:action/TreeActionServer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TreeActionServer_Goal(type):
    """Metaclass of message 'TreeActionServer_Goal'."""

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
                'grab2_msgs.action.TreeActionServer_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TreeActionServer_Goal(metaclass=Metaclass_TreeActionServer_Goal):
    """Message class 'TreeActionServer_Goal'."""

    __slots__ = [
        '_target_pose',
        '_target_tree',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/PoseStamped',
        'target_tree': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.target_tree = kwargs.get('target_tree', str())

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
        if self.target_pose != other.target_pose:
            return False
        if self.target_tree != other.target_tree:
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
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def target_tree(self):
        """Message field 'target_tree'."""
        return self._target_tree

    @target_tree.setter
    def target_tree(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_tree' field must be of type 'str'"
        self._target_tree = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TreeActionServer_Result(type):
    """Metaclass of message 'TreeActionServer_Result'."""

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
                'grab2_msgs.action.TreeActionServer_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__result

            from btcpp_ros2_interfaces.msg import NodeStatus
            if NodeStatus.__class__._TYPE_SUPPORT is None:
                NodeStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TreeActionServer_Result(metaclass=Metaclass_TreeActionServer_Result):
    """Message class 'TreeActionServer_Result'."""

    __slots__ = [
        '_node_status',
        '_error_message',
    ]

    _fields_and_field_types = {
        'node_status': 'btcpp_ros2_interfaces/NodeStatus',
        'error_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['btcpp_ros2_interfaces', 'msg'], 'NodeStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from btcpp_ros2_interfaces.msg import NodeStatus
        self.node_status = kwargs.get('node_status', NodeStatus())
        self.error_message = kwargs.get('error_message', str())

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
        if self.node_status != other.node_status:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_status(self):
        """Message field 'node_status'."""
        return self._node_status

    @node_status.setter
    def node_status(self, value):
        if __debug__:
            from btcpp_ros2_interfaces.msg import NodeStatus
            assert \
                isinstance(value, NodeStatus), \
                "The 'node_status' field must be a sub message of type 'NodeStatus'"
        self._node_status = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TreeActionServer_Feedback(type):
    """Metaclass of message 'TreeActionServer_Feedback'."""

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
                'grab2_msgs.action.TreeActionServer_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TreeActionServer_Feedback(metaclass=Metaclass_TreeActionServer_Feedback):
    """Message class 'TreeActionServer_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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


class Metaclass_TreeActionServer_SendGoal_Request(type):
    """Metaclass of message 'TreeActionServer_SendGoal_Request'."""

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
                'grab2_msgs.action.TreeActionServer_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__send_goal__request

            from grab2_msgs.action import TreeActionServer
            if TreeActionServer.Goal.__class__._TYPE_SUPPORT is None:
                TreeActionServer.Goal.__class__.__import_type_support__()

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


class TreeActionServer_SendGoal_Request(metaclass=Metaclass_TreeActionServer_SendGoal_Request):
    """Message class 'TreeActionServer_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'grab2_msgs/TreeActionServer_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'TreeActionServer_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._tree_action_server import TreeActionServer_Goal
        self.goal = kwargs.get('goal', TreeActionServer_Goal())

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
        if __debug__:
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
        if __debug__:
            from grab2_msgs.action._tree_action_server import TreeActionServer_Goal
            assert \
                isinstance(value, TreeActionServer_Goal), \
                "The 'goal' field must be a sub message of type 'TreeActionServer_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TreeActionServer_SendGoal_Response(type):
    """Metaclass of message 'TreeActionServer_SendGoal_Response'."""

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
                'grab2_msgs.action.TreeActionServer_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__send_goal__response

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


class TreeActionServer_SendGoal_Response(metaclass=Metaclass_TreeActionServer_SendGoal_Response):
    """Message class 'TreeActionServer_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
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
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TreeActionServer_SendGoal(type):
    """Metaclass of service 'TreeActionServer_SendGoal'."""

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
                'grab2_msgs.action.TreeActionServer_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__tree_action_server__send_goal

            from grab2_msgs.action import _tree_action_server
            if _tree_action_server.Metaclass_TreeActionServer_SendGoal_Request._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_SendGoal_Request.__import_type_support__()
            if _tree_action_server.Metaclass_TreeActionServer_SendGoal_Response._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_SendGoal_Response.__import_type_support__()


class TreeActionServer_SendGoal(metaclass=Metaclass_TreeActionServer_SendGoal):
    from grab2_msgs.action._tree_action_server import TreeActionServer_SendGoal_Request as Request
    from grab2_msgs.action._tree_action_server import TreeActionServer_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TreeActionServer_GetResult_Request(type):
    """Metaclass of message 'TreeActionServer_GetResult_Request'."""

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
                'grab2_msgs.action.TreeActionServer_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__get_result__request

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


class TreeActionServer_GetResult_Request(metaclass=Metaclass_TreeActionServer_GetResult_Request):
    """Message class 'TreeActionServer_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
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


class Metaclass_TreeActionServer_GetResult_Response(type):
    """Metaclass of message 'TreeActionServer_GetResult_Response'."""

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
                'grab2_msgs.action.TreeActionServer_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__get_result__response

            from grab2_msgs.action import TreeActionServer
            if TreeActionServer.Result.__class__._TYPE_SUPPORT is None:
                TreeActionServer.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TreeActionServer_GetResult_Response(metaclass=Metaclass_TreeActionServer_GetResult_Response):
    """Message class 'TreeActionServer_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'grab2_msgs/TreeActionServer_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'TreeActionServer_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from grab2_msgs.action._tree_action_server import TreeActionServer_Result
        self.result = kwargs.get('result', TreeActionServer_Result())

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
        if __debug__:
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
        if __debug__:
            from grab2_msgs.action._tree_action_server import TreeActionServer_Result
            assert \
                isinstance(value, TreeActionServer_Result), \
                "The 'result' field must be a sub message of type 'TreeActionServer_Result'"
        self._result = value


class Metaclass_TreeActionServer_GetResult(type):
    """Metaclass of service 'TreeActionServer_GetResult'."""

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
                'grab2_msgs.action.TreeActionServer_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__tree_action_server__get_result

            from grab2_msgs.action import _tree_action_server
            if _tree_action_server.Metaclass_TreeActionServer_GetResult_Request._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_GetResult_Request.__import_type_support__()
            if _tree_action_server.Metaclass_TreeActionServer_GetResult_Response._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_GetResult_Response.__import_type_support__()


class TreeActionServer_GetResult(metaclass=Metaclass_TreeActionServer_GetResult):
    from grab2_msgs.action._tree_action_server import TreeActionServer_GetResult_Request as Request
    from grab2_msgs.action._tree_action_server import TreeActionServer_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TreeActionServer_FeedbackMessage(type):
    """Metaclass of message 'TreeActionServer_FeedbackMessage'."""

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
                'grab2_msgs.action.TreeActionServer_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tree_action_server__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tree_action_server__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tree_action_server__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__tree_action_server__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tree_action_server__feedback_message

            from grab2_msgs.action import TreeActionServer
            if TreeActionServer.Feedback.__class__._TYPE_SUPPORT is None:
                TreeActionServer.Feedback.__class__.__import_type_support__()

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


class TreeActionServer_FeedbackMessage(metaclass=Metaclass_TreeActionServer_FeedbackMessage):
    """Message class 'TreeActionServer_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'grab2_msgs/TreeActionServer_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'TreeActionServer_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._tree_action_server import TreeActionServer_Feedback
        self.feedback = kwargs.get('feedback', TreeActionServer_Feedback())

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
        if __debug__:
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
        if __debug__:
            from grab2_msgs.action._tree_action_server import TreeActionServer_Feedback
            assert \
                isinstance(value, TreeActionServer_Feedback), \
                "The 'feedback' field must be a sub message of type 'TreeActionServer_Feedback'"
        self._feedback = value


class Metaclass_TreeActionServer(type):
    """Metaclass of action 'TreeActionServer'."""

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
                'grab2_msgs.action.TreeActionServer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__tree_action_server

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from grab2_msgs.action import _tree_action_server
            if _tree_action_server.Metaclass_TreeActionServer_SendGoal._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_SendGoal.__import_type_support__()
            if _tree_action_server.Metaclass_TreeActionServer_GetResult._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_GetResult.__import_type_support__()
            if _tree_action_server.Metaclass_TreeActionServer_FeedbackMessage._TYPE_SUPPORT is None:
                _tree_action_server.Metaclass_TreeActionServer_FeedbackMessage.__import_type_support__()


class TreeActionServer(metaclass=Metaclass_TreeActionServer):

    # The goal message defined in the action definition.
    from grab2_msgs.action._tree_action_server import TreeActionServer_Goal as Goal
    # The result message defined in the action definition.
    from grab2_msgs.action._tree_action_server import TreeActionServer_Result as Result
    # The feedback message defined in the action definition.
    from grab2_msgs.action._tree_action_server import TreeActionServer_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from grab2_msgs.action._tree_action_server import TreeActionServer_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from grab2_msgs.action._tree_action_server import TreeActionServer_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from grab2_msgs.action._tree_action_server import TreeActionServer_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
