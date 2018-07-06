// Generated by gencpp from file stdr_msgs/SoundSource.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_SOUNDSOURCE_H
#define STDR_MSGS_MESSAGE_SOUNDSOURCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct SoundSource_
{
  typedef SoundSource_<ContainerAllocator> Type;

  SoundSource_()
    : id()
    , dbs(0.0)
    , pose()  {
    }
  SoundSource_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , dbs(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef float _dbs_type;
  _dbs_type dbs;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _pose_type;
  _pose_type pose;




  typedef boost::shared_ptr< ::stdr_msgs::SoundSource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::SoundSource_<ContainerAllocator> const> ConstPtr;

}; // struct SoundSource_

typedef ::stdr_msgs::SoundSource_<std::allocator<void> > SoundSource;

typedef boost::shared_ptr< ::stdr_msgs::SoundSource > SoundSourcePtr;
typedef boost::shared_ptr< ::stdr_msgs::SoundSource const> SoundSourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::SoundSource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::SoundSource_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg', '/home/mdas/ros_ws/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SoundSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SoundSource_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SoundSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SoundSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SoundSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SoundSource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::SoundSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c45183ddcf94455b2f7bb47f2f3e9f87";
  }

  static const char* value(const ::stdr_msgs::SoundSource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc45183ddcf94455bULL;
  static const uint64_t static_value2 = 0x2f7bb47f2f3e9f87ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::SoundSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/SoundSource";
  }

  static const char* value(const ::stdr_msgs::SoundSource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::SoundSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Source description\n\
\n\
string id\n\
float32 dbs\n\
\n\
# sensor pose, relative to the map origin\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::SoundSource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::SoundSource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.dbs);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoundSource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::SoundSource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::SoundSource_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "dbs: ";
    Printer<float>::stream(s, indent + "  ", v.dbs);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_SOUNDSOURCE_H
