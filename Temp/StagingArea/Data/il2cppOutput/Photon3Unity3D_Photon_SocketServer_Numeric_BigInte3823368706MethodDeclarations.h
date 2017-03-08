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

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3823368706;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Random
struct Random_t4255898871;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_Photon_SocketServer_Numeric_BigInte3823368706.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Random4255898871.h"

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m3370758135 (BigInteger_t3823368706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m2077505097 (BigInteger_t3823368706 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger__ctor_m4089992530 (BigInteger_t3823368706 * __this, BigInteger_t3823368706 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2671917362 (BigInteger_t3823368706 * __this, ByteU5BU5D_t4260760469* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C"  void BigInteger__ctor_m945906881 (BigInteger_t3823368706 * __this, UInt32U5BU5D_t3230734560* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Implicit_m77450480 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Implicit_m77447535 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Addition_m3854058833 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Subtraction_m2192134345 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Multiply_m2276451625 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C"  BigInteger_t3823368706 * BigInteger_op_LeftShift_m206804248 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftLeft_m3914629421 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t3230734560* ___buffer0, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftRight_m2434346486 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t3230734560* ___buffer0, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_UnaryNegation_m2367373848 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_Equality_m3605165167 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m3410073170 (BigInteger_t3823368706 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m2951904950 (BigInteger_t3823368706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m3207443270 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m610008719 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1140452115 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_multiByteDivide_m1147113783 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, BigInteger_t3823368706 * ___outQuotient2, BigInteger_t3823368706 * ___outRemainder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_singleByteDivide_m2557339696 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, BigInteger_t3823368706 * ___outQuotient2, BigInteger_t3823368706 * ___outRemainder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Division_m3566706560 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_op_Modulus_m1341647206 (Il2CppObject * __this /* static, unused */, BigInteger_t3823368706 * ___bi10, BigInteger_t3823368706 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m2930099068 (BigInteger_t3823368706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m1260265165 (BigInteger_t3823368706 * __this, int32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_ModPow_m3875454377 (BigInteger_t3823368706 * __this, BigInteger_t3823368706 * ___exp0, BigInteger_t3823368706 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3823368706 * BigInteger_BarrettReduction_m964458671 (BigInteger_t3823368706 * __this, BigInteger_t3823368706 * ___x0, BigInteger_t3823368706 * ___n1, BigInteger_t3823368706 * ___constant2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t3823368706 * BigInteger_GenerateRandom_m2920147984 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C"  void BigInteger_genRandomBits_m4262668969 (BigInteger_t3823368706 * __this, int32_t ___bits0, Random_t4255898871 * ___rand1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C"  int32_t BigInteger_bitCount_m2723610239 (BigInteger_t3823368706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t4260760469* BigInteger_GetBytes_m3279645324 (BigInteger_t3823368706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m932190870 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
