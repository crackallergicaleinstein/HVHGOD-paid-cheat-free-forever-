// FUN_1800b01c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b01c0 */

int * FUN_1800b01c0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 < *param_2) {
    piVar1 = param_2;
  }
  if (*param_3 < *param_1) {
    piVar1 = param_3;
  }
  return piVar1;
}



