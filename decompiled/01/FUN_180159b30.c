// FUN_180159b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159b30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180159b30(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}



