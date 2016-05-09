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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1647;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1649;
// System.Type[]
struct TypeU5BU5D_t411;
// System.Exception
struct Exception_t101;
// System.Reflection.AssemblyName
struct AssemblyName_t1694;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m10184 (AssemblyBuilder_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1649* AssemblyBuilder_GetModulesInternal_m10185 (AssemblyBuilder_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t411* AssemblyBuilder_GetTypes_m10186 (AssemblyBuilder_t1647 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m10187 (AssemblyBuilder_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t101 * AssemblyBuilder_not_supported_m10188 (AssemblyBuilder_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1694 * AssemblyBuilder_UnprotectedGetName_m10189 (AssemblyBuilder_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
