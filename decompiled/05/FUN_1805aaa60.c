// FUN_1805aaa60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaa60 */

undefined8 FUN_1805aaa60(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0xd8);
  uVar2 = (uint)*(byte *)(lVar1 + 0x68);
  *(uint *)(param_1 + 3) = uVar2;
  *(uint *)((longlong)param_1 + 0x1c) = (*(byte *)(lVar1 + 0x69) - uVar2) + 1;
  return 0;
}



