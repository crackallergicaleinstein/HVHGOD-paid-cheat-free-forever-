// FUN_1805c8fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8fb0 */

uint FUN_1805c8fb0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  
  uVar5 = *param_2;
  if (0xfffe < uVar5) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (uVar5 == *(uint *)(param_1 + 5)) {
      FUN_1805cd2c0();
      uVar13 = *(uint *)((longlong)param_1 + 0x2c);
      uVar5 = 0;
      if (uVar13 != 0) {
        *param_2 = *(uint *)(param_1 + 5);
        return uVar13;
      }
    }
    else {
      uVar5 = FUN_1805ccde0(param_1,param_2,1);
    }
    return uVar5;
  }
  lVar3 = param_1[3];
  uVar13 = 0;
  lVar4 = *param_1;
  puVar19 = (undefined1 *)((ulonglong)*(uint *)(lVar4 + 0x298) + *(longlong *)(lVar4 + 0x290));
  uVar5 = uVar5 + 1;
  uVar16 = (uint)(*(byte *)(lVar3 + 7) >> 1) | (uint)*(byte *)(lVar3 + 6) << 7;
  uVar11 = 0;
  if (uVar16 != 0) {
    uVar11 = uVar16 * 2;
    uVar15 = (ulonglong)uVar11;
    uVar9 = 0;
    if (uVar16 != 0) {
      puVar10 = (undefined1 *)(lVar3 + 0xd);
      puVar8 = (undefined1 *)(lVar3 + 0xe + uVar15 + (ulonglong)uVar11 * 2);
      do {
        puVar7 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        puVar2 = puVar8 + (ulonglong)uVar11 * -2 + 3;
        puVar8 = puVar8 + 2;
        uVar17 = (uint)CONCAT11(*puVar7,*puVar10);
        uVar6 = (uint)CONCAT11(puVar8[uVar15 * -2],*puVar2);
        uVar14 = uVar6;
        if (uVar6 <= uVar5) {
          uVar14 = uVar5;
        }
        uVar5 = uVar14;
        if (uVar5 <= uVar17) {
          uVar18 = (int)(short)((ushort)(byte)puVar8[-uVar15] << 8) | (uint)(byte)puVar8[1 - uVar15]
          ;
          uVar14 = (uint)CONCAT11(*puVar8,(puVar8 + (1 - uVar15))[uVar15]);
          do {
            uVar12 = uVar18;
            if (((uVar9 < uVar16 - 1) || (uVar6 != 0xffff)) || (uVar17 != 0xffff)) {
LAB_1805c915e:
              if (uVar14 == 0xffff) break;
              if (uVar14 == 0) goto LAB_1805c9132;
              puVar7 = puVar8 + (uVar14 + (uVar5 - uVar6) * 2);
              if (puVar19 < puVar7) break;
              uVar13 = 0;
              if ((CONCAT11(*puVar7,puVar7[1]) != 0) &&
                 (uVar13 = uVar18 + CONCAT11(*puVar7,puVar7[1]) & 0xffff,
                 *(uint *)(lVar4 + 0x10) <= uVar13)) {
                uVar13 = 0;
              }
LAB_1805c919e:
              if (uVar13 != 0) goto LAB_1805c91f5;
            }
            else {
              if (uVar14 != 0) {
                if (puVar8 + (ulonglong)uVar14 + 2 <= puVar19) goto LAB_1805c915e;
                uVar12 = 1;
              }
LAB_1805c9132:
              uVar1 = uVar12 + uVar5;
              uVar13 = uVar1 & 0xffff;
              if (uVar13 < *(uint *)(lVar4 + 0x10)) goto LAB_1805c919e;
              uVar13 = 0;
              if ((int)uVar1 < 0) {
                if ((int)(uVar12 + uVar17) < 0) goto LAB_1805c921f;
                uVar5 = -uVar12;
              }
              else {
                if (0xffff < (int)uVar1) break;
LAB_1805c921f:
                if ((int)(uVar12 + uVar17) < 0x10000) break;
                uVar5 = 0x10000 - uVar12;
              }
            }
            if (0xfffe < uVar5) goto LAB_1805c91f5;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= uVar17);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar16);
    }
LAB_1805c91f5:
    *param_2 = uVar5;
    uVar11 = uVar13;
  }
  return uVar11;
}



