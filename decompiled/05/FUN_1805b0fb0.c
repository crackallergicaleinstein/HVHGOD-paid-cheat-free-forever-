// FUN_1805b0fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b0fb0 */

void FUN_1805b0fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[6];
  if (*(int *)(param_1 + 3) == -0x21524111) {
    FUN_18057abd0(uVar1,*param_1);
    *param_1 = 0;
    FUN_18057abd0(uVar1,param_1[4]);
    param_1[4] = 0;
    FUN_18057abd0(uVar1,param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



