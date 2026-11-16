// FUN_1804ba360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba360 */

void FUN_1804ba360(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14d0);
  FUN_1804d9420(*(undefined8 *)(lVar4 + 0x2c8),param_1,param_2,param_3);
  lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x2c8) + 0xa0);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x2c8) + 0xa8);
  uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar6 * 0x10);
  uVar2 = *(undefined4 *)(lVar5 + -8 + lVar6 * 0x10);
  uVar3 = *(undefined4 *)(lVar5 + -4 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(lVar5 + -0x10 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x26c) = uVar1;
  *(undefined4 *)(lVar4 + 0x270) = uVar2;
  *(undefined4 *)(lVar4 + 0x274) = uVar3;
  return;
}



