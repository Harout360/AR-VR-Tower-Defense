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

// System.Net.HttpWebRequest
struct HttpWebRequest_t1189;
// System.Uri
struct Uri_t1272;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t425;
// System.Net.ServicePoint
struct ServicePoint_t1273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m7081 (HttpWebRequest_t1189 * __this, Uri_t1272 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m7082 (HttpWebRequest_t1189 * __this, SerializationInfo_t425 * ___serializationInfo, StreamingContext_t426  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m7083 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m7084 (HttpWebRequest_t1189 * __this, SerializationInfo_t425 * ___serializationInfo, StreamingContext_t426  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t1272 * HttpWebRequest_get_Address_m6931 (HttpWebRequest_t1189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1273 * HttpWebRequest_get_ServicePoint_m6935 (HttpWebRequest_t1189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1273 * HttpWebRequest_GetServicePoint_m7085 (HttpWebRequest_t1189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m7086 (HttpWebRequest_t1189 * __this, SerializationInfo_t425 * ___serializationInfo, StreamingContext_t426  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
