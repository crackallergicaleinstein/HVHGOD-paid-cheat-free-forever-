// FUN_1804937a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804937a0 */

void FUN_1804937a0(int *param_1,int *param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar6;
  longlong lVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  
  if (param_5 < param_4) {
    lVar5 = param_5 >> 1;
    uVar8 = (longlong)param_2 - (longlong)param_1 >> 2;
    piVar15 = param_1;
    if (0 < (longlong)uVar8) {
      puVar6 = *(undefined8 **)(*param_8 + (longlong)param_2[lVar5] * 8);
      do {
        uVar7 = uVar8 >> 1;
        pbVar2 = *(byte **)(*param_8 + (longlong)piVar15[uVar7] * 8);
        if (0xf < *(ulonglong *)(pbVar2 + 0x18)) {
          pbVar2 = *(byte **)pbVar2;
        }
        puVar9 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar9 = (undefined8 *)*puVar6;
        }
        lVar13 = (longlong)puVar9 - (longlong)pbVar2;
        while( true ) {
          bVar4 = *pbVar2;
          bVar1 = pbVar2[lVar13];
          bVar3 = bVar4 & 0xdf;
          if (0x19 < (byte)(bVar4 + 0x9f)) {
            bVar3 = bVar4;
          }
          bVar4 = bVar1 & 0xdf;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            bVar4 = bVar1;
          }
          iVar11 = (int)(char)bVar4 - (int)(char)bVar3;
          if ((iVar11 != 0) || (bVar1 == 0)) break;
          pbVar2 = pbVar2 + 1;
        }
        if ((int)param_8[0x28] == 1) {
          bVar10 = SUB41((uint)iVar11 >> 0x1f,0);
        }
        else {
          bVar10 = 0 < iVar11;
        }
        if (bVar10 == false) {
          piVar15 = piVar15 + uVar7 + 1;
          uVar7 = uVar8 + (-1 - uVar7);
        }
        uVar8 = uVar7;
      } while (0 < (longlong)uVar7);
    }
    lVar13 = (longlong)piVar15 - (longlong)param_1 >> 2;
    piVar14 = param_2 + lVar5;
  }
  else {
    lVar13 = param_4 >> 1;
    uVar8 = param_3 - (longlong)param_2 >> 2;
    piVar15 = param_1 + lVar13;
    piVar14 = param_2;
    if (0 < (longlong)uVar8) {
      pbVar2 = *(byte **)(*param_8 + (longlong)*piVar15 * 8);
      do {
        uVar7 = uVar8 >> 1;
        pbVar12 = pbVar2;
        if (0xf < *(ulonglong *)(pbVar2 + 0x18)) {
          pbVar12 = *(byte **)pbVar2;
        }
        puVar6 = *(undefined8 **)(*param_8 + (longlong)piVar14[uVar7] * 8);
        if (0xf < (ulonglong)puVar6[3]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        lVar5 = (longlong)puVar6 - (longlong)pbVar12;
        while( true ) {
          bVar4 = *pbVar12;
          bVar1 = pbVar12[lVar5];
          bVar3 = bVar4 & 0xdf;
          if (0x19 < (byte)(bVar4 + 0x9f)) {
            bVar3 = bVar4;
          }
          bVar4 = bVar1 & 0xdf;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            bVar4 = bVar1;
          }
          iVar11 = (int)(char)bVar4 - (int)(char)bVar3;
          if ((iVar11 != 0) || (bVar1 == 0)) break;
          pbVar12 = pbVar12 + 1;
        }
        if ((int)param_8[0x28] == 1) {
          bVar10 = SUB41((uint)iVar11 >> 0x1f,0);
        }
        else {
          bVar10 = 0 < iVar11;
        }
        if (bVar10 != false) {
          piVar14 = piVar14 + uVar7 + 1;
          uVar7 = uVar8 + (-1 - uVar7);
        }
        uVar8 = uVar7;
      } while (0 < (longlong)uVar7);
    }
    lVar5 = (longlong)piVar14 - (longlong)param_2 >> 2;
  }
  FUN_180493aa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar15,piVar14,
                lVar13,lVar5);
  return;
}



