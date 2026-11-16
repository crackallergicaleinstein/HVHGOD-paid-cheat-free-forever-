// FUN_180113ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113ae0 */

bool FUN_180113ae0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((ulonglong)param_1[1] < (ulonglong)param_2[1]) {
    return false;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,param_2[1]);
  return iVar1 == 0;
}



