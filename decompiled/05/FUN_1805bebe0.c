// FUN_1805bebe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bebe0 */

void FUN_1805bebe0(undefined8 *param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int local_58 [2];
  uint *local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar7 = 1;
    if (param_2 < 2) {
      uVar7 = (ulonglong)param_2;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      local_48 = *param_1;
      uVar15 = 0;
      iVar6 = param_4[1];
      iVar13 = *param_4;
      iVar14 = iVar6;
      if (iVar6 < 0) {
        uVar15 = 3;
        if (iVar6 != -0x15) {
          uVar15 = 1;
        }
        iVar14 = 0;
        iVar5 = iVar13 + iVar6;
        if (iVar6 != -0x15) {
          iVar5 = iVar13;
        }
        iVar13 = iVar5;
      }
      uVar16 = *(uint *)(param_1 + uVar7 * 6 + 3);
      uVar11 = 0;
      piVar8 = (int *)param_1[uVar7 * 6 + 4];
      if (uVar16 != 0) {
        do {
          if ((*piVar8 == iVar13) && (piVar8[1] == iVar14)) goto LAB_1805bed0a;
          uVar11 = uVar11 + 1;
          piVar8 = piVar8 + 3;
        } while (uVar11 < uVar16);
      }
      uVar2 = *(uint *)((longlong)param_1 + uVar7 * 0x30 + 0x1c);
      uVar1 = uVar16 + 1;
      uVar12 = (ulonglong)uVar1;
      if (uVar2 < uVar1) {
        uVar16 = uVar16 + 8 & 0xfffffff8;
        uVar9 = FUN_18057ac40(local_48,0xc,uVar2,uVar16,(int *)param_1[uVar7 * 6 + 4],local_58);
        param_1[uVar7 * 6 + 4] = uVar9;
        iVar6 = local_58[0];
        if (local_58[0] != 0) goto LAB_1805bed9c;
        *(uint *)((longlong)param_1 + uVar7 * 0x30 + 0x1c) = uVar16;
      }
      lVar3 = param_1[uVar7 * 6 + 4];
      *(uint *)(param_1 + uVar7 * 6 + 3) = uVar1;
      *(int *)(lVar3 + -0xc + uVar12 * 0xc) = iVar13;
      *(int *)(lVar3 + -8 + uVar12 * 0xc) = iVar14;
      *(undefined4 *)(lVar3 + -4 + uVar12 * 0xc) = uVar15;
LAB_1805bed0a:
      if (*(uint *)(param_1 + uVar7 * 6 + 5) == 0) {
        iVar6 = FUN_1805bf120(param_1 + uVar7 * 6 + 5,local_48,&local_50);
        if (iVar6 != 0) goto LAB_1805bed9c;
      }
      else {
        local_50 = (uint *)(param_1[uVar7 * 6 + 6] +
                           ((ulonglong)*(uint *)(param_1 + uVar7 * 6 + 5) * 3 + -3) * 8);
      }
      puVar4 = local_50;
      if (*local_50 <= uVar11) {
        iVar6 = FUN_1805bf090(local_50,uVar11 + 1,local_48);
        if (iVar6 != 0) {
LAB_1805bed9c:
          *(int *)(param_1 + 1) = iVar6;
          return;
        }
        *puVar4 = uVar11 + 1;
      }
      pbVar10 = (byte *)((ulonglong)(uVar11 >> 3) + *(longlong *)(puVar4 + 2));
      param_4 = param_4 + 2;
      *pbVar10 = *pbVar10 | (byte)(0x80 >> ((byte)uVar11 & 7));
    }
  }
  return;
}



