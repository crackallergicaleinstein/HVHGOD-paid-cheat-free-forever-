// FUN_1805c2340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2340 */

longlong FUN_1805c2340(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  
  lVar8 = *(longlong *)(param_1 + 0x18);
  puVar7 = (undefined1 *)FUN_1805ccb40(lVar8 + 6,param_3);
  if (puVar7 != (undefined1 *)0x0) {
    uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]),puVar7[7]);
    if (uVar11 != 0) {
      puVar7 = (undefined1 *)((ulonglong)uVar11 + lVar8);
      if (uVar9 != 0) {
        puVar23 = (undefined1 *)((ulonglong)uVar9 + lVar8);
        uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar23,puVar23[1]),puVar23[2]),puVar23[3]);
        iVar5 = FUN_1805cca80(puVar7);
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
        if (uVar11 != 0) {
          if (iVar5 == 0) {
            lVar8 = FUN_1805cccf0(param_1,puVar23);
            return lVar8;
          }
          iVar5 = FUN_1805ccad0(param_1,iVar5 + 1 + uVar11,param_2);
          if (iVar5 != 0) {
            return 0;
          }
          puVar22 = puVar23 + 9;
          uVar16 = 1;
          lVar8 = *(longlong *)(param_1 + 0x30);
          iVar5 = 0;
          uVar17 = (uint)(byte)puVar7[7];
          puVar15 = puVar7 + 8;
          uVar18 = (uint)CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]);
          uVar24 = 1;
          uVar20 = (uint)CONCAT21(CONCAT11(puVar23[4],puVar23[5]),puVar23[6]);
          lVar12 = 0;
          do {
            while (uVar20 <= uVar18 + uVar17) {
              if (uVar20 < uVar18) {
                iVar5 = iVar5 + 1;
                *(uint *)(lVar8 + lVar12 * 4) = uVar20;
                lVar12 = lVar12 + 1;
              }
              uVar24 = uVar24 + 1;
              lVar21 = (longlong)iVar5;
              if (uVar11 < uVar24) {
                if (uVar16 <= uVar9) {
                  uVar11 = 0;
                  iVar5 = uVar17 + 1 + iVar5;
                  piVar14 = (int *)(lVar8 + lVar21 * 4);
                  do {
                    iVar6 = uVar11 + uVar18;
                    uVar11 = uVar11 + 1;
                    *piVar14 = iVar6;
                    piVar14 = piVar14 + 1;
                  } while (uVar11 <= uVar17);
                  if (uVar16 < uVar9) {
                    lVar12 = (longlong)iVar5;
                    uVar13 = (ulonglong)(uVar9 - uVar16);
                    do {
                      uVar1 = *puVar15;
                      uVar9 = 0;
                      uVar2 = puVar15[1];
                      uVar3 = puVar15[2];
                      bVar4 = puVar15[3];
                      iVar5 = iVar5 + 1 + (uint)bVar4;
                      do {
                        iVar6 = uVar9 + CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
                        uVar9 = uVar9 + 1;
                        *(int *)(lVar8 + lVar12 * 4) = iVar6;
                        lVar12 = lVar12 + 1;
                      } while (uVar9 <= bVar4);
                      uVar13 = uVar13 - 1;
                      puVar15 = puVar15 + 4;
                    } while (uVar13 != 0);
                  }
                }
LAB_1805c2647:
                *(undefined4 *)(lVar8 + (longlong)iVar5 * 4) = 0;
                return lVar8;
              }
              puVar7 = puVar22 + 1;
              uVar1 = *puVar22;
              puVar23 = puVar22 + 2;
              puVar22 = puVar22 + 5;
              uVar20 = (uint)CONCAT21(CONCAT11(uVar1,*puVar7),*puVar23);
            }
            uVar10 = 0;
            iVar5 = iVar5 + 1 + uVar17;
            do {
              iVar6 = uVar10 + uVar18;
              uVar10 = uVar10 + 1;
              *(int *)(lVar8 + lVar12 * 4) = iVar6;
              lVar12 = lVar12 + 1;
            } while (uVar10 <= uVar17);
            uVar16 = uVar16 + 1;
            if (uVar9 < uVar16) {
              if (uVar24 <= uVar11) {
                lVar12 = (longlong)iVar5;
                iVar5 = iVar5 + 1;
                *(uint *)(lVar8 + lVar12 * 4) = uVar20;
                if (uVar24 < uVar11) {
                  lVar12 = (longlong)iVar5;
                  uVar13 = (ulonglong)(uVar11 - uVar24);
                  iVar5 = iVar5 + (uVar11 - uVar24);
                  puVar19 = (uint *)(lVar8 + lVar12 * 4);
                  do {
                    *puVar19 = (uint)CONCAT21(CONCAT11(*puVar22,puVar22[1]),puVar22[2]);
                    uVar13 = uVar13 - 1;
                    puVar19 = puVar19 + 1;
                    puVar22 = puVar22 + 5;
                  } while (uVar13 != 0);
                }
              }
              goto LAB_1805c2647;
            }
            uVar17 = (uint)(byte)puVar15[3];
            uVar18 = (uint)CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]);
            puVar15 = puVar15 + 4;
          } while( true );
        }
      }
      lVar8 = FUN_1805ccbd0(param_1,puVar7,param_2);
      return lVar8;
    }
    if (uVar9 != 0) {
      lVar8 = FUN_1805cccf0(param_1,(ulonglong)uVar9 + lVar8,param_2);
      return lVar8;
    }
  }
  return 0;
}



