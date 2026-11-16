// FUN_180435650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435650 */

void FUN_180435650(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [4];
  
  local_28[0] = param_2;
  local_20[0] = param_3;
  local_18[0] = param_4;
  FUN_1802aa650(param_1 + 0x18,local_28);
  FUN_1802aa650(param_1 + 0x18,local_20);
  FUN_1802aa650(param_1 + 0x18,local_18);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + -0x24);
  *piVar1 = *piVar1 + 3;
  local_28[0] = param_5;
  local_20[0] = param_4;
  local_18[0] = param_2;
  FUN_1802aa650(param_1 + 0x18,local_18);
  FUN_1802aa650(param_1 + 0x18,local_20);
  FUN_1802aa650(param_1 + 0x18,local_28);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + -0x24);
  *piVar1 = *piVar1 + 3;
  return;
}



