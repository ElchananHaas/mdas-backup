// Generated by gencpp from file gps_msgs/GpsRange.msg
// DO NOT EDIT!


#ifndef GPS_MSGS_MESSAGE_GPSRANGE_H
#define GPS_MSGS_MESSAGE_GPSRANGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gps_msgs/Carrier.h>

namespace gps_msgs
{
template <class ContainerAllocator>
struct GpsRange_
{
  typedef GpsRange_<ContainerAllocator> Type;

  GpsRange_()
    : obs(0)
    , prn()
    , psr()
    , psr_std()
    , carrier()  {
      prn.assign(0);

      psr.assign(0.0);

      psr_std.assign(0.0);
  }
  GpsRange_(const ContainerAllocator& _alloc)
    : obs(0)
    , prn()
    , psr()
    , psr_std()
    , carrier(_alloc)  {
  (void)_alloc;
      prn.assign(0);

      psr.assign(0.0);

      psr_std.assign(0.0);
  }



   typedef uint8_t _obs_type;
  _obs_type obs;

   typedef boost::array<uint8_t, 33>  _prn_type;
  _prn_type prn;

   typedef boost::array<double, 33>  _psr_type;
  _psr_type psr;

   typedef boost::array<float, 33>  _psr_std_type;
  _psr_std_type psr_std;

   typedef  ::gps_msgs::Carrier_<ContainerAllocator>  _carrier_type;
  _carrier_type carrier;




  typedef boost::shared_ptr< ::gps_msgs::GpsRange_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gps_msgs::GpsRange_<ContainerAllocator> const> ConstPtr;

}; // struct GpsRange_

typedef ::gps_msgs::GpsRange_<std::allocator<void> > GpsRange;

typedef boost::shared_ptr< ::gps_msgs::GpsRange > GpsRangePtr;
typedef boost::shared_ptr< ::gps_msgs::GpsRange const> GpsRangeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gps_msgs::GpsRange_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gps_msgs::GpsRange_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'gps_msgs': ['/home/mdas/ros_ws/src/packages/gps-msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::GpsRange_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::GpsRange_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::GpsRange_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::GpsRange_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::GpsRange_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::GpsRange_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gps_msgs::GpsRange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e597bac5463f4a71cf3a7e9ae61b3675";
  }

  static const char* value(const ::gps_msgs::GpsRange_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe597bac5463f4a71ULL;
  static const uint64_t static_value2 = 0xcf3a7e9ae61b3675ULL;
};

template<class ContainerAllocator>
struct DataType< ::gps_msgs::GpsRange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gps_msgs/GpsRange";
  }

  static const char* value(const ::gps_msgs::GpsRange_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gps_msgs::GpsRange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Useful general comment goes here\n\
## Each receiver will be able to track differing numbers of satellites, so the\n\
## fields are each of length 32, the number of SV's in the GPS constellation\n\
\n\
# number of observations --> how far to iterate through the arrays\n\
uint8 obs\n\
\n\
## sv number for each satellite\n\
uint8[33] prn\n\
\n\
float64[33] psr\n\
float32[33] psr_std\n\
\n\
Carrier carrier\n\
================================================================================\n\
MSG: gps_msgs/Carrier\n\
## Useful comments go here\n\
\n\
float64[33] doppler\n\
\n\
## signal to noise ratio ,Cn0\n\
float64[33] noise\n\
\n\
## equivalent to the negative of the accumulated doppler\n\
float64[33] phase\n\
float32[33] phase_std\n\
";
  }

  static const char* value(const ::gps_msgs::GpsRange_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gps_msgs::GpsRange_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obs);
      stream.next(m.prn);
      stream.next(m.psr);
      stream.next(m.psr_std);
      stream.next(m.carrier);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GpsRange_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gps_msgs::GpsRange_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gps_msgs::GpsRange_<ContainerAllocator>& v)
  {
    s << indent << "obs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obs);
    s << indent << "prn[]" << std::endl;
    for (size_t i = 0; i < v.prn.size(); ++i)
    {
      s << indent << "  prn[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.prn[i]);
    }
    s << indent << "psr[]" << std::endl;
    for (size_t i = 0; i < v.psr.size(); ++i)
    {
      s << indent << "  psr[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.psr[i]);
    }
    s << indent << "psr_std[]" << std::endl;
    for (size_t i = 0; i < v.psr_std.size(); ++i)
    {
      s << indent << "  psr_std[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.psr_std[i]);
    }
    s << indent << "carrier: ";
    s << std::endl;
    Printer< ::gps_msgs::Carrier_<ContainerAllocator> >::stream(s, indent + "  ", v.carrier);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GPS_MSGS_MESSAGE_GPSRANGE_H
