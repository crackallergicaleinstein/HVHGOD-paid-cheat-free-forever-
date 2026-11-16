// FUN_1805e97f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e97f0 */

ulonglong FUN_1805e97f0(ulonglong *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return 0xffffffffffffffb8;
  }
  param_1[3] = (ulonglong)param_2;
  if (param_3 < 8) {
    param_1[2] = (ulonglong)param_2;
    uVar3 = (ulonglong)*param_2;
    *param_1 = uVar3;
    switch(param_3) {
    case 7:
      uVar3 = uVar3 + ((ulonglong)param_2[6] << 0x30);
      *param_1 = uVar3;
    case 6:
      uVar3 = uVar3 + ((ulonglong)param_2[5] << 0x28);
      *param_1 = uVar3;
    case 5:
      uVar3 = uVar3 + ((ulonglong)param_2[4] << 0x20);
      *param_1 = uVar3;
    case 4:
      uVar3 = uVar3 + (ulonglong)param_2[3] * 0x1000000;
      *param_1 = uVar3;
    case 3:
      uVar3 = uVar3 + (ulonglong)param_2[2] * 0x10000;
      *param_1 = uVar3;
    case 2:
      *param_1 = (ulonglong)param_2[1] * 0x100 + uVar3;
    }
    bVar1 = param_2[param_3 - 1];
    if (bVar1 != 0) {
      iVar2 = 0x1f;
      if (bVar1 != 0) {
        for (; bVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0;
      if (bVar1 != 0) {
        iVar4 = iVar2;
      }
      *(int *)(param_1 + 1) = 8 - iVar4;
      *(int *)(param_1 + 1) = (8 - iVar4) + (8 - (int)param_3) * 8;
      return param_3;
    }
  }
  else {
    param_1[2] = (ulonglong)(param_2 + (param_3 - 8));
    *param_1 = *(ulonglong *)(param_2 + (param_3 - 8));
    bVar1 = param_2[param_3 - 1];
    if (bVar1 != 0) {
      iVar2 = 0x1f;
      if (bVar1 != 0) {
        for (; bVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0;
      if (bVar1 != 0) {
        iVar4 = iVar2;
      }
      *(int *)(param_1 + 1) = 8 - iVar4;
      return param_3;
    }
  }
  return 0xffffffffffffffff;
}



