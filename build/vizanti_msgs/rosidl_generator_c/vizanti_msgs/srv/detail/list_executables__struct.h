// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_msgs:srv/ListExecutables.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__STRUCT_H_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'package'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListExecutables in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListExecutables_Request
{
  rosidl_runtime_c__String package;
} vizanti_msgs__srv__ListExecutables_Request;

// Struct for a sequence of vizanti_msgs__srv__ListExecutables_Request.
typedef struct vizanti_msgs__srv__ListExecutables_Request__Sequence
{
  vizanti_msgs__srv__ListExecutables_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListExecutables_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'executables'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListExecutables in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListExecutables_Response
{
  rosidl_runtime_c__String__Sequence executables;
} vizanti_msgs__srv__ListExecutables_Response;

// Struct for a sequence of vizanti_msgs__srv__ListExecutables_Response.
typedef struct vizanti_msgs__srv__ListExecutables_Response__Sequence
{
  vizanti_msgs__srv__ListExecutables_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListExecutables_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vizanti_msgs__srv__ListExecutables_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vizanti_msgs__srv__ListExecutables_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListExecutables in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListExecutables_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vizanti_msgs__srv__ListExecutables_Request__Sequence request;
  vizanti_msgs__srv__ListExecutables_Response__Sequence response;
} vizanti_msgs__srv__ListExecutables_Event;

// Struct for a sequence of vizanti_msgs__srv__ListExecutables_Event.
typedef struct vizanti_msgs__srv__ListExecutables_Event__Sequence
{
  vizanti_msgs__srv__ListExecutables_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListExecutables_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__STRUCT_H_
