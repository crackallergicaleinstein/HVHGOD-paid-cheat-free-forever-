// FUN_1802ecf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ecf10 */

/* WARNING: Removing unreachable block (ram,0x0001802ecfe5) */

ulonglong FUN_1802ecf10(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint local_78;
  uint local_74;
  uint local_70;
  ulonglong local_68;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar17 = *param_1 - 1;
  uVar12 = (ulonglong)uVar17;
  uVar18 = uVar1 - 1;
  if (uVar18 == 0) {
    uVar18 = param_2[1];
    uVar10 = (ulonglong)uVar18;
    if (uVar17 == 0) {
      uVar1 = param_1[1];
      uVar12 = (ulonglong)uVar1;
      uVar17 = 0;
      if (uVar18 != 1) {
        uVar12 = uVar1 / uVar10;
        param_1[1] = uVar1 % uVar18;
        uVar17 = (uint)(uVar1 % uVar18 != 0);
      }
      *param_1 = uVar17;
      return uVar12;
    }
    if (uVar18 == 1) {
      *param_1 = 0;
      return *(ulonglong *)(param_1 + 1);
    }
    uVar6 = 0;
    uVar8 = 0;
    uVar18 = 0;
    while (uVar17 != 0xffffffff) {
      lVar9 = uVar12 + 1;
      uVar17 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar17;
      uVar3 = (ulonglong)param_1[lVar9] | uVar8 << 0x20;
      uVar8 = uVar3 % uVar10;
      uVar18 = (uint)uVar8;
      uVar6 = (uVar6 << 0x20) + (uVar3 / uVar10 & 0xffffffff);
    }
    param_1[1] = uVar18;
    param_1[2] = 0;
    *param_1 = (uint)(uVar18 != 0);
    return uVar6;
  }
  if (uVar17 < uVar18) {
    return 0;
  }
  lVar9 = (longlong)(int)uVar17;
  iVar16 = uVar17 - uVar18;
  lVar13 = (longlong)iVar16;
  if (lVar13 <= lVar9) {
    puVar7 = param_1 + lVar9 + 1;
    uVar14 = uVar17;
    do {
      if (*(uint *)((longlong)param_2 + (lVar13 * -4 - (longlong)param_1) + (longlong)puVar7) !=
          *puVar7) {
        if (param_1[(longlong)(int)uVar14 + 1] <= param_2[(longlong)(int)(uVar14 - iVar16) + 1])
        goto LAB_1802ed083;
        break;
      }
      uVar14 = uVar14 - 1;
      lVar9 = lVar9 + -1;
      puVar7 = puVar7 + -1;
    } while (lVar13 <= lVar9);
  }
  iVar16 = iVar16 + 1;
LAB_1802ed083:
  if (iVar16 == 0) {
    return 0;
  }
  uVar18 = param_2[(ulonglong)uVar18 + 1];
  uVar10 = (ulonglong)uVar18;
  local_78 = param_2[(ulonglong)(uVar1 - 2) + 1];
  iVar2 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar18 == 0) {
    local_70 = 0;
    local_74 = 0x20;
  }
  else {
    local_74 = 0x1f - iVar2;
    local_70 = 0x20 - local_74;
    if (local_74 == 0) goto LAB_1802ed104;
  }
  uVar10 = (ulonglong)(uVar18 << (local_74 & 0x1f) | local_78 >> (local_70 & 0x1f));
  local_78 = local_78 << (local_74 & 0x1f);
  if (2 < uVar1) {
    local_78 = local_78 | param_2[(ulonglong)(uVar1 - 3) + 1] >> (local_70 & 0x1f);
  }
LAB_1802ed104:
  iVar16 = iVar16 + -1;
  local_68 = 0;
  uVar6 = 0;
  if (-1 < iVar16) {
    uVar18 = iVar16 + uVar1;
    do {
      if ((uint)uVar12 < uVar18) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)param_1[(ulonglong)uVar18 + 1];
      }
      uVar8 = (ulonglong)param_1[(ulonglong)(uVar18 - 1) + 1] | uVar6 << 0x20;
      uVar17 = param_1[(ulonglong)(uVar18 - 2) + 1];
      uVar3 = (ulonglong)uVar17;
      if (local_74 != 0) {
        uVar8 = uVar8 << ((ulonglong)local_74 & 0x3f) |
                (ulonglong)(uVar17 >> ((ulonglong)local_70 & 0x3f));
        uVar17 = uVar17 << (local_74 & 0x1f);
        uVar3 = (ulonglong)uVar17;
        if (2 < uVar18) {
          uVar3 = (ulonglong)(uVar17 | param_1[(ulonglong)(uVar18 - 3) + 1] >> (local_70 & 0x1f));
        }
      }
      uVar4 = uVar8 / uVar10;
      uVar8 = uVar8 % uVar10;
      if (0xffffffff < uVar4) {
        lVar9 = uVar4 - 0xffffffff;
        uVar4 = 0xffffffff;
        uVar8 = uVar8 + lVar9 * uVar10;
      }
      if (uVar8 < 0x100000000) {
        uVar5 = local_78 * uVar4;
        do {
          if (uVar5 <= (uVar8 << 0x20 | uVar3)) break;
          uVar4 = uVar4 - 1;
          uVar5 = uVar5 - local_78;
          uVar8 = uVar8 + uVar10;
        } while (uVar8 < 0x100000000);
      }
      if (uVar4 != 0) {
        uVar12 = 0;
        uVar17 = 0;
        if (uVar1 != 0) {
          puVar11 = param_2 + 1;
          puVar7 = puVar11;
          do {
            uVar15 = *puVar7;
            uVar14 = uVar17 + iVar16;
            puVar7 = puVar7 + 1;
            uVar12 = uVar15 * uVar4 + uVar12;
            uVar8 = uVar12 >> 0x20;
            uVar15 = (uint)uVar12;
            uVar12 = uVar8 + 1;
            if (uVar15 <= param_1[(ulonglong)uVar14 + 1]) {
              uVar12 = uVar8;
            }
            uVar17 = uVar17 + 1;
            param_1[(ulonglong)uVar14 + 1] = param_1[(ulonglong)uVar14 + 1] - uVar15;
          } while (uVar17 < uVar1);
          if (uVar6 < uVar12) {
            uVar17 = 0;
            uVar12 = 0;
            do {
              uVar14 = uVar17 + iVar16;
              uVar17 = uVar17 + 1;
              uVar15 = *puVar11;
              puVar11 = puVar11 + 1;
              uVar12 = uVar12 + uVar15 + (ulonglong)param_1[(ulonglong)uVar14 + 1];
              param_1[(ulonglong)uVar14 + 1] = (uint)uVar12;
              uVar12 = uVar12 >> 0x20;
            } while (uVar17 < uVar1);
            uVar4 = uVar4 - 1;
          }
        }
        uVar12 = (ulonglong)(uVar18 - 1);
      }
      uVar17 = (uint)uVar12;
      uVar18 = uVar18 - 1;
      uVar6 = (local_68 << 0x20) + (uVar4 & 0xffffffff);
      iVar16 = iVar16 + -1;
      local_68 = uVar6;
    } while (-1 < iVar16);
  }
  uVar18 = uVar17 + 1;
  do {
    uVar1 = uVar18;
    if (uVar1 == 0) break;
    uVar18 = uVar1 - 1;
  } while (param_1[(ulonglong)(uVar1 - 1) + 1] == 0);
  *param_1 = uVar1;
  return uVar6;
}



