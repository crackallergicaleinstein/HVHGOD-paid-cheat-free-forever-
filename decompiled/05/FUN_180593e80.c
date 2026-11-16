// FUN_180593e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180593e80 */

undefined8 FUN_180593e80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  ulonglong uVar21;
  int *piVar22;
  ulonglong uVar23;
  ushort local_b4;
  int local_a8 [32];
  
  uVar23 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  bVar2 = false;
  bVar3 = false;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  bVar4 = false;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0;
  local_b4 = 0;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (*(short *)(param_1 + 0xf4) != 0) {
    do {
      bVar4 = bVar7;
      bVar3 = bVar6;
      bVar2 = bVar5;
      uVar13 = 0;
      lVar16 = uVar23 * 0x10;
      iVar8 = *(int *)(lVar16 + *(longlong *)(param_1 + 0xf8));
      if (iVar8 == 0x63767420) {
        bVar2 = true;
        piVar22 = (int *)&DAT_18066f290;
LAB_180593f5d:
        uVar23 = uVar13;
        do {
          uVar12 = 0;
          uVar18 = 0;
          if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc + lVar16) == piVar22[1]) {
            if ((int)uVar13 == 0) {
              uVar13 = uVar12;
              if ((*(code **)(param_1 + 0x2a0) != (code *)0x0) &&
                 (iVar8 = (**(code **)(param_1 + 0x2a0))
                                    (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar16)
                                     ,*(undefined8 *)(param_1 + 0xa0),0), iVar8 == 0)) {
                lVar1 = *(longlong *)(param_1 + 0xa0);
                uVar15 = *(uint *)(lVar16 + 0xc + *(longlong *)(param_1 + 0xf8));
                iVar8 = FUN_180577bf0(lVar1,uVar15);
                if (iVar8 == 0) {
                  pbVar10 = *(byte **)(lVar1 + 0x38);
                  uVar17 = uVar18;
                  if (3 < uVar15) {
                    uVar21 = (ulonglong)((uVar15 - 4 >> 2) + 1);
                    pbVar9 = pbVar10;
                    do {
                      uVar15 = uVar15 - 4;
                      pbVar10 = pbVar9 + 4;
                      uVar17 = (int)uVar13 +
                               CONCAT31(CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]),pbVar9[3]);
                      uVar13 = (ulonglong)uVar17;
                      uVar21 = uVar21 - 1;
                      pbVar9 = pbVar10;
                    } while (uVar21 != 0);
                  }
                  bVar20 = 0x18;
                  uVar19 = uVar18;
                  if (1 < uVar15) {
                    uVar21 = (ulonglong)((uVar15 - 2 >> 1) + 1);
                    uVar13 = uVar12;
                    do {
                      uVar15 = uVar15 - 2;
                      uVar19 = (int)uVar13 + ((uint)*pbVar10 << (bVar20 & 0x1f));
                      uVar13 = (ulonglong)uVar19;
                      bVar11 = bVar20 - 8;
                      pbVar9 = pbVar10 + 1;
                      bVar20 = bVar20 - 0x10;
                      pbVar10 = pbVar10 + 2;
                      uVar18 = (int)uVar12 + ((uint)*pbVar9 << (bVar11 & 0x1f));
                      uVar12 = (ulonglong)uVar18;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  if (uVar15 != 0) {
                    uVar17 = uVar17 + ((uint)*pbVar10 << (bVar20 & 0x1f));
                  }
                  FUN_180577d30(lVar1);
                  uVar12 = (ulonglong)(uVar18 + uVar19 + uVar17);
                }
                uVar13 = uVar12;
              }
            }
            if (*piVar22 == (int)uVar13) {
              local_a8[uVar23] = local_a8[uVar23] + 1;
            }
            if (local_a8[uVar23] == 3) {
              return 1;
            }
          }
          uVar23 = uVar23 + 1;
          piVar22 = piVar22 + 6;
        } while ((longlong)uVar23 < 0x1f);
      }
      else {
        if (iVar8 == 0x6670676d) {
          bVar3 = true;
          piVar22 = &DAT_18066f298;
          goto LAB_180593f5d;
        }
        if (iVar8 == 0x70726570) {
          bVar4 = true;
          piVar22 = &DAT_18066f2a0;
          goto LAB_180593f5d;
        }
      }
      local_b4 = local_b4 + 1;
      uVar23 = (ulonglong)local_b4;
      bVar5 = bVar2;
      bVar6 = bVar3;
      bVar7 = bVar4;
    } while (local_b4 < *(ushort *)(param_1 + 0xf4));
  }
  piVar22 = local_a8;
  piVar14 = &DAT_18066f29c;
  while( true ) {
    if ((!bVar2) && (piVar14[-2] == 0)) {
      *piVar22 = *piVar22 + 1;
    }
    if ((!bVar3) && (*piVar14 == 0)) {
      *piVar22 = *piVar22 + 1;
    }
    if ((!bVar4) && (piVar14[2] == 0)) {
      *piVar22 = *piVar22 + 1;
    }
    if (*piVar22 == 3) break;
    piVar14 = piVar14 + 6;
    piVar22 = piVar22 + 1;
    if (0x18066f583 < (longlong)piVar14) {
      return 0;
    }
  }
  return 1;
}



