// FUN_180414dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180414dc0(undefined4 param_1)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  byte in_stack_00000048;
  byte in_stack_00000050;
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  undefined4 local_638;
  undefined4 local_630;
  uint local_628;
  uint local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  FUN_18063ab10(local_618,0,0x600);
  local_620 = (uint)in_stack_00000050;
  local_628 = (uint)in_stack_00000048;
  local_630 = in_stack_00000040;
  local_638 = in_stack_00000038;
  local_640 = (char *)CONCAT44(local_640._4_4_,in_stack_00000030);
  local_648 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "command=%lld rollback_before_notifications=1 horizon=%d depth_before=%d depth_after=%d balanced=%d restored=%d"
               );
  local_648 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_648 = (undefined **)&DAT_1806bcfc0;
  }
  local_640 = local_618;
  FUN_1800f6900(param_1);
}



