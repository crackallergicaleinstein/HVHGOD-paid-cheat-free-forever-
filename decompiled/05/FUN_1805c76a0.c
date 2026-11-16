// FUN_1805c76a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c76a0 */

uint FUN_1805c76a0(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  
  lVar3 = *(longlong *)(param_1 + 0x488);
  if (lVar3 == 0) {
    return 0;
  }
  iVar16 = *(int *)(param_1 + 0x494);
  puVar17 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x490) + lVar3);
  uVar18 = 1;
  puVar4 = (undefined1 *)(lVar3 + 4);
  uVar5 = 0;
  do {
    if ((iVar16 == 0) || (puVar17 < puVar4 + 6)) {
      return uVar5;
    }
    puVar10 = puVar4 + CONCAT11(puVar4[2],puVar4[3]);
    if (puVar17 < puVar4 + CONCAT11(puVar4[2],puVar4[3])) {
      puVar10 = puVar17;
    }
    uVar8 = uVar5;
    if ((*(uint *)(param_1 + 0x498) & uVar18) != 0) {
      puVar7 = puVar4 + 0xe;
      uVar12 = (uint)CONCAT11(puVar4[6],puVar4[7]);
      uVar13 = (ulonglong)uVar12;
      if ((longlong)puVar10 - (longlong)puVar7 < (longlong)(ulonglong)(uVar12 * 6)) {
        uVar13 = ((longlong)puVar10 - (longlong)puVar7) / 6;
      }
      if (CONCAT11(puVar4[4],puVar4[5]) < 0x100) {
        uVar14 = param_2 << 0x10 | param_3;
        uVar12 = (uint)uVar13;
        if ((*(uint *)(param_1 + 0x49c) & uVar18) == 0) {
          while (uVar12 != 0) {
            if (CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]) == uVar14) {
              bVar1 = puVar7[4];
              bVar2 = puVar7[5];
              goto LAB_1805c78c1;
            }
            puVar7 = puVar7 + 6;
            uVar12 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar12;
          }
        }
        else {
          uVar9 = 0;
          if (uVar12 != 0) {
LAB_1805c77c0:
            uVar15 = (int)uVar13 + uVar9 >> 1;
            puVar11 = puVar7 + uVar15 * 6;
            uVar12 = CONCAT31(CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]),puVar11[3]);
            if (uVar12 != uVar14) break;
            bVar1 = puVar11[4];
            bVar2 = puVar11[5];
LAB_1805c78c1:
            uVar8 = (int)(short)((ushort)bVar1 << 8) | (uint)bVar2;
            if ((puVar4[5] & 8) == 0) {
              uVar8 = uVar5 + uVar8;
            }
          }
        }
      }
    }
LAB_1805c7811:
    uVar18 = uVar18 * 2;
    iVar16 = iVar16 + -1;
    puVar4 = puVar10;
    uVar5 = uVar8;
  } while( true );
  uVar13 = uVar13 & 0xffffffff;
  uVar6 = uVar15 + 1;
  if (uVar14 <= uVar12) {
    uVar13 = (ulonglong)uVar15;
    uVar6 = uVar9;
  }
  uVar9 = uVar6;
  if ((uint)uVar13 <= uVar9) goto LAB_1805c7811;
  goto LAB_1805c77c0;
}



