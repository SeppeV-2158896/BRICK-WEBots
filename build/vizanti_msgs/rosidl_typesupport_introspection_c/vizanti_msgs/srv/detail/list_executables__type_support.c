// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vizanti_msgs:srv/ListExecutables.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vizanti_msgs/srv/detail/list_executables__rosidl_typesupport_introspection_c.h"
#include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vizanti_msgs/srv/detail/list_executables__functions.h"
#include "vizanti_msgs/srv/detail/list_executables__struct.h"


// Include directives for member types
// Member `package`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vizanti_msgs__srv__ListExecutables_Request__init(message_memory);
}

void vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_fini_function(void * message_memory)
{
  vizanti_msgs__srv__ListExecutables_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_member_array[1] = {
  {
    "package",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_msgs__srv__ListExecutables_Request, package),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_members = {
  "vizanti_msgs__srv",  // message namespace
  "ListExecutables_Request",  // message name
  1,  // number of fields
  sizeof(vizanti_msgs__srv__ListExecutables_Request),
  vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_member_array,  // message members
  vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle = {
  0,
  &vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_members,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__ListExecutables_Request__get_type_hash,
  &vizanti_msgs__srv__ListExecutables_Request__get_type_description,
  &vizanti_msgs__srv__ListExecutables_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Request)() {
  if (!vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__functions.h"
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__struct.h"


// Include directives for member types
// Member `executables`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vizanti_msgs__srv__ListExecutables_Response__init(message_memory);
}

void vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_fini_function(void * message_memory)
{
  vizanti_msgs__srv__ListExecutables_Response__fini(message_memory);
}

size_t vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__size_function__ListExecutables_Response__executables(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Response__executables(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_function__ListExecutables_Response__executables(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Response__executables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Response__executables(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Response__executables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_function__ListExecutables_Response__executables(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Response__executables(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_member_array[1] = {
  {
    "executables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_msgs__srv__ListExecutables_Response, executables),  // bytes offset in struct
    NULL,  // default value
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__size_function__ListExecutables_Response__executables,  // size() function pointer
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Response__executables,  // get_const(index) function pointer
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__get_function__ListExecutables_Response__executables,  // get(index) function pointer
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Response__executables,  // fetch(index, &value) function pointer
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Response__executables,  // assign(index, value) function pointer
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Response__executables  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_members = {
  "vizanti_msgs__srv",  // message namespace
  "ListExecutables_Response",  // message name
  1,  // number of fields
  sizeof(vizanti_msgs__srv__ListExecutables_Response),
  vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_member_array,  // message members
  vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle = {
  0,
  &vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_members,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__ListExecutables_Response__get_type_hash,
  &vizanti_msgs__srv__ListExecutables_Response__get_type_description,
  &vizanti_msgs__srv__ListExecutables_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Response)() {
  if (!vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__functions.h"
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "vizanti_msgs/srv/list_executables.h"
// Member `request`
// Member `response`
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vizanti_msgs__srv__ListExecutables_Event__init(message_memory);
}

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_fini_function(void * message_memory)
{
  vizanti_msgs__srv__ListExecutables_Event__fini(message_memory);
}

size_t vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__size_function__ListExecutables_Event__request(
  const void * untyped_member)
{
  const vizanti_msgs__srv__ListExecutables_Request__Sequence * member =
    (const vizanti_msgs__srv__ListExecutables_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__request(
  const void * untyped_member, size_t index)
{
  const vizanti_msgs__srv__ListExecutables_Request__Sequence * member =
    (const vizanti_msgs__srv__ListExecutables_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__request(
  void * untyped_member, size_t index)
{
  vizanti_msgs__srv__ListExecutables_Request__Sequence * member =
    (vizanti_msgs__srv__ListExecutables_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vizanti_msgs__srv__ListExecutables_Request * item =
    ((const vizanti_msgs__srv__ListExecutables_Request *)
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__request(untyped_member, index));
  vizanti_msgs__srv__ListExecutables_Request * value =
    (vizanti_msgs__srv__ListExecutables_Request *)(untyped_value);
  *value = *item;
}

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vizanti_msgs__srv__ListExecutables_Request * item =
    ((vizanti_msgs__srv__ListExecutables_Request *)
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__request(untyped_member, index));
  const vizanti_msgs__srv__ListExecutables_Request * value =
    (const vizanti_msgs__srv__ListExecutables_Request *)(untyped_value);
  *item = *value;
}

bool vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Event__request(
  void * untyped_member, size_t size)
{
  vizanti_msgs__srv__ListExecutables_Request__Sequence * member =
    (vizanti_msgs__srv__ListExecutables_Request__Sequence *)(untyped_member);
  vizanti_msgs__srv__ListExecutables_Request__Sequence__fini(member);
  return vizanti_msgs__srv__ListExecutables_Request__Sequence__init(member, size);
}

size_t vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__size_function__ListExecutables_Event__response(
  const void * untyped_member)
{
  const vizanti_msgs__srv__ListExecutables_Response__Sequence * member =
    (const vizanti_msgs__srv__ListExecutables_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__response(
  const void * untyped_member, size_t index)
{
  const vizanti_msgs__srv__ListExecutables_Response__Sequence * member =
    (const vizanti_msgs__srv__ListExecutables_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__response(
  void * untyped_member, size_t index)
{
  vizanti_msgs__srv__ListExecutables_Response__Sequence * member =
    (vizanti_msgs__srv__ListExecutables_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vizanti_msgs__srv__ListExecutables_Response * item =
    ((const vizanti_msgs__srv__ListExecutables_Response *)
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__response(untyped_member, index));
  vizanti_msgs__srv__ListExecutables_Response * value =
    (vizanti_msgs__srv__ListExecutables_Response *)(untyped_value);
  *value = *item;
}

void vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vizanti_msgs__srv__ListExecutables_Response * item =
    ((vizanti_msgs__srv__ListExecutables_Response *)
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__response(untyped_member, index));
  const vizanti_msgs__srv__ListExecutables_Response * value =
    (const vizanti_msgs__srv__ListExecutables_Response *)(untyped_value);
  *item = *value;
}

bool vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Event__response(
  void * untyped_member, size_t size)
{
  vizanti_msgs__srv__ListExecutables_Response__Sequence * member =
    (vizanti_msgs__srv__ListExecutables_Response__Sequence *)(untyped_member);
  vizanti_msgs__srv__ListExecutables_Response__Sequence__fini(member);
  return vizanti_msgs__srv__ListExecutables_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_msgs__srv__ListExecutables_Event, info),  // bytes offset in struct
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
    offsetof(vizanti_msgs__srv__ListExecutables_Event, request),  // bytes offset in struct
    NULL,  // default value
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__size_function__ListExecutables_Event__request,  // size() function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__request,  // get_const(index) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__request,  // get(index) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Event__request,  // fetch(index, &value) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Event__request,  // assign(index, value) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vizanti_msgs__srv__ListExecutables_Event, response),  // bytes offset in struct
    NULL,  // default value
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__size_function__ListExecutables_Event__response,  // size() function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_const_function__ListExecutables_Event__response,  // get_const(index) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__get_function__ListExecutables_Event__response,  // get(index) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__fetch_function__ListExecutables_Event__response,  // fetch(index, &value) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__assign_function__ListExecutables_Event__response,  // assign(index, value) function pointer
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__resize_function__ListExecutables_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_members = {
  "vizanti_msgs__srv",  // message namespace
  "ListExecutables_Event",  // message name
  3,  // number of fields
  sizeof(vizanti_msgs__srv__ListExecutables_Event),
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_member_array,  // message members
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_type_support_handle = {
  0,
  &vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_members,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__ListExecutables_Event__get_type_hash,
  &vizanti_msgs__srv__ListExecutables_Event__get_type_description,
  &vizanti_msgs__srv__ListExecutables_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Event)() {
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Request)();
  vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Response)();
  if (!vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vizanti_msgs/srv/detail/list_executables__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_members = {
  "vizanti_msgs__srv",  // service namespace
  "ListExecutables",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle,
  NULL,  // response message
  // vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle
  NULL  // event_message
  // vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle
};


static rosidl_service_type_support_t vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_type_support_handle = {
  0,
  &vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_members,
  get_service_typesupport_handle_function,
  &vizanti_msgs__srv__ListExecutables_Request__rosidl_typesupport_introspection_c__ListExecutables_Request_message_type_support_handle,
  &vizanti_msgs__srv__ListExecutables_Response__rosidl_typesupport_introspection_c__ListExecutables_Response_message_type_support_handle,
  &vizanti_msgs__srv__ListExecutables_Event__rosidl_typesupport_introspection_c__ListExecutables_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vizanti_msgs,
    srv,
    ListExecutables
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vizanti_msgs,
    srv,
    ListExecutables
  ),
  &vizanti_msgs__srv__ListExecutables__get_type_hash,
  &vizanti_msgs__srv__ListExecutables__get_type_description,
  &vizanti_msgs__srv__ListExecutables__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables)() {
  if (!vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, ListExecutables_Event)()->data;
  }

  return &vizanti_msgs__srv__detail__list_executables__rosidl_typesupport_introspection_c__ListExecutables_service_type_support_handle;
}
