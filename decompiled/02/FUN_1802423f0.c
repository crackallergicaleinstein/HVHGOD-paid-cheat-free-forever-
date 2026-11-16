// FUN_1802423f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802423f0 */

void FUN_1802423f0(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18017ea70();
  *(undefined8 *)(piVar1 + 2) = *param_1;
  if (*piVar1 != 0) {
    *piVar1 = *piVar1 + -1;
  }
  return;
}



