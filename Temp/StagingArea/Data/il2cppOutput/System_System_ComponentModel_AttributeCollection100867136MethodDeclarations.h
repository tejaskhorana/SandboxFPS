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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Attribute
struct Attribute_t2523058482;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_System_ComponentModel_AttributeCollection100867136.h"
#include "mscorlib_System_Attribute2523058482.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C"  void AttributeCollection__ctor_m1643864276 (AttributeCollection_t100867136 * __this, ArrayList_t3948406897 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C"  void AttributeCollection__ctor_m1354289780 (AttributeCollection_t100867136 * __this, AttributeU5BU5D_t4055800263* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C"  void AttributeCollection__cctor_m1889908538 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m2864372108 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m3459893837 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m630646571 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t AttributeCollection_System_Collections_ICollection_get_Count_m575680968 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::FromExisting(System.ComponentModel.AttributeCollection,System.Attribute[])
extern "C"  AttributeCollection_t100867136 * AttributeCollection_FromExisting_m471457110 (Il2CppObject * __this /* static, unused */, AttributeCollection_t100867136 * ___existing0, AttributeU5BU5D_t4055800263* ___newAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C"  bool AttributeCollection_Contains_m2927382429 (AttributeCollection_t100867136 * __this, Attribute_t2523058482 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C"  bool AttributeCollection_Contains_m10986363 (AttributeCollection_t100867136 * __this, AttributeU5BU5D_t4055800263* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C"  void AttributeCollection_CopyTo_m3876267504 (AttributeCollection_t100867136 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C"  Il2CppObject * AttributeCollection_GetEnumerator_m4117158613 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Matches(System.Attribute)
extern "C"  bool AttributeCollection_Matches_m2166953469 (AttributeCollection_t100867136 * __this, Attribute_t2523058482 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Matches(System.Attribute[])
extern "C"  bool AttributeCollection_Matches_m3678163419 (AttributeCollection_t100867136 * __this, AttributeU5BU5D_t4055800263* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C"  Attribute_t2523058482 * AttributeCollection_GetDefaultAttribute_m223539477 (AttributeCollection_t100867136 * __this, Type_t * ___attributeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C"  int32_t AttributeCollection_get_Count_m3518261639 (AttributeCollection_t100867136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C"  Attribute_t2523058482 * AttributeCollection_get_Item_m1177971022 (AttributeCollection_t100867136 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Int32)
extern "C"  Attribute_t2523058482 * AttributeCollection_get_Item_m1832355356 (AttributeCollection_t100867136 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
