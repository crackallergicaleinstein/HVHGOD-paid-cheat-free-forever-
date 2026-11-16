// FUN_18036a780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036a780(void)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  byte in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  byte in_stack_00000060;
  byte in_stack_00000068;
  byte in_stack_00000070;
  float in_stack_00000078;
  float in_stack_00000080;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000098;
  float in_stack_000000a0;
  float in_stack_000000a8;
  float in_stack_000000b0;
  float in_stack_000000b8;
  float in_stack_000000c0;
  byte in_stack_000000c8;
  byte in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  byte in_stack_000000e8;
  byte in_stack_000000f0;
  undefined1 auStack_748 [32];
  undefined **local_728;
  char *local_720;
  uint local_718;
  undefined4 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  uint local_6f0;
  uint local_6e8;
  uint local_6e0;
  double local_6d8;
  double local_6d0;
  double local_6c8;
  double local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  uint local_688;
  uint local_680;
  undefined4 local_678;
  undefined4 local_670;
  uint local_668;
  uint local_660;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  FUN_18063ab10(local_658,0,0x600);
  local_660 = (uint)in_stack_000000f0;
  local_668 = (uint)in_stack_000000e8;
  local_670 = in_stack_000000e0;
  local_678 = in_stack_000000d8;
  local_680 = (uint)in_stack_000000d0;
  local_688 = (uint)in_stack_000000c8;
  local_690 = (double)in_stack_000000c0;
  local_698 = (double)in_stack_000000b8;
  local_6a0 = (double)in_stack_000000b0;
  local_6a8 = (double)in_stack_000000a8;
  local_6b0 = (double)in_stack_000000a0;
  local_6b8 = (double)in_stack_00000098;
  local_6c0 = (double)in_stack_00000090;
  local_6c8 = (double)in_stack_00000088;
  local_6d0 = (double)in_stack_00000080;
  local_6d8 = (double)in_stack_00000078;
  local_6e0 = (uint)in_stack_00000070;
  local_6e8 = (uint)in_stack_00000068;
  local_6f0 = (uint)in_stack_00000060;
  local_6f8 = in_stack_00000058;
  local_700 = in_stack_00000050;
  local_708 = in_stack_00000048;
  local_710 = in_stack_00000040;
  local_718 = (uint)in_stack_00000038;
  local_720 = (char *)in_stack_00000030;
  local_728 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                "command=%lld pawn=0x%llx ground_handle_valid=%d ground_handle=0x%x support_entity=0x%llx hit_entity=0x%llx hit_move_type=%d ground=%d jump_held=%d bhop_jump_released=%d origin=(%.3f,%.3f,%.3f) velocity=(%.3f,%.3f,%.3f) normal=(%.7f,%.7f,%.7f) fraction=%.5f all_solid=%d slope_eligible=%d predicted_ground=%d predicted_support=0x%x slide_walk=%d ramp_boost=%d extra_traces=0 server_ack=unverified"
               );
  local_728 = &PTR_180700558;
  if (local_658[0] != '\0') {
    local_728 = (undefined **)&DAT_1806bcfc0;
  }
  local_720 = local_658;
  FUN_1800f6900(0);
}



