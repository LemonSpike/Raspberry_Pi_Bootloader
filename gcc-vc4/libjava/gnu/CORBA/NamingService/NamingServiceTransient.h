
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_NamingService_NamingServiceTransient__
#define __gnu_CORBA_NamingService_NamingServiceTransient__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace NamingService
      {
          class NamingServiceTransient;
      }
    }
  }
}

class gnu::CORBA::NamingService::NamingServiceTransient : public ::java::lang::Object
{

public:
  NamingServiceTransient();
  static JArray< jbyte > * getDefaultKey();
  static void start(jint, ::java::lang::String *);
  static const jint PORT = 900;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_NamingService_NamingServiceTransient__