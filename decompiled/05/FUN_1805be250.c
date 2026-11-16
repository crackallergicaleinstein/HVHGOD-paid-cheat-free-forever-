// FUN_1805be250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805be250 */

ulonglong FUN_1805be250(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *local_res8;
  uint local_res18 [2];
  undefined8 local_res20;
  
  uVar10 = 0;
  uVar11 = 0;
  iVar4 = param_2;
  if (param_3 < 0) {
    iVar4 = param_2 + param_3;
    if (param_3 != -0x15) {
      iVar4 = param_2;
    }
    uVar11 = 3;
    if (param_3 != -0x15) {
      uVar11 = 1;
    }
    param_3 = 0;
  }
  uVar12 = *param_1;
  uVar8 = 0;
  piVar5 = *(int **)(param_1 + 2);
  local_res20 = param_4;
  if (uVar12 != 0) {
    do {
      if ((*piVar5 == iVar4) && (piVar5[1] == param_3)) goto LAB_1805be34b;
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar8 < uVar12);
  }
  uVar1 = uVar12 + 1;
  uVar7 = (ulonglong)uVar1;
  if (param_1[1] < uVar1) {
    uVar12 = uVar12 + 8 & 0xfffffff8;
    uVar6 = FUN_18057ac40(param_4,0xc,param_1[1],uVar12,*(int **)(param_1 + 2),local_res18);
    *(undefined8 *)(param_1 + 2) = uVar6;
    if (local_res18[0] != 0) {
      return (ulonglong)local_res18[0];
    }
    param_1[1] = uVar12;
  }
  lVar3 = *(longlong *)(param_1 + 2);
  *param_1 = uVar1;
  *(int *)(lVar3 + -0xc + uVar7 * 0xc) = iVar4;
  *(int *)(lVar3 + -8 + uVar7 * 0xc) = param_3;
  *(undefined4 *)(lVar3 + -4 + uVar7 * 0xc) = uVar11;
LAB_1805be34b:
  if (param_1[4] == 0) {
    uVar7 = FUN_1805bf120(param_1 + 4,local_res20,&local_res8);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    puVar9 = local_res8;
  }
  else {
    puVar9 = (uint *)(*(longlong *)(param_1 + 6) + ((ulonglong)param_1[4] * 3 + -3) * 8);
  }
  if (*puVar9 <= uVar8) {
    uVar7 = FUN_1805bf090(puVar9,uVar8 + 1,local_res20);
    uVar10 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *puVar9 = uVar8 + 1;
  }
  pbVar2 = (byte *)((ulonglong)(uVar8 >> 3) + *(longlong *)(puVar9 + 2));
  *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)uVar8 & 7));
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar8;
  }
  return uVar10;
}



