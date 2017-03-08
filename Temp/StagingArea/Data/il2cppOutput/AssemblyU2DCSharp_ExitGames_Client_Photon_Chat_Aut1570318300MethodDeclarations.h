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

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1570318300;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cus2160279365.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m616955797 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m3148372365 (AuthenticationValues_t1570318300 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m3218423014 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.Chat.CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m2446500293 (AuthenticationValues_t1570318300 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m712191941 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m567833940 (AuthenticationValues_t1570318300 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m3334918197 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m402211094 (AuthenticationValues_t1570318300 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m890772070 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m772248275 (AuthenticationValues_t1570318300 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m2681174427 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m1347514288 (AuthenticationValues_t1570318300 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m1066985851 (AuthenticationValues_t1570318300 * __this, String_t* ___stringData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m3304147522 (AuthenticationValues_t1570318300 * __this, ByteU5BU5D_t4260760469* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m488966287 (AuthenticationValues_t1570318300 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m729833528 (AuthenticationValues_t1570318300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
