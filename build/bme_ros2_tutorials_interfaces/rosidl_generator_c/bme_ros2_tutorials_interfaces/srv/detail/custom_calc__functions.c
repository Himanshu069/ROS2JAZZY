// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bme_ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice
#include "bme_ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

bme_ros2_tutorials_interfaces__srv__CustomCalc_Request *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * msg = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request));
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * data = NULL;

  if (size) {
    data = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.zero_allocate(size, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&data[i - 1]);
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
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array)
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
      bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&array->data[i]);
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

bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Request * data =
      (bme_ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

bme_ros2_tutorials_interfaces__srv__CustomCalc_Response *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * msg = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response));
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * data = NULL;

  if (size) {
    data = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.zero_allocate(size, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&data[i - 1]);
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
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array)
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
      bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&array->data[i]);
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

bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Response * data =
      (bme_ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__copy(
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
// #include "bme_ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  // request
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(&msg->request, 0)) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  // response
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(&msg->response, 0)) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  return true;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(&msg->request);
  // response
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(&msg->response);
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * rhs)
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
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * output)
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
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bme_ros2_tutorials_interfaces__srv__CustomCalc_Event *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * msg = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event));
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__init(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * data = NULL;

  if (size) {
    data = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.zero_allocate(size, sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&data[i - 1]);
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
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__fini(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array)
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
      bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&array->data[i]);
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

bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence *
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array = (bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence *)allocator.allocate(sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__destroy(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__are_equal(const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * lhs, const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__copy(
  const bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * input,
  bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bme_ros2_tutorials_interfaces__srv__CustomCalc_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bme_ros2_tutorials_interfaces__srv__CustomCalc_Event * data =
      (bme_ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bme_ros2_tutorials_interfaces__srv__CustomCalc_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
