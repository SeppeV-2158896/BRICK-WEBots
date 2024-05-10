// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/ListPackages.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/list_packages__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListPackages_Request>()
{
  return ::vizanti_msgs::srv::ListPackages_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ListPackages_Response_packages
{
public:
  Init_ListPackages_Response_packages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ListPackages_Response packages(::vizanti_msgs::srv::ListPackages_Response::_packages_type arg)
  {
    msg_.packages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ListPackages_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListPackages_Response>()
{
  return vizanti_msgs::srv::builder::Init_ListPackages_Response_packages();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ListPackages_Event_response
{
public:
  explicit Init_ListPackages_Event_response(::vizanti_msgs::srv::ListPackages_Event & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::ListPackages_Event response(::vizanti_msgs::srv::ListPackages_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ListPackages_Event msg_;
};

class Init_ListPackages_Event_request
{
public:
  explicit Init_ListPackages_Event_request(::vizanti_msgs::srv::ListPackages_Event & msg)
  : msg_(msg)
  {}
  Init_ListPackages_Event_response request(::vizanti_msgs::srv::ListPackages_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListPackages_Event_response(msg_);
  }

private:
  ::vizanti_msgs::srv::ListPackages_Event msg_;
};

class Init_ListPackages_Event_info
{
public:
  Init_ListPackages_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListPackages_Event_request info(::vizanti_msgs::srv::ListPackages_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListPackages_Event_request(msg_);
  }

private:
  ::vizanti_msgs::srv::ListPackages_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListPackages_Event>()
{
  return vizanti_msgs::srv::builder::Init_ListPackages_Event_info();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_
