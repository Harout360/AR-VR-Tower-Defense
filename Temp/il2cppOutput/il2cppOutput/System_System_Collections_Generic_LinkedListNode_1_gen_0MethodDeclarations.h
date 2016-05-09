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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3007;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3006;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m24740_gshared (LinkedListNode_1_t3007 * __this, LinkedList_1_t3006 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m24740(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3007 *, LinkedList_1_t3006 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m24740_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m24741_gshared (LinkedListNode_1_t3007 * __this, LinkedList_1_t3006 * ___list, Object_t * ___value, LinkedListNode_1_t3007 * ___previousNode, LinkedListNode_1_t3007 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m24741(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3007 *, LinkedList_1_t3006 *, Object_t *, LinkedListNode_1_t3007 *, LinkedListNode_1_t3007 *, const MethodInfo*))LinkedListNode_1__ctor_m24741_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m24742_gshared (LinkedListNode_1_t3007 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m24742(__this, method) (( void (*) (LinkedListNode_1_t3007 *, const MethodInfo*))LinkedListNode_1_Detach_m24742_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3006 * LinkedListNode_1_get_List_m24743_gshared (LinkedListNode_1_t3007 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m24743(__this, method) (( LinkedList_1_t3006 * (*) (LinkedListNode_1_t3007 *, const MethodInfo*))LinkedListNode_1_get_List_m24743_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t3007 * LinkedListNode_1_get_Next_m24744_gshared (LinkedListNode_1_t3007 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m24744(__this, method) (( LinkedListNode_1_t3007 * (*) (LinkedListNode_1_t3007 *, const MethodInfo*))LinkedListNode_1_get_Next_m24744_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m24745_gshared (LinkedListNode_1_t3007 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m24745(__this, method) (( Object_t * (*) (LinkedListNode_1_t3007 *, const MethodInfo*))LinkedListNode_1_get_Value_m24745_gshared)(__this, method)
