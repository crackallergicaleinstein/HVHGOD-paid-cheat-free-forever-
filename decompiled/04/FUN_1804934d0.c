// FUN_1804934d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804934d0 */

void FUN_1804934d0(int *param_1,int *param_2,int *param_3,int *param_4,longlong *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar11;
  longlong lVar10;
  byte bVar12;
  byte bVar13;
  int *piVar14;
  
  lVar9 = (longlong)param_2 - (longlong)param_1;
  FUN_18063aed0(param_4,param_1,lVar9);
  *param_1 = *param_2;
  param_2 = param_2 + 1;
  piVar14 = param_4;
  do {
    while( true ) {
      piVar4 = param_1;
      param_1 = piVar4 + 1;
      iVar2 = *piVar14;
      pbVar5 = *(byte **)(*param_5 + (longlong)iVar2 * 8);
      if (0xf < *(ulonglong *)(pbVar5 + 0x18)) {
        pbVar5 = *(byte **)pbVar5;
      }
      iVar3 = *param_2;
      puVar11 = *(undefined8 **)(*param_5 + (longlong)iVar3 * 8);
      if (0xf < (ulonglong)puVar11[3]) {
        puVar11 = (undefined8 *)*puVar11;
      }
      lVar10 = (longlong)puVar11 - (longlong)pbVar5;
      while( true ) {
        bVar13 = *pbVar5;
        bVar1 = pbVar5[lVar10];
        bVar12 = bVar13 & 0xdf;
        if (0x19 < (byte)(bVar13 + 0x9f)) {
          bVar12 = bVar13;
        }
        bVar13 = bVar1 & 0xdf;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar13 = bVar1;
        }
        iVar7 = (int)(char)bVar13 - (int)(char)bVar12;
        if ((iVar7 != 0) || (bVar1 == 0)) break;
        pbVar5 = pbVar5 + 1;
      }
      if ((int)param_5[0x28] == 1) {
        bVar6 = SUB41((uint)iVar7 >> 0x1f,0);
      }
      else {
        bVar6 = 0 < iVar7;
      }
      if (bVar6 == false) break;
      param_2 = param_2 + 1;
      *param_1 = iVar3;
      if (param_2 == param_3) {
        FUN_18063aed0(piVar4 + 2,piVar14,(longlong)param_4 + (lVar9 - (longlong)piVar14));
        return;
      }
    }
    piVar14 = piVar14 + 1;
    piVar8 = (int *)((longlong)param_4 + lVar9 + -4);
    *param_1 = iVar2;
  } while (piVar14 != piVar8);
  iVar2 = *piVar8;
  FUN_18063aed0(piVar4 + 2,param_2,(longlong)param_3 - (longlong)param_2);
  *(int *)((longlong)piVar4 + ((longlong)param_3 - (longlong)param_2) + 8) = iVar2;
  return;
}



