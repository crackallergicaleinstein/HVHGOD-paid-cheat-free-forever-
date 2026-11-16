// FUN_1800f5500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5500 */

void FUN_1800f5500(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_180159df0(param_1,*puVar1,param_3,param_2,lVar2);
  return;
}



