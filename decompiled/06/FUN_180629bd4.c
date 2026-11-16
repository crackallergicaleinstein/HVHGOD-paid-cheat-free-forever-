// FUN_180629bd4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180629bd4 */

/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  int iVar1;
  
  __acrt_lock(6);
  iVar1 = FUN_180629018(_Time);
  __acrt_unlock(6);
  return iVar1;
}



