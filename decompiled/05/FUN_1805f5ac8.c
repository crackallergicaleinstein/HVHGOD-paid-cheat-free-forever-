// FUN_1805f5ac8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5ac8 */

/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    FUN_18061ad6c(&DAT_180bacda0);
    return;
  }
  iVar1 = FUN_18061a080();
  if (iVar1 == 0) {
    FUN_18061a064();
  }
  return;
}



