﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t197597763;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t2874185564;
// UnityEngine.Collision
struct Collision_t4262080450;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.Joint
struct Joint_t1358886274;
// System.String
struct String_t;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.SpringJoint
struct SpringJoint_t1912369980;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Collision_get_gameObject_m3662658840_MetadataUsageId;
extern const uint32_t PhysicMaterial__ctor_m1658318133_MetadataUsageId;
extern RuntimeClass* Collider_t1773347010_il2cpp_TypeInfo_var;
extern const uint32_t RaycastHit_get_collider_m1464180279_MetadataUsageId;
extern const uint32_t RaycastHit_get_rigidbody_m2320267866_MetadataUsageId;
extern const uint32_t RaycastHit_get_transform_m942054759_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct ContactPointU5BU5D_t872956888;
struct RaycastHitU5BU5D_t1690781147;
struct ColliderU5BU5D_t4234922487;


#ifndef U3CMODULEU3E_T692745539_H
#define U3CMODULEU3E_T692745539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745539 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745539_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PHYSICS_T2310948930_H
#define PHYSICS_T2310948930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t2310948930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T2310948930_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef RIGIDBODYCONSTRAINTS_T3348042902_H
#define RIGIDBODYCONSTRAINTS_T3348042902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_t3348042902 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_t3348042902, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODYCONSTRAINTS_T3348042902_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef QUERYTRIGGERINTERACTION_T962663221_H
#define QUERYTRIGGERINTERACTION_T962663221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t962663221 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t962663221, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T962663221_H
#ifndef CONTROLLERCOLLIDERHIT_T240592346_H
#define CONTROLLERCOLLIDERHIT_T240592346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t240592346  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1138636865 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1773347010 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t3722313464  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t3722313464  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t3722313464  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Controller_0)); }
	inline CharacterController_t1138636865 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1138636865 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1138636865 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Collider_1)); }
	inline Collider_t1773347010 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t1773347010 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Point_2)); }
	inline Vector3_t3722313464  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t3722313464 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t3722313464  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Normal_3)); }
	inline Vector3_t3722313464  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t3722313464  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveDirection_4)); }
	inline Vector3_t3722313464  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t3722313464 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t3722313464  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_pinvoke
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_com
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T240592346_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef FORCEMODE_T3656391766_H
#define FORCEMODE_T3656391766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t3656391766 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t3656391766, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE_T3656391766_H
#ifndef CONTACTPOINT_T3758755253_H
#define CONTACTPOINT_T3758755253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3758755253 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3758755253_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef PHYSICMATERIAL_T2874185564_H
#define PHYSICMATERIAL_T2874185564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2874185564  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2874185564_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef JOINT_T1358886274_H
#define JOINT_T1358886274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Joint
struct  Joint_t1358886274  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINT_T1358886274_H
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
#ifndef SPHERECOLLIDER_T2077223608_H
#define SPHERECOLLIDER_T2077223608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2077223608  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2077223608_H
#ifndef SPRINGJOINT_T1912369980_H
#define SPRINGJOINT_T1912369980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpringJoint
struct  SpringJoint_t1912369980  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGJOINT_T1912369980_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef CAPSULECOLLIDER_T197597763_H
#define CAPSULECOLLIDER_T197597763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t197597763  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T197597763_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_t3758755253  m_Items[1];

public:
	inline ContactPoint_t3758755253  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t3758755253  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t1056001966  m_Items[1];

