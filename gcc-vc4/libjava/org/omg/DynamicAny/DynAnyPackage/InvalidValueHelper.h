
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny_DynAnyPackage_InvalidValueHelper__
#define __org_omg_DynamicAny_DynAnyPackage_InvalidValueHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace DynamicAny
      {
        namespace DynAnyPackage
        {
            class InvalidValue;
            class InvalidValueHelper;
        }
      }
    }
  }
}

class org::omg::DynamicAny::DynAnyPackage::InvalidValueHelper : public ::java::lang::Object
{

public:
  InvalidValueHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::DynamicAny::DynAnyPackage::InvalidValue *);
  static ::org::omg::DynamicAny::DynAnyPackage::InvalidValue * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::DynamicAny::DynAnyPackage::InvalidValue * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::DynamicAny::DynAnyPackage::InvalidValue *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_DynamicAny_DynAnyPackage_InvalidValueHelper__
