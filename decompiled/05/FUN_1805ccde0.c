// FUN_1805ccde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ccde0 */

uint FUN_1805ccde0(longlong *param_1,uint *param_2,byte param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  
  lVar20 = param_1[3];
  pbVar5 = (byte *)((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290));
  uVar8 = (uint)param_3 + *param_2;
  uVar19 = (uint)(*(byte *)(lVar20 + 7) >> 1) | (uint)*(byte *)(lVar20 + 6) << 7;
  if (uVar19 == 0) {
    return 0;
  }
  uVar10 = uVar19 * 2;
  uVar12 = 0;
  uVar11 = (ulonglong)(uVar10 + 2);
  uVar16 = uVar19;
  do {
    uVar15 = uVar16 + uVar12 >> 1;
    puVar6 = (undefined1 *)((ulonglong)(uVar15 * 2) + 0xe + lVar20);
    uVar9 = (uint)CONCAT11(puVar6[uVar11],puVar6[uVar11 + 1]);
    uVar17 = (uint)CONCAT11(*puVar6,puVar6[1]);
    if (uVar8 < uVar9) {
      uVar16 = uVar15;
    }
    else {
      if (uVar8 <= uVar17) {
        pbVar2 = puVar6 + uVar10 + uVar11;
        pbVar3 = pbVar2 + uVar10;
        uVar10 = (int)(short)((ushort)*pbVar2 << 8) | (uint)pbVar2[1];
        uVar16 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
        if ((((uVar19 - 1 <= uVar15) && (uVar9 == 0xffff)) && (uVar17 == 0xffff)) &&
           ((uVar16 != 0 && (pbVar5 < pbVar3 + (ulonglong)uVar16 + 2)))) {
          uVar10 = 1;
          uVar16 = 0;
        }
        if ((*(byte *)(param_1 + 4) & 2) != 0) {
          uVar12 = uVar15;
          if (uVar16 == 0xffff) {
            uVar12 = uVar15 + 1;
          }
          uVar13 = uVar12;
          uVar14 = uVar15;
          if (uVar15 == 0) goto LAB_1805cd00f;
          goto LAB_1805ccf80;
        }
        if (uVar16 != 0xffff) goto LAB_1805cd1bd;
        break;
      }
      uVar12 = uVar15 + 1;
    }
  } while (uVar12 < uVar16);
LAB_1805ccea9:
  uVar12 = 0;
  goto LAB_1805cceb1;
  while( true ) {
    puVar6 = puVar6 + uVar11;
    lVar20 = param_1[3];
    uVar9 = (uint)CONCAT11(*puVar6,puVar6[1]);
    pbVar2 = puVar6 + uVar19 * 2;
    pbVar3 = pbVar2 + uVar19 * 2;
    uVar10 = (int)(short)((ushort)*pbVar2 << 8) | (uint)pbVar2[1];
    uVar16 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
    uVar12 = uVar18;
    if (uVar16 == 0xffff) {
      uVar12 = uVar13;
    }
    uVar17 = uVar4;
    uVar13 = uVar12;
    uVar14 = uVar18;
    if (uVar18 == 0) break;
LAB_1805ccf80:
    uVar18 = uVar14 - 1;
    puVar6 = (undefined1 *)(lVar20 + 0xe + (ulonglong)(uVar18 * 2));
    uVar4 = (uint)CONCAT11(*puVar6,puVar6[1]);
    uVar12 = uVar13;
    if (uVar4 < uVar8) break;
  }
LAB_1805cd00f:
  uVar13 = uVar15 + 1;
  if (uVar12 == uVar13) {
    if (uVar14 != uVar15) {
      uVar11 = (ulonglong)(uVar19 * 2);
      puVar6 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar15 * 2));
      puVar7 = puVar6 + (uVar19 * 2 + 2);
      uVar17 = (uint)CONCAT11(*puVar6,puVar6[1]);
      uVar9 = (uint)CONCAT11(*puVar7,puVar7[1]);
      pbVar3 = puVar7 + uVar11 * 2;
      uVar10 = (int)(short)((ushort)(byte)puVar7[uVar11] << 8) | (uint)(byte)puVar7[uVar11 + 1];
      uVar16 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
    }
    uVar12 = uVar15;
    if (uVar13 < uVar19) {
      uVar14 = uVar19 * 2;
      uVar11 = (ulonglong)(uVar14 + 2);
      do {
        puVar6 = (undefined1 *)((ulonglong)(uVar13 * 2) + 0xe + param_1[3]);
        pbVar3 = puVar6 + uVar11;
        uVar4 = (uint)CONCAT11(puVar6[uVar11],puVar6[uVar11 + 1]);
        if (uVar8 < uVar4) break;
        pbVar2 = pbVar3 + uVar14;
        pbVar3 = pbVar2 + uVar14;
        uVar10 = (int)(short)((ushort)*pbVar2 << 8) | (uint)pbVar2[1];
        uVar16 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
        uVar17 = uVar13;
        if (uVar16 == 0xffff) {
          uVar17 = uVar12;
        }
        uVar12 = uVar17;
        uVar13 = uVar13 + 1;
        uVar17 = (uint)CONCAT11(*puVar6,puVar6[1]);
        uVar9 = uVar4;
      } while (uVar13 < uVar19);
    }
    uVar14 = uVar13 - 1;
    if (uVar12 == uVar15) {
      uVar15 = uVar14;
      goto LAB_1805ccea9;
    }
  }
  uVar15 = uVar12;
  if (uVar15 != uVar14) {
    uVar11 = (ulonglong)(uVar19 * 2);
    puVar6 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar15 * 2));
    puVar7 = puVar6 + (uVar19 * 2 + 2);
    uVar17 = (uint)CONCAT11(*puVar6,puVar6[1]);
    uVar9 = (uint)CONCAT11(*puVar7,puVar7[1]);
    pbVar3 = puVar7 + uVar11 * 2;
    uVar10 = (int)(short)((ushort)(byte)puVar7[uVar11] << 8) | (uint)(byte)puVar7[uVar11 + 1];
    uVar16 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
  }
