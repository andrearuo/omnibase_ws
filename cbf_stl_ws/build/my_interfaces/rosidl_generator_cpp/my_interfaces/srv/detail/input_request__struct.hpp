// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_HPP_
#define MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__srv__InputRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__srv__InputRequest_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputRequest_Request_
{
  using Type = InputRequest_Request_<ContainerAllocator>;

  explicit InputRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_operator = "";
      this->ta = 0ll;
      this->tb = 0ll;
      this->tab = 0ll;
      this->epsilon = 0.0;
      this->collision_avoidance = false;
      this->velocity_constraint = false;
      this->angular_constraint = false;
      this->eta = 0ll;
      this->b0_min = 0.0;
      this->b0_max = 0.0;
      this->margin = 0.0;
      this->k = 0.0;
      this->esp = 0ll;
    }
  }

  explicit InputRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temp_operator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_operator = "";
      this->ta = 0ll;
      this->tb = 0ll;
      this->tab = 0ll;
      this->epsilon = 0.0;
      this->collision_avoidance = false;
      this->velocity_constraint = false;
      this->angular_constraint = false;
      this->eta = 0ll;
      this->b0_min = 0.0;
      this->b0_max = 0.0;
      this->margin = 0.0;
      this->k = 0.0;
      this->esp = 0ll;
    }
  }

  // field types and members
  using _temp_operator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _temp_operator_type temp_operator;
  using _goal_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_type goal;
  using _goal2_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal2_type goal2;
  using _ta_type =
    int64_t;
  _ta_type ta;
  using _tb_type =
    int64_t;
  _tb_type tb;
  using _tab_type =
    int64_t;
  _tab_type tab;
  using _epsilon_type =
    double;
  _epsilon_type epsilon;
  using _collision_avoidance_type =
    bool;
  _collision_avoidance_type collision_avoidance;
  using _velocity_constraint_type =
    bool;
  _velocity_constraint_type velocity_constraint;
  using _angular_constraint_type =
    bool;
  _angular_constraint_type angular_constraint;
  using _eta_type =
    int64_t;
  _eta_type eta;
  using _b0_min_type =
    double;
  _b0_min_type b0_min;
  using _b0_max_type =
    double;
  _b0_max_type b0_max;
  using _margin_type =
    double;
  _margin_type margin;
  using _k_type =
    double;
  _k_type k;
  using _esp_type =
    int64_t;
  _esp_type esp;

  // setters for named parameter idiom
  Type & set__temp_operator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->temp_operator = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__goal2(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal2 = _arg;
    return *this;
  }
  Type & set__ta(
    const int64_t & _arg)
  {
    this->ta = _arg;
    return *this;
  }
  Type & set__tb(
    const int64_t & _arg)
  {
    this->tb = _arg;
    return *this;
  }
  Type & set__tab(
    const int64_t & _arg)
  {
    this->tab = _arg;
    return *this;
  }
  Type & set__epsilon(
    const double & _arg)
  {
    this->epsilon = _arg;
    return *this;
  }
  Type & set__collision_avoidance(
    const bool & _arg)
  {
    this->collision_avoidance = _arg;
    return *this;
  }
  Type & set__velocity_constraint(
    const bool & _arg)
  {
    this->velocity_constraint = _arg;
    return *this;
  }
  Type & set__angular_constraint(
    const bool & _arg)
  {
    this->angular_constraint = _arg;
    return *this;
  }
  Type & set__eta(
    const int64_t & _arg)
  {
    this->eta = _arg;
    return *this;
  }
  Type & set__b0_min(
    const double & _arg)
  {
    this->b0_min = _arg;
    return *this;
  }
  Type & set__b0_max(
    const double & _arg)
  {
    this->b0_max = _arg;
    return *this;
  }
  Type & set__margin(
    const double & _arg)
  {
    this->margin = _arg;
    return *this;
  }
  Type & set__k(
    const double & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__esp(
    const int64_t & _arg)
  {
    this->esp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::srv::InputRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::srv::InputRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::InputRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::InputRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__srv__InputRequest_Request
    std::shared_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__srv__InputRequest_Request
    std::shared_ptr<my_interfaces::srv::InputRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputRequest_Request_ & other) const
  {
    if (this->temp_operator != other.temp_operator) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->goal2 != other.goal2) {
      return false;
    }
    if (this->ta != other.ta) {
      return false;
    }
    if (this->tb != other.tb) {
      return false;
    }
    if (this->tab != other.tab) {
      return false;
    }
    if (this->epsilon != other.epsilon) {
      return false;
    }
    if (this->collision_avoidance != other.collision_avoidance) {
      return false;
    }
    if (this->velocity_constraint != other.velocity_constraint) {
      return false;
    }
    if (this->angular_constraint != other.angular_constraint) {
      return false;
    }
    if (this->eta != other.eta) {
      return false;
    }
    if (this->b0_min != other.b0_min) {
      return false;
    }
    if (this->b0_max != other.b0_max) {
      return false;
    }
    if (this->margin != other.margin) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->esp != other.esp) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputRequest_Request_

// alias to use template instance with default allocator
using InputRequest_Request =
  my_interfaces::srv::InputRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__srv__InputRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__srv__InputRequest_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputRequest_Response_
{
  using Type = InputRequest_Response_<ContainerAllocator>;

  explicit InputRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = false;
    }
  }

  explicit InputRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = false;
    }
  }

  // field types and members
  using _answer_type =
    bool;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const bool & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::srv::InputRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::srv::InputRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::InputRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::InputRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__srv__InputRequest_Response
    std::shared_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__srv__InputRequest_Response
    std::shared_ptr<my_interfaces::srv::InputRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputRequest_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputRequest_Response_

// alias to use template instance with default allocator
using InputRequest_Response =
  my_interfaces::srv::InputRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interfaces

namespace my_interfaces
{

namespace srv
{

struct InputRequest
{
  using Request = my_interfaces::srv::InputRequest_Request;
  using Response = my_interfaces::srv::InputRequest_Response;
};

}  // namespace srv

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__STRUCT_HPP_
