// FUN_18030c6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c6e0 */

void FUN_18030c6e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  iVar13 = 0;
  iVar2 = *(int *)(param_1 + 0x138);
  if (0 < iVar2) {
    pfVar11 = (float *)(param_1 + 8);
    do {
      if (0.995 < *(float *)((longlong)param_2 + 4) * pfVar11[-1] +
                  *(float *)(param_2 + 1) * *pfVar11 +
                  *(float *)((longlong)param_2 + 0xc) * pfVar11[1]) goto LAB_18030c7d7;
      iVar13 = iVar13 + 1;
      pfVar11 = pfVar11 + 0xd;
    } while (iVar13 < iVar2);
  }
  if (iVar2 < 6) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar3 = *(undefined4 *)(param_2 + 6);
    *(int *)(param_1 + 0x138) = iVar2 + 1;
    lVar12 = (longlong)iVar2 * 0x34;
    puVar1 = (undefined8 *)(lVar12 + param_1);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined8 *)(lVar12 + 0x20 + param_1);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar12 + 0x30 + param_1) = uVar3;
    return;
  }
  iVar14 = 1;
  lVar12 = 0;
  lVar16 = 1;
  iVar15 = 0;
  do {
    iVar13 = iVar14;
    lVar10 = lVar16;
    if (*(float *)(lVar16 * 0x34 + 0x18 + param_1) <= *(float *)(lVar12 * 0x34 + 0x18 + param_1)) {
      iVar13 = iVar15;
      lVar10 = lVar12;
    }
    lVar12 = lVar10;
    iVar14 = iVar14 + 1;
    lVar16 = lVar16 + 1;
    iVar15 = iVar13;
  } while (iVar14 < iVar2);
LAB_18030c7d7:
  lVar12 = (longlong)iVar13 * 0x34;
  if (*(float *)(param_2 + 3) < *(float *)(lVar12 + 0x18 + param_1)) {
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar3 = *(undefined4 *)(param_2 + 6);
    puVar1 = (undefined8 *)(lVar12 + param_1);
    *puVar1 = *param_2;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar1 = (undefined8 *)(lVar12 + 0x20 + param_1);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar12 + 0x30 + param_1) = uVar3;
  }
  return;
}



