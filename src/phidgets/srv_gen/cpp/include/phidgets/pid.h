/* Auto-generated by genmsg_cpp for file /home/robonurse/nps_ws/src/phidgets/srv/pid.srv */
#ifndef PHIDGETS_SERVICE_PID_H
#define PHIDGETS_SERVICE_PID_H
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
struct pidRequest_ {
  typedef pidRequest_<ContainerAllocator> Type;

  pidRequest_()
  : index(0)
  , mode(0)
  , direction(0)
  , target_position(0)
  , target_velocity(0.0)
  , p_gain(0.0)
  , i_gain(0.0)
  , d_gain(0.0)
  , acc_ff(0.0)
  , fri_ff(0.0)
  , vel_ff(0.0)
  , hold(0.0)
  , bias(0.0)
  , accel(0.0)
  , trans(0.0)
  , lag(0.0)
  , min(0.0)
  , max(0.0)
  , slew(0.0)
  {
  }

  pidRequest_(const ContainerAllocator& _alloc)
  : index(0)
  , mode(0)
  , direction(0)
  , target_position(0)
  , target_velocity(0.0)
  , p_gain(0.0)
  , i_gain(0.0)
  , d_gain(0.0)
  , acc_ff(0.0)
  , fri_ff(0.0)
  , vel_ff(0.0)
  , hold(0.0)
  , bias(0.0)
  , accel(0.0)
  , trans(0.0)
  , lag(0.0)
  , min(0.0)
  , max(0.0)
  , slew(0.0)
  {
  }

  typedef int32_t _index_type;
  int32_t index;

  typedef int32_t _mode_type;
  int32_t mode;

  typedef int32_t _direction_type;
  int32_t direction;

  typedef int32_t _target_position_type;
  int32_t target_position;

  typedef float _target_velocity_type;
  float target_velocity;

  typedef float _p_gain_type;
  float p_gain;

  typedef float _i_gain_type;
  float i_gain;

  typedef float _d_gain_type;
  float d_gain;

  typedef float _acc_ff_type;
  float acc_ff;

  typedef float _fri_ff_type;
  float fri_ff;

  typedef float _vel_ff_type;
  float vel_ff;

  typedef float _hold_type;
  float hold;

  typedef float _bias_type;
  float bias;

  typedef float _accel_type;
  float accel;

  typedef float _trans_type;
  float trans;

  typedef float _lag_type;
  float lag;

  typedef float _min_type;
  float min;

  typedef float _max_type;
  float max;

  typedef float _slew_type;
  float slew;


  typedef boost::shared_ptr< ::phidgets::pidRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phidgets::pidRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct pidRequest
typedef  ::phidgets::pidRequest_<std::allocator<void> > pidRequest;

typedef boost::shared_ptr< ::phidgets::pidRequest> pidRequestPtr;
typedef boost::shared_ptr< ::phidgets::pidRequest const> pidRequestConstPtr;



template <class ContainerAllocator>
struct pidResponse_ {
  typedef pidResponse_<ContainerAllocator> Type;

  pidResponse_()
  : ack(0)
  {
  }

  pidResponse_(const ContainerAllocator& _alloc)
  : ack(0)
  {
  }

  typedef int32_t _ack_type;
  int32_t ack;


  typedef boost::shared_ptr< ::phidgets::pidResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phidgets::pidResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct pidResponse
typedef  ::phidgets::pidResponse_<std::allocator<void> > pidResponse;

typedef boost::shared_ptr< ::phidgets::pidResponse> pidResponsePtr;
typedef boost::shared_ptr< ::phidgets::pidResponse const> pidResponseConstPtr;


struct pid
{

typedef pidRequest Request;
typedef pidResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct pid
} // namespace phidgets

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::phidgets::pidRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::phidgets::pidRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::phidgets::pidRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f158fdeeb607b097858cf374d60a5921";
  }

  static const char* value(const  ::phidgets::pidRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf158fdeeb607b097ULL;
  static const uint64_t static_value2 = 0x858cf374d60a5921ULL;
};

template<class ContainerAllocator>
struct DataType< ::phidgets::pidRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/pidRequest";
  }

  static const char* value(const  ::phidgets::pidRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phidgets::pidRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 index\n\
int32 mode\n\
int32 direction\n\
int32 target_position\n\
float32 target_velocity\n\
float32 p_gain\n\
float32 i_gain\n\
float32 d_gain\n\
float32 acc_ff\n\
float32 fri_ff\n\
float32 vel_ff\n\
float32 hold\n\
float32 bias\n\
float32 accel\n\
float32 trans\n\
float32 lag\n\
float32 min\n\
float32 max\n\
float32 slew\n\
\n\
";
  }

  static const char* value(const  ::phidgets::pidRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::phidgets::pidRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::phidgets::pidResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::phidgets::pidResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::phidgets::pidResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "35e806e08fe8e25fde5b4c88fa52f05b";
  }

  static const char* value(const  ::phidgets::pidResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x35e806e08fe8e25fULL;
  static const uint64_t static_value2 = 0xde5b4c88fa52f05bULL;
};

template<class ContainerAllocator>
struct DataType< ::phidgets::pidResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/pidResponse";
  }

  static const char* value(const  ::phidgets::pidResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phidgets::pidResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 ack\n\
\n\
\n\
";
  }

  static const char* value(const  ::phidgets::pidResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::phidgets::pidResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phidgets::pidRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.index);
    stream.next(m.mode);
    stream.next(m.direction);
    stream.next(m.target_position);
    stream.next(m.target_velocity);
    stream.next(m.p_gain);
    stream.next(m.i_gain);
    stream.next(m.d_gain);
    stream.next(m.acc_ff);
    stream.next(m.fri_ff);
    stream.next(m.vel_ff);
    stream.next(m.hold);
    stream.next(m.bias);
    stream.next(m.accel);
    stream.next(m.trans);
    stream.next(m.lag);
    stream.next(m.min);
    stream.next(m.max);
    stream.next(m.slew);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct pidRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phidgets::pidResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ack);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct pidResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<phidgets::pid> {
  static const char* value() 
  {
    return "095b14b7e37aa3b1f86557d3dcc10fde";
  }

  static const char* value(const phidgets::pid&) { return value(); } 
};

template<>
struct DataType<phidgets::pid> {
  static const char* value() 
  {
    return "phidgets/pid";
  }

  static const char* value(const phidgets::pid&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<phidgets::pidRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "095b14b7e37aa3b1f86557d3dcc10fde";
  }

  static const char* value(const phidgets::pidRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<phidgets::pidRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/pid";
  }

  static const char* value(const phidgets::pidRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<phidgets::pidResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "095b14b7e37aa3b1f86557d3dcc10fde";
  }

  static const char* value(const phidgets::pidResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<phidgets::pidResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phidgets/pid";
  }

  static const char* value(const phidgets::pidResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PHIDGETS_SERVICE_PID_H

