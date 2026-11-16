// FUN_1800ef4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef4c0 */

undefined1 FUN_1800ef4c0(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 local_18 [16];
  
  local_18 = ZEXT816(0);
  FUN_1801409d0(local_18 + 8,0);
  local_18[0] = 5;
  local_18._8_8_ = (longlong)param_2;
  uVar1 = FUN_1800f3780(param_1,local_18);
  FUN_1801409d0(local_18 + 8,local_18[0]);
  return uVar1;
}



