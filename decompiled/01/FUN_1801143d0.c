// FUN_1801143d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801143d0 */

void FUN_1801143d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_180114410(*param_1,param_1[1],param_3,param_2,lVar1);
  return;
}



