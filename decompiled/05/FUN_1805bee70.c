// FUN_1805bee70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bee70 */

void FUN_1805bee70(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_48 [4];
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    uVar4 = 1;
    if (param_2 < 2) {
      uVar4 = (ulonglong)param_2;
    }
    if (*(int *)(param_1 + 2) == 1) {
      uVar6 = 0;
      do {
        iVar2 = FUN_1805778f0(param_3[1]);
        iVar3 = FUN_1805778f0(*param_3);
        iVar2 = FUN_1805be250(param_1 + uVar4 * 6 + 3,iVar3 >> 0x10,iVar2 >> 0x10,uVar1,
                              local_48 + uVar6);
        if (iVar2 != 0) goto LAB_1805bef36;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        param_3 = param_3 + 2;
      } while ((int)uVar5 < 3);
      iVar2 = FUN_1805be0a0(param_1 + uVar4 * 6 + 3,local_48[0],local_48[1],local_48[2],uVar1);
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      iVar2 = 6;
    }
LAB_1805bef36:
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



