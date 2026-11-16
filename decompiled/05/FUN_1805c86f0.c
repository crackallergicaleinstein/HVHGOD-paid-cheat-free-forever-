// FUN_1805c86f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c86f0 */

short FUN_1805c86f0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  
  sVar12 = 0;
  uVar4 = *param_2 + 1;
  if (0xffff < uVar4) {
    *param_2 = 0;
    return 0;
  }
  puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x206);
  lVar1 = *(longlong *)(param_1 + 0x18) + 6;
LAB_1805c8732:
  do {
    if (uVar4 >> 8 == 0) {
      uVar5 = (ulonglong)((uVar4 & 0xff) * 2);
      puVar9 = puVar3;
      if (CONCAT11(*(undefined1 *)(uVar5 + lVar1),*(undefined1 *)(uVar5 + 1 + lVar1)) == 0) {
LAB_1805c8781:
        if (puVar9 != (undefined1 *)0x0) {
          uVar6 = (uint)CONCAT11(*puVar9,puVar9[1]);
          uVar13 = (uint)CONCAT11(puVar9[2],puVar9[3]);
          uVar8 = uVar4 & 0xff;
          if ((uVar6 + uVar13 <= uVar8) && (uVar4 < 0x100)) {
            uVar4 = 0x100;
            goto LAB_1805c8732;
          }
          if (CONCAT11(puVar9[6],puVar9[7]) == 0) {
            if (uVar4 == 0x100) goto LAB_1805c87f8;
          }
          else {
            uVar7 = uVar6;
            uVar11 = 0;
            if (uVar6 <= uVar8) {
              uVar7 = uVar8;
              uVar11 = uVar8 - uVar6;
            }
            uVar4 = (uVar4 & 0xffffff00) + uVar7;
            if (uVar11 < uVar13) {
              puVar10 = puVar9 + (ulonglong)((uint)CONCAT11(puVar9[6],puVar9[7]) + uVar11 * 2) + 5;
              do {
                puVar2 = puVar10 + 1;
                puVar10 = puVar10 + 2;
                if ((CONCAT11(*puVar2,*puVar10) != 0) &&
                   (sVar12 = CONCAT11(*puVar2,*puVar10) + CONCAT11(puVar9[4],puVar9[5]), sVar12 != 0
                   )) {
                  *param_2 = uVar4;
                  return sVar12;
                }
                uVar11 = uVar11 + 1;
                uVar4 = uVar4 + 1;
              } while (uVar11 < uVar13);
            }
            if (uVar13 != 0) {
              uVar4 = uVar4 - 1;
            }
          }
        }
      }
    }
    else {
      uVar5 = (ulonglong)((uVar4 >> 8) * 2);
      puVar9 = puVar3 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(uVar5 + lVar1),*(undefined1 *)(uVar5 + 1 + lVar1))
                        & 0xfffffffffffffff8);
      if (puVar3 + ((ulonglong)
                    CONCAT11(*(undefined1 *)(uVar5 + lVar1),*(undefined1 *)(uVar5 + 1 + lVar1)) &
                   0xfffffffffffffff8) != puVar3) goto LAB_1805c8781;
    }
    if (uVar4 < 0x100) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar4 = (uVar4 & 0xffffff00) + 0x100;
    }
    if (0xffff < uVar4) {
LAB_1805c87f8:
      *param_2 = 0;
      return sVar12;
    }
  } while( true );
}



