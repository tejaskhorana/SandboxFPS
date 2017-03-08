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

// ExitGames.Client.Photon.Protocol16
struct Protocol16_t383675859;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t2984804470;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t2569778878;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t903024962;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t1243130602;
// ExitGames.Client.Photon.EventData
struct EventData_t4282381190;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t284945826;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe2984804470.h"
#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Protocol16_G639711579.h"
#include "mscorlib_System_Type2863145774.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2569778878.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe1243130602.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4282381190.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Array1146569071.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable284945826.h"

// System.String ExitGames.Client.Photon.Protocol16::get_protocolType()
extern "C"  String_t* Protocol16_get_protocolType_m1322850621 (Protocol16_t383675859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol16::get_VersionBytes()
extern "C"  ByteU5BU5D_t4260760469* Protocol16_get_VersionBytes_m4201112357 (Protocol16_t383675859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::SerializeCustom(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  bool Protocol16_SerializeCustom_m1972625330 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, Il2CppObject * ___serObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::DeserializeCustom(ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C"  Il2CppObject * Protocol16_DeserializeCustom_m1272442601 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, uint8_t ___customTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol16_GetTypeOfCode_m729041006 (Protocol16_t383675859 * __this, uint8_t ___typeCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Protocol16/GpType ExitGames.Client.Photon.Protocol16::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol16_GetCodeOfType_m417056570 (Protocol16_t383675859 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Il2CppArray * Protocol16_CreateArrayByType_m2111805490 (Protocol16_t383675859 * __this, uint8_t ___arrayType0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m2069561066 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, OperationRequest_t2569778878 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m1283737911 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, uint8_t ___operationCode1, Dictionary_2_t903024962 * ___parameters2, bool ___setType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol16::DeserializeOperationRequest(ExitGames.Client.Photon.StreamBuffer)
extern "C"  OperationRequest_t2569778878 * Protocol16_DeserializeOperationRequest_m3068525971 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationResponse(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol16_SerializeOperationResponse_m3607533266 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, OperationResponse_t1243130602 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol16::DeserializeOperationResponse(ExitGames.Client.Photon.StreamBuffer)
extern "C"  OperationResponse_t1243130602 * Protocol16_DeserializeOperationResponse_m1286421619 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeEventData(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol16_SerializeEventData_m1007511378 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, EventData_t4282381190 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol16::DeserializeEventData(ExitGames.Client.Photon.StreamBuffer)
extern "C"  EventData_t4282381190 * Protocol16_DeserializeEventData_m3518065651 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeParameterTable(ExitGames.Client.Photon.StreamBuffer,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol16_SerializeParameterTable_m2833470190 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, Dictionary_2_t903024962 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol16::DeserializeParameterTable(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Dictionary_2_t903024962 * Protocol16_DeserializeParameterTable_m2877440952 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean)
extern "C"  void Protocol16_Serialize_m285084326 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByte(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Boolean)
extern "C"  void Protocol16_SerializeByte_m1526118407 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, uint8_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeBoolean(ExitGames.Client.Photon.StreamBuffer,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeBoolean_m2013697165 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, bool ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeShort(ExitGames.Client.Photon.StreamBuffer,System.Int16,System.Boolean)
extern "C"  void Protocol16_SerializeShort_m3725529549 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, int16_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeInteger(ExitGames.Client.Photon.StreamBuffer,System.Int32,System.Boolean)
extern "C"  void Protocol16_SerializeInteger_m2646461129 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, int32_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeLong(ExitGames.Client.Photon.StreamBuffer,System.Int64,System.Boolean)
extern "C"  void Protocol16_SerializeLong_m1878313002 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, int64_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeFloat(ExitGames.Client.Photon.StreamBuffer,System.Single,System.Boolean)
extern "C"  void Protocol16_SerializeFloat_m4028026871 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, float ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDouble(ExitGames.Client.Photon.StreamBuffer,System.Double,System.Boolean)
extern "C"  void Protocol16_SerializeDouble_m51973927 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, double ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeString(ExitGames.Client.Photon.StreamBuffer,System.String,System.Boolean)
extern "C"  void Protocol16_SerializeString_m1819092775 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, String_t* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeArray(ExitGames.Client.Photon.StreamBuffer,System.Array,System.Boolean)
extern "C"  void Protocol16_SerializeArray_m1869151855 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, Il2CppArray * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByteArray(ExitGames.Client.Photon.StreamBuffer,System.Byte[],System.Boolean)
extern "C"  void Protocol16_SerializeByteArray_m4275878180 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, ByteU5BU5D_t4260760469* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByteArraySegment(ExitGames.Client.Photon.StreamBuffer,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void Protocol16_SerializeByteArraySegment_m1924949199 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, ByteU5BU5D_t4260760469* ___serObject1, int32_t ___offset2, int32_t ___count3, bool ___setType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeIntArrayOptimized(ExitGames.Client.Photon.StreamBuffer,System.Int32[],System.Boolean)
extern "C"  void Protocol16_SerializeIntArrayOptimized_m193342282 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___inWriter0, Int32U5BU5D_t3230847821* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeObjectArray(ExitGames.Client.Photon.StreamBuffer,System.Object[],System.Boolean)
extern "C"  void Protocol16_SerializeObjectArray_m3725110034 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, ObjectU5BU5D_t1108656482* ___objects1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeHashTable(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol16_SerializeHashTable_m2190017522 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, Hashtable_t284945826 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionary(ExitGames.Client.Photon.StreamBuffer,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol16_SerializeDictionary_m2547110269 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(ExitGames.Client.Photon.StreamBuffer,System.Type)
extern "C"  void Protocol16_SerializeDictionaryHeader_m980324031 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___writer0, Type_t * ___dictType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol16_SerializeDictionaryHeader_m960768312 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___writer0, Il2CppObject * ___dict1, bool* ___setKeyType2, bool* ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryElements(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeDictionaryElements_m2532077092 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___writer0, Il2CppObject * ___dict1, bool ___setKeyType2, bool ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::Deserialize(ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C"  Il2CppObject * Protocol16_Deserialize_m344063640 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, uint8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol16::DeserializeByte(ExitGames.Client.Photon.StreamBuffer)
extern "C"  uint8_t Protocol16_DeserializeByte_m2136489700 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeBoolean(ExitGames.Client.Photon.StreamBuffer)
extern "C"  bool Protocol16_DeserializeBoolean_m763643716 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol16::DeserializeShort(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int16_t Protocol16_DeserializeShort_m3427567980 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol16::DeserializeInteger(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int32_t Protocol16_DeserializeInteger_m3702079604 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol16::DeserializeLong(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int64_t Protocol16_DeserializeLong_m271646163 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol16::DeserializeFloat(ExitGames.Client.Photon.StreamBuffer)
extern "C"  float Protocol16_DeserializeFloat_m1162002990 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol16::DeserializeDouble(ExitGames.Client.Photon.StreamBuffer)
extern "C"  double Protocol16_DeserializeDouble_m2335162294 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol16::DeserializeString(ExitGames.Client.Photon.StreamBuffer)
extern "C"  String_t* Protocol16_DeserializeString_m4049041462 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::DeserializeArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Il2CppArray * Protocol16_DeserializeArray_m2521981540 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol16::DeserializeByteArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  ByteU5BU5D_t4260760469* Protocol16_DeserializeByteArray_m3823650401 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol16::DeserializeIntArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Int32U5BU5D_t3230847821* Protocol16_DeserializeIntArray_m4239581700 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol16::DeserializeStringArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  StringU5BU5D_t4054002952* Protocol16_DeserializeStringArray_m1902192399 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol16::DeserializeObjectArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  ObjectU5BU5D_t1108656482* Protocol16_DeserializeObjectArray_m1778213171 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol16::DeserializeHashTable(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Hashtable_t284945826 * Protocol16_DeserializeHashTable_m517323603 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol16::DeserializeDictionary(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Il2CppObject * Protocol16_DeserializeDictionary_m54828966 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeDictionaryArray(ExitGames.Client.Photon.StreamBuffer,System.Int16,System.Array&)
extern "C"  bool Protocol16_DeserializeDictionaryArray_m201547346 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___din0, int16_t ___size1, Il2CppArray ** ___arrayResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::DeserializeDictionaryType(ExitGames.Client.Photon.StreamBuffer,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol16_DeserializeDictionaryType_m1952057758 (Protocol16_t383675859 * __this, StreamBuffer_t2984804470 * ___reader0, uint8_t* ___keyTypeCode1, uint8_t* ___valTypeCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::.ctor()
extern "C"  void Protocol16__ctor_m2850290149 (Protocol16_t383675859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::.cctor()
extern "C"  void Protocol16__cctor_m1977552488 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
