// FUN_1804ba3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba3f0 */

void FUN_1804ba3f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14d0);
  lVar6 = *(longlong *)(lVar5 + 0x2c8);
  iVar4 = *(int *)(lVar6 + 0xa0);
  iVar8 = iVar4 + -1;
  *(int *)(lVar6 + 0xa0) = iVar8;
  if (iVar8 == 0) {
    puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x3c);
  }
  else {
    puVar9 = (undefined8 *)((longlong)(iVar4 + -2) * 0x10 + *(longlong *)(lVar6 + 0xa8));
  }
  uVar7 = puVar9[1];
  *(undefined8 *)(lVar6 + 0x60) = *puVar9;
  *(undefined8 *)(lVar6 + 0x68) = uVar7;
  FUN_1804d9200();
  lVar10 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  uVar1 = *(undefined4 *)(lVar6 + -0xc + lVar10 * 0x10);
  uVar2 = *(undefined4 *)(lVar6 + -8 + lVar10 * 0x10);
  uVar3 = *(undefined4 *)(lVar6 + -4 + lVar10 * 0x10);
  *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + -0x10 + lVar10 * 0x10);
  *(undefined4 *)(lVar5 + 0x26c) = uVar1;
  *(undefined4 *)(lVar5 + 0x270) = uVar2;
  *(undefined4 *)(lVar5 + 0x274) = uVar3;
  return;
}



