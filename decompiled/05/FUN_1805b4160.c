// FUN_1805b4160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4160 */

undefined8 FUN_1805b4160(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x1ec);
  *(int *)(param_1 + 3) = iVar1;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)(lVar2 + 0x1f0) - iVar1;
  param_1[4] = *(longlong *)(lVar2 + 0x1f8);
  return 0;
}



