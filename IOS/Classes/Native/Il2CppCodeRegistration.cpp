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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"










extern const Il2CppMethodPointer g_MethodPointers[];
extern const Il2CppMethodPointer g_Il2CppGenericMethodPointers[];
extern const InvokerMethod g_Il2CppInvokerPointers[];
extern const CustomAttributesCacheGenerator g_AttributeGenerators[];
extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[];
extern Il2CppInteropData g_Il2CppInteropData[];
extern const Il2CppCodeRegistration g_CodeRegistration = 
{
	11370,
	g_MethodPointers,
	0,
	NULL,
	4285,
	g_Il2CppGenericMethodPointers,
	1701,
	g_Il2CppInvokerPointers,
	3198,
	g_AttributeGenerators,
	272,
	g_UnresolvedVirtualMethodPointers,
	114,
	g_Il2CppInteropData,
};
extern const Il2CppMetadataRegistration g_MetadataRegistration;
static const Il2CppCodeGenOptions s_Il2CppCodeGenOptions = 
{
	false,
};
void s_Il2CppCodegenRegistration()
{
	il2cpp_codegen_register (&g_CodeRegistration, &g_MetadataRegistration, &s_Il2CppCodeGenOptions);
	#if IL2CPP_MONO_DEBUGGER
	extern void initializeSequencePointMap();
	extern void initializeExecutionInfoMap();
	extern void initializeTypeSourceFileMap();
	extern void initializeHeaderInfoMap();
	il2cpp_codegen_register_debugger_callbacks (initializeSequencePointMap, initializeExecutionInfoMap, initializeTypeSourceFileMap, initializeHeaderInfoMap);
	#endif
}
#if RUNTIME_IL2CPP
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_Il2CppCodegenRegistrationVariable (&s_Il2CppCodegenRegistration, NULL);
#endif