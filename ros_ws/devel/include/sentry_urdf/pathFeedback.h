// Generated by gencpp from file sentry_urdf/pathFeedback.msg
// DO NOT EDIT!


#ifndef SENTRY_URDF_MESSAGE_PATHFEEDBACK_H
#define SENTRY_URDF_MESSAGE_PATHFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace sentry_urdf
{
template <class ContainerAllocator>
struct pathFeedback_
{
  typedef pathFeedback_<ContainerAllocator> Type;

  pathFeedback_()
    : fdbk(0)
    , last_pose()  {
    }
  pathFeedback_(const ContainerAllocator& _alloc)
    : fdbk(0)
    , last_pose(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _fdbk_type;
  _fdbk_type fdbk;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _last_pose_type;
  _last_pose_type last_pose;




  typedef boost::shared_ptr< ::sentry_urdf::pathFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sentry_urdf::pathFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct pathFeedback_

typedef ::sentry_urdf::pathFeedback_<std::allocator<void> > pathFeedback;

typedef boost::shared_ptr< ::sentry_urdf::pathFeedback > pathFeedbackPtr;
typedef boost::shared_ptr< ::sentry_urdf::pathFeedback const> pathFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sentry_urdf::pathFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sentry_urdf::pathFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sentry_urdf

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/indigo/share/roscpp/cmake/../msg'], 'sentry_urdf': ['/home/mdas/ros_ws/devel/share/sentry_urdf/msg'], 'actionlib': ['/opt/ros/indigo/share/actionlib/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sentry_urdf::pathFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sentry_urdf::pathFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sentry_urdf::pathFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0b116a1b26080da24a5e6119c80095b";
  }

  static const char* value(const ::sentry_urdf::pathFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0b116a1b26080daULL;
  static const uint64_t static_value2 = 0x24a5e6119c80095bULL;
};

template<class ContainerAllocator>
struct DataType< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sentry_urdf/pathFeedback";
  }

  static const char* value(const ::sentry_urdf::pathFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32 fdbk\n\
geometry_msgs/Pose last_pose\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::sentry_urdf::pathFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fdbk);
      stream.next(m.last_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pathFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sentry_urdf::pathFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sentry_urdf::pathFeedback_<ContainerAllocator>& v)
  {
    s << indent << "fdbk: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fdbk);
    s << indent << "last_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.last_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENTRY_URDF_MESSAGE_PATHFEEDBACK_H
