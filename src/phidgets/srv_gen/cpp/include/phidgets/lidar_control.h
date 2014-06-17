/* Auto-generated by genmsg_cpp for file /home/robonurse/nps_ws/src/phidgets/srv/lidar_control.srv */
#ifndef PHIDGETS_SERVICE_LIDAR_CONTROL_H
#define PHIDGETS_SERVICE_LIDAR_CONTROL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace phidgets
{
template <class ContainerAllocator>
struct lidar_controlRequest_ {
  typedef lidar_controlRequest_<ContainerAllocator> Type;

  lidar_controlRequest_()
  : pause(false)
  , pan_servo_index(0)
  , tilt_servo_index(0)
  , sensor_index(0)
  , no_of_sensors(0)
  , sensor_type()
  , sensor_coupling()
  , speed(0.0)
  , acceleration(0.0)
  , pan_position_left(0.0)
  , pan_position_right(0.0)
  , pan_position_left_angle_degrees(0.0)
  , pan_position_right_angle_degrees(0.0)
  , tilt_position_up(0.0)
  , tilt_position_down(0.0)
  , tilt_position_up_angle_degrees(0.0)
  , tilt_position_down_angle_degrees(0.0)
  , tilt_steps(0)
  , cycle_time_sec(0.0)
  {
  }

  lidar_controlRequest_(const ContainerAllocator& _alloc)
  : pause(false)
  , pan_servo_index(0)
  , tilt_servo_index(0)
  , sensor_index(0)
  , no_of_sensors(0)
  , sensor_type(_alloc)
  , sensor_coupling(_alloc)
  , speed(0.0)
  , acceleration(0.0)
  , pan_position_left(0.0)
  , pan_position_right(0.0)
  , pan_position_left_angle_degrees(0.0)
  , pan_position_right_angle_degrees(0.0)
  , tilt_position_up(0.0)
  , tilt_position_down(0.0)
  , tilt_position_up_angle_degrees(0.0)
  , tilt_position_down_angle_degrees(0.0)
  , tilt_steps(0)
  , cycle_time_sec(0.0)
  {
  }

  typedef uint8_t _pause_type;
  uint8_t pause;

  typedef int32_t _pan_servo_index_type;
  int32_t pan_servo_index;

  typedef int32_t _tilt_servo_index_type;
  int32_t tilt_servo_index;

  typedef int32_t _sensor_index_type;
  int32_t sensor_index;

  typedef int32_t _no_of_sensors_type;
  int32_t no_of_sensors;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sensor_type_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  sensor_type;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sensor_coupling_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  sensor_coupling;

  typedef float _speed_type;
  float speed;

  typedef float _acceleration_type;
  float acceleration;

  typedef float _pan_position_left_type;
  float pan_position_left;

  typedef float _pan_position_right_type;
  float pan_position_right;

  typedef float _pan_position_left_angle_degrees_type;
  float pan_position_left_angle_degrees;

  typedef float _pan_position_right_angle_degrees_type;
  float pan_position_right_angle_degrees;

  typedef float _tilt_position_up_type;
  float tilt_position_up;

  typedef float _tilt_position_down_type;
  float tilt_position_down;

  typedef float _tilt_position_up_angle_degrees_type;
  float tilt_position_up_angle_degrees;

  typedef float _tilt_position_down_angle_degrees_type;
  float tilt_position_down_angle_degrees;

  typedef int32_t _tilt_steps_type;
  int32_t tilt_steps;

  typedef float _cycle_time_sec_type;
  float cycle_time_sec;


  typedef boost::shared_ptr< ::phidgets::lidar_controlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phidgets::lidar_controlRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct lidar_controlRequest
typedef  ::phidgets::lidar_controlRequest_<std::allocator<void> > lidar_controlRequest;

typedef boost::shared_ptr< ::phidgets::lidar_controlRequest> lidar_controlRequestPtr;
typedef boost::shared_ptr< ::phidgets::lidar_controlRequest const> lidar_controlRequestConstPtr;



template <class ContainerAllocator>
struct lidar_controlResponse_ {
  typedef lidar_controlResponse_<ContainerAllocator> Type;

  lidar_controlResponse_()
  : ack(0)
  {
  }

  lidar_controlResponse_(const ContainerAllocator& _alloc)
  : ack(0)
  {
  }

  typedef int32_t _ack_type;
  int32_t ack;


  typedef boost::shared_ptr< ::phidgets::lidar_controlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phidgets::lidar_controlResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct lidar_controlResponse
typedef  ::phidgets::lidar_controlResponse_<std::allocator<void> > lidar_controlResponse;

typedef boost::shared_ptr< ::phidgets::lidar_controlResponse> lidar_controlResponsePtr;
typedef boost::shared_ptr< ::phidgets::lidar_controlResponse const> lidar_controlResponseConstPtr;


struct lidar_control
{

typedef lidar_controlRequest Request;
typedef lidar_controlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct lidar_control
} // namespace phidgets

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::phidgets::lidar_controlRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::phidgets::lidar_controlRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::phidgets::lidar_controlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "acbedaa0dacc8068c8686729472cbefb";
  }

  static const char* value(const  ::phidgets::lidar_controlRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xacbedaa0dacc8068ULL;
  static const uint64_t static_value2 = 0xc8686729472cbefbULL;
};

template<class ContainerAllocator>
struct DataType< ::phidgets::lidar_controlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/lidar_controlRequest";
  }

  static const char* value(const  ::phidgets::lidar_controlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phidgets::lidar_controlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool pause\n\
int32 pan_servo_index\n\
int32 tilt_servo_index\n\
int32 sensor_index\n\
int32 no_of_sensors\n\
int32[] sensor_type\n\
int32[] sensor_coupling\n\
float32 speed\n\
float32 acceleration\n\
float32 pan_position_left\n\
float32 pan_position_right\n\
float32 pan_position_left_angle_degrees\n\
float32 pan_position_right_angle_degrees\n\
float32 tilt_position_up\n\
float32 tilt_position_down\n\
float32 tilt_position_up_angle_degrees\n\
float32 tilt_position_down_angle_degrees\n\
int32 tilt_steps\n\
float32 cycle_time_sec\n\
\n\
";
  }

  static const char* value(const  ::phidgets::lidar_controlRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::phidgets::lidar_controlResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::phidgets::lidar_controlResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::phidgets::lidar_controlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "35e806e08fe8e25fde5b4c88fa52f05b";
  }

  static const char* value(const  ::phidgets::lidar_controlResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x35e806e08fe8e25fULL;
  static const uint64_t static_value2 = 0xde5b4c88fa52f05bULL;
};

template<class ContainerAllocator>
struct DataType< ::phidgets::lidar_controlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/lidar_controlResponse";
  }

  static const char* value(const  ::phidgets::lidar_controlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phidgets::lidar_controlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 ack\n\
\n\
\n\
";
  }

  static const char* value(const  ::phidgets::lidar_controlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::phidgets::lidar_controlResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phidgets::lidar_controlRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pause);
    stream.next(m.pan_servo_index);
    stream.next(m.tilt_servo_index);
    stream.next(m.sensor_index);
    stream.next(m.no_of_sensors);
    stream.next(m.sensor_type);
    stream.next(m.sensor_coupling);
    stream.next(m.speed);
    stream.next(m.acceleration);
    stream.next(m.pan_position_left);
    stream.next(m.pan_position_right);
    stream.next(m.pan_position_left_angle_degrees);
    stream.next(m.pan_position_right_angle_degrees);
    stream.next(m.tilt_position_up);
    stream.next(m.tilt_position_down);
    stream.next(m.tilt_position_up_angle_degrees);
    stream.next(m.tilt_position_down_angle_degrees);
    stream.next(m.tilt_steps);
    stream.next(m.cycle_time_sec);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct lidar_controlRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phidgets::lidar_controlResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ack);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct lidar_controlResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<phidgets::lidar_control> {
  static const char* value() 
  {
    return "63541d856b007db47fcb5fb28b699f7b";
  }

  static const char* value(const phidgets::lidar_control&) { return value(); } 
};

template<>
struct DataType<phidgets::lidar_control> {
  static const char* value() 
  {
    return "phidgets/lidar_control";
  }

  static const char* value(const phidgets::lidar_control&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<phidgets::lidar_controlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "63541d856b007db47fcb5fb28b699f7b";
  }

  static const char* value(const phidgets::lidar_controlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<phidgets::lidar_controlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/lidar_control";
  }

  static const char* value(const phidgets::lidar_controlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<phidgets::lidar_controlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "63541d856b007db47fcb5fb28b699f7b";
  }

  static const char* value(const phidgets::lidar_controlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<phidgets::lidar_controlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/lidar_control";
  }

  static const char* value(const phidgets::lidar_controlResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PHIDGETS_SERVICE_LIDAR_CONTROL_H

