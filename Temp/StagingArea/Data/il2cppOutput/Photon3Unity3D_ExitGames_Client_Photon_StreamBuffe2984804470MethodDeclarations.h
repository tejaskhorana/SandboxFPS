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

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t2984804470;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
extern "C"  void StreamBuffer__ctor_m3207855795 (StreamBuffer_t2984804470 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
extern "C"  void StreamBuffer__ctor_m3353141927 (StreamBuffer_t2984804470 * __this, ByteU5BU5D_t4260760469* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
extern "C"  ByteU5BU5D_t4260760469* StreamBuffer_ToArray_m4001605236 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanRead()
extern "C"  bool StreamBuffer_get_CanRead_m1597984199 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanSeek()
extern "C"  bool StreamBuffer_get_CanSeek_m1626739241 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanWrite()
extern "C"  bool StreamBuffer_get_CanWrite_m2815523440 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::get_Length()
extern "C"  int64_t StreamBuffer_get_Length_m2543552514 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::get_Position()
extern "C"  int64_t StreamBuffer_get_Position_m739075781 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int64)
extern "C"  void StreamBuffer_set_Position_m1715813210 (StreamBuffer_t2984804470 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::Flush()
extern "C"  void StreamBuffer_Flush_m886094724 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t StreamBuffer_Seek_m1610142370 (StreamBuffer_t2984804470 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
extern "C"  void StreamBuffer_SetLength_m765638330 (StreamBuffer_t2984804470 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t StreamBuffer_Read_m948410241 (StreamBuffer_t2984804470 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void StreamBuffer_Write_m3276155242 (StreamBuffer_t2984804470 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::ReadByte()
extern "C"  int32_t StreamBuffer_ReadByte_m365707024 (StreamBuffer_t2984804470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteByte(System.Byte)
extern "C"  void StreamBuffer_WriteByte_m2993855300 (StreamBuffer_t2984804470 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
extern "C"  bool StreamBuffer_CheckSize_m4293374308 (StreamBuffer_t2984804470 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
