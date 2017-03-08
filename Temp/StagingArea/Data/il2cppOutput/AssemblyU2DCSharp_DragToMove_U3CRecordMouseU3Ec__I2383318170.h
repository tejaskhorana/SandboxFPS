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
// DragToMove
struct DragToMove_t612845408;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragToMove/<RecordMouse>c__Iterator4
struct  U3CRecordMouseU3Ec__Iterator4_t2383318170  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 DragToMove/<RecordMouse>c__Iterator4::<v3>__0
	Vector3_t4282066566  ___U3Cv3U3E__0_0;
	// UnityEngine.Ray DragToMove/<RecordMouse>c__Iterator4::<inputRay>__1
	Ray_t3134616544  ___U3CinputRayU3E__1_1;
	// UnityEngine.RaycastHit DragToMove/<RecordMouse>c__Iterator4::<hit>__2
	RaycastHit_t4003175726  ___U3ChitU3E__2_2;
	// System.Int32 DragToMove/<RecordMouse>c__Iterator4::$PC
	int32_t ___U24PC_3;
	// System.Object DragToMove/<RecordMouse>c__Iterator4::$current
	Il2CppObject * ___U24current_4;
	// DragToMove DragToMove/<RecordMouse>c__Iterator4::<>f__this
	DragToMove_t612845408 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_U3Cv3U3E__0_0() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U3Cv3U3E__0_0)); }
	inline Vector3_t4282066566  get_U3Cv3U3E__0_0() const { return ___U3Cv3U3E__0_0; }
	inline Vector3_t4282066566 * get_address_of_U3Cv3U3E__0_0() { return &___U3Cv3U3E__0_0; }
	inline void set_U3Cv3U3E__0_0(Vector3_t4282066566  value)
	{
		___U3Cv3U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CinputRayU3E__1_1() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U3CinputRayU3E__1_1)); }
	inline Ray_t3134616544  get_U3CinputRayU3E__1_1() const { return ___U3CinputRayU3E__1_1; }
	inline Ray_t3134616544 * get_address_of_U3CinputRayU3E__1_1() { return &___U3CinputRayU3E__1_1; }
	inline void set_U3CinputRayU3E__1_1(Ray_t3134616544  value)
	{
		___U3CinputRayU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3ChitU3E__2_2() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U3ChitU3E__2_2)); }
	inline RaycastHit_t4003175726  get_U3ChitU3E__2_2() const { return ___U3ChitU3E__2_2; }
	inline RaycastHit_t4003175726 * get_address_of_U3ChitU3E__2_2() { return &___U3ChitU3E__2_2; }
	inline void set_U3ChitU3E__2_2(RaycastHit_t4003175726  value)
	{
		___U3ChitU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator4_t2383318170, ___U3CU3Ef__this_5)); }
	inline DragToMove_t612845408 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline DragToMove_t612845408 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(DragToMove_t612845408 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
