// FUN_1805bedd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bedd0 */

void FUN_1805bedd0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(int *)(param_1 + 2) == 1) {
      if (*(uint *)(param_1 + 5) != 0) {
        *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
      }
      iVar2 = FUN_1805bf120(param_1 + 5,uVar1,local_res8);
      if (iVar2 == 0) {
        if (*(uint *)(param_1 + 0xb) != 0) {
          *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
        }
        iVar2 = FUN_1805bf120(param_1 + 0xb,uVar1,local_res8);
        if (iVar2 == 0) {
          return;
        }
      }
    }
    else {
      iVar2 = 6;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



