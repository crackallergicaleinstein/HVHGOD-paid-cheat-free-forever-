// FUN_180607740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180607740 */

void FUN_180607740(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  iVar1 = FUN_180607488();
  if (iVar1 == 1) {
    uVar2 = __AdjustPointer(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 != 0) {
      lVar3 = FUN_180606324();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1805fd090(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = __AdjustPointer(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 != 0) {
      lVar3 = FUN_180606324();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1805fd09c(param_2,lVar3,uVar2,1);
  }
  return;
}



