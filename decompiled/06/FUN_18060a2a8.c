// FUN_18060a2a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a2a8 */

/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180bb1bf0;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1bc8 + uVar1 * 0x28));
    DAT_180bb1bf0 = DAT_180bb1bf0 - 1;
  }
  return 1;
}



