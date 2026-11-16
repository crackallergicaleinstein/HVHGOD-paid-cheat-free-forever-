// FUN_180621804 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621804 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621804(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_180d06010 == (code *)0xffffffffffffffff) {
LAB_180621868:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_1806213f4(local_28,local_20,local_18,&local_24);
  }
  else {
    pcVar1 = DAT_180d06010;
    if (DAT_180d06010 == (code *)0x0) {
      pcVar1 = (code *)FUN_180621488(2,"EnumSystemLocalesEx",&DAT_1806b1068,"EnumSystemLocalesEx");
      if (pcVar1 == (code *)0x0) goto LAB_180621868;
    }
    (*pcVar1)(local_res8,param_2,param_3,param_4);
  }
  return;
}



