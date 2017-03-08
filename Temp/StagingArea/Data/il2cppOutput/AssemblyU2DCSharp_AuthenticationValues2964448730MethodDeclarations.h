#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AuthenticationValues
struct AuthenticationValues_t2964448730;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_CustomAuthenticationType3566910275.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m1448241665 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m2359901857 (AuthenticationValues_t2964448730 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CustomAuthenticationType AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m1921130760 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthType(CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m589781951 (AuthenticationValues_t2964448730 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m2125009547 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m867480168 (AuthenticationValues_t2964448730 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m2492479891 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m700983170 (AuthenticationValues_t2964448730 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m455570988 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m455593447 (AuthenticationValues_t2964448730 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m2074842773 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m121149212 (AuthenticationValues_t2964448730 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m106792335 (AuthenticationValues_t2964448730 * __this, String_t* ___stringData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m2343954006 (AuthenticationValues_t2964448730 * __this, ByteU5BU5D_t4260760469* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m4168761851 (AuthenticationValues_t2964448730 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m3486741426 (AuthenticationValues_t2964448730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
