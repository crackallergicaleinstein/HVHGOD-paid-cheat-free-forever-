// FUN_18059c9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c9b0 */

int FUN_18059c9b0(undefined1 *param_1,uint param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int local_res18 [2];
  
  lVar5 = *(longlong *)(param_1 + 8);
  local_res18[0] = 0;
  uVar11 = *(undefined8 *)(lVar5 + 0x10);
  if (param_3 == 0) {
    *param_1 = 0;
  }
  else {
    if (param_4 == 0) {
      return 3;
    }
    *param_1 = 0;
    if (param_3 != *(ushort *)(lVar5 + 0x1120)) {
      return 3;
    }
  }
  if (*(uint *)(lVar5 + 0x1110) <= param_2) {
    return 3;
  }
  piVar18 = (int *)((ulonglong)param_2 * 0x10 + *(longlong *)(lVar5 + 0x1118));
  uVar12 = *piVar18 + 1;
  uVar10 = FUN_18057ac40(uVar11,4,*(undefined4 *)(param_1 + 0x20),uVar12,
                         *(undefined8 *)(param_1 + 0x28),local_res18);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  if (local_res18[0] != 0) {
    return local_res18[0];
  }
  uVar17 = 0;
  *(uint *)(param_1 + 0x20) = uVar12;
  if (uVar12 != 0) {
    lVar15 = 0;
    do {
      if (uVar17 == 0) {
        *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0x10000;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(piVar18 + 2) + (ulonglong)(uVar17 - 1) * 4);
        lVar6 = *(longlong *)(lVar5 + 0x1128);
        if (*(uint *)(lVar5 + 0x1124) <= uVar2) {
          return 3;
        }
        if (param_3 == 0) {
          *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0;
        }
        else {
          uVar14 = 0;
          *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0x10000;
          if (param_3 != 0) {
            do {
              lVar7 = *(longlong *)(lVar6 + (ulonglong)uVar2 * 8);
              iVar16 = *(int *)(lVar7 + 4 + uVar14 * 0xc);
              piVar1 = (int *)(lVar7 + uVar14 * 0xc);
              iVar8 = *(int *)(param_4 + uVar14 * 4);
              if ((iVar16 != iVar8) && (iVar16 != 0)) {
                iVar3 = *piVar1;
                if ((iVar8 <= iVar3) || (iVar4 = piVar1[2], iVar4 <= iVar8)) {
                  *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = 0;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar16 = iVar16 - iVar3;
                  iVar8 = iVar8 - iVar3;
                }
                else {
                  iVar16 = iVar4 - iVar16;
                  iVar8 = iVar4 - iVar8;
                }
                uVar9 = FUN_1805753e0(*(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)),iVar8,
                                      iVar16);
                *(undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x28)) = uVar9;
              }
              uVar13 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar13;
            } while (uVar13 < param_3);
          }
        }
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 4;
    } while (uVar17 < uVar12);
  }
  *(uint *)(param_1 + 0x10) = param_2;
  if (param_3 != 0) {
    uVar11 = FUN_18057ac40(uVar11,4,*(undefined4 *)(param_1 + 0x14),(ulonglong)param_3,
                           *(undefined8 *)(param_1 + 0x18),local_res18);
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    if (local_res18[0] != 0) {
      return local_res18[0];
    }
    FUN_18063aed0(uVar11,param_4,(ulonglong)param_3 << 2);
  }
  *(uint *)(param_1 + 0x14) = param_3;
  *param_1 = 1;
  return local_res18[0];
}



