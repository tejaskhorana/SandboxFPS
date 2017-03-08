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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t2617136693;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Collections.IList
struct IList_t1751339649;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ISite
struct ISite_t1541550070;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Collections.IComparer
struct IComparer_t4034294160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_ComponentModel_MemberDescriptor2617136693.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m215106805 (MemberDescriptor_t2617136693 * __this, String_t* ___name0, AttributeU5BU5D_t4055800263* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m3977742435 (MemberDescriptor_t2617136693 * __this, MemberDescriptor_t2617136693 * ___reference0, AttributeU5BU5D_t4055800263* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String)
extern "C"  void MemberDescriptor__ctor_m3354736434 (MemberDescriptor_t2617136693 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C"  void MemberDescriptor__ctor_m1537425028 (MemberDescriptor_t2617136693 * __this, MemberDescriptor_t2617136693 * ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t4055800263* MemberDescriptor_get_AttributeArray_m1822558682 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::set_AttributeArray(System.Attribute[])
extern "C"  void MemberDescriptor_set_AttributeArray_m2108209967 (MemberDescriptor_t2617136693 * __this, AttributeU5BU5D_t4055800263* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m3750608991 (MemberDescriptor_t2617136693 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t100867136 * MemberDescriptor_get_Attributes_m2619082480 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t100867136 * MemberDescriptor_CreateAttributeCollection_m3478700496 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Category()
extern "C"  String_t* MemberDescriptor_get_Category_m679782046 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Description()
extern "C"  String_t* MemberDescriptor_get_Description_m899016062 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_DesignTimeOnly()
extern "C"  bool MemberDescriptor_get_DesignTimeOnly_m792780746 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_DisplayName()
extern "C"  String_t* MemberDescriptor_get_DisplayName_m2655084463 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m2533170283 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_IsBrowsable()
extern "C"  bool MemberDescriptor_get_IsBrowsable_m2938211834 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::get_NameHashCode()
extern "C"  int32_t MemberDescriptor_get_NameHashCode_m4205481843 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m337807439 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m3292276459 (MemberDescriptor_t2617136693 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.MemberDescriptor::GetSite(System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetSite_m724724911 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvokee(System.Type,System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetInvokee_m794003943 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, Il2CppObject * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetInvocationTarget_m943983927 (MemberDescriptor_t2617136693 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type)
extern "C"  MethodInfo_t * MemberDescriptor_FindMethod_m2350166975 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, String_t* ___name1, TypeU5BU5D_t3339007067* ___args2, Type_t * ___returnType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type,System.Boolean)
extern "C"  MethodInfo_t * MemberDescriptor_FindMethod_m2661534174 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, String_t* ___name1, TypeU5BU5D_t3339007067* ___args2, Type_t * ___returnType3, bool ___publicOnly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C"  Il2CppObject * MemberDescriptor_get_DefaultComparer_m2619195666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
