// FUN_18063f490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063f490 */

undefined8 FUN_18063f490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  lVar3 = *(longlong *)(param_2 + 0x30) * 0x1c;
  lVar1 = *(longlong *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar3 + lVar1) = *(undefined8 *)(param_2 + 0x40);
  ((undefined8 *)(lVar3 + lVar1))[1] = uVar2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(param_2 + 0x50);
  auVar4 = vinsertps_avx(auVar4,ZEXT816(0),0x10);
  *(longlong *)(param_2 + 0x50) = auVar4._0_8_;
  *(longlong *)(lVar3 + 0x10 + lVar1) = auVar4._0_8_;
  *(undefined4 *)(lVar3 + 0x18 + lVar1) = 0xffffffff;
  return 0;
}



