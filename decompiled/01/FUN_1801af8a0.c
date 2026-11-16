// FUN_1801af8a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801af8a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801af8a0(void)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 auStack_688 [32];
  undefined **local_668;
  char *local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  FUN_18063ab10(local_618,0,0x600);
  local_628 = in_stack_00000068;
  local_630 = in_stack_00000060;
  local_638 = in_stack_00000058;
  local_640 = in_stack_00000050;
  local_648 = in_stack_00000048;
  local_650 = in_stack_00000040;
  local_658 = in_stack_00000038;
  local_660 = (char *)in_stack_00000030;
  local_668 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "calls=%llu avg_us=%.2f max_us=%.2f total_ms=%.2f window_ms=%.2f busy_ms_per_second=%.2f over_1ms=%llu over_5ms=%llu over_16ms=%llu cpu_only=1 includes_waits=1 nested_scopes=overlap gpu_timing=0"
               );
  local_668 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_668 = (undefined **)&DAT_1806bcfc0;
  }
  local_660 = local_618;
  FUN_1800f6900(0);
}



