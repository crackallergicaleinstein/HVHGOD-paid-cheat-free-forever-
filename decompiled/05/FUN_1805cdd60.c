// FUN_1805cdd60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cdd60 */

undefined8 FUN_1805cdd60(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar5 = **(ushort **)(param_1 + 0x18);
  uVar14 = (uint)uVar5;
  uVar15 = *(byte *)(param_1 + 0x22) * uVar6;
  if (((((int)param_4 < 0) || (puVar2[1] < uVar6 + param_4)) || (param_5 < 0)) ||
     ((*puVar2 < uVar14 + param_5 || (param_3 < param_2 + ((int)(uVar15 * uVar14 + 7) >> 3))))) {
    return 3;
  }
  if ((uVar15 == 0) || (uVar5 == 0)) {
    return 0;
  }
  uVar6 = puVar2[2];
  uVar8 = param_4 & 7;
  uVar7 = 0;
  uVar4 = 0;
  pbVar10 = (byte *)((longlong)(int)(uVar6 * param_5 + (param_4 >> 3)) + *(longlong *)(puVar2 + 4));
  uVar9 = uVar14;
  if (uVar5 != 0) {
    do {
      pbVar13 = pbVar10;
      uVar12 = uVar15;
      if (uVar8 != 0) {
        uVar12 = 8 - uVar8;
        if ((int)uVar15 < (int)(8 - uVar8)) {
          uVar12 = uVar15;
        }
        if (uVar9 == uVar14) {
          uVar4 = (ushort)*param_2;
          param_2 = param_2 + 1;
          uVar7 = uVar8;
        }
        else if ((int)uVar7 < (int)uVar12) {
          if (param_2 < param_3) {
            uVar4 = uVar4 | *param_2;
            param_2 = param_2 + 1;
          }
          uVar7 = uVar7 + (8 - uVar12);
        }
        else {
          uVar4 = uVar4 >> 8;
          uVar7 = uVar7 - uVar12;
        }
        pbVar13 = pbVar10 + 1;
        uVar5 = uVar4 >> ((byte)uVar7 & 0x1f);
        uVar4 = uVar4 << 8;
        *pbVar10 = *pbVar10 |
                   ~(-1 << ((byte)uVar12 & 0x1f)) << (((char)-uVar12 - (char)uVar8) + 8U & 0x1f) &
                   (byte)uVar5;
        uVar12 = -uVar12 + uVar15;
      }
      bVar3 = (byte)uVar7;
      if (7 < (int)uVar12) {
        uVar11 = (ulonglong)(uVar12 >> 3);
        uVar12 = uVar12 + (uVar12 >> 3) * -8;
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar5 = bVar1 | uVar4;
          uVar4 = (ushort)bVar1 << 8;
          *pbVar13 = *pbVar13 | (byte)(uVar5 >> (bVar3 & 0x1f));
          pbVar13 = pbVar13 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (0 < (int)uVar12) {
        if ((int)uVar7 < (int)uVar12) {
          if (param_2 < param_3) {
            uVar4 = uVar4 | *param_2;
            param_2 = param_2 + 1;
          }
          *pbVar13 = *pbVar13 |
                     (byte)(uVar4 >> (bVar3 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
          uVar7 = uVar7 + (8 - uVar12);
          uVar4 = uVar4 << 8;
        }
        else {
          *pbVar13 = *pbVar13 |
                     (byte)(uVar4 >> (bVar3 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
          uVar7 = uVar7 - uVar12;
        }
      }
      uVar9 = uVar9 - 1;
      pbVar10 = pbVar10 + (int)uVar6;
    } while (0 < (int)uVar9);
  }
  return 0;
}



