// FUN_1804f95a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f95a0 */

void FUN_1804f95a0(longlong param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int local_res8 [2];
  undefined1 local_38 [12];
  uint local_2c;
  
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_1804f89b0(local_38,param_1,0);
    param_4 = (ulonglong)local_2c;
  }
  if (param_2[1] == param_2[2]) {
    param_2[1] = *param_2;
  }
  uVar1 = FUN_1804f92b0(param_1,param_3,param_4,local_res8);
  param_2[2] = uVar1;
  *param_2 = uVar1;
  *(bool *)(param_1 + 0x77) = local_res8[0] != 0;
  return;
}



