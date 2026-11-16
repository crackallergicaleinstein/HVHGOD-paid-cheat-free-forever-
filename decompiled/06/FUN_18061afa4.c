// FUN_18061afa4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061afa4 */

/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined4 __acrt_uninitialize(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 == false) {
    uVar1 = FUN_18062c308(&PTR_FUN_1806af260,&DAT_1806af360);
    return uVar1;
  }
  if (DAT_180bb1c48 != 0) {
    common_flush_all(param_1);
  }
  return 1;
}



