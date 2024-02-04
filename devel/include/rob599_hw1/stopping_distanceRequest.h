// Generated by gencpp from file rob599_hw1/stopping_distanceRequest.msg
// DO NOT EDIT!


#ifndef ROB599_HW1_MESSAGE_STOPPING_DISTANCEREQUEST_H
#define ROB599_HW1_MESSAGE_STOPPING_DISTANCEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rob599_hw1
{
template <class ContainerAllocator>
struct stopping_distanceRequest_
{
  typedef stopping_distanceRequest_<ContainerAllocator> Type;

  stopping_distanceRequest_()
    : input(0.0)  {
    }
  stopping_distanceRequest_(const ContainerAllocator& _alloc)
    : input(0.0)  {
  (void)_alloc;
    }



   typedef float _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct stopping_distanceRequest_

typedef ::rob599_hw1::stopping_distanceRequest_<std::allocator<void> > stopping_distanceRequest;

typedef boost::shared_ptr< ::rob599_hw1::stopping_distanceRequest > stopping_distanceRequestPtr;
typedef boost::shared_ptr< ::rob599_hw1::stopping_distanceRequest const> stopping_distanceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator1> & lhs, const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator1> & lhs, const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rob599_hw1

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79c3c282188d9b61edcde55d5577527e";
  }

  static const char* value(const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79c3c282188d9b61ULL;
  static const uint64_t static_value2 = 0xedcde55d5577527eULL;
};

template<class ContainerAllocator>
struct DataType< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rob599_hw1/stopping_distanceRequest";
  }

  static const char* value(const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 input\n"
;
  }

  static const char* value(const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct stopping_distanceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rob599_hw1::stopping_distanceRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    Printer<float>::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROB599_HW1_MESSAGE_STOPPING_DISTANCEREQUEST_H