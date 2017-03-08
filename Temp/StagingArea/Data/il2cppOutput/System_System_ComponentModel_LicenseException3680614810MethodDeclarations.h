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

// System.ComponentModel.LicenseException
struct LicenseException_t3680614810;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ComponentModel.LicenseException::.ctor(System.Type)
extern "C"  void LicenseException__ctor_m1956356750 (LicenseException_t3680614810 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object)
extern "C"  void LicenseException__ctor_m2550357212 (LicenseException_t3680614810 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String)
extern "C"  void LicenseException__ctor_m4193965080 (LicenseException_t3680614810 * __this, Type_t * ___type0, Il2CppObject * ___instance1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String,System.Exception)
extern "C"  void LicenseException__ctor_m1223205918 (LicenseException_t3680614810 * __this, Type_t * ___type0, Il2CppObject * ___instance1, String_t* ___message2, Exception_t3991598821 * ___innerException3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LicenseException__ctor_m905917132 (LicenseException_t3680614810 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LicenseException_GetObjectData_m3413569065 (LicenseException_t3680614810 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.LicenseException::get_LicensedType()
extern "C"  Type_t * LicenseException_get_LicensedType_m770128217 (LicenseException_t3680614810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
