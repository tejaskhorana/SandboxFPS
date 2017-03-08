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

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t2166124941;
// System.IO.Stream
struct Stream_t1561764144;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Security_Cryptography_CryptoStream3444626768.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
extern "C"  void CryptoStream__ctor_m2863798467 (CryptoStream_t2166124941 * __this, Stream_t1561764144 * ___stream0, Il2CppObject * ___transform1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Finalize()
extern "C"  void CryptoStream_Finalize_m38738306 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanRead()
extern "C"  bool CryptoStream_get_CanRead_m1253302685 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanSeek()
extern "C"  bool CryptoStream_get_CanSeek_m1282057727 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanWrite()
extern "C"  bool CryptoStream_get_CanWrite_m720331098 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
extern "C"  int64_t CryptoStream_get_Length_m3449640982 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Position()
extern "C"  int64_t CryptoStream_get_Position_m3906699737 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
extern "C"  void CryptoStream_set_Position_m2718511132 (CryptoStream_t2166124941 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Clear()
extern "C"  void CryptoStream_Clear_m1662605067 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Close()
extern "C"  void CryptoStream_Close_m1672364022 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CryptoStream_Read_m2597743691 (CryptoStream_t2166124941 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CryptoStream_Write_m3581028652 (CryptoStream_t2166124941 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Flush()
extern "C"  void CryptoStream_Flush_m45451778 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
extern "C"  void CryptoStream_FlushFinalBlock_m3506801625 (CryptoStream_t2166124941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CryptoStream_Seek_m396989966 (CryptoStream_t2166124941 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::SetLength(System.Int64)
extern "C"  void CryptoStream_SetLength_m398903608 (CryptoStream_t2166124941 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Dispose(System.Boolean)
extern "C"  void CryptoStream_Dispose_m4147432916 (CryptoStream_t2166124941 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
