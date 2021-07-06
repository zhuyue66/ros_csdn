// Generated by gencpp from file learing_communication/AddTwoInts.msg
// DO NOT EDIT!


#ifndef LEARING_COMMUNICATION_MESSAGE_ADDTWOINTS_H
#define LEARING_COMMUNICATION_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <learing_communication/AddTwoIntsRequest.h>
#include <learing_communication/AddTwoIntsResponse.h>


namespace learing_communication
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace learing_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::learing_communication::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::learing_communication::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::learing_communication::AddTwoInts > {
  static const char* value()
  {
    return "learing_communication/AddTwoInts";
  }

  static const char* value(const ::learing_communication::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::learing_communication::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::learing_communication::AddTwoInts >
template<>
struct MD5Sum< ::learing_communication::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::learing_communication::AddTwoInts >::value();
  }
  static const char* value(const ::learing_communication::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::learing_communication::AddTwoIntsRequest> should match
// service_traits::DataType< ::learing_communication::AddTwoInts >
template<>
struct DataType< ::learing_communication::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::learing_communication::AddTwoInts >::value();
  }
  static const char* value(const ::learing_communication::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::learing_communication::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::learing_communication::AddTwoInts >
template<>
struct MD5Sum< ::learing_communication::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::learing_communication::AddTwoInts >::value();
  }
  static const char* value(const ::learing_communication::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::learing_communication::AddTwoIntsResponse> should match
// service_traits::DataType< ::learing_communication::AddTwoInts >
template<>
struct DataType< ::learing_communication::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::learing_communication::AddTwoInts >::value();
  }
  static const char* value(const ::learing_communication::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LEARING_COMMUNICATION_MESSAGE_ADDTWOINTS_H
