// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_introspection_c.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"


// Include directives for member types
// Member `top_left`
// Member `bottom_right`
#include "geometry_msgs/msg/pose2_d.h"
// Member `top_left`
// Member `bottom_right`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__init(message_memory);
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_fini_function(void * message_memory)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_member_array[2] = {
  {
    "top_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Request, top_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Request, bottom_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_members = {
  "depthai_ros_msgs__srv",  // message namespace
  "NormalizedImageCrop_Request",  // message name
  2,  // number of fields
  sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Request),
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_member_array,  // message members
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle = {
  0,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)() {
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__init(message_memory);
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_fini_function(void * message_memory)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_members = {
  "depthai_ros_msgs__srv",  // message namespace
  "NormalizedImageCrop_Response",  // message name
  1,  // number of fields
  sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Response),
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_member_array,  // message members
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle = {
  0,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)() {
  if (!depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "depthai_ros_msgs/srv/normalized_image_crop.h"
// Member `request`
// Member `response`
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__init(message_memory);
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_fini_function(void * message_memory)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__fini(message_memory);
}

size_t depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__size_function__NormalizedImageCrop_Event__request(
  const void * untyped_member)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * member =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__request(
  const void * untyped_member, size_t index)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * member =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__request(
  void * untyped_member, size_t index)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * member =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__fetch_function__NormalizedImageCrop_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * item =
    ((const depthai_ros_msgs__srv__NormalizedImageCrop_Request *)
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__request(untyped_member, index));
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * value =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Request *)(untyped_value);
  *value = *item;
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__assign_function__NormalizedImageCrop_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * item =
    ((depthai_ros_msgs__srv__NormalizedImageCrop_Request *)
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__request(untyped_member, index));
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * value =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Request *)(untyped_value);
  *item = *value;
}

bool depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__resize_function__NormalizedImageCrop_Event__request(
  void * untyped_member, size_t size)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * member =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *)(untyped_member);
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini(member);
  return depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(member, size);
}

size_t depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__size_function__NormalizedImageCrop_Event__response(
  const void * untyped_member)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * member =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__response(
  const void * untyped_member, size_t index)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * member =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__response(
  void * untyped_member, size_t index)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * member =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__fetch_function__NormalizedImageCrop_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * item =
    ((const depthai_ros_msgs__srv__NormalizedImageCrop_Response *)
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__response(untyped_member, index));
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * value =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Response *)(untyped_value);
  *value = *item;
}

void depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__assign_function__NormalizedImageCrop_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * item =
    ((depthai_ros_msgs__srv__NormalizedImageCrop_Response *)
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__response(untyped_member, index));
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * value =
    (const depthai_ros_msgs__srv__NormalizedImageCrop_Response *)(untyped_value);
  *item = *value;
}

bool depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__resize_function__NormalizedImageCrop_Event__response(
  void * untyped_member, size_t size)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * member =
    (depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *)(untyped_member);
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini(member);
  return depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Event, request),  // bytes offset in struct
    NULL,  // default value
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__size_function__NormalizedImageCrop_Event__request,  // size() function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__request,  // get_const(index) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__request,  // get(index) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__fetch_function__NormalizedImageCrop_Event__request,  // fetch(index, &value) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__assign_function__NormalizedImageCrop_Event__request,  // assign(index, value) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__resize_function__NormalizedImageCrop_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(depthai_ros_msgs__srv__NormalizedImageCrop_Event, response),  // bytes offset in struct
    NULL,  // default value
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__size_function__NormalizedImageCrop_Event__response,  // size() function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_const_function__NormalizedImageCrop_Event__response,  // get_const(index) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__get_function__NormalizedImageCrop_Event__response,  // get(index) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__fetch_function__NormalizedImageCrop_Event__response,  // fetch(index, &value) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__assign_function__NormalizedImageCrop_Event__response,  // assign(index, value) function pointer
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__resize_function__NormalizedImageCrop_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_members = {
  "depthai_ros_msgs__srv",  // message namespace
  "NormalizedImageCrop_Event",  // message name
  3,  // number of fields
  sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Event),
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_member_array,  // message members
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_type_support_handle = {
  0,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Event)() {
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)();
  depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)();
  if (!depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_members = {
  "depthai_ros_msgs__srv",  // service namespace
  "NormalizedImageCrop",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle,
  NULL,  // response message
  // depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle
  NULL  // event_message
  // depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle
};


static rosidl_service_type_support_t depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_type_support_handle = {
  0,
  &depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_members,
  get_service_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__rosidl_typesupport_introspection_c__NormalizedImageCrop_Request_message_type_support_handle,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__rosidl_typesupport_introspection_c__NormalizedImageCrop_Response_message_type_support_handle,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__rosidl_typesupport_introspection_c__NormalizedImageCrop_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    depthai_ros_msgs,
    srv,
    NormalizedImageCrop
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    depthai_ros_msgs,
    srv,
    NormalizedImageCrop
  ),
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop)() {
  if (!depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, srv, NormalizedImageCrop_Event)()->data;
  }

  return &depthai_ros_msgs__srv__detail__normalized_image_crop__rosidl_typesupport_introspection_c__NormalizedImageCrop_service_type_support_handle;
}
