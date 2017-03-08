#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellTreeNode
struct CellTreeNode_t3020576354;
// System.Collections.Generic.List`1<CellTreeNode>
struct List_1_t93794610;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_CellTreeNode_ENodeType2581346388.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellTreeNode
struct  CellTreeNode_t3020576354  : public Il2CppObject
{
public:
	// System.Int32 CellTreeNode::Id
	int32_t ___Id_0;
	// UnityEngine.Vector3 CellTreeNode::Center
	Vector3_t4282066566  ___Center_1;
	// UnityEngine.Vector3 CellTreeNode::Size
	Vector3_t4282066566  ___Size_2;
	// UnityEngine.Vector3 CellTreeNode::TopLeft
	Vector3_t4282066566  ___TopLeft_3;
	// UnityEngine.Vector3 CellTreeNode::BottomRight
	Vector3_t4282066566  ___BottomRight_4;
	// CellTreeNode/ENodeType CellTreeNode::NodeType
	int32_t ___NodeType_5;
	// CellTreeNode CellTreeNode::Parent
	CellTreeNode_t3020576354 * ___Parent_6;
	// System.Collections.Generic.List`1<CellTreeNode> CellTreeNode::Childs
	List_1_t93794610 * ___Childs_7;
	// System.Single CellTreeNode::maxDistance
	float ___maxDistance_8;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Center_1() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___Center_1)); }
	inline Vector3_t4282066566  get_Center_1() const { return ___Center_1; }
	inline Vector3_t4282066566 * get_address_of_Center_1() { return &___Center_1; }
	inline void set_Center_1(Vector3_t4282066566  value)
	{
		___Center_1 = value;
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___Size_2)); }
	inline Vector3_t4282066566  get_Size_2() const { return ___Size_2; }
	inline Vector3_t4282066566 * get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(Vector3_t4282066566  value)
	{
		___Size_2 = value;
	}

	inline static int32_t get_offset_of_TopLeft_3() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___TopLeft_3)); }
	inline Vector3_t4282066566  get_TopLeft_3() const { return ___TopLeft_3; }
	inline Vector3_t4282066566 * get_address_of_TopLeft_3() { return &___TopLeft_3; }
	inline void set_TopLeft_3(Vector3_t4282066566  value)
	{
		___TopLeft_3 = value;
	}

	inline static int32_t get_offset_of_BottomRight_4() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___BottomRight_4)); }
	inline Vector3_t4282066566  get_BottomRight_4() const { return ___BottomRight_4; }
	inline Vector3_t4282066566 * get_address_of_BottomRight_4() { return &___BottomRight_4; }
	inline void set_BottomRight_4(Vector3_t4282066566  value)
	{
		___BottomRight_4 = value;
	}

	inline static int32_t get_offset_of_NodeType_5() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___NodeType_5)); }
	inline int32_t get_NodeType_5() const { return ___NodeType_5; }
	inline int32_t* get_address_of_NodeType_5() { return &___NodeType_5; }
	inline void set_NodeType_5(int32_t value)
	{
		___NodeType_5 = value;
	}

	inline static int32_t get_offset_of_Parent_6() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___Parent_6)); }
	inline CellTreeNode_t3020576354 * get_Parent_6() const { return ___Parent_6; }
	inline CellTreeNode_t3020576354 ** get_address_of_Parent_6() { return &___Parent_6; }
	inline void set_Parent_6(CellTreeNode_t3020576354 * value)
	{
		___Parent_6 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_6, value);
	}

	inline static int32_t get_offset_of_Childs_7() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___Childs_7)); }
	inline List_1_t93794610 * get_Childs_7() const { return ___Childs_7; }
	inline List_1_t93794610 ** get_address_of_Childs_7() { return &___Childs_7; }
	inline void set_Childs_7(List_1_t93794610 * value)
	{
		___Childs_7 = value;
		Il2CppCodeGenWriteBarrier(&___Childs_7, value);
	}

	inline static int32_t get_offset_of_maxDistance_8() { return static_cast<int32_t>(offsetof(CellTreeNode_t3020576354, ___maxDistance_8)); }
	inline float get_maxDistance_8() const { return ___maxDistance_8; }
	inline float* get_address_of_maxDistance_8() { return &___maxDistance_8; }
	inline void set_maxDistance_8(float value)
	{
		___maxDistance_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
