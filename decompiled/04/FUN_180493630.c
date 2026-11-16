// FUN_180493630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493630 */

void FUN_180493630(int *param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar10;
  longlong lVar9;
  byte bVar11;
  byte bVar12;
  int *piVar13;
  int *piVar14;
  
  FUN_18063aed0(param_4,param_2,param_3 - param_2);
  piVar14 = (int *)((longlong)param_4 + (param_3 - param_2) + -4);
  piVar8 = (int *)(param_2 + -8);
  *(int *)(param_3 + -4) = *(int *)(param_2 + -4);
  piVar4 = (int *)(param_3 + -4);
  do {
    while( true ) {
      piVar13 = piVar4;
      pbVar5 = *(byte **)(*param_5 + (longlong)*piVar8 * 8);
      if (0xf < *(ulonglong *)(pbVar5 + 0x18)) {
        pbVar5 = *(byte **)pbVar5;
      }
      iVar3 = *piVar14;
      puVar10 = *(undefined8 **)(*param_5 + (longlong)iVar3 * 8);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      lVar9 = (longlong)puVar10 - (longlong)pbVar5;
      while( true ) {
        bVar1 = pbVar5[lVar9];
        bVar2 = *pbVar5;
        bVar11 = bVar1 & 0xdf;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar11 = bVar1;
        }
        bVar12 = bVar2 & 0xdf;
        if (0x19 < (byte)(bVar2 + 0x9f)) {
          bVar12 = bVar2;
        }
        iVar7 = (int)(char)bVar11 - (int)(char)bVar12;
        if ((iVar7 != 0) || (bVar1 == 0)) break;
        pbVar5 = pbVar5 + 1;
      }
      if ((int)param_5[0x28] == 1) {
        bVar6 = SUB41((uint)iVar7 >> 0x1f,0);
      }
      else {
        bVar6 = 0 < iVar7;
      }
      piVar4 = piVar13 + -1;
      if (bVar6 == false) break;
      *piVar4 = *piVar8;
      if (param_1 == piVar8) {
        piVar13[-2] = *piVar14;
        FUN_18063aed0((longlong)(piVar13 + -2) - ((longlong)piVar14 - (longlong)param_4),param_4,
                      (longlong)piVar14 - (longlong)param_4);
        return;
      }
      piVar8 = piVar8 + -1;
    }
    piVar14 = piVar14 + -1;
    *piVar4 = iVar3;
  } while (param_4 != piVar14);
  piVar13[-2] = *piVar8;
  FUN_18063aed0((longlong)(piVar13 + -2) - ((longlong)piVar8 - (longlong)param_1),param_1,
                (longlong)piVar8 - (longlong)param_1);
  *param_1 = *param_4;
  return;
}



