// FUN_180587f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587f30 */

int FUN_180587f30(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int local_res8 [2];
  
  uVar9 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  bVar5 = false;
  local_res8[0] = 0;
  piVar7 = (int *)0x0;
  if ((*(longlong *)(param_1 + 0x408) != 0) ||
     (local_res8[0] = FUN_180588160(param_1,0), local_res8[0] == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x408);
    puVar4 = *(uint **)(lVar3 + 0x18);
    piVar6 = *(int **)(lVar3 + 8);
    uVar13 = *puVar4;
    if (uVar13 < param_2) {
      param_2 = uVar13;
    }
    uVar10 = (ulonglong)param_2;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_18057ad10(uVar2,4,0,uVar13,0,local_res8);
      *(int **)(lVar3 + 8) = piVar6;
      if (local_res8[0] != 0) goto LAB_180588133;
    }
    uVar12 = 0;
    if (param_2 != 0) {
      param_3 = param_3 - (longlong)piVar6;
      uVar8 = uVar10;
      do {
        iVar1 = *(int *)(param_3 + (longlong)piVar6);
        if (*piVar6 != iVar1) {
          *piVar6 = iVar1;
          bVar5 = true;
        }
        piVar6 = piVar6 + 1;
        uVar8 = uVar8 - 1;
        uVar12 = uVar10;
      } while (uVar8 != 0);
    }
    uVar13 = *puVar4;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if ((uint)uVar12 < uVar13) {
        piVar7 = (int *)(uVar10 * 0x20 + *(longlong *)(puVar4 + 4) + 0xc);
        do {
          if (*piVar6 != *piVar7) {
            *piVar6 = *piVar7;
            bVar5 = true;
          }
          uVar13 = *puVar4;
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          piVar7 = piVar7 + 8;
          piVar6 = piVar6 + 1;
        } while (uVar11 < uVar13);
      }
    }
    else {
      piVar7 = (int *)(*(longlong *)
                        (*(longlong *)(puVar4 + 6) + -0x10 +
                        (ulonglong)(*(uint *)(param_1 + 4) >> 0x10) * 0x10) + uVar10 * 4);
      if ((uint)uVar12 < uVar13) {
        do {
          if (*piVar6 != *piVar7) {
            *piVar6 = *piVar7;
            bVar5 = true;
          }
          uVar13 = *puVar4;
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          piVar7 = piVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar11 < uVar13);
      }
    }
    if ((*(longlong *)(lVar3 + 0x10) != 0) && (!bVar5)) {
      return -1;
    }
    piVar7 = (int *)FUN_18057ad10(uVar2,4,0,uVar13,0,local_res8);
    if (local_res8[0] == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        FUN_180591860(param_1);
      }
      FUN_1805928a0(param_1,uVar10,*(undefined8 *)(lVar3 + 8),piVar7);
      local_res8[0] = FUN_180595230(param_1,*puVar4,piVar7,0);
      if ((local_res8[0] == 0) && (param_2 != 0)) {
        piVar6 = piVar7;
        do {
          if (*piVar6 != 0) {
            local_res8[0] = -2;
            break;
          }
          uVar9 = uVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar9 < param_2);
      }
    }
  }
LAB_180588133:
  FUN_18057abd0(uVar2,piVar7);
  return local_res8[0];
}



