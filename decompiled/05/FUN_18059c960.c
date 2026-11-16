// FUN_18059c960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c960 */

bool FUN_18059c960(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  
  if (((*param_1 == '\0') || (*(int *)(param_1 + 0x10) != param_2)) ||
     (*(uint *)(param_1 + 0x14) != param_3)) {
    return true;
  }
  if (param_3 == 0) {
    return false;
  }
  iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2);
  return iVar1 != 0;
}



