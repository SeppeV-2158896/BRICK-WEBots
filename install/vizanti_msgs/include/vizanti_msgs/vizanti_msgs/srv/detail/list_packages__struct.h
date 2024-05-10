// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_msgs:srv/ListPackages.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__STRUCT_H_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListPackages in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListPackages_Request
{
  uint8_t structure_needs_at_least_one_member;
} vizanti_msgs__srv__ListPackages_Request;

// Struct for a sequence of vizanti_msgs__srv__ListPackages_Request.
typedef struct vizanti_msgs__srv__ListPackages_Request__Sequence
{
  vizanti_msgs__srv__ListPackages_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListPackages_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'packages'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListPackages in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListPackages_Response
{
  rosidl_runtime_c__String__Sequence packages;
} vizanti_msgs__srv__ListPackages_Response;

// Struct for a sequence of vizanti_msgs__srv__ListPackages_Response.
typedef struct vizanti_msgs__srv__ListPackages_Response__Sequence
{
  vizanti_msgs__srv__ListPackages_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListPackages_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vizanti_msgs__srv__ListPackages_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vizanti_msgs__srv__ListPackages_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListPackages in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__ListPackages_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vizanti_msgs__srv__ListPackages_Request__Sequence request;
  vizanti_msgs__srv__ListPackages_Response__Sequence response;
} vizanti_msgs__srv__ListPackages_Event;

// Struct for a sequence of vizanti_msgs__srv__ListPackages_Event.
typedef struct vizanti_msgs__srv__ListPackages_Event__Sequence
{
  vizanti_msgs__srv__ListPackages_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__ListPackages_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__STRUCT_H_