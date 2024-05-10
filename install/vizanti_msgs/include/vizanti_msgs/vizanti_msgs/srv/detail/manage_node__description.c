// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vizanti_msgs:srv/ManageNode.idl
// generated code does not contain a copyright notice

#include "vizanti_msgs/srv/detail/manage_node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ManageNode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x46, 0x74, 0xb6, 0x6c, 0x56, 0xfa, 0x71,
      0x32, 0x15, 0x9c, 0x67, 0x55, 0x13, 0x94, 0x91,
      0xb5, 0x30, 0x63, 0xe2, 0xad, 0x8d, 0x9f, 0x3e,
      0x14, 0x81, 0x39, 0x60, 0x99, 0x15, 0x7d, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ManageNode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x5b, 0xca, 0x97, 0xaf, 0x14, 0xdb, 0x83,
      0xe2, 0xb4, 0x26, 0xe8, 0x17, 0xc8, 0x75, 0x2d,
      0xa0, 0xb6, 0x03, 0xbd, 0xe8, 0xa8, 0x38, 0x8d,
      0x9a, 0xd5, 0x46, 0xfc, 0xce, 0xb9, 0x13, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ManageNode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x1d, 0xc3, 0x41, 0xe2, 0x55, 0xac, 0x3f,
      0x7d, 0xa2, 0xac, 0xbc, 0xc0, 0xc9, 0x12, 0x75,
      0x80, 0xd0, 0xba, 0x84, 0x00, 0x8d, 0x86, 0xa5,
      0x95, 0x6e, 0xa7, 0x38, 0x92, 0x56, 0x8c, 0x40,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ManageNode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x5c, 0x8d, 0xc6, 0xe9, 0x0c, 0xeb, 0x97,
      0x5c, 0x9f, 0xa7, 0xb6, 0x41, 0xa2, 0x18, 0x27,
      0x64, 0x62, 0x51, 0x9a, 0xe2, 0xb1, 0x8d, 0x32,
      0xe3, 0x00, 0xb0, 0x67, 0x98, 0xe7, 0x3b, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char vizanti_msgs__srv__ManageNode__TYPE_NAME[] = "vizanti_msgs/srv/ManageNode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char vizanti_msgs__srv__ManageNode_Event__TYPE_NAME[] = "vizanti_msgs/srv/ManageNode_Event";
static char vizanti_msgs__srv__ManageNode_Request__TYPE_NAME[] = "vizanti_msgs/srv/ManageNode_Request";
static char vizanti_msgs__srv__ManageNode_Response__TYPE_NAME[] = "vizanti_msgs/srv/ManageNode_Response";

// Define type names, field names, and default values
static char vizanti_msgs__srv__ManageNode__FIELD_NAME__request_message[] = "request_message";
static char vizanti_msgs__srv__ManageNode__FIELD_NAME__response_message[] = "response_message";
static char vizanti_msgs__srv__ManageNode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ManageNode__FIELDS[] = {
  {
    {vizanti_msgs__srv__ManageNode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ManageNode_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__ManageNode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ManageNode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ManageNode__TYPE_NAME, 27, 27},
      {vizanti_msgs__srv__ManageNode__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__ManageNode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__ManageNode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__ManageNode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vizanti_msgs__srv__ManageNode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ManageNode_Request__FIELD_NAME__node[] = "node";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ManageNode_Request__FIELDS[] = {
  {
    {vizanti_msgs__srv__ManageNode_Request__FIELD_NAME__node, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ManageNode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
      {vizanti_msgs__srv__ManageNode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ManageNode_Response__FIELD_NAME__success[] = "success";
static char vizanti_msgs__srv__ManageNode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ManageNode_Response__FIELDS[] = {
  {
    {vizanti_msgs__srv__ManageNode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ManageNode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
      {vizanti_msgs__srv__ManageNode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__info[] = "info";
static char vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__request[] = "request";
static char vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ManageNode_Event__FIELDS[] = {
  {
    {vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__ManageNode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ManageNode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ManageNode_Event__TYPE_NAME, 33, 33},
      {vizanti_msgs__srv__ManageNode_Event__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__ManageNode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__ManageNode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__ManageNode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ManageNode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ManageNode__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ManageNode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ManageNode_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ManageNode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ManageNode_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ManageNode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ManageNode_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ManageNode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ManageNode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__ManageNode_Event__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__ManageNode_Request__get_individual_type_description_source(NULL);
    sources[5] = *vizanti_msgs__srv__ManageNode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ManageNode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ManageNode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ManageNode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ManageNode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ManageNode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ManageNode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__ManageNode_Request__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__ManageNode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
