// Generated by gencpp from file rob599_basic/FibonacciGoal.msg
// DO NOT EDIT!


#ifndef ROB599_BASIC_MESSAGE_FIBONACCIGOAL_H
#define ROB599_BASIC_MESSAGE_FIBONACCIGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rob599_basic
{
template <class ContainerAllocator>
struct FibonacciGoal_
{
  typedef FibonacciGoal_<ContainerAllocator> Type;

  FibonacciGoal_()
    : number(0)  {
    }
  FibonacciGoal_(const ContainerAllocator& _alloc)
    : number(0)  {
  (void)_alloc;
    }



   typedef int64_t _number_type;
  _number_type number;





  typedef boost::shared_ptr< ::rob599_basic::FibonacciGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rob599_basic::FibonacciGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FibonacciGoal_

typedef ::rob599_basic::FibonacciGoal_<std::allocator<void> > FibonacciGoal;

typedef boost::shared_ptr< ::rob599_basic::FibonacciGoal > FibonacciGoalPtr;
typedef boost::shared_ptr< ::rob599_basic::FibonacciGoal const> FibonacciGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rob599_basic::FibonacciGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rob599_basic::FibonacciGoal_<ContainerAllocator1> & lhs, const ::rob599_basic::FibonacciGoal_<ContainerAllocator2> & rhs)
{
  return lhs.number == rhs.number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rob599_basic::FibonacciGoal_<ContainerAllocator1> & lhs, const ::rob599_basic::FibonacciGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rob599_basic

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rob599_basic::FibonacciGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rob599_basic::FibonacciGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rob599_basic::FibonacciGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a1b249ff0900a6eb941a743f359017a";
  }

  static const char* value(const ::rob599_basic::FibonacciGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a1b249ff0900a6eULL;
  static const uint64_t static_value2 = 0xb941a743f359017aULL;
};

template<class ContainerAllocator>
struct DataType< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rob599_basic/FibonacciGoal";
  }

  static const char* value(const ::rob599_basic::FibonacciGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal\n"
"int64 number\n"
;
  }

  static const char* value(const ::rob599_basic::FibonacciGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FibonacciGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rob599_basic::FibonacciGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rob599_basic::FibonacciGoal_<ContainerAllocator>& v)
  {
    s << indent << "number: ";
    Printer<int64_t>::stream(s, indent + "  ", v.number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROB599_BASIC_MESSAGE_FIBONACCIGOAL_H
