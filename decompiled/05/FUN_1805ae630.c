// FUN_1805ae630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ae630 */

undefined8 FUN_1805ae630(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_180577980();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}



