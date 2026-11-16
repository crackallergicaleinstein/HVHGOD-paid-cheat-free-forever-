// FUN_1805f6120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector copy constructor iterator'(void * __ptr64,void * __ptr64,unsigned
   __int64,unsigned __int64,void (__cdecl*)(void * __ptr64,void * __ptr64),void (__cdecl*)(void *
   __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_copy_constructor_iterator_
          (void *param_1,void *param_2,__uint64 param_3,__uint64 param_4,
          _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_4; _Var1 = _Var1 + 1) {
    (*param_5)(param_1,param_2);
    param_1 = (void *)((longlong)param_1 + param_3);
    param_2 = (void *)((longlong)param_2 + param_3);
  }
  return;
}



