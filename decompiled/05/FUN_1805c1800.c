// FUN_1805c1800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1800 */

ulonglong FUN_1805c1800(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_2 == -1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(param_1 + 0x2c) != *param_2)) {
    uVar2 = FUN_1805cc400(param_1,param_2,1);
    return uVar2;
  }
  FUN_1805cc590();
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  *param_2 = *(int *)(param_1 + 0x2c);
  return (ulonglong)uVar1;
}



