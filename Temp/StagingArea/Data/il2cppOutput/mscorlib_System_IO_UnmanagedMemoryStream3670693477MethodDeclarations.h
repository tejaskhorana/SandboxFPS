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

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3670693477;
// System.EventHandler
struct EventHandler_t2463957060;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"
#include "mscorlib_System_IO_FileAccess1610034992.h"

// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
extern "C"  void UnmanagedMemoryStream__ctor_m1177015301 (UnmanagedMemoryStream_t3670693477 * __this, uint8_t* ___pointer0, int64_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::add_Closed(System.EventHandler)
extern "C"  void UnmanagedMemoryStream_add_Closed_m309961227 (UnmanagedMemoryStream_t3670693477 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::remove_Closed(System.EventHandler)
extern "C"  void UnmanagedMemoryStream_remove_Closed_m1240030248 (UnmanagedMemoryStream_t3670693477 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C"  bool UnmanagedMemoryStream_get_CanRead_m2499719859 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C"  bool UnmanagedMemoryStream_get_CanSeek_m2528474901 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C"  bool UnmanagedMemoryStream_get_CanWrite_m704557828 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C"  int64_t UnmanagedMemoryStream_get_Length_m1926078080 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C"  int64_t UnmanagedMemoryStream_get_Position_m51631555 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C"  void UnmanagedMemoryStream_set_Position_m415579462 (UnmanagedMemoryStream_t3670693477 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnmanagedMemoryStream_Read_m3212615137 (UnmanagedMemoryStream_t3670693477 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C"  int32_t UnmanagedMemoryStream_ReadByte_m4282012848 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t UnmanagedMemoryStream_Seek_m2466946404 (UnmanagedMemoryStream_t3670693477 * __this, int64_t ___offset0, int32_t ___loc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C"  void UnmanagedMemoryStream_SetLength_m4229422158 (UnmanagedMemoryStream_t3670693477 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C"  void UnmanagedMemoryStream_Flush_m2387314968 (UnmanagedMemoryStream_t3670693477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C"  void UnmanagedMemoryStream_Dispose_m3682984170 (UnmanagedMemoryStream_t3670693477 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void UnmanagedMemoryStream_Write_m1807613270 (UnmanagedMemoryStream_t3670693477 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C"  void UnmanagedMemoryStream_WriteByte_m750285616 (UnmanagedMemoryStream_t3670693477 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Initialize(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
extern "C"  void UnmanagedMemoryStream_Initialize_m2954099362 (UnmanagedMemoryStream_t3670693477 * __this, uint8_t* ___pointer0, int64_t ___length1, int64_t ___capacity2, int32_t ___access3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
