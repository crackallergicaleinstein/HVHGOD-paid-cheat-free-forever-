// FUN_180470c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470c10 */

undefined8 FUN_180470c10(ulonglong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  
  if (param_2 != 0) {
    pbVar3 = (byte *)param_1[1];
    pbVar4 = (byte *)*param_1;
    if (pbVar4 < pbVar3) {
      bVar1 = *pbVar4;
      pbVar8 = pbVar4 + 1;
      *param_1 = (ulonglong)pbVar8;
      if (pbVar8 < pbVar3) {
        bVar2 = *pbVar8;
        *param_1 = (ulonglong)(pbVar4 + 2);
        if ((((pbVar4 + 2 < pbVar3) &&
             (uVar9 = (uint)CONCAT11(bVar1,bVar2), uVar9 == (uVar9 / 0x1f) * 0x1f)) &&
            ((bVar2 & 0x20) == 0)) && ((bVar1 & 0xf) == 8)) goto LAB_180470c9c;
      }
    }
    return 0;
  }
LAB_180470c9c:
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  do {
    if ((int)param_1[2] < 1) {
      FUN_180470340(param_1);
    }
    uVar5 = param_1[3];
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    *(uint *)(param_1 + 3) = (uint)uVar5 >> 1;
    if ((int)param_1[2] < 2) {
      FUN_180470340(param_1);
    }
    uVar6 = param_1[3];
    *(int *)(param_1 + 2) = (int)param_1[2] + -2;
    *(uint *)(param_1 + 3) = (uint)uVar6 >> 2;
    uVar9 = (uint)uVar6 & 3;
    if (uVar9 == 0) {
      iVar7 = FUN_180470ad0(param_1);
    }
    else {
      if (uVar9 == 3) {
        return 0;
      }
      if (uVar9 == 1) {
        iVar7 = FUN_180470100((longlong)param_1 + 0x3c,&DAT_18077f3c0,0x120);
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = FUN_180470100(param_1 + 0x104,&DAT_18077f678,0x20);
      }
      else {
        iVar7 = FUN_1804707d0(param_1);
      }
      if (iVar7 == 0) {
        return 0;
      }
      iVar7 = FUN_180470520(param_1);
    }
    if (iVar7 == 0) {
      return 0;
    }
  } while (((uint)uVar5 & 1) == 0);
  return 1;
}



