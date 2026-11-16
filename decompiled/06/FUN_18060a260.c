// FUN_18060a260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a260 */

/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined4 __vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = __vcrt_InitializeCriticalSectionEx(&DAT_180bb1bc8 + uVar3 * 0x28,4000,0);
    if (iVar1 == 0) {
      __vcrt_uninitialize_locks();
      return 0;
    }
    DAT_180bb1bf0 = DAT_180bb1bf0 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}



