// FUN_1806057fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806057fc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1806057fc(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_3;
  lVar1 = FUN_180606ee8();
  (**(code **)(lVar1 + 0x10))(*param_1,&local_18);
  return 0;
}



