// FUN_1805ce370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ce370 */

undefined8 FUN_1805ce370(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  sbyte sVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar2 = puVar3[2];
  if (*(longlong *)(puVar3 + 4) == 0) {
    return 0;
  }
  uVar8 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar11 = (uint)**(ushort **)(param_1 + 0x18);
  uVar7 = *(byte *)(param_1 + 0x22) * uVar8;
  if (((((int)param_4 < 0) || (puVar3[1] < uVar8 + param_4)) || (param_5 < 0)) ||
     ((*puVar3 < uVar11 + param_5 || (param_3 < param_2 + (int)((uVar7 + 7 >> 3) * uVar11))))) {
    return 3;
  }
  pbVar6 = (byte *)(*(longlong *)(puVar3 + 4) + (longlong)(int)(uVar2 * param_5 + (param_4 >> 3)));
  param_4 = param_4 & 7;
  if (param_4 == 0) {
    if (uVar11 != 0) {
      do {
        pbVar5 = pbVar6;
        uVar8 = uVar7;
        if (7 < uVar7) {
          uVar10 = (ulonglong)(uVar7 >> 3);
          uVar8 = uVar7 + (uVar7 >> 3) * -8;
          do {
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            *pbVar5 = *pbVar5 | bVar1;
            pbVar5 = pbVar5 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (0 < (int)uVar8) {
          *pbVar5 = *pbVar5 | (byte)(0xff00 >> ((byte)uVar8 & 0x1f)) & *param_2;
          param_2 = param_2 + 1;
        }
        uVar11 = uVar11 - 1;
        pbVar6 = pbVar6 + (int)uVar2;
      } while (0 < (int)uVar11);
      return 0;
    }
  }
  else if (uVar11 != 0) {
    do {
      uVar9 = 0;
      sVar4 = (sbyte)param_4;
      pbVar5 = pbVar6;
      uVar8 = uVar7;
      if (7 < uVar7) {
        uVar10 = (ulonglong)(uVar7 >> 3);
        uVar8 = uVar7 + (uVar7 >> 3) * -8;
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          *pbVar5 = *pbVar5 | (byte)((bVar1 | uVar9) >> sVar4);
          pbVar5 = pbVar5 + 1;
          uVar9 = (bVar1 | uVar9) << 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (0 < (int)uVar8) {
        uVar9 = uVar9 | 0xff00U >> ((byte)uVar8 & 0x1f) & (uint)*param_2;
        param_2 = param_2 + 1;
      }
      *pbVar5 = *pbVar5 | (byte)(uVar9 >> sVar4);
      if (8 < (int)(uVar8 + param_4)) {
        pbVar5[1] = pbVar5[1] | (byte)((uVar9 << 8) >> sVar4);
      }
      uVar11 = uVar11 - 1;
      pbVar6 = pbVar6 + (int)uVar2;
    } while (0 < (int)uVar11);
  }
  return 0;
}



