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

// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t1981704550;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t3991598821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern "C"  void InvalidEnumArgumentException__ctor_m708939839 (InvalidEnumArgumentException_t1981704550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern "C"  void InvalidEnumArgumentException__ctor_m1958653219 (InvalidEnumArgumentException_t1981704550 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
extern "C"  void InvalidEnumArgumentException__ctor_m1035432391 (InvalidEnumArgumentException_t1981704550 * __this, String_t* ___argumentName0, int32_t ___invalidValue1, Type_t * ___enumClass2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Exception)
extern "C"  void InvalidEnumArgumentException__ctor_m1735828083 (InvalidEnumArgumentException_t1981704550 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidEnumArgumentException__ctor_m1979520256 (InvalidEnumArgumentException_t1981704550 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
