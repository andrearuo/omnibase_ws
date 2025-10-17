// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tts_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_HPP_
#define TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_Goal __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_Goal_
{
  using Type = TTS_Goal_<ContainerAllocator>;

  explicit TTS_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = "";
      this->locale = "";
      this->voice = "";
    }
  }

  explicit TTS_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc),
    locale(_alloc),
    voice(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = "";
      this->locale = "";
      this->voice = "";
    }
  }

  // field types and members
  using _input_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _input_type input;
  using _locale_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _locale_type locale;
  using _voice_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _voice_type voice;

  // setters for named parameter idiom
  Type & set__input(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__locale(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->locale = _arg;
    return *this;
  }
  Type & set__voice(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->voice = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_Goal
    std::shared_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_Goal
    std::shared_ptr<tts_msgs::action::TTS_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_Goal_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->locale != other.locale) {
      return false;
    }
    if (this->voice != other.voice) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_Goal_

// alias to use template instance with default allocator
using TTS_Goal =
  tts_msgs::action::TTS_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs


#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_Result __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_Result __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_Result_
{
  using Type = TTS_Result_<ContainerAllocator>;

  explicit TTS_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
    }
  }

  explicit TTS_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
    }
  }

  // field types and members
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_Result
    std::shared_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_Result
    std::shared_ptr<tts_msgs::action::TTS_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_Result_ & other) const
  {
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_Result_

// alias to use template instance with default allocator
using TTS_Result =
  tts_msgs::action::TTS_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs


#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_Feedback __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_Feedback_
{
  using Type = TTS_Feedback_<ContainerAllocator>;

  explicit TTS_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->word = "";
    }
  }

  explicit TTS_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : word(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->word = "";
    }
  }

  // field types and members
  using _word_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _word_type word;

  // setters for named parameter idiom
  Type & set__word(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->word = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_Feedback
    std::shared_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_Feedback
    std::shared_ptr<tts_msgs::action::TTS_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_Feedback_ & other) const
  {
    if (this->word != other.word) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_Feedback_

// alias to use template instance with default allocator
using TTS_Feedback =
  tts_msgs::action::TTS_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tts_msgs/action/detail/tts__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_SendGoal_Request __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_SendGoal_Request_
{
  using Type = TTS_SendGoal_Request_<ContainerAllocator>;

  explicit TTS_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TTS_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tts_msgs::action::TTS_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tts_msgs::action::TTS_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_SendGoal_Request
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_SendGoal_Request
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_SendGoal_Request_

// alias to use template instance with default allocator
using TTS_SendGoal_Request =
  tts_msgs::action::TTS_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_SendGoal_Response __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_SendGoal_Response_
{
  using Type = TTS_SendGoal_Response_<ContainerAllocator>;

  explicit TTS_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TTS_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_SendGoal_Response
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_SendGoal_Response
    std::shared_ptr<tts_msgs::action::TTS_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_SendGoal_Response_

// alias to use template instance with default allocator
using TTS_SendGoal_Response =
  tts_msgs::action::TTS_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs

namespace tts_msgs
{

namespace action
{

struct TTS_SendGoal
{
  using Request = tts_msgs::action::TTS_SendGoal_Request;
  using Response = tts_msgs::action::TTS_SendGoal_Response;
};

}  // namespace action

}  // namespace tts_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_GetResult_Request __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_GetResult_Request_
{
  using Type = TTS_GetResult_Request_<ContainerAllocator>;

  explicit TTS_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TTS_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_GetResult_Request
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_GetResult_Request
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_GetResult_Request_

// alias to use template instance with default allocator
using TTS_GetResult_Request =
  tts_msgs::action::TTS_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "tts_msgs/action/detail/tts__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_GetResult_Response __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_GetResult_Response_
{
  using Type = TTS_GetResult_Response_<ContainerAllocator>;

  explicit TTS_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TTS_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tts_msgs::action::TTS_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tts_msgs::action::TTS_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_GetResult_Response
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_GetResult_Response
    std::shared_ptr<tts_msgs::action::TTS_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_GetResult_Response_

// alias to use template instance with default allocator
using TTS_GetResult_Response =
  tts_msgs::action::TTS_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs

namespace tts_msgs
{

namespace action
{

struct TTS_GetResult
{
  using Request = tts_msgs::action::TTS_GetResult_Request;
  using Response = tts_msgs::action::TTS_GetResult_Response;
};

}  // namespace action

}  // namespace tts_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tts_msgs/action/detail/tts__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tts_msgs__action__TTS_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tts_msgs__action__TTS_FeedbackMessage __declspec(deprecated)
#endif

namespace tts_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TTS_FeedbackMessage_
{
  using Type = TTS_FeedbackMessage_<ContainerAllocator>;

  explicit TTS_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TTS_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tts_msgs::action::TTS_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tts_msgs::action::TTS_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tts_msgs__action__TTS_FeedbackMessage
    std::shared_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tts_msgs__action__TTS_FeedbackMessage
    std::shared_ptr<tts_msgs::action::TTS_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTS_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTS_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTS_FeedbackMessage_

// alias to use template instance with default allocator
using TTS_FeedbackMessage =
  tts_msgs::action::TTS_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tts_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tts_msgs
{

namespace action
{

struct TTS
{
  /// The goal message defined in the action definition.
  using Goal = tts_msgs::action::TTS_Goal;
  /// The result message defined in the action definition.
  using Result = tts_msgs::action::TTS_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tts_msgs::action::TTS_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tts_msgs::action::TTS_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tts_msgs::action::TTS_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tts_msgs::action::TTS_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TTS TTS;

}  // namespace action

}  // namespace tts_msgs

#endif  // TTS_MSGS__ACTION__DETAIL__TTS__STRUCT_HPP_
