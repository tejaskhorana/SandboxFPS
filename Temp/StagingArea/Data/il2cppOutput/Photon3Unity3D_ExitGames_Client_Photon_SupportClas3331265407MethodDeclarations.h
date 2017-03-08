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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t1686921617;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t1601960292;
// System.Exception
struct Exception_t3991598821;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t537317817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C"  uint32_t SupportClass_CalculateCrc_m3683502402 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C"  List_1_t1686921617 * SupportClass_GetMethods_m3889760479 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C"  int32_t SupportClass_GetTickCount_m172429079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
extern "C"  void SupportClass_CallInBackground_m3300054345 (Il2CppObject * __this /* static, unused */, Func_1_t1601960292 * ___myThread0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
extern "C"  void SupportClass_CallInBackground_m3434145326 (Il2CppObject * __this /* static, unused */, Func_1_t1601960292 * ___myThread0, int32_t ___millisecondsInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C"  void SupportClass_WriteStackTrace_m453164762 (Il2CppObject * __this /* static, unused */, Exception_t3991598821 * ___throwable0, TextWriter_t2304124208 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C"  void SupportClass_WriteStackTrace_m2805806499 (Il2CppObject * __this /* static, unused */, Exception_t3991598821 * ___throwable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C"  String_t* SupportClass_DictionaryToString_m1196720361 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C"  String_t* SupportClass_DictionaryToString_m3994993524 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, bool ___includeTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
extern "C"  String_t* SupportClass_ByteArrayToString_m3432978520 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C"  void SupportClass__cctor_m960669524 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
