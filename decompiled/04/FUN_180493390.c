// FUN_180493390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493390 */

longlong FUN_180493390(int *param_1,int *param_2,int *param_3,int *param_4,longlong *param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar10;
  longlong lVar9;
  byte bVar11;
  byte bVar12;
  int *piVar13;
  
  piVar13 = param_2;
  do {
    iVar4 = *param_1;
    pbVar6 = *(byte **)(*param_5 + (longlong)iVar4 * 8);
    if (0xf < *(ulonglong *)(pbVar6 + 0x18)) {
      pbVar6 = *(byte **)pbVar6;
    }
    iVar5 = *piVar13;
    puVar10 = *(undefined8 **)(*param_5 + (longlong)iVar5 * 8);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    lVar9 = (longlong)puVar10 - (longlong)pbVar6;
    while( true ) {
      bVar2 = pbVar6[lVar9];
      bVar3 = *pbVar6;
      bVar11 = bVar2 & 0xdf;
      if (0x19 < (byte)(bVar2 + 0x9f)) {
        bVar11 = bVar2;
      }
      bVar12 = bVar3 & 0xdf;
      if (0x19 < (byte)(bVar3 + 0x9f)) {
        bVar12 = bVar3;
      }
      iVar8 = (int)(char)bVar11 - (int)(char)bVar12;
      if ((iVar8 != 0) || (bVar2 == 0)) break;
      pbVar6 = pbVar6 + 1;
    }
    if ((int)param_5[0x28] == 1) {
      bVar7 = SUB41((uint)iVar8 >> 0x1f,0);
    }
    else {
      bVar7 = 0 < iVar8;
    }
    piVar1 = param_4 + 1;
    if (bVar7 == false) {
      param_1 = param_1 + 1;
      *param_4 = iVar4;
      if (param_1 == param_2) {
        lVar9 = (longlong)param_3 - (longlong)piVar13;
        FUN_18063aed0(piVar1,piVar13,lVar9);
        goto LAB_1804934af;
      }
    }
    else {
      piVar13 = piVar13 + 1;
      *param_4 = iVar5;
      if (piVar13 == param_3) {
        lVar9 = (longlong)param_2 - (longlong)param_1;
        FUN_18063aed0(piVar1,param_1,lVar9);
LAB_1804934af:
        return (longlong)piVar1 + lVar9;
      }
    }
    param_4 = piVar1;
  } while( true );
}



