#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t219483890;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1523142671;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1574155531;
// System.EventHandler
struct EventHandler_t2463957060;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1536895921;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t1537159061  : public Il2CppObject
{
public:

public:
};

struct TypeDescriptor_t1537159061_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	Il2CppObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t3948406897 * ___defaultConverters_1;
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::descriptorHandler
	Il2CppObject * ___descriptorHandler_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1407064410 * ___componentTable_3;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1407064410 * ___typeTable_4;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::editors
	Hashtable_t1407064410 * ___editors_5;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	Il2CppObject * ___typeDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t1523142671 * ___typeDescriptionProviders_7;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	Il2CppObject * ___componentDescriptionProvidersLock_8;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1574155531 * ___componentDescriptionProviders_9;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t2463957060 * ___onDispose_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t1536895921 * ___Refreshed_11;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___creatingDefaultConverters_0)); }
	inline Il2CppObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline Il2CppObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(Il2CppObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier(&___creatingDefaultConverters_0, value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t3948406897 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t3948406897 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t3948406897 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier(&___defaultConverters_1, value);
	}

	inline static int32_t get_offset_of_descriptorHandler_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___descriptorHandler_2)); }
	inline Il2CppObject * get_descriptorHandler_2() const { return ___descriptorHandler_2; }
	inline Il2CppObject ** get_address_of_descriptorHandler_2() { return &___descriptorHandler_2; }
	inline void set_descriptorHandler_2(Il2CppObject * value)
	{
		___descriptorHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___descriptorHandler_2, value);
	}

	inline static int32_t get_offset_of_componentTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___componentTable_3)); }
	inline Hashtable_t1407064410 * get_componentTable_3() const { return ___componentTable_3; }
	inline Hashtable_t1407064410 ** get_address_of_componentTable_3() { return &___componentTable_3; }
	inline void set_componentTable_3(Hashtable_t1407064410 * value)
	{
		___componentTable_3 = value;
		Il2CppCodeGenWriteBarrier(&___componentTable_3, value);
	}

	inline static int32_t get_offset_of_typeTable_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___typeTable_4)); }
	inline Hashtable_t1407064410 * get_typeTable_4() const { return ___typeTable_4; }
	inline Hashtable_t1407064410 ** get_address_of_typeTable_4() { return &___typeTable_4; }
	inline void set_typeTable_4(Hashtable_t1407064410 * value)
	{
		___typeTable_4 = value;
		Il2CppCodeGenWriteBarrier(&___typeTable_4, value);
	}

	inline static int32_t get_offset_of_editors_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___editors_5)); }
	inline Hashtable_t1407064410 * get_editors_5() const { return ___editors_5; }
	inline Hashtable_t1407064410 ** get_address_of_editors_5() { return &___editors_5; }
	inline void set_editors_5(Hashtable_t1407064410 * value)
	{
		___editors_5 = value;
		Il2CppCodeGenWriteBarrier(&___editors_5, value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___typeDescriptionProvidersLock_6)); }
	inline Il2CppObject * get_typeDescriptionProvidersLock_6() const { return ___typeDescriptionProvidersLock_6; }
	inline Il2CppObject ** get_address_of_typeDescriptionProvidersLock_6() { return &___typeDescriptionProvidersLock_6; }
	inline void set_typeDescriptionProvidersLock_6(Il2CppObject * value)
	{
		___typeDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier(&___typeDescriptionProvidersLock_6, value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___typeDescriptionProviders_7)); }
	inline Dictionary_2_t1523142671 * get_typeDescriptionProviders_7() const { return ___typeDescriptionProviders_7; }
	inline Dictionary_2_t1523142671 ** get_address_of_typeDescriptionProviders_7() { return &___typeDescriptionProviders_7; }
	inline void set_typeDescriptionProviders_7(Dictionary_2_t1523142671 * value)
	{
		___typeDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier(&___typeDescriptionProviders_7, value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___componentDescriptionProvidersLock_8)); }
	inline Il2CppObject * get_componentDescriptionProvidersLock_8() const { return ___componentDescriptionProvidersLock_8; }
	inline Il2CppObject ** get_address_of_componentDescriptionProvidersLock_8() { return &___componentDescriptionProvidersLock_8; }
	inline void set_componentDescriptionProvidersLock_8(Il2CppObject * value)
	{
		___componentDescriptionProvidersLock_8 = value;
		Il2CppCodeGenWriteBarrier(&___componentDescriptionProvidersLock_8, value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___componentDescriptionProviders_9)); }
	inline Dictionary_2_t1574155531 * get_componentDescriptionProviders_9() const { return ___componentDescriptionProviders_9; }
	inline Dictionary_2_t1574155531 ** get_address_of_componentDescriptionProviders_9() { return &___componentDescriptionProviders_9; }
	inline void set_componentDescriptionProviders_9(Dictionary_2_t1574155531 * value)
	{
		___componentDescriptionProviders_9 = value;
		Il2CppCodeGenWriteBarrier(&___componentDescriptionProviders_9, value);
	}

	inline static int32_t get_offset_of_onDispose_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___onDispose_10)); }
	inline EventHandler_t2463957060 * get_onDispose_10() const { return ___onDispose_10; }
	inline EventHandler_t2463957060 ** get_address_of_onDispose_10() { return &___onDispose_10; }
	inline void set_onDispose_10(EventHandler_t2463957060 * value)
	{
		___onDispose_10 = value;
		Il2CppCodeGenWriteBarrier(&___onDispose_10, value);
	}

	inline static int32_t get_offset_of_Refreshed_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t1537159061_StaticFields, ___Refreshed_11)); }
	inline RefreshEventHandler_t1536895921 * get_Refreshed_11() const { return ___Refreshed_11; }
	inline RefreshEventHandler_t1536895921 ** get_address_of_Refreshed_11() { return &___Refreshed_11; }
	inline void set_Refreshed_11(RefreshEventHandler_t1536895921 * value)
	{
		___Refreshed_11 = value;
		Il2CppCodeGenWriteBarrier(&___Refreshed_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
