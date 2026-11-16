// FUN_1805d2a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d2a70 */

undefined4 FUN_1805d2a70(longlong param_1,char *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"spread");
  if (iVar1 == 0) {
    if (*param_3 - 2U < 0x1f) {
      *(int *)(param_1 + 0x78) = *param_3;
      return 0;
    }
    return 6;
  }
  iVar1 = strcmp(param_2,"flip_sign");
  if (iVar1 == 0) {
    *(bool *)(param_1 + 0x7c) = *param_3 != 0;
    return 0;
  }
  iVar1 = strcmp(param_2,"flip_y");
  if (iVar1 == 0) {
    *(bool *)(param_1 + 0x7d) = *param_3 != 0;
    return 0;
  }
  iVar1 = strcmp(param_2,"overlaps");
  if (iVar1 == 0) {
    *(char *)(param_1 + 0x7e) = (char)*param_3;
    return 0;
  }
  return 0xc;
}