public:
	inline RaycastHit_t1056001966  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t1056001966  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_get_center_m4188094250 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_set_center_m2973340406 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ContactPoint_get_point_m1734743878 (ContactPoint_t3758755253 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_INTERNAL_set_anchor_m762722954 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_get_gravity_m960240164 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m2789434453 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3133704280 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3336206959 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3611981381 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_RaycastAll_m1113565514 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapSphere_m1366282712 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_CapsuleCast_m889508279 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_Raycast_m227630749 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_FindObjectFromInstanceID_m235838713 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collider_get_attachedRigidbody_m135494519 (Collider_t1773347010 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_velocity_m2480891890 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_velocity_m931742966 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_angularVelocity_m4188482450 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForce_m2553500652 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m1436908387 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m977299210 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___explosionForce1, Vector3_t3722313464 * ___explosionPosition2, float ___explosionRadius3, float ___upwardsModifier4, int32_t ___mode5, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_position_m772969920 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_position_m1588012848 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CapsuleCollider_get_center_m1504830057 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CapsuleCollider_INTERNAL_get_center_m4188094250(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m2290088540 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		CapsuleCollider_INTERNAL_set_center_m2973340406(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_get_center_m4188094250 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_INTERNAL_get_center_m4188094250_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_INTERNAL_get_center_m4188094250_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_get_center_m4188094250_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_set_center_m2973340406 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_INTERNAL_set_center_m2973340406_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_INTERNAL_set_center_m2973340406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_set_center_m2973340406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CapsuleCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m3672925813 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_radius_m3672925813_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_radius_m3672925813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_radius_m3672925813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.CapsuleCollider::get_height()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m4149104584 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_height_m4149104584_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_height_m4149104584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m4149104584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m2690698645 (CapsuleCollider_t197597763 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_height_m2690698645_ftn) (CapsuleCollider_t197597763 *, float);
	static CapsuleCollider_set_height_m2690698645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_height_m2690698645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Collider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collider__ctor_m1632031523 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collider_get_attachedRigidbody_m135494519 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef Rigidbody_t3916780224 * (*Collider_get_attachedRigidbody_m135494519_ftn) (Collider_t1773347010 *);
	static Collider_get_attachedRigidbody_m135494519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m135494519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	Rigidbody_t3916780224 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_m2414312872 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef bool (*Collider_get_isTrigger_m2414312872_ftn) (Collider_t1773347010 *);
	static Collider_get_isTrigger_m2414312872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_isTrigger_m2414312872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_isTrigger()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_material_m3792038929 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_material_m3792038929_ftn) (Collider_t1773347010 *, PhysicMaterial_t2874185564 *);
	static Collider_set_material_m3792038929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_material_m3792038929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * Collider_get_sharedMaterial_m2016666527 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef PhysicMaterial_t2874185564 * (*Collider_get_sharedMaterial_m2016666527_ftn) (Collider_t1773347010 *);
	static Collider_get_sharedMaterial_m2016666527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_sharedMaterial_m2016666527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_sharedMaterial()");
	PhysicMaterial_t2874185564 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
extern "C" void Collision_t4262080450_marshal_pinvoke_back(const Collision_t4262080450_marshaled_pinvoke& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(Collision_t4262080450_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_com& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
extern "C" void Collision_t4262080450_marshal_com_back(const Collision_t4262080450_marshaled_com& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com_cleanup(Collision_t4262080450_marshaled_com& marshaled)
{
}
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * Collision_get_collider_m2708970793 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	Collider_t1773347010 * V_0 = NULL;
	{
		Collider_t1773347010 * L_0 = __this->get_m_Collider_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider_t1773347010 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Collision_get_gameObject_m3662658840 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collision_get_gameObject_m3662658840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * G_B3_0 = NULL;
	{
		Rigidbody_t3916780224 * L_0 = __this->get_m_Rigidbody_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Rigidbody_t3916780224 * L_2 = __this->get_m_Rigidbody_2();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002d;
	}

IL_0022:
	{
		Collider_t1773347010 * L_4 = __this->get_m_Collider_3();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		GameObject_t1113636619 * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C" IL2CPP_METHOD_ATTR ContactPointU5BU5D_t872956888* Collision_get_contacts_m116535001 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	ContactPointU5BU5D_t872956888* V_0 = NULL;
	{
		ContactPointU5BU5D_t872956888* L_0 = __this->get_m_Contacts_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ContactPointU5BU5D_t872956888* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ContactPoint_get_point_m1734743878 (ContactPoint_t3758755253 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Point_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  ContactPoint_get_point_m1734743878_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ContactPoint_t3758755253 * _thisAdjusted = reinterpret_cast<ContactPoint_t3758755253 *>(__this + 1);
	return ContactPoint_get_point_m1734743878(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(const ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_com_back(const ControllerColliderHit_t240592346_marshaled_com& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com_cleanup(ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Joint_get_connectedBody_m826805471 (Joint_t1358886274 * __this, const RuntimeMethod* method)
{
	typedef Rigidbody_t3916780224 * (*Joint_get_connectedBody_m826805471_ftn) (Joint_t1358886274 *);
	static Joint_get_connectedBody_m826805471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_get_connectedBody_m826805471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::get_connectedBody()");
	Rigidbody_t3916780224 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedBody_m3457616993 (Joint_t1358886274 * __this, Rigidbody_t3916780224 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_set_connectedBody_m3457616993_ftn) (Joint_t1358886274 *, Rigidbody_t3916780224 *);
	static Joint_set_connectedBody_m3457616993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_connectedBody_m3457616993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_anchor_m3102426751 (Joint_t1358886274 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Joint_INTERNAL_set_anchor_m762722954(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_INTERNAL_set_anchor_m762722954 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_INTERNAL_set_anchor_m762722954_ftn) (Joint_t1358886274 *, Vector3_t3722313464 *);
	static Joint_INTERNAL_set_anchor_m762722954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_INTERNAL_set_anchor_m762722954_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PhysicMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_m1658318133 (PhysicMaterial_t2874185564 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicMaterial__ctor_m1658318133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn) (PhysicMaterial_t2874185564 *, String_t*);
	static PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)");
	_il2cpp_icall_func(___mat0, ___name1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_get_gravity_m2660066594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Physics_INTERNAL_get_gravity_m960240164(NULL /*static, unused*/, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_get_gravity_m960240164 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_INTERNAL_get_gravity_m960240164_ftn) (Vector3_t3722313464 *);
	static Physics_INTERNAL_get_gravity_m960240164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_get_gravity_m960240164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m234523501 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1896872038 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m952690504 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = ___queryTriggerInteraction4;
		bool L_5 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m4145022031 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m261647105 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1085399925 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = ___queryTriggerInteraction5;
		bool L_6 = Physics_Internal_Raycast_m2789434453(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m2071039297 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m281474224 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m630863594 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3133704280 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1893809531 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, (RaycastHit_t1056001966 *)L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1743768310 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, (RaycastHit_t1056001966 *)L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, (RaycastHit_t1056001966 *)L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3336206959 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		int32_t L_5 = ___queryTriggerInteraction4;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3780585721 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m849698669 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3796226007 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3611981381 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2709753186 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m447622039 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___maxDistance2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2266459302 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = V_2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_3;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_RaycastAll_m1113565514 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m1830905 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColliderU5BU5D_t4234922487* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius1;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapSphere_m1366282712(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapSphere_m1366282712 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t4234922487* (*Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn) (Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t4234922487* retVal = _il2cpp_icall_func(___position0, ___radius1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1896800602 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_4 = ___maxDistance2;
		int32_t L_5 = ___layerMask3;
		int32_t L_6 = ___queryTriggerInteraction4;
		bool L_7 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (RaycastHit_t1056001966 *)(&V_0), L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m2789434453 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RaycastHit_t1056001966 * L_0 = ___hitInfo2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = ___layermask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m227630749(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), (RaycastHit_t1056001966 *)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_Raycast_m227630749 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___hitInfo2, ___maxDistance3, ___layermask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_CapsuleCast_m889508279 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___radius2;
		RaycastHit_t1056001966 * L_1 = ___hitInfo4;
		float L_2 = ___maxDistance5;
		int32_t L_3 = ___layermask6;
		int32_t L_4 = ___queryTriggerInteraction7;
		bool L_5 = Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___point10), (Vector3_t3722313464 *)(&___point21), L_0, (Vector3_t3722313464 *)(&___direction3), (RaycastHit_t1056001966 *)L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___point10, ___point21, ___radius2, ___direction3, ___hitInfo4, ___maxDistance5, ___layermask6, ___queryTriggerInteraction7);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		bool L_3 = Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___origin0), (Vector3_t3722313464 *)(&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Point_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_point_m2236647085(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Normal_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_normal_m1232181746_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_normal_m1232181746(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit_get_distance_m3727327466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_distance_m3727327466(_thisAdjusted, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_collider_m1464180279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1773347010 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_m_Collider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_1 = Object_FindObjectFromInstanceID_m235838713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Collider_t1773347010 *)IsInstClass((RuntimeObject*)L_1, Collider_t1773347010_il2cpp_TypeInfo_var));
		goto IL_0017;
	}

IL_0017:
	{
		Collider_t1773347010 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  Collider_t1773347010 * RaycastHit_get_collider_m1464180279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_collider_m1464180279(_thisAdjusted, method);
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_rigidbody_m2320267866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * V_0 = NULL;
	Rigidbody_t3916780224 * G_B3_0 = NULL;
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279((RaycastHit_t1056001966 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Collider_t1773347010 * L_2 = RaycastHit_get_collider_m1464180279((RaycastHit_t1056001966 *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t3916780224 * L_3 = Collider_get_attachedRigidbody_m135494519(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((Rigidbody_t3916780224 *)(NULL));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		Rigidbody_t3916780224 * L_4 = V_0;
		return L_4;
	}
}
extern "C"  Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_rigidbody_m2320267866(_thisAdjusted, method);
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_transform_m942054759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		Rigidbody_t3916780224 * L_0 = RaycastHit_get_rigidbody_m2320267866((RaycastHit_t1056001966 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t3916780224 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Rigidbody_t3916780224 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0049;
	}

IL_0020:
	{
		Collider_t1773347010 * L_5 = RaycastHit_get_collider_m1464180279((RaycastHit_t1056001966 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Collider_t1773347010 * L_7 = RaycastHit_get_collider_m1464180279((RaycastHit_t1056001966 *)__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0049;
	}

IL_0042:
	{
		V_1 = (Transform_t3600365921 *)NULL;
		goto IL_0049;
	}

IL_0049:
	{
		Transform_t3600365921 * L_9 = V_1;
		return L_9;
	}
}
extern "C"  Transform_t3600365921 * RaycastHit_get_transform_m942054759_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_transform_m942054759(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rigidbody::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody__ctor_m1806995817 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_velocity_m2480891890(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m931742966(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_velocity_m2480891890 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m2480891890_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_velocity_m2480891890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m2480891890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_velocity_m931742966 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m931742966_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_velocity_m931742966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m931742966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m4254006699 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m4188482450(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_angularVelocity_m4188482450 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m3991710090 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_drag_m3991710090_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_drag_m3991710090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m3991710090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m2933262323 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_drag_m2933262323_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_drag_m2933262323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m2933262323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_angularDrag_m1943636787 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_angularDrag_m1943636787_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_angularDrag_m1943636787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m1943636787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m3497419500 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_angularDrag_m3497419500_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_angularDrag_m3497419500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m3497419500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m403342600 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_isKinematic_m403342600_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_isKinematic_m403342600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_isKinematic_m403342600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m1802205683 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_isKinematic_m1802205683_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_isKinematic_m1802205683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m1802205683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_m2908117271 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_constraints_m2908117271_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_constraints_m2908117271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_constraints_m2908117271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m2553500652(NULL /*static, unused*/, __this, (Vector3_t3722313464 *)(&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForce_m2553500652 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___force1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m977299210 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533(NULL /*static, unused*/, __this, (Vector3_t3722313464 *)(&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___force1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m3135953458 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3 = V_0;
		Rigidbody_AddRelativeForce_m1436908387(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m1436908387 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___mode3;
		Rigidbody_AddRelativeForce_m977299210(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m1633500454 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995(NULL /*static, unused*/, __this, (Vector3_t3722313464 *)(&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___torque1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m1698937293 (Rigidbody_t3916780224 * __this, float ___explosionForce0, Vector3_t3722313464  ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, int32_t ___mode4, const RuntimeMethod* method)
{
	{
		float L_0 = ___explosionForce0;
		float L_1 = ___explosionRadius2;
		float L_2 = ___upwardsModifier3;
		int32_t L_3 = ___mode4;
		Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721(NULL /*static, unused*/, __this, L_0, (Vector3_t3722313464 *)(&___explosionPosition1), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___explosionForce1, Vector3_t3722313464 * ___explosionPosition2, float ___explosionRadius3, float ___upwardsModifier4, int32_t ___mode5, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn) (Rigidbody_t3916780224 *, float, Vector3_t3722313464 *, float, float, int32_t);
	static Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___explosionForce1, ___explosionPosition2, ___explosionRadius3, ___upwardsModifier4, ___mode5);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_position_m1712729619 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_position_m772969920(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_m2293099797 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_position_m1588012848(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_position_m772969920 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_position_m772969920_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_position_m772969920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_position_m772969920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_position_m1588012848 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_position_m1588012848_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_position_m1588012848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_position_m1588012848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpringJoint::set_spring(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_spring_m3317999832 (SpringJoint_t1912369980 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*SpringJoint_set_spring_m3317999832_ftn) (SpringJoint_t1912369980 *, float);
	static SpringJoint_set_spring_m3317999832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_spring_m3317999832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_spring(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.SpringJoint::set_damper(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_damper_m2395439607 (SpringJoint_t1912369980 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*SpringJoint_set_damper_m2395439607_ftn) (SpringJoint_t1912369980 *, float);
	static SpringJoint_set_damper_m2395439607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_damper_m2395439607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_damper(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.SpringJoint::set_maxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_maxDistance_m3312008700 (SpringJoint_t1912369980 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*SpringJoint_set_maxDistance_m3312008700_ftn) (SpringJoint_t1912369980 *, float);
	static SpringJoint_set_maxDistance_m3312008700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_maxDistance_m3312008700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
