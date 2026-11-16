// FUN_18060a55c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a55c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18060a2e0(4,"InitializeCriticalSectionEx",&DAT_1806adfe8,
                                 "InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}



