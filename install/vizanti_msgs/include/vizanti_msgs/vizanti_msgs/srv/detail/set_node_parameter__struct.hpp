// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Request __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Request __declspec(deprecated)
#endif

namespace vizanti_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNodeParameter_Request_
{
  using Type = SetNodeParameter_Request_<ContainerAllocator>;

  explicit SetNodeParameter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
      this->param = "";
      this->value = "";
    }
  }

  explicit SetNodeParameter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc),
    param(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
      this->param = "";
      this->value = "";
    }
  }

  // field types and members
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_type node;
  using _param_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _param_type param;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__param(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->param = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Request
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Request
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNodeParameter_Request_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNodeParameter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNodeParameter_Request_

// alias to use template instance with default allocator
using SetNodeParameter_Request =
  vizanti_msgs::srv::SetNodeParameter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vizanti_msgs


#ifndef _WIN32
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Response __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Response __declspec(deprecated)
#endif

namespace vizanti_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNodeParameter_Response_
{
  using Type = SetNodeParameter_Response_<ContainerAllocator>;

  explicit SetNodeParameter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit SetNodeParameter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Response
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Response
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNodeParameter_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNodeParameter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNodeParameter_Response_

// alias to use template instance with default allocator
using SetNodeParameter_Response =
  vizanti_msgs::srv::SetNodeParameter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vizanti_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Event __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Event __declspec(deprecated)
#endif

namespace vizanti_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNodeParameter_Event_
{
  using Type = SetNodeParameter_Event_<ContainerAllocator>;

  explicit SetNodeParameter_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetNodeParameter_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vizanti_msgs::srv::SetNodeParameter_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vizanti_msgs::srv::SetNodeParameter_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Event
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_msgs__srv__SetNodeParameter_Event
    std::shared_ptr<vizanti_msgs::srv::SetNodeParameter_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNodeParameter_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNodeParameter_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNodeParameter_Event_

// alias to use template instance with default allocator
using SetNodeParameter_Event =
  vizanti_msgs::srv::SetNodeParameter_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vizanti_msgs

namespace vizanti_msgs
{

namespace srv
{

struct SetNodeParameter
{
  using Request = vizanti_msgs::srv::SetNodeParameter_Request;
  using Response = vizanti_msgs::srv::SetNodeParameter_Response;
  using Event = vizanti_msgs::srv::SetNodeParameter_Event;
};

}  // namespace srv

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_HPP_
