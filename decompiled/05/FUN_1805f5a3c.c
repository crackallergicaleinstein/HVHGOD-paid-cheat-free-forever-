// FUN_1805f5a3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5a3c */

/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __scrt_dllmain_after_initialize_c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 == 0) {
    uVar2 = FUN_180159f80();
    iVar1 = FUN_18061a2a8(uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    thunk_FUN_18061a428();
  }
  else {
    FUN_1805f641c();
  }
  return 1;
}



