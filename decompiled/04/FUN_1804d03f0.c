// FUN_1804d03f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d03f0 */

void FUN_1804d03f0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar6 = param_1[1];
  if (*param_1 == iVar6) {
    iVar7 = *param_1 + 1;
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    FUN_1804d1230(param_1,iVar7);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = (longlong)*param_1 * 0x38;
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar8 + lVar2);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_2[5];
  puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar2);
  *puVar1 = param_2[4];
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar8 + 0x30 + lVar2) = param_2[6];
  *param_1 = *param_1 + 1;
  return;
}



