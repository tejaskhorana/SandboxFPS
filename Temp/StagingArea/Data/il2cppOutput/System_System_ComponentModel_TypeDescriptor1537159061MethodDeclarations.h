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

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t1537159061;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1536895921;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3543085017;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.IServiceProvider
struct IServiceProvider_t1633313169;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.ComponentModel.Design.IDesigner
struct IDesigner_t684943874;
// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1405012495;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1753450284;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3224620365;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t1417720186;
// System.Collections.IList
struct IList_t1751339649;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t219483890;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Reflection.Module
struct Module_t1394482686;
// System.EventArgs
struct EventArgs_t2540831021;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t809310961;
// System.ComponentModel.TypeInfo
struct TypeInfo_t1685774996;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_RefreshEventHandler1536895921.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_System_ComponentModel_TypeDescriptionProvid3543085017.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_ComponentModel_EventDescriptor1405012495.h"
#include "System_System_ComponentModel_PropertyDescriptor2073374448.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void System.ComponentModel.TypeDescriptor::.ctor()
extern "C"  void TypeDescriptor__ctor_m3175845552 (TypeDescriptor_t1537159061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m3479835389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::add_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C"  void TypeDescriptor_add_Refreshed_m3567890176 (Il2CppObject * __this /* static, unused */, RefreshEventHandler_t1536895921 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::remove_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C"  void TypeDescriptor_remove_Refreshed_m3529067703 (Il2CppObject * __this /* static, unused */, RefreshEventHandler_t1536895921 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern "C"  Type_t * TypeDescriptor_get_ComObjectType_m2714205317 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Object,System.Attribute[])
extern "C"  TypeDescriptionProvider_t3543085017 * TypeDescriptor_AddAttributes_m4192546550 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Type,System.Attribute[])
extern "C"  TypeDescriptionProvider_t3543085017 * TypeDescriptor_AddAttributes_m2960466353 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C"  void TypeDescriptor_AddProvider_m2437499536 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t3543085017 * ___provider0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C"  void TypeDescriptor_AddProvider_m736335733 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t3543085017 * ___provider0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * TypeDescriptor_CreateInstance_m4199536684 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t3339007067* ___argTypes2, ObjectU5BU5D_t1108656482* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
extern "C"  void TypeDescriptor_AddEditorTable_m2053808953 (Il2CppObject * __this /* static, unused */, Type_t * ___editorBaseType0, Hashtable_t1407064410 * ___table1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.IDesigner System.ComponentModel.TypeDescriptor::CreateDesigner(System.ComponentModel.IComponent,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_CreateDesigner_m1088141359 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___designerBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  EventDescriptor_t1405012495 * TypeDescriptor_CreateEvent_m1636920254 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4055800263* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C"  EventDescriptor_t1405012495 * TypeDescriptor_CreateEvent_m1481786247 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, EventDescriptor_t1405012495 * ___oldEventDescriptor1, AttributeU5BU5D_t4055800263* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  PropertyDescriptor_t2073374448 * TypeDescriptor_CreateProperty_m2666088252 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4055800263* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C"  PropertyDescriptor_t2073374448 * TypeDescriptor_CreateProperty_m1985694404 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, PropertyDescriptor_t2073374448 * ___oldPropertyDescriptor1, AttributeU5BU5D_t4055800263* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t100867136 * TypeDescriptor_GetAttributes_m76214042 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern "C"  AttributeCollection_t100867136 * TypeDescriptor_GetAttributes_m3715714293 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern "C"  AttributeCollection_t100867136 * TypeDescriptor_GetAttributes_m2602491368 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object)
extern "C"  String_t* TypeDescriptor_GetClassName_m665017712 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object,System.Boolean)
extern "C"  String_t* TypeDescriptor_GetClassName_m4138231821 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object)
extern "C"  String_t* TypeDescriptor_GetComponentName_m1942391243 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object,System.Boolean)
extern "C"  String_t* TypeDescriptor_GetComponentName_m3240204882 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetFullComponentName(System.Object)
extern "C"  String_t* TypeDescriptor_GetFullComponentName_m2458551290 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Type)
extern "C"  String_t* TypeDescriptor_GetClassName_m493150805 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object)
extern "C"  TypeConverter_t1753450284 * TypeDescriptor_GetConverter_m1733474534 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object,System.Boolean)
extern "C"  TypeConverter_t1753450284 * TypeDescriptor_GetConverter_m1446244823 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t3948406897 * TypeDescriptor_get_DefaultConverters_m2146028793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t1753450284 * TypeDescriptor_GetConverter_m3573588811 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1892798521 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Type)
extern "C"  EventDescriptor_t1405012495 * TypeDescriptor_GetDefaultEvent_m3840505193 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object)
extern "C"  EventDescriptor_t1405012495 * TypeDescriptor_GetDefaultEvent_m542079876 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object,System.Boolean)
extern "C"  EventDescriptor_t1405012495 * TypeDescriptor_GetDefaultEvent_m3353468793 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Type)
extern "C"  PropertyDescriptor_t2073374448 * TypeDescriptor_GetDefaultProperty_m2061897133 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object)
extern "C"  PropertyDescriptor_t2073374448 * TypeDescriptor_GetDefaultProperty_m696718024 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object,System.Boolean)
extern "C"  PropertyDescriptor_t2073374448 * TypeDescriptor_GetDefaultProperty_m1047025589 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateEditor(System.Type,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_CreateEditor_m2629385114 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, Type_t * ___componentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::FindEditorInTable(System.Type,System.Type,System.Collections.Hashtable)
extern "C"  Il2CppObject * TypeDescriptor_FindEditorInTable_m4266389262 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, Type_t * ___editorBaseType1, Hashtable_t1407064410 * ___table2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Type,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m3222231312 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, Type_t * ___editorBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m1829462443 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___editorBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type,System.Boolean)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m2018903666 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___editorBaseType1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object)
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m372902726 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type)
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m4166585771 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[])
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m238661729 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Boolean)
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m1815188343 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type,System.Attribute[])
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m2285961692 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[],System.Boolean)
extern "C"  EventDescriptorCollection_t3224620365 * TypeDescriptor_GetEvents_m1689629948 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m4236162295 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m242118556 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m1457495824 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m3966546541 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Boolean)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m4139790758 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m2845888587 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Object)
extern "C"  TypeDescriptionProvider_t3543085017 * TypeDescriptor_GetProvider_m2829127138 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
extern "C"  TypeDescriptionProvider_t3543085017 * TypeDescriptor_GetProvider_m513279815 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Object)
extern "C"  Type_t * TypeDescriptor_GetReflectionType_m3148058437 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern "C"  Type_t * TypeDescriptor_GetReflectionType_m1711375722 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::CreateAssociation(System.Object,System.Object)
extern "C"  void TypeDescriptor_CreateAssociation_m2352138383 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, Il2CppObject * ___secondary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetAssociation(System.Type,System.Object)
extern "C"  Il2CppObject * TypeDescriptor_GetAssociation_m1499803763 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___primary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociation(System.Object,System.Object)
extern "C"  void TypeDescriptor_RemoveAssociation_m1070331927 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, Il2CppObject * ___secondary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociations(System.Object)
extern "C"  void TypeDescriptor_RemoveAssociations_m502833482 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C"  void TypeDescriptor_RemoveProvider_m4213038599 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t3543085017 * ___provider0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C"  void TypeDescriptor_RemoveProvider_m300194988 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t3543085017 * ___provider0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>)
extern "C"  void TypeDescriptor_RemoveProvider_m3810684570 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t3543085017 * ___provider0, LinkedList_1_t1417720186 * ___plist1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern "C"  void TypeDescriptor_SortDescriptorArray_m2977121963 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___infos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::get_ComNativeDescriptorHandler()
extern "C"  Il2CppObject * TypeDescriptor_get_ComNativeDescriptorHandler_m3062894218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::set_ComNativeDescriptorHandler(System.ComponentModel.IComNativeDescriptorHandler)
extern "C"  void TypeDescriptor_set_ComNativeDescriptorHandler_m2709343477 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Assembly)
extern "C"  void TypeDescriptor_Refresh_m3907603391 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Module)
extern "C"  void TypeDescriptor_Refresh_m2110583545 (Il2CppObject * __this /* static, unused */, Module_t1394482686 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C"  void TypeDescriptor_Refresh_m2793578379 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern "C"  void TypeDescriptor_Refresh_m2077486896 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m3490261899 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t809310961 * TypeDescriptor_GetComponentInfo_m2720622557 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___com0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t1685774996 * TypeDescriptor_GetTypeInfo_m3750021697 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m554158078 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
