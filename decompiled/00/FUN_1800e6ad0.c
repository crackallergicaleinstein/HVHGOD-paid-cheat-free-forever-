// FUN_1800e6ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6ad0 */

undefined8 FUN_1800e6ad0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 local_18 [16];
  
  local_18 = ZEXT816(0);
  FUN_1801409d0(local_18 + 8,0);
  local_18[0] = 5;
  local_18._8_8_ = (longlong)param_3;
  FUN_180112ae0(param_1,param_2,local_18);
  FUN_1801409d0(local_18 + 8,local_18[0]);
  return param_2;
}



