// FUN_180333b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333b50 */

undefined8
FUN_180333b50(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  
  local_18 = *param_3;
  local_28 = 0x1000000000000000;
  local_14 = *param_4;
  local_20 = 0x8000000000000004;
  local_48 = 2;
  local_40 = &local_28;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  FUN_1801d97f0(local_38,&local_38,&local_48);
  return param_1;
}



