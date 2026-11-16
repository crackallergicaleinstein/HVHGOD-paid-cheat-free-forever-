// FUN_1802ea210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea210 */

undefined8 FUN_1802ea210(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = param_4;
  local_28 = param_3;
  uStack_20 = param_3;
  if (param_2 == 0) {
    return param_3;
  }
  do {
    FUN_1802eba20(&local_28,param_1);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uStack_20;
}



