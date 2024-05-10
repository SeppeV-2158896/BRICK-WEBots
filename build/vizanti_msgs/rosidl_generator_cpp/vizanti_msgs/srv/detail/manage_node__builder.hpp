// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/ManageNode.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/manage_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageNode_Request_node
{
public:
  Init_ManageNode_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ManageNode_Request node(::vizanti_msgs::srv::ManageNode_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ManageNode_Request>()
{
  return vizanti_msgs::srv::builder::Init_ManageNode_Request_node();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageNode_Response_message
{
public:
  explicit Init_ManageNode_Response_message(::vizanti_msgs::srv::ManageNode_Response & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::ManageNode_Response message(::vizanti_msgs::srv::ManageNode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Response msg_;
};

class Init_ManageNode_Response_success
{
public:
  Init_ManageNode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManageNode_Response_message success(::vizanti_msgs::srv::ManageNode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ManageNode_Response_message(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ManageNode_Response>()
{
  return vizanti_msgs::srv::builder::Init_ManageNode_Response_success();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageNode_Event_response
{
public:
  explicit Init_ManageNode_Event_response(::vizanti_msgs::srv::ManageNode_Event & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::ManageNode_Event response(::vizanti_msgs::srv::ManageNode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Event msg_;
};

class Init_ManageNode_Event_request
{
public:
  explicit Init_ManageNode_Event_request(::vizanti_msgs::srv::ManageNode_Event & msg)
  : msg_(msg)
  {}
  Init_ManageNode_Event_response request(::vizanti_msgs::srv::ManageNode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ManageNode_Event_response(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Event msg_;
};

class Init_ManageNode_Event_info
{
public:
  Init_ManageNode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManageNode_Event_request info(::vizanti_msgs::srv::ManageNode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ManageNode_Event_request(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ManageNode_Event>()
{
  return vizanti_msgs::srv::builder::Init_ManageNode_Event_info();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_
