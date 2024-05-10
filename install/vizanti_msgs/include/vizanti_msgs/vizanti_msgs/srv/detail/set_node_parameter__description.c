// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice

#include "vizanti_msgs/srv/detail/set_node_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__SetNodeParameter__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x90, 0x28, 0x08, 0xc0, 0x09, 0xac, 0xc9,
      0xe9, 0xce, 0xde, 0xa0, 0x3d, 0xb4, 0x0e, 0xbf,
      0xa9, 0xf1, 0xa6, 0xd3, 0xab, 0x6f, 0x81, 0x51,
      0xc5, 0xed, 0xe8, 0x48, 0x4f, 0x03, 0xfe, 0x11,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__SetNodeParameter_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x74, 0xfb, 0x35, 0xd4, 0xbe, 0x45, 0x63,
      0x07, 0x1d, 0xba, 0xd8, 0xed, 0xef, 0xf0, 0x78,
      0x38, 0xf4, 0x57, 0x5e, 0xa4, 0xff, 0x69, 0xd3,
      0x70, 0x36, 0xf3, 0xdf, 0x5e, 0x1e, 0x1f, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__SetNodeParameter_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0xbd, 0xe6, 0xf8, 0x8d, 0xda, 0x56, 0xd4,
      0xc5, 0xe6, 0xf2, 0xc8, 0xbd, 0xd2, 0x3f, 0x23,
      0xa0, 0xb7, 0xc0, 0x30, 0x66, 0x81, 0xc8, 0xf4,
      0x86, 0x19, 0x25, 0x1f, 0xb0, 0xd4, 0xad, 0x8d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__SetNodeParameter_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x38, 0x72, 0xf8, 0x62, 0x9f, 0x13, 0x5c,
      0xa9, 0x4a, 0xaa, 0xfb, 0x5c, 0x13, 0x7c, 0xc8,
      0xd3, 0x82, 0x79, 0x36, 0x28, 0xb6, 0x52, 0xe7,
      0x84, 0x7b, 0x14, 0x15, 0x4b, 0xe7, 0xc5, 0x22,
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

static char vizanti_msgs__srv__SetNodeParameter__TYPE_NAME[] = "vizanti_msgs/srv/SetNodeParameter";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char vizanti_msgs__srv__SetNodeParameter_Event__TYPE_NAME[] = "vizanti_msgs/srv/SetNodeParameter_Event";
static char vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME[] = "vizanti_msgs/srv/SetNodeParameter_Request";
static char vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME[] = "vizanti_msgs/srv/SetNodeParameter_Response";

// Define type names, field names, and default values
static char vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__request_message[] = "request_message";
static char vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__response_message[] = "response_message";
static char vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__SetNodeParameter__FIELDS[] = {
  {
    {vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__SetNodeParameter_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__SetNodeParameter__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__SetNodeParameter__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__SetNodeParameter__TYPE_NAME, 33, 33},
      {vizanti_msgs__srv__SetNodeParameter__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__SetNodeParameter__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__SetNodeParameter_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__SetNodeParameter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vizanti_msgs__srv__SetNodeParameter_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__node[] = "node";
static char vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__param[] = "param";
static char vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__SetNodeParameter_Request__FIELDS[] = {
  {
    {vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__node, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__param, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Request__FIELD_NAME__value, 5, 5},
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
vizanti_msgs__srv__SetNodeParameter_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
      {vizanti_msgs__srv__SetNodeParameter_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__SetNodeParameter_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__SetNodeParameter_Response__FIELDS[] = {
  {
    {vizanti_msgs__srv__SetNodeParameter_Response__FIELD_NAME__status, 6, 6},
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
vizanti_msgs__srv__SetNodeParameter_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
      {vizanti_msgs__srv__SetNodeParameter_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__info[] = "info";
static char vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__request[] = "request";
static char vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__SetNodeParameter_Event__FIELDS[] = {
  {
    {vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__SetNodeParameter_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__SetNodeParameter_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__SetNodeParameter_Event__TYPE_NAME, 39, 39},
      {vizanti_msgs__srv__SetNodeParameter_Event__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__SetNodeParameter_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__SetNodeParameter_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__SetNodeParameter_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node\n"
  "string param\n"
  "string value\n"
  "---\n"
  "string status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__SetNodeParameter__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__SetNodeParameter__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__SetNodeParameter_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__SetNodeParameter_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__SetNodeParameter_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__SetNodeParameter_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__SetNodeParameter_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__SetNodeParameter_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__SetNodeParameter__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__SetNodeParameter__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__SetNodeParameter_Event__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__SetNodeParameter_Request__get_individual_type_description_source(NULL);
    sources[5] = *vizanti_msgs__srv__SetNodeParameter_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__SetNodeParameter_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__SetNodeParameter_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__SetNodeParameter_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__SetNodeParameter_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__SetNodeParameter_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__SetNodeParameter_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__SetNodeParameter_Request__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__SetNodeParameter_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
