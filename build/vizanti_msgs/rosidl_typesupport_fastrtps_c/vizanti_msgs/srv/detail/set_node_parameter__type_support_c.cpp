// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice
#include "vizanti_msgs/srv/detail/set_node_parameter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vizanti_msgs/srv/detail/set_node_parameter__struct.h"
#include "vizanti_msgs/srv/detail/set_node_parameter__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // node, param, value
#include "rosidl_runtime_c/string_functions.h"  // node, param, value

// forward declare type support functions


using _SetNodeParameter_Request__ros_msg_type = vizanti_msgs__srv__SetNodeParameter_Request;

static bool _SetNodeParameter_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetNodeParameter_Request__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    const rosidl_runtime_c__String * str = &ros_message->node;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: param
  {
    const rosidl_runtime_c__String * str = &ros_message->param;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: value
  {
    const rosidl_runtime_c__String * str = &ros_message->value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetNodeParameter_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetNodeParameter_Request__ros_msg_type * ros_message = static_cast<_SetNodeParameter_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node.data) {
      rosidl_runtime_c__String__init(&ros_message->node);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node'\n");
      return false;
    }
  }

  // Field name: param
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->param.data) {
      rosidl_runtime_c__String__init(&ros_message->param);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->param,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'param'\n");
      return false;
    }
  }

  // Field name: value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->value.data) {
      rosidl_runtime_c__String__init(&ros_message->value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetNodeParameter_Request__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node.size + 1);
  // field.name param
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->param.size + 1);
  // field.name value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->value.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetNodeParameter_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: node
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: param
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: value
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vizanti_msgs__srv__SetNodeParameter_Request;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetNodeParameter_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetNodeParameter_Request = {
  "vizanti_msgs::srv",
  "SetNodeParameter_Request",
  _SetNodeParameter_Request__cdr_serialize,
  _SetNodeParameter_Request__cdr_deserialize,
  _SetNodeParameter_Request__get_serialized_size,
  _SetNodeParameter_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetNodeParameter_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetNodeParameter_Request,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__SetNodeParameter_Request__get_type_hash,
  &vizanti_msgs__srv__SetNodeParameter_Request__get_type_description,
  &vizanti_msgs__srv__SetNodeParameter_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Request)() {
  return &_SetNodeParameter_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vizanti_msgs/srv/detail/set_node_parameter__struct.h"
// already included above
// #include "vizanti_msgs/srv/detail/set_node_parameter__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // status
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _SetNodeParameter_Response__ros_msg_type = vizanti_msgs__srv__SetNodeParameter_Response;

static bool _SetNodeParameter_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetNodeParameter_Response__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetNodeParameter_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetNodeParameter_Response__ros_msg_type * ros_message = static_cast<_SetNodeParameter_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetNodeParameter_Response__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetNodeParameter_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vizanti_msgs__srv__SetNodeParameter_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetNodeParameter_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetNodeParameter_Response = {
  "vizanti_msgs::srv",
  "SetNodeParameter_Response",
  _SetNodeParameter_Response__cdr_serialize,
  _SetNodeParameter_Response__cdr_deserialize,
  _SetNodeParameter_Response__get_serialized_size,
  _SetNodeParameter_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetNodeParameter_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetNodeParameter_Response,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__SetNodeParameter_Response__get_type_hash,
  &vizanti_msgs__srv__SetNodeParameter_Response__get_type_description,
  &vizanti_msgs__srv__SetNodeParameter_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Response)() {
  return &_SetNodeParameter_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vizanti_msgs/srv/detail/set_node_parameter__struct.h"
// already included above
// #include "vizanti_msgs/srv/detail/set_node_parameter__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vizanti_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vizanti_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vizanti_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();
size_t get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Request)();
size_t get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Response)();


using _SetNodeParameter_Event__ros_msg_type = vizanti_msgs__srv__SetNodeParameter_Event;

static bool _SetNodeParameter_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetNodeParameter_Event__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SetNodeParameter_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetNodeParameter_Event__ros_msg_type * ros_message = static_cast<_SetNodeParameter_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      vizanti_msgs__srv__SetNodeParameter_Request__Sequence__fini(&ros_message->request);
    }
    if (!vizanti_msgs__srv__SetNodeParameter_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      vizanti_msgs__srv__SetNodeParameter_Response__Sequence__fini(&ros_message->response);
    }
    if (!vizanti_msgs__srv__SetNodeParameter_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetNodeParameter_Event__ros_msg_type * ros_message = static_cast<const _SetNodeParameter_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetNodeParameter_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vizanti_msgs__srv__SetNodeParameter_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vizanti_msgs__srv__SetNodeParameter_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetNodeParameter_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vizanti_msgs__srv__SetNodeParameter_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetNodeParameter_Event = {
  "vizanti_msgs::srv",
  "SetNodeParameter_Event",
  _SetNodeParameter_Event__cdr_serialize,
  _SetNodeParameter_Event__cdr_deserialize,
  _SetNodeParameter_Event__get_serialized_size,
  _SetNodeParameter_Event__max_serialized_size
};

static rosidl_message_type_support_t _SetNodeParameter_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetNodeParameter_Event,
  get_message_typesupport_handle_function,
  &vizanti_msgs__srv__SetNodeParameter_Event__get_type_hash,
  &vizanti_msgs__srv__SetNodeParameter_Event__get_type_description,
  &vizanti_msgs__srv__SetNodeParameter_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Event)() {
  return &_SetNodeParameter_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vizanti_msgs/srv/set_node_parameter.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetNodeParameter__callbacks = {
  "vizanti_msgs::srv",
  "SetNodeParameter",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter_Response)(),
};

static rosidl_service_type_support_t SetNodeParameter__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetNodeParameter__callbacks,
  get_service_typesupport_handle_function,
  &_SetNodeParameter_Request__type_support,
  &_SetNodeParameter_Response__type_support,
  &_SetNodeParameter_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vizanti_msgs,
    srv,
    SetNodeParameter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vizanti_msgs,
    srv,
    SetNodeParameter
  ),
  &vizanti_msgs__srv__SetNodeParameter__get_type_hash,
  &vizanti_msgs__srv__SetNodeParameter__get_type_description,
  &vizanti_msgs__srv__SetNodeParameter__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, SetNodeParameter)() {
  return &SetNodeParameter__handle;
}

#if defined(__cplusplus)
}
#endif
