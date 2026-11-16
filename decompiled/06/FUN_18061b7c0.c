// FUN_18061b7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b7c0 */

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180bb2028;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1dd0 + uVar1 * 0x28));
    DAT_180bb2028 = DAT_180bb2028 - 1;
  }
  return 1;
}



