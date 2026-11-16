// FUN_1804efec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804efec0 */

void FUN_1804efec0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x2338);
  lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar8 = *(undefined8 *)(lVar6 + 0x270);
  *(undefined8 *)(lVar5 + 0x174) = *(undefined8 *)(lVar6 + 0x268);
  *(undefined8 *)(lVar5 + 0x17c) = uVar8;
  uVar8 = *(undefined8 *)(lVar5 + 0x15c);
  uVar1 = *(undefined4 *)(lVar5 + 0x154);
  uVar2 = *(undefined4 *)(lVar5 + 0x158);
  uVar3 = *(undefined4 *)(lVar5 + 0x15c);
  uVar4 = *(undefined4 *)(lVar5 + 0x160);
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  *(undefined8 *)(lVar6 + 0x268) = *(undefined8 *)(lVar5 + 0x154);
  *(undefined8 *)(lVar6 + 0x270) = uVar8;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
  *(undefined4 *)(lVar7 + -0x10 + lVar9 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + -0xc + lVar9 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + -8 + lVar9 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + -4 + lVar9 * 0x10) = uVar4;
  FUN_1804e1d30(*(undefined8 *)(lVar5 + 0x1a8),*(undefined8 *)(lVar6 + 0x2c8),
                *(undefined2 *)(lVar5 + 0x238));
  return;
}



