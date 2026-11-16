// FUN_1804931c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804931c0 */

void FUN_1804931c0(int *param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
                  longlong *param_6)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar13;
  longlong lVar12;
  bool bVar14;
  int iVar15;
  
  piVar11 = param_1;
  if (param_5 <= param_4) {
LAB_180493370:
    FUN_18063aed0(param_3,piVar11,param_2 - (longlong)piVar11);
    return;
  }
LAB_180493220:
  param_5 = param_5 - param_4;
  piVar2 = param_1 + param_4;
  lVar12 = param_4;
  if (param_5 < param_4) {
    lVar12 = param_5;
  }
  param_5 = param_5 - lVar12;
  piVar11 = piVar2 + lVar12;
  piVar10 = piVar2;
  do {
    iVar5 = *param_1;
    pbVar7 = *(byte **)(*param_6 + (longlong)iVar5 * 8);
    if (0xf < *(ulonglong *)(pbVar7 + 0x18)) {
      pbVar7 = *(byte **)pbVar7;
    }
    iVar6 = *piVar10;
    puVar13 = *(undefined8 **)(*param_6 + (longlong)iVar6 * 8);
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    lVar12 = (longlong)puVar13 - (longlong)pbVar7;
    while( true ) {
      bVar3 = pbVar7[lVar12];
      bVar4 = *pbVar7;
      bVar8 = bVar3 & 0xdf;
      if (0x19 < (byte)(bVar3 + 0x9f)) {
        bVar8 = bVar3;
      }
      bVar9 = bVar4 & 0xdf;
      if (0x19 < (byte)(bVar4 + 0x9f)) {
        bVar9 = bVar4;
      }
      iVar15 = (int)(char)bVar8 - (int)(char)bVar9;
      if ((iVar15 != 0) || (bVar3 == 0)) break;
      pbVar7 = pbVar7 + 1;
    }
    if ((int)param_6[0x28] == 1) {
      bVar14 = SUB41((uint)iVar15 >> 0x1f,0);
    }
    else {
      bVar14 = 0 < iVar15;
    }
    piVar1 = param_3 + 1;
    if (bVar14 == false) {
      param_1 = param_1 + 1;
      *param_3 = iVar5;
      if (param_1 == piVar2) {
        lVar12 = (longlong)piVar11 - (longlong)piVar10;
        goto LAB_180493323;
      }
    }
    else {
      piVar10 = piVar10 + 1;
      *param_3 = iVar6;
      if (piVar10 == piVar11) break;
    }
    param_3 = piVar1;
  } while( true );
  lVar12 = (longlong)piVar2 - (longlong)param_1;
  piVar10 = param_1;
LAB_180493323:
  FUN_18063aed0(piVar1,piVar10,lVar12);
  param_3 = (int *)((longlong)piVar1 + lVar12);
  param_1 = piVar11;
  if (param_5 <= param_4) goto LAB_180493370;
  goto LAB_180493220;
}



