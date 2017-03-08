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

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t1680412575;
// System.Security.Cryptography.CspParameters
struct CspParameters_t309313264;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;
// System.Security.Cryptography.CspKeyContainerInfo
struct CspKeyContainerInfo_t96292854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters309313264.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter3032565794.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C"  void DSACryptoServiceProvider__ctor_m515501966 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m778250871 (DSACryptoServiceProvider_t1680412575 * __this, CspParameters_t309313264 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void DSACryptoServiceProvider__ctor_m2273755103 (DSACryptoServiceProvider_t1680412575 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m3049271344 (DSACryptoServiceProvider_t1680412575 * __this, int32_t ___dwKeySize0, CspParameters_t309313264 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C"  void DSACryptoServiceProvider__cctor_m2613562847 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C"  void DSACryptoServiceProvider_Finalize_m2913492500 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSACryptoServiceProvider::get_KeyExchangeAlgorithm()
extern "C"  String_t* DSACryptoServiceProvider_get_KeyExchangeAlgorithm_m2780219049 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t DSACryptoServiceProvider_get_KeySize_m1055041503 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PersistKeyInCsp()
extern "C"  bool DSACryptoServiceProvider_get_PersistKeyInCsp_m814553653 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::set_PersistKeyInCsp(System.Boolean)
extern "C"  void DSACryptoServiceProvider_set_PersistKeyInCsp_m3814431606 (DSACryptoServiceProvider_t1680412575 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool DSACryptoServiceProvider_get_PublicOnly_m1018144562 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSACryptoServiceProvider::get_SignatureAlgorithm()
extern "C"  String_t* DSACryptoServiceProvider_get_SignatureAlgorithm_m3754133651 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_UseMachineKeyStore()
extern "C"  bool DSACryptoServiceProvider_get_UseMachineKeyStore_m619318495 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::set_UseMachineKeyStore(System.Boolean)
extern "C"  void DSACryptoServiceProvider_set_UseMachineKeyStore_m1774731084 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t3032565794  DSACryptoServiceProvider_ExportParameters_m1890915433 (DSACryptoServiceProvider_t1680412575 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSACryptoServiceProvider_ImportParameters_m2336972636 (DSACryptoServiceProvider_t1680412575 * __this, DSAParameters_t3032565794  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_CreateSignature_m1822226263 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_SignData_m2224926550 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_SignData_m1514038582 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_SignData_m283791338 (DSACryptoServiceProvider_t1680412575 * __this, Stream_t1561764144 * ___inputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignHash(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_SignHash_m3537707566 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifyData(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifyData_m2619616693 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___rgbData0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifyHash_m1606669709 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, String_t* ___str1, ByteU5BU5D_t4260760469* ___rgbSignature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifySignature_m4027423871 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void DSACryptoServiceProvider_Dispose_m4270261890 (DSACryptoServiceProvider_t1680412575 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void DSACryptoServiceProvider_OnKeyGenerated_m3628123519 (DSACryptoServiceProvider_t1680412575 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspKeyContainerInfo System.Security.Cryptography.DSACryptoServiceProvider::get_CspKeyContainerInfo()
extern "C"  CspKeyContainerInfo_t96292854 * DSACryptoServiceProvider_get_CspKeyContainerInfo_m2344049089 (DSACryptoServiceProvider_t1680412575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::ExportCspBlob(System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* DSACryptoServiceProvider_ExportCspBlob_m2106379062 (DSACryptoServiceProvider_t1680412575 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportCspBlob(System.Byte[])
extern "C"  void DSACryptoServiceProvider_ImportCspBlob_m460409925 (DSACryptoServiceProvider_t1680412575 * __this, ByteU5BU5D_t4260760469* ___keyBlob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
