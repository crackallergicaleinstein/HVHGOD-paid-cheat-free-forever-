// FUN_1805bf270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf270 */

undefined8 FUN_1805bf270(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  
  uVar13 = *param_1 - 1;
  if (*param_1 <= uVar13) {
    return 0;
  }
  do {
    uVar12 = (ulonglong)uVar13;
    uVar16 = uVar13 - 1;
    if (uVar16 < uVar13) {
      lVar5 = *(longlong *)(param_1 + 2);
      pbVar6 = *(byte **)(lVar5 + 8 + uVar12 * 0x18);
      uVar14 = *(uint *)(lVar5 + uVar12 * 0x18);
      do {
        uVar17 = (ulonglong)uVar16;
        pbVar15 = *(byte **)(lVar5 + 8 + uVar17 * 0x18);
        uVar4 = *(uint *)(lVar5 + uVar17 * 0x18);
        pbVar9 = pbVar6;
        if (uVar14 < uVar4) {
          uVar4 = uVar14;
        }
        for (; 7 < uVar4; uVar4 = uVar4 - 8) {
          if ((*pbVar9 & *pbVar15) != 0) goto LAB_1805bf32c;
          pbVar15 = pbVar15 + 1;
          pbVar9 = pbVar9 + 1;
        }
        if ((uVar4 != 0) && ((*pbVar9 & ~(byte)(0xff >> ((byte)uVar4 & 0x1f)) & *pbVar15) != 0)) {
LAB_1805bf32c:
          uVar10 = uVar17;
          if (uVar13 < uVar16) {
            uVar10 = uVar12;
            uVar12 = uVar17;
          }
          uVar16 = (uint)uVar12;
          if (((uint)uVar10 < uVar16) && (uVar16 < *param_1)) {
            puVar1 = (uint *)(lVar5 + uVar10 * 0x18);
            puVar2 = (undefined8 *)(lVar5 + uVar12 * 0x18);
            uVar14 = *(uint *)(lVar5 + uVar12 * 0x18);
            if (uVar14 != 0) {
              if (*puVar1 < uVar14) {
                uVar11 = FUN_1805bf090(puVar1,uVar14,param_2);
                if ((int)uVar11 != 0) {
                  return uVar11;
                }
                *puVar1 = uVar14;
              }
              pbVar6 = (byte *)puVar2[1];
              pbVar15 = *(byte **)(puVar1 + 2);
              for (uVar14 = uVar14 + 7 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                bVar3 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                *pbVar15 = *pbVar15 | bVar3;
                pbVar15 = pbVar15 + 1;
              }
            }
            *(undefined4 *)puVar2 = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            uVar12 = (ulonglong)(*param_1 + ~uVar16);
            if (*param_1 + ~uVar16 != 0) {
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              uVar11 = puVar2[2];
              FUN_18063aed0(puVar2,puVar2 + 3,uVar12 * 0x18);
              puVar2[uVar12 * 3] = uVar7;
              (puVar2 + uVar12 * 3)[1] = uVar8;
              puVar2[uVar12 * 3 + 2] = uVar11;
            }
            *param_1 = *param_1 - 1;
          }
          break;
        }
        uVar16 = uVar16 - 1;
      } while (uVar16 < uVar13);
    }
    uVar13 = uVar13 - 1;
    if (*param_1 <= uVar13) {
      return 0;
    }
  } while( true );
}



