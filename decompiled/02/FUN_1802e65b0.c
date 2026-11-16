// FUN_1802e65b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e65b0 */

void FUN_1802e65b0(longlong *param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar10 = 0;
  if (0 < param_3) {
    lVar11 = 0;
    lVar9 = (longlong)param_2 * 0x1c;
    do {
      lVar5 = *param_1;
      iVar10 = iVar10 + param_4;
      iVar7 = iVar10;
      if (param_3 < iVar10) {
        iVar7 = param_3;
      }
      lVar11 = lVar11 + param_4;
      puVar1 = (undefined8 *)(lVar9 + lVar5);
      uVar6 = *puVar1;
      uVar3 = *(undefined4 *)(lVar9 + 0x18 + lVar5);
      lVar9 = lVar9 + (longlong)param_4 * 0x1c;
      lVar8 = (longlong)(iVar7 + param_2) * 0x1c;
      uStack_40 = (undefined4)puVar1[1];
      uVar2 = *(undefined8 *)(lVar8 + -0x10 + lVar5);
      uVar4 = *(undefined4 *)(lVar8 + -8 + lVar5);
      lVar5 = param_1[1];
      uStack_3c = (undefined4)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
      lVar8 = (longlong)*(int *)(lVar5 + 0xa80) * 0x1c;
      *(int *)(lVar5 + 0xa80) = *(int *)(lVar5 + 0xa80) + 1;
      *(undefined8 *)(lVar8 + lVar5) = uVar6;
      ((undefined8 *)(lVar8 + lVar5))[1] = CONCAT44(uStack_3c,uStack_40);
      *(ulonglong *)(lVar8 + 0x10 + lVar5) = CONCAT44(uVar4,uStack_38);
      *(undefined4 *)(lVar8 + 0x18 + lVar5) = uVar3;
    } while (lVar11 < param_3);
  }
  return;
}



