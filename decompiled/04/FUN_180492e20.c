// FUN_180492e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180492e20 */

void FUN_180492e20(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar8;
  longlong lVar7;
  undefined8 *puVar10;
  longlong lVar9;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  iVar2 = *param_2;
  lVar7 = *param_8;
  puVar10 = *(undefined8 **)(lVar7 + (longlong)iVar2 * 8);
  while( true ) {
    iVar3 = *param_1;
    pbVar4 = *(byte **)(lVar7 + (longlong)iVar3 * 8);
    if (0xf < *(ulonglong *)(pbVar4 + 0x18)) {
      pbVar4 = *(byte **)pbVar4;
    }
    puVar8 = puVar10;
    if (0xf < (ulonglong)puVar10[3]) {
      puVar8 = (undefined8 *)*puVar10;
    }
    lVar7 = (longlong)puVar8 - (longlong)pbVar4;
    while( true ) {
      bVar13 = *pbVar4;
      bVar1 = pbVar4[lVar7];
      bVar12 = bVar13 & 0xdf;
      if (0x19 < (byte)(bVar13 + 0x9f)) {
        bVar12 = bVar13;
      }
      bVar13 = bVar1 & 0xdf;
      if (0x19 < (byte)(bVar1 + 0x9f)) {
        bVar13 = bVar1;
      }
      iVar6 = (int)(char)bVar13 - (int)(char)bVar12;
      if ((iVar6 != 0) || (bVar1 == 0)) break;
      pbVar4 = pbVar4 + 1;
    }
    if ((int)param_8[0x28] == 1) {
      bVar5 = SUB41((uint)iVar6 >> 0x1f,0);
    }
    else {
      bVar5 = 0 < iVar6;
    }
    if (bVar5 != false) break;
    lVar7 = *param_8;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  do {
    lVar7 = param_5;
    piVar11 = param_3;
    param_3 = piVar11 + -1;
    if (param_2 == param_3) {
      FUN_18063aed0((longlong)piVar11 - ((longlong)param_2 - (longlong)param_1),param_1,
                    (longlong)param_2 - (longlong)param_1);
      *param_1 = iVar2;
      return;
    }
    pbVar4 = *(byte **)(*param_8 + (longlong)param_2[-1] * 8);
    if (0xf < *(ulonglong *)(pbVar4 + 0x18)) {
      pbVar4 = *(byte **)pbVar4;
    }
    puVar10 = *(undefined8 **)(*param_8 + (longlong)*param_3 * 8);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    lVar9 = (longlong)puVar10 - (longlong)pbVar4;
    while( true ) {
      bVar13 = *pbVar4;
      bVar1 = pbVar4[lVar9];
      bVar12 = bVar13 & 0xdf;
      if (0x19 < (byte)(bVar13 + 0x9f)) {
        bVar12 = bVar13;
      }
      bVar13 = bVar1 & 0xdf;
      if (0x19 < (byte)(bVar1 + 0x9f)) {
        bVar13 = bVar1;
      }
      iVar6 = (int)(char)bVar13 - (int)(char)bVar12;
      if ((iVar6 != 0) || (bVar1 == 0)) break;
      pbVar4 = pbVar4 + 1;
    }
    if ((int)param_8[0x28] == 1) {
      bVar5 = SUB41((uint)iVar6 >> 0x1f,0);
    }
    else {
      bVar5 = 0 < iVar6;
    }
    param_5 = lVar7 + -1;
  } while (bVar5 == false);
  if (param_4 == 1) {
    FUN_18063aed0(param_1,param_2,(longlong)piVar11 - (longlong)param_2);
    *(int *)(((longlong)piVar11 - (longlong)param_2) + (longlong)param_1) = iVar3;
  }
  else if ((lVar7 < param_4) || (param_7 < param_4)) {
    if (param_7 < lVar7) {
      FUN_1804937a0(param_1,param_2,piVar11,param_4,lVar7,param_6,param_7,param_8);
    }
    else {
      FUN_180493630(param_1,param_2,piVar11,param_6,param_8);
    }
  }
  else {
    FUN_1804934d0(param_1,param_2,piVar11,param_6,param_8);
  }
  return;
}



