// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vizanti_msgs:srv/ListPackages.idl
// generated code does not contain a copyright notice

#include "vizanti_msgs/srv/detail/list_packages__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ListPackages__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x98, 0xae, 0xef, 0xb0, 0xfa, 0xbb, 0xaa,
      0x99, 0xce, 0x68, 0x38, 0x19, 0xe1, 0xce, 0xf0,
      0x92, 0xd5, 0x14, 0x5e, 0x03, 0x41, 0x00, 0xca,
      0xd6, 0x76, 0xc5, 0xbf, 0xcd, 0xea, 0xda, 0x45,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ListPackages_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x69, 0xeb, 0x06, 0x08, 0x05, 0x27, 0x85,
      0x22, 0x7a, 0x69, 0x91, 0x1b, 0x2e, 0x49, 0xb9,
      0x05, 0x68, 0x48, 0x0f, 0xb0, 0xd8, 0xd7, 0xc1,
      0xe4, 0x09, 0x95, 0x86, 0xc4, 0x51, 0xc7, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ListPackages_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x6a, 0x4c, 0xb1, 0xa1, 0x38, 0xcd, 0x5e,
      0x22, 0xa4, 0xe9, 0x82, 0xd9, 0xee, 0x42, 0x4c,
      0x58, 0x71, 0x3f, 0x3f, 0x51, 0xc0, 0x3f, 0x9c,
      0xd9, 0x0b, 0xbc, 0x1d, 0x7f, 0x23, 0x46, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
const rosidl_type_hash_t *
vizanti_msgs__srv__ListPackages_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x2c, 0xb7, 0x18, 0xa0, 0xed, 0x0f, 0xb1,
      0xbb, 0x21, 0x1f, 0x2f, 0x9d, 0xc0, 0xe2, 0x99,
      0xd7, 0x7c, 0xc6, 0x3b, 0x3a, 0xdb, 0xc2, 0xd9,
      0x0a, 0x01, 0x40, 0x80, 0x28, 0x0b, 0x1f, 0xbe,
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

static char vizanti_msgs__srv__ListPackages__TYPE_NAME[] = "vizanti_msgs/srv/ListPackages";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char vizanti_msgs__srv__ListPackages_Event__TYPE_NAME[] = "vizanti_msgs/srv/ListPackages_Event";
static char vizanti_msgs__srv__ListPackages_Request__TYPE_NAME[] = "vizanti_msgs/srv/ListPackages_Request";
static char vizanti_msgs__srv__ListPackages_Response__TYPE_NAME[] = "vizanti_msgs/srv/ListPackages_Response";

// Define type names, field names, and default values
static char vizanti_msgs__srv__ListPackages__FIELD_NAME__request_message[] = "request_message";
static char vizanti_msgs__srv__ListPackages__FIELD_NAME__response_message[] = "response_message";
static char vizanti_msgs__srv__ListPackages__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ListPackages__FIELDS[] = {
  {
    {vizanti_msgs__srv__ListPackages__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vizanti_msgs__srv__ListPackages_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__ListPackages__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ListPackages__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ListPackages__TYPE_NAME, 29, 29},
      {vizanti_msgs__srv__ListPackages__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__ListPackages__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__ListPackages_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__ListPackages_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vizanti_msgs__srv__ListPackages_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ListPackages_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ListPackages_Request__FIELDS[] = {
  {
    {vizanti_msgs__srv__ListPackages_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ListPackages_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
      {vizanti_msgs__srv__ListPackages_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ListPackages_Response__FIELD_NAME__packages[] = "packages";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ListPackages_Response__FIELDS[] = {
  {
    {vizanti_msgs__srv__ListPackages_Response__FIELD_NAME__packages, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ListPackages_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
      {vizanti_msgs__srv__ListPackages_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__info[] = "info";
static char vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__request[] = "request";
static char vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vizanti_msgs__srv__ListPackages_Event__FIELDS[] = {
  {
    {vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vizanti_msgs__srv__ListPackages_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vizanti_msgs__srv__ListPackages_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vizanti_msgs__srv__ListPackages_Event__TYPE_NAME, 35, 35},
      {vizanti_msgs__srv__ListPackages_Event__FIELDS, 3, 3},
    },
    {vizanti_msgs__srv__ListPackages_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vizanti_msgs__srv__ListPackages_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vizanti_msgs__srv__ListPackages_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "string[] packages ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ListPackages__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ListPackages__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ListPackages_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ListPackages_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ListPackages_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ListPackages_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vizanti_msgs__srv__ListPackages_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vizanti_msgs__srv__ListPackages_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ListPackages__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ListPackages__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__ListPackages_Event__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__ListPackages_Request__get_individual_type_description_source(NULL);
    sources[5] = *vizanti_msgs__srv__ListPackages_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ListPackages_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ListPackages_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ListPackages_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ListPackages_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vizanti_msgs__srv__ListPackages_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vizanti_msgs__srv__ListPackages_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vizanti_msgs__srv__ListPackages_Request__get_individual_type_description_source(NULL);
    sources[4] = *vizanti_msgs__srv__ListPackages_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
