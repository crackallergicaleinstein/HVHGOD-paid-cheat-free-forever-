// FUN_1805c8910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8910 */

uint FUN_1805c8910(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint local_res10;
  uint local_res18;
  ulonglong local_78;
  
  local_res18 = 0;
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_18057bd80(param_2);
  }
  uVar11 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  iVar20 = (int)param_1;
  if (*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar11 + param_1) {
    if (0 < *(int *)(param_2 + 0x110)) {
      FUN_18057bd80(param_2);
    }
    uVar11 = (int)*(undefined8 *)(param_2 + 0x108) - iVar20;
  }
  if (uVar11 < (uint)((int)*(undefined8 *)(param_2 + 0x108) - iVar20)) {
    if (1 < *(int *)(param_2 + 0x110)) {
      FUN_18057bd80(param_2);
    }
    uVar11 = (int)*(undefined8 *)(param_2 + 0x108) - iVar20;
  }
  local_78 = (ulonglong)uVar11;
  if (uVar11 < 0x10) {
    FUN_18057bd80(param_2);
  }
  bVar4 = *(byte *)(param_1 + 7);
  uVar5 = *(undefined1 *)(param_1 + 6);
  if ((1 < *(int *)(param_2 + 0x110)) && ((bVar4 & 1) != 0)) {
    FUN_18057bd80(param_2);
  }
  uVar18 = (uint)(ushort)(CONCAT11(uVar5,bVar4) >> 1);
  if (uVar11 < uVar18 * 8 + 0x10) {
    FUN_18057bd80(param_2);
  }
  if (1 < *(int *)(param_2 + 0x110)) {
    uVar7 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
    bVar4 = *(byte *)(param_1 + 0xb);
    uVar8 = CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd));
    if (((uVar8 | uVar7) & 1) != 0) {
      FUN_18057bd80(param_2);
    }
    uVar11 = (uint)(uVar7 >> 1);
    if ((((uVar18 < uVar11) || (uVar11 * 2 < uVar18)) || ((uVar8 >> 1) + uVar11 != uVar18)) ||
       (uVar11 != 1 << (bVar4 & 0x1f))) {
      FUN_18057bd80(param_2);
    }
  }
  uVar11 = uVar18 * 2;
  uVar16 = (ulonglong)uVar11;
  lVar13 = param_1 + 0x10 + uVar16;
  lVar1 = param_1 + 0xe;
  lVar2 = (ulonglong)uVar11 + lVar13;
  puVar3 = (undefined1 *)(lVar2 + (ulonglong)uVar11 * 2);
  if ((1 < *(int *)(param_2 + 0x110)) &&
     (uVar14 = (ulonglong)(uVar18 * 2 - 2),
     CONCAT11(*(undefined1 *)(uVar14 + lVar1),*(undefined1 *)(uVar14 + 1 + lVar1)) != -1)) {
    FUN_18057bd80(param_2);
  }
  local_res10 = 0;
  uVar11 = 0;
  if (uVar18 != 0) {
    puVar9 = (undefined1 *)(lVar13 + -1);
    puVar15 = (undefined1 *)(lVar2 + -1);
    uVar22 = 0;
    uVar19 = 0;
    do {
      puVar10 = puVar9 + 1;
      puVar9 = puVar9 + 2;
      puVar17 = puVar15 + 2;
      uVar12 = (uint)CONCAT11(*puVar10,*puVar9);
      uVar21 = (uint)CONCAT11(puVar15[(lVar1 - lVar2) + 1],puVar17[lVar1 - lVar2]);
      uVar5 = puVar15[1];
      uVar6 = *puVar17;
      uVar11 = (uint)CONCAT11(puVar15[uVar16 + 1],puVar17[uVar16]);
      if (uVar21 < uVar12) {
        FUN_18057bd80(param_2,8);
      }
      if ((uVar12 <= uVar22) && (local_res10 != 0)) {
        if (*(int *)(param_2 + 0x110) < 1) {
          if ((uVar12 < uVar19) || (uVar21 < uVar22)) {
            local_res18 = local_res18 | 1;
          }
          else {
            local_res18 = local_res18 | 2;
          }
        }
        else {
          FUN_18057bd80(param_2,8);
        }
      }
      if (uVar11 != 0) {
        if (uVar11 == 0xffff) {
          if ((((1 < *(int *)(param_2 + 0x110)) || (local_res10 != uVar18 - 1)) ||
              (uVar12 != 0xffff)) || (uVar21 != 0xffff)) {
            FUN_18057bd80(param_2,8);
          }
        }
        else {
          puVar15 = puVar15 + (ulonglong)uVar11 + uVar16 + 1;
          if (*(int *)(param_2 + 0x110) < 1) {
            if (((local_res10 != uVar18 - 1) || (uVar12 != 0xffff)) || (uVar21 != 0xffff)) {
              if (puVar3 <= puVar15) {
                puVar10 = *(undefined1 **)(param_2 + 0x108);
                goto LAB_1805c8c85;
              }
              goto LAB_1805c8c8d;
            }
          }
          else {
            if (puVar3 <= puVar15) {
              puVar10 = (undefined1 *)(local_78 + param_1);
LAB_1805c8c85:
              if (puVar15 + ((uVar21 - uVar12) * 2 + 2) <= puVar10) goto LAB_1805c8c9a;
            }
LAB_1805c8c8d:
            FUN_18057bd80(param_2,8);
          }
LAB_1805c8c9a:
          if ((0 < *(int *)(param_2 + 0x110)) && (uVar12 < uVar21)) {
            puVar15 = puVar15 + -1;
            uVar14 = (ulonglong)(uVar21 - uVar12);
            do {
              puVar10 = puVar15 + 1;
              puVar15 = puVar15 + 2;
              if ((CONCAT11(*puVar10,*puVar15) != 0) &&
                 (*(uint *)(param_2 + 0x120) <=
                  (uint)(ushort)(CONCAT11(*puVar10,*puVar15) + CONCAT11(uVar5,uVar6)))) {
                FUN_18057bd80(param_2,0x10);
              }
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
      }
      local_res10 = local_res10 + 1;
      puVar15 = puVar17;
      uVar11 = local_res18;
      uVar22 = uVar21;
      uVar19 = uVar12;
    } while (local_res10 < uVar18);
  }
  return uVar11;
}



