﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t1855;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t348;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1555;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t2121;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1857;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C" void ConfigHandler__ctor_m11189 (ConfigHandler_t1855 * __this, bool ___onlyDelayedChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C" void ConfigHandler_ValidatePath_m11190 (ConfigHandler_t1855 * __this, String_t* ___element, StringU5BU5D_t348* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C" bool ConfigHandler_CheckPath_m11191 (ConfigHandler_t1855 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnStartParsing_m11192 (ConfigHandler_t1855 * __this, SmallXmlParser_t1555 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m11193 (ConfigHandler_t1855 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m11194 (ConfigHandler_t1855 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_OnStartElement_m11195 (ConfigHandler_t1855 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ParseElement_m11196 (ConfigHandler_t1855 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m11197 (ConfigHandler_t1855 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadCustomProviderData_m11198 (ConfigHandler_t1855 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadLifetine_m11199 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C" TimeSpan_t987  ConfigHandler_ParseTime_m11200 (ConfigHandler_t1855 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" void ConfigHandler_ReadChannel_m11201 (ConfigHandler_t1855 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" ProviderData_t1857 * ConfigHandler_ReadProvider_m11202 (ConfigHandler_t1855 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadClientActivated_m11203 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadServiceActivated_m11204 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadClientWellKnown_m11205 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadServiceWellKnown_m11206 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C" void ConfigHandler_ReadInteropXml_m11207 (ConfigHandler_t1855 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void ConfigHandler_ReadPreload_m11208 (ConfigHandler_t1855 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C" String_t* ConfigHandler_GetNotNull_m11209 (ConfigHandler_t1855 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C" String_t* ConfigHandler_ExtractAssembly_m11210 (ConfigHandler_t1855 * __this, String_t** ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m11211 (ConfigHandler_t1855 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnEndParsing_m11212 (ConfigHandler_t1855 * __this, SmallXmlParser_t1555 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
