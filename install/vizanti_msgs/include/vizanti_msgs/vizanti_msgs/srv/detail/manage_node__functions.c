// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vizanti_msgs:srv/ManageNode.idl
// generated code does not contain a copyright notice
#include "vizanti_msgs/srv/detail/manage_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node`
#include "rosidl_runtime_c/string_functions.h"

bool
vizanti_msgs__srv__ManageNode_Request__init(vizanti_msgs__srv__ManageNode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    vizanti_msgs__srv__ManageNode_Request__fini(msg);
    return false;
  }
  return true;
}

void
vizanti_msgs__srv__ManageNode_Request__fini(vizanti_msgs__srv__ManageNode_Request * msg)
{
  if (!msg) {
    return;
  }
  // node
  rosidl_runtime_c__String__fini(&msg->node);
}

bool
vizanti_msgs__srv__ManageNode_Request__are_equal(const vizanti_msgs__srv__ManageNode_Request * lhs, const vizanti_msgs__srv__ManageNode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Request__copy(
  const vizanti_msgs__srv__ManageNode_Request * input,
  vizanti_msgs__srv__ManageNode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  return true;
}

vizanti_msgs__srv__ManageNode_Request *
vizanti_msgs__srv__ManageNode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Request * msg = (vizanti_msgs__srv__ManageNode_Request *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_msgs__srv__ManageNode_Request));
  bool success = vizanti_msgs__srv__ManageNode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_msgs__srv__ManageNode_Request__destroy(vizanti_msgs__srv__ManageNode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_msgs__srv__ManageNode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_msgs__srv__ManageNode_Request__Sequence__init(vizanti_msgs__srv__ManageNode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Request * data = NULL;

  if (size) {
    data = (vizanti_msgs__srv__ManageNode_Request *)allocator.zero_allocate(size, sizeof(vizanti_msgs__srv__ManageNode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_msgs__srv__ManageNode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_msgs__srv__ManageNode_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vizanti_msgs__srv__ManageNode_Request__Sequence__fini(vizanti_msgs__srv__ManageNode_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vizanti_msgs__srv__ManageNode_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vizanti_msgs__srv__ManageNode_Request__Sequence *
vizanti_msgs__srv__ManageNode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Request__Sequence * array = (vizanti_msgs__srv__ManageNode_Request__Sequence *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_msgs__srv__ManageNode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_msgs__srv__ManageNode_Request__Sequence__destroy(vizanti_msgs__srv__ManageNode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_msgs__srv__ManageNode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_msgs__srv__ManageNode_Request__Sequence__are_equal(const vizanti_msgs__srv__ManageNode_Request__Sequence * lhs, const vizanti_msgs__srv__ManageNode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Request__Sequence__copy(
  const vizanti_msgs__srv__ManageNode_Request__Sequence * input,
  vizanti_msgs__srv__ManageNode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_msgs__srv__ManageNode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_msgs__srv__ManageNode_Request * data =
      (vizanti_msgs__srv__ManageNode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_msgs__srv__ManageNode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_msgs__srv__ManageNode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vizanti_msgs__srv__ManageNode_Response__init(vizanti_msgs__srv__ManageNode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    vizanti_msgs__srv__ManageNode_Response__fini(msg);
    return false;
  }
  return true;
}

void
vizanti_msgs__srv__ManageNode_Response__fini(vizanti_msgs__srv__ManageNode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
vizanti_msgs__srv__ManageNode_Response__are_equal(const vizanti_msgs__srv__ManageNode_Response * lhs, const vizanti_msgs__srv__ManageNode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Response__copy(
  const vizanti_msgs__srv__ManageNode_Response * input,
  vizanti_msgs__srv__ManageNode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

vizanti_msgs__srv__ManageNode_Response *
vizanti_msgs__srv__ManageNode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Response * msg = (vizanti_msgs__srv__ManageNode_Response *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_msgs__srv__ManageNode_Response));
  bool success = vizanti_msgs__srv__ManageNode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_msgs__srv__ManageNode_Response__destroy(vizanti_msgs__srv__ManageNode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_msgs__srv__ManageNode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_msgs__srv__ManageNode_Response__Sequence__init(vizanti_msgs__srv__ManageNode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Response * data = NULL;

  if (size) {
    data = (vizanti_msgs__srv__ManageNode_Response *)allocator.zero_allocate(size, sizeof(vizanti_msgs__srv__ManageNode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_msgs__srv__ManageNode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_msgs__srv__ManageNode_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vizanti_msgs__srv__ManageNode_Response__Sequence__fini(vizanti_msgs__srv__ManageNode_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vizanti_msgs__srv__ManageNode_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vizanti_msgs__srv__ManageNode_Response__Sequence *
vizanti_msgs__srv__ManageNode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Response__Sequence * array = (vizanti_msgs__srv__ManageNode_Response__Sequence *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_msgs__srv__ManageNode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_msgs__srv__ManageNode_Response__Sequence__destroy(vizanti_msgs__srv__ManageNode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_msgs__srv__ManageNode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_msgs__srv__ManageNode_Response__Sequence__are_equal(const vizanti_msgs__srv__ManageNode_Response__Sequence * lhs, const vizanti_msgs__srv__ManageNode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Response__Sequence__copy(
  const vizanti_msgs__srv__ManageNode_Response__Sequence * input,
  vizanti_msgs__srv__ManageNode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_msgs__srv__ManageNode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_msgs__srv__ManageNode_Response * data =
      (vizanti_msgs__srv__ManageNode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_msgs__srv__ManageNode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_msgs__srv__ManageNode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "vizanti_msgs/srv/detail/manage_node__functions.h"

bool
vizanti_msgs__srv__ManageNode_Event__init(vizanti_msgs__srv__ManageNode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vizanti_msgs__srv__ManageNode_Event__fini(msg);
    return false;
  }
  // request
  if (!vizanti_msgs__srv__ManageNode_Request__Sequence__init(&msg->request, 0)) {
    vizanti_msgs__srv__ManageNode_Event__fini(msg);
    return false;
  }
  // response
  if (!vizanti_msgs__srv__ManageNode_Response__Sequence__init(&msg->response, 0)) {
    vizanti_msgs__srv__ManageNode_Event__fini(msg);
    return false;
  }
  return true;
}

void
vizanti_msgs__srv__ManageNode_Event__fini(vizanti_msgs__srv__ManageNode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vizanti_msgs__srv__ManageNode_Request__Sequence__fini(&msg->request);
  // response
  vizanti_msgs__srv__ManageNode_Response__Sequence__fini(&msg->response);
}

bool
vizanti_msgs__srv__ManageNode_Event__are_equal(const vizanti_msgs__srv__ManageNode_Event * lhs, const vizanti_msgs__srv__ManageNode_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!vizanti_msgs__srv__ManageNode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vizanti_msgs__srv__ManageNode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Event__copy(
  const vizanti_msgs__srv__ManageNode_Event * input,
  vizanti_msgs__srv__ManageNode_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!vizanti_msgs__srv__ManageNode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vizanti_msgs__srv__ManageNode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vizanti_msgs__srv__ManageNode_Event *
vizanti_msgs__srv__ManageNode_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Event * msg = (vizanti_msgs__srv__ManageNode_Event *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_msgs__srv__ManageNode_Event));
  bool success = vizanti_msgs__srv__ManageNode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_msgs__srv__ManageNode_Event__destroy(vizanti_msgs__srv__ManageNode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_msgs__srv__ManageNode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_msgs__srv__ManageNode_Event__Sequence__init(vizanti_msgs__srv__ManageNode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Event * data = NULL;

  if (size) {
    data = (vizanti_msgs__srv__ManageNode_Event *)allocator.zero_allocate(size, sizeof(vizanti_msgs__srv__ManageNode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_msgs__srv__ManageNode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_msgs__srv__ManageNode_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vizanti_msgs__srv__ManageNode_Event__Sequence__fini(vizanti_msgs__srv__ManageNode_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vizanti_msgs__srv__ManageNode_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vizanti_msgs__srv__ManageNode_Event__Sequence *
vizanti_msgs__srv__ManageNode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__ManageNode_Event__Sequence * array = (vizanti_msgs__srv__ManageNode_Event__Sequence *)allocator.allocate(sizeof(vizanti_msgs__srv__ManageNode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_msgs__srv__ManageNode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_msgs__srv__ManageNode_Event__Sequence__destroy(vizanti_msgs__srv__ManageNode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_msgs__srv__ManageNode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_msgs__srv__ManageNode_Event__Sequence__are_equal(const vizanti_msgs__srv__ManageNode_Event__Sequence * lhs, const vizanti_msgs__srv__ManageNode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_msgs__srv__ManageNode_Event__Sequence__copy(
  const vizanti_msgs__srv__ManageNode_Event__Sequence * input,
  vizanti_msgs__srv__ManageNode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_msgs__srv__ManageNode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_msgs__srv__ManageNode_Event * data =
      (vizanti_msgs__srv__ManageNode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_msgs__srv__ManageNode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_msgs__srv__ManageNode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_msgs__srv__ManageNode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
