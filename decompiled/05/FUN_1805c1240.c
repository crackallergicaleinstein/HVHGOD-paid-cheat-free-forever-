// FUN_1805c1240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1240 */

void thunk_FUN_1805beb70(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(uint *)(param_1 + 5) != 0) {
      *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
    }
    iVar2 = FUN_1805bf270(param_1 + 7,uVar1);
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0xb) != 0) {
        *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
      }
      FUN_1805bf270(param_1 + 0xd,uVar1);
    }
  }
  return;
}



