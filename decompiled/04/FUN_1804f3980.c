// FUN_1804f3980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f3980 */

void FUN_1804f3980(void)

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
  
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  lVar6 = *(longlong *)(lVar5 + 0x1c8);
  if (*(int *)(lVar6 + 0x10) == 1) {
    return;
  }
  lVar7 = *(longlong *)(lVar5 + 0x2c8);
  uVar8 = *(undefined8 *)(lVar6 + 0x44);
  uVar1 = *(undefined4 *)(lVar6 + 0x3c);
  uVar2 = *(undefined4 *)(lVar6 + 0x40);
  uVar3 = *(undefined4 *)(lVar6 + 0x44);
  uVar4 = *(undefined4 *)(lVar6 + 0x48);
  *(undefined8 *)(lVar5 + 0x268) = *(undefined8 *)(lVar6 + 0x3c);
  *(undefined8 *)(lVar5 + 0x270) = uVar8;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0);
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  *(undefined4 *)(lVar7 + -0x10 + lVar9 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + -0xc + lVar9 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + -8 + lVar9 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + -4 + lVar9 * 0x10) = uVar4;
  FUN_1804e1d30(lVar6 + 0x70,*(undefined8 *)(lVar5 + 0x2c8),*(int *)(lVar6 + 0xc) + 1);
  return;
}



