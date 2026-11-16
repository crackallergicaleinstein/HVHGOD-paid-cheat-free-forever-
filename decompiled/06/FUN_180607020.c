// FUN_180607020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180607020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined4 __vcrt_initialize_ptd(void)

{
  int iVar1;
  
  DAT_1808d70d0 = __vcrt_FlsAlloc(FUN_180606e80);
  if (DAT_1808d70d0 != -1) {
    iVar1 = __vcrt_FlsSetValue(DAT_1808d70d0,&DAT_180bb1b40);
    if (iVar1 != 0) {
      _DAT_180bb1bb8 = 0xfffffffe;
      return 1;
    }
    FUN_180607068();
  }
  return 0;
}