LAB_1805cd1bd:
  uVar12 = 0;
  if (uVar16 == 0) {
    uVar16 = uVar10 + uVar8;
    uVar12 = uVar16 & 0xffff;
    if (param_3 == 0) {
      return uVar12;
    }
    if (*(uint *)(*param_1 + 0x10) <= uVar12) {
      uVar12 = 0;
      if ((int)uVar16 < 0) {
        if (-1 < (int)(uVar10 + uVar17)) {
          uVar8 = -uVar10;
          goto LAB_1805cceb9;
        }
      }
      else if (0xffff < (int)uVar16) goto LAB_1805cceb9;
      if (0xffff < (int)(uVar10 + uVar17)) {
        uVar8 = 0x10000 - uVar10;
      }
    }
    goto LAB_1805cceb9;
  }
  pbVar3 = pbVar3 + (uVar16 + (uVar8 - uVar9) * 2);
  if ((param_3 != 0) && (pbVar5 < pbVar3)) goto LAB_1805cceb9;
  uVar12 = 0;
  if ((CONCAT11(*pbVar3,pbVar3[1]) != 0) &&
     (uVar12 = uVar10 + CONCAT11(*pbVar3,pbVar3[1]) & 0xffff, *(uint *)(*param_1 + 0x10) <= uVar12))
  {
    uVar12 = 0;
  }
LAB_1805cceb1:
  if (param_3 == 0) {
    return uVar12;
  }
LAB_1805cceb9:
  if ((uVar17 < uVar8) && (uVar15 = uVar15 + 1, uVar15 == uVar19)) {
    return 0;
  }
  iVar1 = FUN_1805cd3f0(param_1,uVar15);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 5) = uVar8;
    if (uVar12 != 0) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar12;
      *param_2 = uVar8;
      return uVar12;
    }
    FUN_1805cd2c0(param_1);
    uVar19 = *(uint *)((longlong)param_1 + 0x2c);
    if (uVar19 != 0) {
      *param_2 = *(uint *)(param_1 + 5);
    }
  }
  else {
    uVar19 = 0;
    if (uVar12 != 0) {
      *param_2 = uVar8;
      return uVar12;
    }
  }
  return uVar19;
}



