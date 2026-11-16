// FUN_1805928a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805928a0 */

void FUN_1805928a0(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 *puVar16;
  int local_res10 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar10 = *(longlong *)(param_1 + 0x408);
  local_res10[0] = 0;
  puVar3 = *(uint **)(lVar10 + 0x18);
  if (*puVar3 < param_2) {
    param_2 = *puVar3;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    piVar12 = (int *)(*(longlong *)(puVar3 + 4) + 0x10);
    uVar13 = (ulonglong)param_2;
    puVar16 = param_4;
    do {
      iVar11 = *(int *)((longlong)puVar16 + (param_3 - (longlong)param_4));
      iVar9 = piVar12[-1];
      if (iVar9 < iVar11) {
        if (iVar11 < *piVar12) {
          uVar7 = FUN_180573310(iVar11 - iVar9,*piVar12 - iVar9);
        }
        else {
          uVar7 = 0x10000;
        }
      }
      else if (iVar11 < iVar9) {
        if (piVar12[-2] < iVar11) {
          uVar7 = FUN_180573310(iVar11 - iVar9,iVar9 - piVar12[-2]);
        }
        else {
          uVar7 = 0xffff0000;
        }
      }
      else {
        uVar7 = 0;
      }
      *puVar16 = uVar7;
      piVar12 = piVar12 + 8;
      puVar16 = puVar16 + 1;
      uVar13 = uVar13 - 1;
      uVar14 = param_2;
    } while (uVar13 != 0);
  }
  uVar8 = *puVar3;
  if (uVar14 < uVar8) {
    do {
      uVar13 = (ulonglong)uVar14;
      uVar14 = uVar14 + 1;
      param_4[uVar13] = 0;
      uVar8 = *puVar3;
    } while (uVar14 < uVar8);
  }
  puVar4 = *(undefined8 **)(lVar10 + 0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar15 = (ushort *)*puVar4;
    if ((puVar15 != (ushort *)0x0) && (uVar14 = 0, uVar8 != 0)) {
      do {
        uVar8 = 1;
        if (1 < *puVar15) {
          lVar10 = *(longlong *)(puVar15 + 4);
          do {
            iVar11 = *(int *)(lVar10 + (ulonglong)uVar8 * 8);
            if ((int)param_4[uVar14] < iVar11) {
              lVar1 = (ulonglong)(uVar8 - 1) * 8;
              iVar11 = FUN_1805753e0(param_4[uVar14] - *(int *)(lVar1 + lVar10),
                                     *(int *)(lVar10 + (ulonglong)uVar8 * 8 + 4) -
                                     *(int *)(lVar1 + 4 + lVar10),iVar11 - *(int *)(lVar1 + lVar10))
              ;
              param_4[uVar14] = iVar11 + *(int *)(lVar1 + 4 + *(longlong *)(puVar15 + 4));
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *puVar15);
        }
        uVar8 = *puVar3;
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 8;
      } while (uVar14 < uVar8);
    }
    if ((puVar4[2] != 0) &&
       (lVar10 = FUN_18057ac40(uVar2,4,0,uVar8,0,local_res10), local_res10[0] == 0)) {
      uVar14 = 0;
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10);
      *(undefined4 **)(*(longlong *)(param_1 + 0x408) + 0x10) = param_4;
      if (*puVar3 != 0) {
        do {
          uVar13 = (ulonglong)uVar14;
          uVar7 = 0;
          iVar11 = param_4[uVar13];
          uVar8 = uVar14;
          if (puVar4[7] != 0) {
            uVar6 = *(uint *)(puVar4 + 5) - 1;
            if (uVar14 < *(uint *)(puVar4 + 5)) {
              uVar6 = uVar14;
            }
            uVar8 = *(uint *)((ulonglong)uVar6 * 4 + puVar4[7]);
            uVar7 = *(undefined4 *)((ulonglong)uVar6 * 4 + puVar4[6]);
          }
          iVar9 = FUN_1805893c0(param_1,puVar4 + 1,uVar7,uVar8);
          iVar11 = iVar9 * 4 + iVar11;
          if (0xffff < iVar11) {
            iVar11 = 0x10000;
          }
          if (iVar11 < -0xffff) {
            iVar11 = -0x10000;
          }
          uVar14 = uVar14 + 1;
          *(int *)(lVar10 + uVar13 * 4) = iVar11;
        } while (uVar14 < *puVar3);
        uVar13 = 0;
        if (*puVar3 != 0) {
          do {
            uVar14 = (int)uVar13 + 1;
            param_4[uVar13] = *(undefined4 *)(uVar13 * 4 + lVar10);
            uVar13 = (ulonglong)uVar14;
          } while (uVar14 < *puVar3);
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar5;
      FUN_18057abd0(uVar2,lVar10);
    }
  }
  return;
}



