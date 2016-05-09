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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1192;
// System.AsyncCallback
struct AsyncCallback_t168;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t787;
// System.IO.Stream
struct Stream_t1194;
// System.Exception
struct Exception_t101;
// System.Threading.WaitHandle
struct WaitHandle_t1246;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6515 (ReceiveRecordAsyncResult_t1192 * __this, AsyncCallback_t168 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t787* ___initialBuffer, Stream_t1194 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1194 * ReceiveRecordAsyncResult_get_Record_m6516 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t787* ReceiveRecordAsyncResult_get_ResultingBuffer_m6517 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t787* ReceiveRecordAsyncResult_get_InitialBuffer_m6518 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6519 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t101 * ReceiveRecordAsyncResult_get_AsyncException_m6520 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6521 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1246 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6522 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6523 (ReceiveRecordAsyncResult_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6524 (ReceiveRecordAsyncResult_t1192 * __this, Exception_t101 * ___ex, ByteU5BU5D_t787* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6525 (ReceiveRecordAsyncResult_t1192 * __this, Exception_t101 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6526 (ReceiveRecordAsyncResult_t1192 * __this, ByteU5BU5D_t787* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
