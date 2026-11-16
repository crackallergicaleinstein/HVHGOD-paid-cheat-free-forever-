// FUN_180414340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180414340(void)

{
  undefined8 in_stack_00000028;
  byte in_stack_00000030;
  byte in_stack_00000038;
  byte in_stack_00000040;
  byte in_stack_00000048;
  byte in_stack_00000050;
  byte in_stack_00000058;
  byte in_stack_00000060;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  uint local_648;
  uint local_640;
  uint local_638;
  uint local_630;
  uint local_628;
  uint local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  FUN_18063ab10(local_618,0,0x600);
  local_620 = (uint)in_stack_00000060;
  local_628 = (uint)in_stack_00000058;
  local_630 = (uint)in_stack_00000050;
  local_638 = (uint)in_stack_00000048;
  local_640 = (uint)in_stack_00000040;
  local_648 = (uint)in_stack_00000038;
  local_650 = (char *)CONCAT44(local_650._4_4_,(uint)in_stack_00000030);
  local_658 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "command=%lld sampled=%d encoded_changed=%d encoded_restored=%d contexts_changed=%d contexts_restored=%d clocks_changed=%d clocks_restored=%d phase=after_rollback history_rollback=unverified server_ack=unverified"
               );
  local_658 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_658 = (undefined **)&DAT_1806bcfc0;
  }
  local_650 = local_618;
  FUN_1800f6900(0);
}



