// FUN_1803cf970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cf970 */

void FUN_1803cf970(longlong param_1)

{
  undefined1 auVar1 [16];
  uint local_60;
  undefined8 uStack_20;
  uint local_18;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0x3150) = ZEXT816(0);
  local_60 = local_60 & 0xffffff00;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  *(longlong *)(param_1 + 0x3160) = auVar1._0_8_;
  *(uint *)(param_1 + 0x3168) = local_60;
  *(undefined8 *)(param_1 + 0x2318) = 0;
  *(undefined8 *)(param_1 + 0x2320) = 0;
  *(undefined8 *)(param_1 + 9000) = 0;
  *(undefined8 *)(param_1 + 0x2330) = 0;
  *(undefined8 *)(param_1 + 0x22ec) = 0;
  *(undefined8 *)(param_1 + 0x22f4) = 0;
  *(undefined8 *)(param_1 + 0x22fc) = 0;
  *(undefined8 *)(param_1 + 0x2304) = 0;
  uStack_20 = SUB168(ZEXT816(0),4);
  *(undefined2 *)(param_1 + 0x3170) = 0;
  *(undefined4 *)(param_1 + 0x3174) = 0;
  *(undefined4 *)(param_1 + 0x3178) = 0x42c80000;
  *(undefined8 *)(param_1 + 0x317c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3184) = 0;
  *(undefined8 *)(param_1 + 0x3298) = 0;
  *(undefined8 *)(param_1 + 0x32a0) = uStack_20;
  *(undefined8 *)(param_1 + 0x32a8) = 0;
  *(undefined8 *)(param_1 + 0x32b0) = uStack_20;
  *(undefined8 *)(param_1 + 0x32b8) = 0;
  *(undefined8 *)(param_1 + 0x32c0) = 0;
  *(undefined8 *)(param_1 + 13000) = 0;
  *(undefined8 *)(param_1 + 0x32d0) = uStack_20;
  local_18 = local_18 & 0xffffff00;
  *(uint *)(param_1 + 0x32d8) = local_18;
  *(undefined1 *)(param_1 + 0x32dc) = 0;
  return;
}



