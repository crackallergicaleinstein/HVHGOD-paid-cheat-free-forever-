// FUN_180364d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364d30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180364d30(void)

{
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000038;
  float in_stack_00000040;
  byte in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000098;
  float in_stack_000000a0;
  float in_stack_000000a8;
  float in_stack_000000b0;
  byte in_stack_000000b8;
  byte in_stack_000000c0;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  char *local_6e0;
  double local_6d8;
  double local_6d0;
  uint local_6c8;
  undefined4 local_6c0;
  undefined4 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a0;
  undefined4 local_698;
  undefined4 local_690;
  double local_688;
  double local_680;
  double local_678;
  double local_670;
  double local_668;
  double local_660;
  uint local_658;
  uint local_650;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  FUN_18063ab10(local_648,0,0x600);
  local_650 = (uint)in_stack_000000c0;
  local_658 = (uint)in_stack_000000b8;
  local_660 = (double)in_stack_000000b0;
  local_668 = (double)in_stack_000000a8;
  local_670 = (double)in_stack_000000a0;
  local_678 = (double)in_stack_00000098;
  local_680 = (double)in_stack_00000090;
  local_688 = (double)in_stack_00000088;
  local_690 = in_stack_00000080;
  local_698 = in_stack_00000078;
  local_6a0 = in_stack_00000070;
  local_6a8 = in_stack_00000068;
  local_6b0 = in_stack_00000060;
  local_6b8 = in_stack_00000058;
  local_6c0 = in_stack_00000050;
  local_6c8 = (uint)in_stack_00000048;
  local_6d0 = (double)in_stack_00000040;
  local_6d8 = (double)in_stack_00000038;
  local_6e0 = (char *)(double)in_stack_00000030;
  local_6e8 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "command=%lld contact_ticks=%.5f contact_fall=%.3f stand=%.5f accepted=%d end_ground=%d jump_tick=(%d,%d) landed_tick=(%d,%d) proof_steps=%d followup_landed_tick=%d speed=(%.3f,%.3f,%.3f) stamina=(%.3f,%.3f) fall_velocity=%.3f resume_duck=%d coarse_trial=%d server_ack=0"
               );
  local_6e8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6e8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6e0 = local_648;
  FUN_1800f6900(0);
}



