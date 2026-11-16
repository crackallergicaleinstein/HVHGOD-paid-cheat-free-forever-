// FUN_1805ac000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac000 */

undefined8 FUN_1805ac000(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180577980(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}



