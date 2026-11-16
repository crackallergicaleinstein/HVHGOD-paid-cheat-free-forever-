// FUN_1805bf000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf000 */

void FUN_1805bf000(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    if (param_3 == iVar1 + *(int *)(param_1 + 3)) {
      uVar2 = *param_1;
      iVar3 = FUN_1805be3e0(param_1 + 3,param_4,iVar1,*(int *)(param_1 + 3),param_2,uVar2);
      if ((iVar3 != 0) ||
         (iVar3 = FUN_1805be3e0(param_1 + 9,param_4,0,iVar1,param_2,uVar2), iVar3 != 0)) {
        *(int *)(param_1 + 1) = iVar3;
      }
    }
  }
  return;
}



